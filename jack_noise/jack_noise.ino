#include <FastLED.h>

// LED
#define LED_PIN     3
#define BRIGHTNESS  65
#define LED_TYPE    WS2812B
#define COLOR_ORDER GRB
#define NUM_LEDS 299
#define NUM_SKIP_LEDS 4
#define BUTTON_PIN 7

const PROGMEM uint8_t ledsArray[NUM_LEDS][2] = {{168,240}, {162,240}, {157,240}, {151,240}, {145,240}, {139,240}, {134,240}, {127,239}, {121,239}, {115,238}, {109,238}, {102,237}, {96,236}, {90,236}, {83,235}, {77,235}, {69,233}, {64,232}, {58,231}, {51,230}, {45,229}, {38,238}, {37,232}, {35,227}, {34,221}, {33,215}, {32,207}, {31,201}, {30,195}, {29,189}, {27,182}, {25,176}, {24,169}, {22,164}, {20,158}, {13,148}, {18,148}, {24,148}, {30,148}, {35,148}, {41,148}, {54,149}, {61,149}, {67,149}, {73,149}, {81,150}, {86,150}, {93,149}, {99,149}, {107,149}, {113,149}, {119,149}, {133,151}, {133,151}, {139,151}, {145,152}, {151,152}, {157,152}, {163,153}, {169,153}, {168,164}, {165,169}, {161,173}, {158,178}, {154,182}, {151,188}, {147,193}, {145,199}, {137,209}, {137,209}, {134,215}, {131,221}, {128,226}, {125,231}, {90,228}, {92,223}, {95,215}, {98,211}, {101,203}, {103,197}, {106,191}, {109,186}, {112,178}, {115,173}, {117,168}, {120,163}, {123,155}, {128,145}, {128,145}, {131,138}, {133,133}, {135,127}, {137,121}, {139,116}, {141,110}, {142,105}, {145,99}, {148,94}, {151,87}, {154,82}, {157,74}, {160,69}, {164,64}, {171,58}, {172,64}, {172,71}, {172,77}, {171,84}, {171,90}, {170,97}, {171,103}, {172,109}, {173,115}, {173,122}, {174,128}, {175,134}, {176,141}, {177,147}, {177,153}, {176,165}, {176,165}, {176,171}, {176,175}, {176,181}, {177,187}, {177,193}, {177,198}, {177,204}, {177,212}, {178,218}, {178,223}, {171,212}, {167,216}, {163,220}, {158,225}, {154,230}, {151,234}, {147,228}, {145,223}, {144,217}, {143,211}, {141,205}, {140,199}, {138,192}, {136,186}, {135,181}, {132,175}, {131,169}, {130,163}, {128,158}, {126,151}, {125,145}, {123,137}, {120,132}, {118,127}, {116,121}, {114,115}, {112,109}, {111,104}, {108,96}, {107,90}, {105,83}, {103,78}, {101,71}, {100,65}, {97,59}, {60,59}, {59,64}, {59,71}, {59,77}, {57,87}, {57,93}, {57,98}, {55,104}, {54,110}, {53,115}, {52,121}, {51,127}, {49,135}, {48,141}, {47,148}, {47,154}, {45,161}, {45,167}, {45,174}, {44,179}, {43,186}, {43,192}, {42,199}, {41,205}, {40,211}, {40,217}, {44,220}, {49,217}, {53,211}, {58,208}, {63,202}, {68,199}, {73,194}, {77,190}, {83,185}, {88,182}, {92,178}, {98,173}, {103,169}, {108,164}, {112,160}, {116,157}, {170,143}, {168,137}, {164,131}, {161,126}, {157,120}, {154,115}, {150,109}, {147,104}, {142,99}, {141,93}, {138,86}, {136,80}, {134,74}, {129,69}, {126,64}, {124,60}, {122,52}, {120,47}, {98,45}, {95,50}, {90,57}, {86,61}, {82,68}, {78,73}, {75,77}, {70,84}, {67,89}, {64,93}, {61,98}, {51,106}, {51,106}, {48,111}, {43,117}, {39,121}, {33,127}, {29,131}, {24,136}, {21,140}, {46,101}, {44,95}, {43,90}, {40,84}, {38,79}, {36,71}, {34,65}, {31,58}, {47,53}, {52,52}, {59,50}, {65,49}, {71,47}, {77,46}, {84,44}, {90,43}, {97,41}, {102,39}, {118,37}, {123,40}, {129,42}, {135,44}, {142,47}, {147,49}, {153,51}, {158,54}, {153,64}, {149,68}, {143,73}, {138,77}, {132,80}, {128,84}, {124,88}, {119,92}, {113,96}, {107,101}, {102,104}, {97,107}, {91,111}, {87,115}, {83,119}, {78,122}, {70,126}, {66,130}, {59,135}, {57,156}, {61,161}, {66,167}, {69,171}, {73,176}, {77,180}, {80,186}, {84,190}};
uint16_t skipLeds[NUM_SKIP_LEDS] = {52, 68, 87, 237};

// The leds
CRGB leds[NUM_LEDS];

// The 8 bit version of our coordinates
static uint16_t x;
static uint16_t y;
static uint16_t z;

double speedFactor = 0.75;
double speed = 6 * speedFactor; // speed is set dynamically once we've started up
double scaleFactor = 0.75; 
double scale = 6 * scaleFactor; // scale is set dynamically once we've started up
uint8_t       colorLoop = 1;

CRGBPalette16 targetPalette( LavaColors_p );
CRGBPalette16 currentPalette( LavaColors_p );

uint8_t maxChanges = 48; // for blending in palettes smoothly
uint8_t countBlend = 0;

uint8_t buttonState = 0;  
uint8_t oldButtonState = LOW;
uint8_t buttonCount = 0;
uint8_t buttonCountLimit = 10;

void setup() {
//  Serial.begin(9600);
  pinMode(BUTTON_PIN, INPUT); 
  
  LEDS.addLeds<LED_TYPE,LED_PIN,COLOR_ORDER>(leds,NUM_LEDS);
  LEDS.setBrightness(BRIGHTNESS);

  // Initialize our coordinates to some random values
  x = random8();
  y = random8();
  z = random8();

}

void mapCoordToColor() {
  // If we're runing at a low "speed", some 8-bit artifacts become visible
  // from frame-to-frame.  In order to reduce this, we can do some fast data-smoothing.
  // The amount of data smoothing we're doing depends on "speed".

  static uint8_t ihue=random8()/4;
    
  uint8_t dataSmoothing = 0;
  if( speed < 50) {
    dataSmoothing = 200 - (speed * 4);
  }

  for (uint16_t i = 0; i < NUM_LEDS; i++) {
    // skip the leds that are covered by other leds
    if (isvalueinarray(i, skipLeds, NUM_SKIP_LEDS)) {
      continue;
    }

    uint16_t id = i;    
    uint8_t xCood = pgm_read_byte(&(ledsArray[i][0]));
    uint8_t yCood = pgm_read_byte(&(ledsArray[i][1]));

    uint16_t xoffset = scale * xCood;    
    uint16_t yoffset = scale * yCood;
      
    uint8_t index = inoise8(x + xoffset, y + yoffset, z);
    uint8_t bri = inoise8(x + yoffset, y + xoffset, z); // another random point for brightness

    // make light dimming more dynamic
//    double factor = pow(mapfloat(bri, 0, 256, 0, 1), 1.5);
//    bri = mapfloat(factor, 0, 1, 0, 256);

    if( dataSmoothing ) {
      uint8_t olddata = inoise8(x + xoffset - speed / 8,y + yoffset + speed / 16,z-speed);
      uint8_t newdata = scale8( olddata, dataSmoothing) + scale8( index, 256 - dataSmoothing);
      index = newdata;
    }

    // if this palette is a 'loop', add a slowly-changing base value
      if( colorLoop) { 
        index += ihue;
      }

      // brighten up, as the color palette itself often contains the 
      // light/dark dynamic range desired
//      if( bri > 170 ) {
//        bri = 255;
//      } else {        
        bri = dim8_raw( bri );
//      }

      CRGB color = ColorFromPalette( currentPalette, index, bri);
      
      if(isvalueinarray(id, skipLeds, NUM_SKIP_LEDS)) {
        id++;
      }
      leds[id] = color;
  }
  
  z += speed;
  
  // apply slow drift to X and Y, just for visual variation.
  x += speed / 8;
  y -= speed / 16;

  ihue+=1;
}

void loop() {
  // Periodically choose a new palette, speed, and scale
  ChangePaletteAndSettingsPeriodically();

  handleButton();

  // run the blend function only every Nth frames
  if (countBlend == 5) {
    nblendPaletteTowardPalette(currentPalette, targetPalette, maxChanges);
    countBlend = 0;
  }
  countBlend++;

  mapCoordToColor();

  LEDS.show();
//   delay(20);
}

void handleButton() {
  // Get the current state of the button
  int newButtonState = digitalRead(BUTTON_PIN);

  // Has the button gone high since we last read it?
  if (newButtonState == HIGH && oldButtonState == LOW) {

    if (x == 0) {
      // Toggle on
      digitalWrite(ledPin, HIGH);
      x = 1;

    } else {
      // Toggle off
      digitalWrite(ledPin, LOW);
      x = 0;
    }
  }

  // Store the button's state so we can tell if it's changed next time round
  oldButtonState = newButtonState;
  
  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH && x==1) { 
     digitalWrite(motorPin , 1);
     x=0;
    } 
  if (buttonState == HIGH && x==0){
    digitalWrite(motorPin, 0);
    x=1;
  } 
}

#define HOLD_PALETTES_X_TIMES_AS_LONG 8

void ChangePaletteAndSettingsPeriodically()
{
  uint8_t secondHand = ((millis() / 1000) / HOLD_PALETTES_X_TIMES_AS_LONG) % 60;
  static uint8_t lastSecond = 99;
  
  if( lastSecond != secondHand) {
    lastSecond = secondHand;
    if( secondHand == 0)  { targetPalette = LavaColors_p;            speed =  8 * speedFactor; scale = 8 * scaleFactor; colorLoop = 0; }
    if( secondHand == 5)  { SetupBlackAndWhiteStripedPalette();       speed = 50 * speedFactor; scale = 6 * scaleFactor; colorLoop = 1; }
    if( secondHand ==  15)  { SetupPurpleAndGreenPalette();             speed = 1 * speedFactor; scale = 4 * scaleFactor; colorLoop = 1; }
//    if( secondHand == 15)  { targetPalette = ForestColors_p;          speed =  3; scale = 8 * scaleFactor; colorLoop = 0; }
//    if( secondHand == 20)  { targetPalette = CloudColors_p;           speed =  8 * speedFactor; scale = 8 * scaleFactor; colorLoop = 0; }
    if( secondHand == 25)  { targetPalette = RainbowColors_p;         speed = 16 * speedFactor; scale = 4 * scaleFactor; colorLoop = 1; }
    if( secondHand == 30)  { targetPalette = OceanColors_p;           speed = 20 * speedFactor; scale = 25 * scaleFactor; colorLoop = 0; }
    if( secondHand == 35)  { targetPalette = PartyColors_p;           speed = 16 * speedFactor; scale = 4 * scaleFactor; colorLoop = 1; }
    if( secondHand == 40)  { SetupRandomPalette();                     speed = 10 * speedFactor; scale = 8 * scaleFactor; colorLoop = 1; }
    if( secondHand == 45)  { SetupRandomPalette();                     speed = 8 * speedFactor; scale = 16 * scaleFactor; colorLoop = 1; }
    if( secondHand == 50)  { SetupRandomPalette();                     speed = 25 * speedFactor; scale = 6 * scaleFactor; colorLoop = 1; }
    if( secondHand == 55)  { targetPalette = RainbowStripeColors_p;   speed = 12 * speedFactor; scale = 4 * scaleFactor; colorLoop = 1; }
  }
}

// This function generates a random palette that's a gradient
// between four different colors.  The first is a dim hue, the second is 
// a bright hue, the third is a bright pastel, and the last is 
// another bright hue.  This gives some visual bright/dark variation
// which is more interesting than just a gradient of different hues.
void SetupRandomPalette()
{
  targetPalette = CRGBPalette16( 
                      CHSV( random8(), 255, 32), 
                      CHSV( random8(), 255, 255), 
                      CHSV( random8(), 128, 255), 
                      CHSV( random8(), 255, 255)); 
}

// This function sets up a palette of black and white stripes,
// using code.  Since the palette is effectively an array of
// sixteen CRGB colors, the various fill_* functions can be used
// to set them up.
void SetupBlackAndWhiteStripedPalette()
{
  // 'black out' all 16 palette entries...
  fill_solid( targetPalette, 16, CRGB::Black);
  // and set every fourth one to white.
  targetPalette[7] = CRGB::White;
//  targetPalette[9] = CRGB::White;
//  targetPalette[14] = CRGB::White;
}

// This function sets up a palette of purple and green stripes.
void SetupPurpleAndGreenPalette()
{
  CRGB purple = CHSV( HUE_PURPLE, 255, 255);
  CRGB green  = CHSV( HUE_GREEN, 255, 255);
  CRGB black  = CRGB::Black;
  
  targetPalette = CRGBPalette16( 
    green,  green,  black,  black,
    purple, purple, black,  black,
    green,  green,  black,  black,
    purple, purple, black,  black );
}

bool isvalueinarray(uint16_t val, uint16_t *arr, int size){
    int i;
    for (i=0; i < size; i++) {
        if (arr[i] == val)
            return true;
    }
    return false;
}

float mapfloat(float x, float in_min, float in_max, float out_min, float out_max)
{
 return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}
