class LeyoutData:
  def __init__(self):
    self.leds = """
      ID:0,587.8,839.0016
      ID:1,567.8006,839.15784
      ID:2,547.8012,839.314
      ID:3,527.8018,839.4703
      ID:4,507.80243,839.6265
      ID:5,487.80304,839.7828
      ID:6,467.80365,839.939
      ID:7,442.8008,836.9822
      ID:8,422.88052,835.19824
      ID:9,402.96024,833.41437
      ID:10,383.03995,831.63043
      ID:11,355.80084,828.98157
      ID:12,335.88605,827.1376
      ID:13,315.97122,825.29364
      ID:14,289.80145,823.97595
      ID:15,269.94678,821.56934
      ID:16,242.80261,815.9678
      ID:17,223.06395,812.7451
      ID:18,203.3253,809.5225
      ID:19,177.80287,803.9662
      ID:20,158.09042,800.5869
      ID:21,132.95332,832.80554
      ID:22,128.28586,813.3578
      ID:23,123.61841,793.91003
      ID:24,119.95726,771.8046
      ID:25,115.68332,752.2666
      ID:26,110.97069,722.8022
      ID:27,108.03972,703.01807
      ID:28,104.955025,680.8051
      ID:29,100.45784,661.3173
      ID:30,92.95661,636.80475
      ID:31,88.618004,617.281
      ID:32,82.92698,591.8138
      ID:33,75.62523,573.19434
      ID:34,68.32348,554.5749
      ID:35,44.199944,517.00476
      ID:36,64.194275,517.48083
      ID:37,84.188614,517.95685
      ID:38,104.18294,518.4329
      ID:39,124.177284,518.909
      ID:40,144.17162,519.385
      ID:41,188.91055,519.8211
      ID:42,214.19981,520.99133
      ID:43,234.18094,520.12256
      ID:44,256.2,520.0
      ID:45,282.1996,524.9871
      ID:46,302.15808,523.69946
      ID:47,327.19986,521.0077
      ID:48,347.1851,521.77637
      ID:49,374.19937,521.9841
      ID:50,394.13568,520.38916
      ID:51,417.0,523.0
      ID:53,466.1998,529.00867
      ID:54,486.0,529.0
      ID:55,506.16205,530.74615
      ID:56,530.1995,532.0139
      ID:57,549.0,531.0
      ID:58,570.10254,534.79785
      ID:59,593.2,536.0
      ID:60,588.8767,574.1575
      ID:61,576.5506,589.9076
      ID:62,564.2244,605.6577
      ID:63,551.89825,621.4078
      ID:64,539.5721,637.1579
      ID:65,526.88904,659.1664
      ID:66,515.79504,675.80743
      ID:67,506.90475,695.17584
      ID:69,480.0,730.0
      ID:70,469.64133,752.7039
      ID:71,459.8881,775.1658
      ID:72,448.69864,791.74274
      ID:73,437.5092,808.3197
      ID:74,315.08456,797.8188
      ID:75,323.5423,779.69507
      ID:76,332.10657,753.83075
      ID:77,342.76282,736.90607
      ID:78,354.07288,709.8138
      ID:79,361.36087,691.1889
      ID:80,371.09525,668.82416
      ID:81,380.6209,651.2383
      ID:82,393.09772,623.8255
      ID:83,402.86978,606.37537
      ID:84,409.0925,586.8227
      ID:85,418.34384,569.091
      ID:86,429.09882,543.8261
      ID:88,448.8592,509.04785
      ID:89,460.07022,482.81274
      ID:90,467.09268,464.08615
      ID:91,473.0,443.0
      ID:92,480.9728,424.70322
      ID:93,486.88647,405.5975
      ID:94,492.80017,386.4918
      ID:95,498.71384,367.38605
      ID:96,509.08124,345.81723
      ID:97,517.204,327.54102
      ID:98,529.0842,305.8186
      ID:99,537.5065,287.6784
      ID:100,551.1038,259.82904
      ID:101,561.48334,242.73329
      ID:102,573.0485,222.80597
      ID:103,600.008,203.19984
      ID:104,600.8074,223.18387
      ID:105,602.9736,249.19824
      ID:106,600.3303,269.0228
      ID:107,598.9871,295.1996
      ID:108,597.69946,315.15808
      ID:109,596.0142,340.1995
      ID:110,597.4392,360.14868
      ID:111,601.03424,383.19705
      ID:112,604.4611,402.90128
      ID:113,605.03217,428.1974
      ID:114,608.24567,447.93756
      ID:115,611.45917,467.6777
      ID:116,616.0304,493.19766
      ID:117,619.07153,512.9651
      ID:118,618.0,534.0
      ID:120,616.9909,577.19977
      ID:121,616.08276,597.17914
      ID:122,616.0091,614.19977
      ID:123,616.91724,634.17914
      ID:124,617.8254,654.1585
      ID:125,618.7335,674.1379
      ID:126,619.6417,694.1173
      ID:127,620.54987,714.0967
      ID:128,621.01196,742.19965
      ID:129,622.20984,762.16376
      ID:130,623.40765,782.1278
      ID:131,597.86084,742.1437
      ID:132,583.94495,756.5084
      ID:133,570.02905,770.8732
      ID:134,551.87805,788.1585
      ID:135,539.68384,804.011
      ID:136,527.4896,819.86346
      ID:137,512.9619,798.80365
      ID:138,509.15234,779.1698
      ID:139,505.3428,759.536
      ID:140,501.53326,739.90216
      ID:141,493.95306,716.8056
      ID:142,489.26025,697.36395
      ID:143,481.9467,671.80725
      ID:144,476.61496,652.531
      ID:145,471.28323,633.25476
      ID:146,463.0,612.0
      ID:147,457.0,590.0
      ID:148,454.17773,570.5777
      ID:149,448.29602,551.4621
      ID:150,441.94586,527.8075
      ID:151,436.53094,508.55444
      ID:152,428.92804,480.8134
      ID:153,421.0,461.0
      ID:154,414.53314,443.49335
      ID:155,407.3357,424.8333
      ID:156,398.94458,400.80783
      ID:157,393.40137,381.59137
      ID:158,387.85815,362.37488
      ID:159,378.9412,335.80884
      ID:160,373.05948,316.69327
      ID:161,366.9412,291.80884
      ID:162,361.05948,272.69327
      ID:163,354.9515,247.80597
      ID:164,350.10077,228.40312
      ID:165,341.06323,204.81026
      ID:166,209.98073,205.19907
      ID:167,208.05424,225.10606
      ID:168,207.98134,249.19913
      ID:169,206.11452,269.11182
      ID:170,200.96861,305.1975
      ID:171,197.83041,324.94977
      ID:172,198.0,344.0
      ID:173,191.55399,364.45428
      ID:174,188.41579,384.20654
      ID:175,186.0,403.0
      ID:176,183.0,424.0
      ID:177,177.27737,445.854
      ID:178,171.97267,471.19812
      ID:179,168.0,495.0
      ID:180,165.97942,518.1989
      ID:181,163.92143,538.0928
      ID:182,159.0,563.2
      ID:183,159.0,583.2
      ID:184,156.9684,608.1975
      ID:185,153.8086,627.9463
      ID:186,150.9931,652.1999
      ID:187,150.30386,672.188
      ID:188,146.97708,697.19867
      ID:189,144.68459,717.06683
      ID:190,140.97617,739.19855
      ID:191,138.59326,759.0561
      ID:192,154.15923,769.87897
      ID:193,170.08247,757.77734
      ID:194,186.1673,739.8904
      ID:195,202.89651,728.9299
      ID:196,222.16,706.88
      ID:197,238.16,694.88
      ID:198,255.15186,678.8698
      ID:199,270.33698,665.854
      ID:200,292.1467,648.8641
      ID:201,306.8153,635.26874
      ID:202,321.4839,621.67346
      ID:203,343.1575,604.8767
      ID:204,358.9076,592.5506
      ID:205,377.1478,574.86523
      ID:206,391.9269,561.3902
      ID:207,406.70602,547.9151
      ID:208,595.92456,498.8148
      ID:209,588.3786,480.29294
      ID:210,574.88,456.84
      ID:211,562.88,440.84
      ID:212,549.88904,420.8336
      ID:213,538.79504,404.1926
      ID:214,524.8858,381.83582
      ID:215,515.0,365.0
      ID:216,496.95367,345.80545
      ID:217,492.32126,326.3493
      ID:218,481.9889,300.8003
      ID:219,476.19727,280.96713
      ID:220,468.89572,259.82935
      ID:221,453.0,240.0
      ID:222,440.93164,224.81204
      ID:223,434.0,209.0
      ID:224,426.91876,182.81723
      ID:225,418.796,164.541
      ID:226,342.879,158.15923
      ID:227,330.7773,174.08247
      ID:228,315.86664,200.14905
      ID:229,302.53073,215.05388
      ID:230,285.88336,238.16246
      ID:231,274.21924,254.40894
      ID:232,262.55508,270.65543
      ID:233,245.90077,293.17365
      ID:234,235.978,310.5385
      ID:235,224.88905,327.1664
      ID:236,213.79506,343.8074
      ID:238,176.894,371.1696
      ID:239,166.29402,388.12958
      ID:240,148.86246,410.1452
      ID:241,135.10756,424.66425
      ID:242,113.87586,443.1568
      ID:243,101.4618,458.83774
      ID:244,84.88236,475.16174
      ID:245,73.11893,491.3365
      ID:246,159.95044,352.80624
      ID:247,154.99377,333.43018
      ID:248,150.03711,314.05414
      ID:249,139.9348,294.8109
      ID:250,133.415,275.90347
      ID:251,124.9348,246.81093
      ID:252,118.414986,227.90347
      ID:253,109.07022,202.81273
      ID:254,163.19441,184.95308
      ID:255,182.63606,180.26025
      ID:256,206.19728,173.96712
      ID:257,225.92516,170.67914
      ID:258,249.19307,165.94781
      ID:259,268.50034,160.72964
      ID:260,294.1955,153.95773
      ID:261,313.74377,149.73108
      ID:262,338.19632,141.96182
      ID:263,357.82864,138.14444
      ID:264,414.17053,128.1045
      ID:265,431.22253,138.55576
      ID:266,452.18817,148.06775
      ID:267,471.00592,154.84213
      ID:268,497.1814,164.08423
      ID:269,515.3216,172.50645
      ID:270,534.18304,180.08055
      ID:271,552.4894,188.13531
      ID:272,536.8495,224.1317
      ID:273,521.798,237.30179
      ID:274,498.84113,256.1215
      ID:275,482.95398,268.27048
      ID:276,460.86984,279.15186
      ID:277,447.85547,293.13824
      ID:278,433.40265,306.9627
      ID:279,417.88907,323.1664
      ID:280,394.84174,337.12228
      ID:281,374.0,354.0
      ID:282,355.8377,364.11685
      ID:283,339.607,375.80295
      ID:284,319.85135,390.1338
      ID:285,304.98547,403.5131
      ID:286,288.82635,418.0992
      ID:287,271.4615,428.022
      ID:288,244.84561,442.12714
      ID:289,229.40701,454.84128
      ID:290,207.17888,470.91055
      ID:291,201.12326,546.1575
      ID:292,213.44943,561.9076
      ID:293,230.12102,584.15924
      ID:294,242.22269,600.08246
      ID:295,255.12863,616.15314
      ID:296,267.9925,631.4672
      ID:297,280.14142,652.1414
      ID:298,294.28357,666.28357
      """.replace(/[\n\r\t\s]/, '');

    self.letters = """
      Letter:!,[40,41,166,167,168,169,170,171,172,173,174,175,176,179,180,181]
      Letter:#,[74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,150,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191]
      Letter:$,[4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,23,24,25,26,27,28,29,30,31,32,33,34,35,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,131,132,133,134,135,136,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255,256,257,258,259,260,261,262,263,264,265,266,267,268,269,270,271]
      Letter:%,[9,10,11,12,13,14,15,16,17,18,19,20,60,61,62,63,64,65,66,67,69,70,71,72,73,118,141,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,263]
      Letter:',[45,47,49,55,57,59,80,82,84,90,92,94,143,145,147,153,155,157,201,203,205]
      Letter:*,[35,36,37,38,39,40,41,42,43,44,45,46,47,56,57,58,59,74,75,76,77,78,79,80,81,82,92,93,94,95,96,97,98,99,100,101,102,118,137,138,139,140,141,142,143,144,145,155,156,157,158,159,160,161,162,163,164,165,180,192,193,194,195,196,197,198,199,200,201,202,203,204]
      Letter:+,[8,9,10,11,12,13,14,15,16,17,18,19,20,23,24,25,26,27,28,29,30,31,32,33,34,36,41,60,61,62,63,64,65,66,67,69,70,71,72,73,118,141,173,179,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,226,227,228,229,230,231,232,233,234,235,236,238,239,240,241,242,243,244,245,263,276,277,278,279,280,281,282,283,284,285,286,287,288,289,290,291,292,293,294,295,296,297]
      Letter:,,[49,51,53,55,84,86,88,90,147,149,151,153,206]
      Letter:-,[60,61,62,63,64,65,66,67,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,131,132,133,134,135,136,141,150,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191]
      Letter:.,[46,47,49,50,54,55,57,58,81,82,84,85,89,90,92,93,144,145,147,148,150,152,153,155,156,202,203,205,206]
      Letter:/,[21,22,23,24,25,26,27,28,29,30,31,32,33,34,60,61,62,91,92,93,94,95,96,97,140,141,142,143,144,145,146,147,173,208,209,210,226,227,228,229,230,231,232,233,234,235,236,238,239,240,241,242,243,244,245,272,273,274,275,276,277,278,279,280,281,282,283,284,285,286,287,288,289,290,291,292,293,294,295,296,297,298]
      Letter:0,[103,224,225,226,227,254,255,256,257,258,259,260,261,262,263,264,265,266,267,268,269,270,271]
      Letter:1,[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22]
      Letter:2,[24,25,71,72,73,74,75,76,129,130,133,134,135,136,137,138,190,191,192,193,194]
      Letter:3,[26,27,28,66,67,69,70,77,78,79,126,127,128,131,132,139,140,141,142,187,188,189,194,195,196,197,198]
      Letter:4,[29,30,31,32,33,61,62,63,64,65,66,80,81,82,83,84,121,122,123,124,125,143,144,145,146,147,183,184,185,186,199,200,201,202,203,204,293,294,295,296,297,298]
      Letter:5,[34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,54,55,56,57,58,59,60,85,86,118,119,120,148,149,150,180,181,182,205,206,207,291,292]
      Letter:6,[87,89,90,115,116,117,151,152,153,177,178,179,208,209,242,243,244,245,288,289,290]
      Letter:7,[91,92,93,94,111,112,113,114,154,155,156,157,173,174,175,176,210,211,212,213,214,237,238,239,240,241,283,284,285,286,287,288]
      Letter:8,[95,96,97,108,109,110,158,159,160,171,172,173,215,216,217,234,235,236,237,238,246,247,248,279,280,281,282]
      Letter:9,[98,99,100,101,102,104,105,106,107,161,162,163,164,165,166,167,168,169,170,218,219,220,221,222,223,228,229,230,231,232,233,234,249,250,251,252,253,272,273,274,275,276,277,278]
      Letter:;,[48,50,54,56,83,85,89,91,146,148,152,154,204,206]
      Letter:<,[48,50,54,56,83,85,89,91,146,148,152,154,205]
      Letter:>,[45,47,49,55,57,59,80,82,84,90,92,94,143,145,147,153,155,157,201,203,205]
      Letter:?,[13,14,52,53,54,55,56,57,58,59,74,77,78,79,80,81,82,83,84,85,86,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,150,264,265,266,267,268,269,270,271]
      Letter:@,[8,9,10,11,12,13,18,19,27,28,29,30,31,37,40,44,47,49,52,56,58,62,63,64,70,72,77,81,84,89,92,95,98,101,102,105,106,110,111,117,121,122,123,124,127,128,131,132,137,138,139,143,147,150,152,155,158,162,168,169,172,173,174,175,176,181,182,183,184,185,189,190,192,193,195,200,203,206,210,211,212,213,214,219,224,225,227,228,235,236,244,248,249,272,275,276,283,284,285,286,287,296,297,298]
      Letter:[,[51,53,86,88,149,151]
      Letter:\,[44,46,48,56,58,79,81,83,91,93,95,118,142,144,146,154,156,158,200,202,204]
      Letter:],[50,54,85,89,148,150,152,207]
      Letter:a,[51,52,53,54,55,56,57,58,59,81,82,83,84,85,86,87,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,150]
      Letter:b,[8,9,10,11,12,13,14,15,16,17,18,19,20,41,42,43,44,45,46,47,48,49,50,51,68,69,70,71,72,73,141,142,143,144,145,146,147,148,149,150,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,227,257,258,259,260,261,281,282,283,284,285,286,287,288,289,290]
      Letter:c,[41,42,43,44,45,46,47,48,49,50,51,151,166,167,168,169,170,171,172,173,174,175,176,177,178,179,257,258,259,260,261,262,263,264,265]
      Letter:d,[41,42,43,44,45,46,47,48,49,50,51,87,88,89,90,91,92,93,94,95,150,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,216,217,218,219,220,221,222,223,224,225,256,257,258,259,260,261,262,263,264]
      Letter:e,[10,11,12,13,14,15,16,17,18,19,20,41,42,43,44,45,46,47,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,256,257,258,259,260,261,262,263,264]
      Letter:f,[41,42,43,44,45,46,47,48,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,256,257,258,259,260,261,262,263,264]
      Letter:g,[41,42,43,44,45,46,47,48,49,50,51,89,90,91,92,93,94,95,88,166,167,168,169,170,171,172,173,174,175,176,177,178,179,216,217,218,225,257,258,259,260,261,262,263,277]
      Letter:h,[41,42,43,44,45,46,47,48,49,50,51,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,150,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189]
      Letter:i,[38,39,40,41,42,43,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,254,255,256,257,258,259]
      Letter:j,[8,9,10,11,12,48,49,50,51,52,53,54,55,56,68,69,70,71,72,73,141,142,143,144,145,146,147,148,149,150]
      Letter:k,[169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,282,283,284,285,286,287,288,289,290,291,292,293,294,295,296,297,298]
      Letter:l,[10,11,12,13,14,15,16,17,18,19,20,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191]
      Letter:m,[103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,159,160,161,162,163,164,165,173,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,272,273,274,275,276,277,278,279,280]
      Letter:n,[88,89,90,91,92,93,94,95,96,97,98,99,100,101,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,173,227,228,229,230,231,232,233,234,235,236,237,238,239,240]
      Letter:o,[14,15,16,17,18,19,20,41,42,43,44,45,46,47,48,49,50,51,74,75,76,77,78,79,80,81,82,83,84,85,86,181,182,183,184,185,186,187,188,189,190,191]
      Letter:p,[159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,227,255,256,257,258,259,260,261,281,282,283,284,285,286,287,288,289,290]
      Letter:q,[42,43,44,45,46,47,48,49,50,51,87,89,90,91,92,93,94,95,146,147,148,149,150,151,152,153,154,166,167,168,169,170,171,172,173,174,175,176,177,178,216,217,218,219,220,221,222,223,224,225,257,258,259,260,261,262,263]
      Letter:r,[41,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,227,255,256,257,258,259,260,261,281,282,283,284,285,286,287,288,289,290,291,292,293,294,295,296,297,298]
      Letter:s,[14,15,16,17,18,19,20,24,25,41,42,43,44,45,46,47,48,49,50,51,74,75,76,77,78,79,80,81,82,83,84,85,86,166,167,168,169,170,171,172,173,174,175,176,177,178,179,256,257,258,259,260,261,262,263,264,265,266,267,268]
      Letter:t,[36,37,38,39,40,41,42,43,44,45,180,181,182,183,184,185,186,187,188,189,190,191]
      Letter:u,[41,42,43,44,45,46,47,48,49,50,51,87,88,89,90,91,92,93,94,95,96,97,98,99,100,150,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180]
      Letter:v,[88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,227]
      Letter:w,[88,89,90,91,92,93,94,95,96,97,98,99,100,150,151,152,153,154,155,156,157,158,159,160,167,168,169,170,171,172,173,174,175,176,177,178,179,279,280,281,282,283,284,285,286,287,288,289,290]
      Letter:x,[151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,227,272,273,274,275,276,277,278,279,280,281,282,283,284,285,286,287,288,289,290]
      Letter:y,[74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165]
      Letter:z,[2,3,4,5,6,7,8,9,10,11,12,13,14,48,49,50,51,52,53,54,55,56,57,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,150,261,262,263,264,265,266,267,268,269,270,271]
      """.replace(/[\n\r\t\s]/, '');
    