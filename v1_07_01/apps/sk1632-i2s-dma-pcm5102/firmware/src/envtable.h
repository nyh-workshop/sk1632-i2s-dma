#ifndef ENVTABLE_H
#define ENVTABLE_H

// 256-byte discretized decay envelope table here:
unsigned short envelope_d[256] = { 4095, 3847, 3614, 3395, 3190, 2996, 2815, 2644, 2484, 2334, 2192, 2060,
1935, 1818, 1708, 1604, 1507, 1416, 1330, 1249, 1174, 1103, 1036, 973, 914, 859, 807, 758, 712, 669,
628, 590, 555, 521, 490, 460, 432, 406, 381, 358, 337, 316, 297, 279, 262, 246, 232, 218, 204, 192,
180, 170, 159, 150, 141, 132, 124, 117, 110, 103, 97, 91, 85, 80, 76, 71, 67, 63, 59, 55, 52, 49,
46, 43, 41, 38, 36, 34, 32, 30, 28, 26, 25, 23, 22, 21, 19, 18, 17, 16, 15, 14, 14, 13, 12, 11, 11,
10, 9, 9, 8, 8, 7, 7, 7, 6, 6, 6, 5, 5, 5, 4, 4, 4, 4, 4, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 2, 2, 2,
2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

// 4096-byte discretized decay envelope table here:
const unsigned short envelope[4096] = {4095, 4085, 4076, 4067, 4058, 4049, 4040, 4031, 4021, 4012, 4003, 3994,
    3985, 3977, 3968, 3959, 3950, 3941, 3932, 3923, 3914, 3906, 3897, 3888, 3879, 3871, 3862, 3853, 3845, 3836,
    3827, 3819, 3810, 3802, 3793, 3785, 3776, 3768, 3759, 3751, 3742, 3734, 3725, 3717, 3709, 3700, 3692, 3684,
    3675, 3667, 3659, 3651, 3643, 3634, 3626, 3618, 3610, 3602, 3594, 3586, 3578, 3570, 3562, 3554, 3546, 3538,
    3530, 3522, 3514, 3506, 3498, 3490, 3482, 3474, 3467, 3459, 3451, 3443, 3436, 3428, 3420, 3412, 3405, 3397,
    3390, 3382, 3374, 3367, 3359, 3352, 3344, 3337, 3329, 3322, 3314, 3307, 3299, 3292, 3284, 3277, 3270, 3262,
    3255, 3248, 3240, 3233, 3226, 3219, 3211, 3204, 3197, 3190, 3183, 3175, 3168, 3161, 3154, 3147, 3140, 3133,
    3126, 3119, 3112, 3105, 3098, 3091, 3084, 3077, 3070, 3063, 3056, 3049, 3043, 3036, 3029, 3022, 3015, 3009,
    3002, 2995, 2988, 2982, 2975, 2968, 2962, 2955, 2948, 2942, 2935, 2928, 2922, 2915, 2909, 2902, 2896, 2889,
    2883, 2876, 2870, 2863, 2857, 2850, 2844, 2838, 2831, 2825, 2819, 2812, 2806, 2800, 2793, 2787, 2781, 2775,
    2768, 2762, 2756, 2750, 2744, 2737, 2731, 2725, 2719, 2713, 2707, 2701, 2695, 2689, 2683, 2676, 2670, 2664,
    2658, 2653, 2647, 2641, 2635, 2629, 2623, 2617, 2611, 2605, 2599, 2594, 2588, 2582, 2576, 2570, 2564, 2559,
    2553, 2547, 2542, 2536, 2530, 2524, 2519, 2513, 2507, 2502, 2496, 2491, 2485, 2479, 2474, 2468, 2463, 2457,
    2452, 2446, 2441, 2435, 2430, 2424, 2419, 2413, 2408, 2403, 2397, 2392, 2386, 2381, 2376, 2370, 2365, 2360,
    2354, 2349, 2344, 2339, 2333, 2328, 2323, 2318, 2312, 2307, 2302, 2297, 2292, 2287, 2281, 2276, 2271, 2266,
    2261, 2256, 2251, 2246, 2241, 2236, 2231, 2226, 2221, 2216, 2211, 2206, 2201, 2196, 2191, 2186, 2181, 2176,
    2171, 2166, 2161, 2157, 2152, 2147, 2142, 2137, 2133, 2128, 2123, 2118, 2113, 2109, 2104, 2099, 2094, 2090,
    2085, 2080, 2076, 2071, 2066, 2062, 2057, 2052, 2048, 2043, 2039, 2034, 2030, 2025, 2020, 2016, 2011, 2007,
    2002, 1998, 1993, 1989, 1984, 1980, 1975, 1971, 1967, 1962, 1958, 1953, 1949, 1945, 1940, 1936, 1932, 1927,
    1923, 1919, 1914, 1910, 1906, 1901, 1897, 1893, 1889, 1884, 1880, 1876, 1872, 1867, 1863, 1859, 1855, 1851,
    1847, 1842, 1838, 1834, 1830, 1826, 1822, 1818, 1814, 1810, 1805, 1801, 1797, 1793, 1789, 1785, 1781, 1777,
    1773, 1769, 1765, 1761, 1757, 1753, 1749, 1746, 1742, 1738, 1734, 1730, 1726, 1722, 1718, 1714, 1711, 1707,
    1703, 1699, 1695, 1691, 1688, 1684, 1680, 1676, 1673, 1669, 1665, 1661, 1658, 1654, 1650, 1646, 1643, 1639,
    1635, 1632, 1628, 1624, 1621, 1617, 1613, 1610, 1606, 1603, 1599, 1595, 1592, 1588, 1585, 1581, 1577, 1574,
    1570, 1567, 1563, 1560, 1556, 1553, 1549, 1546, 1542, 1539, 1535, 1532, 1529, 1525, 1522, 1518, 1515, 1511,
    1508, 1505, 1501, 1498, 1495, 1491, 1488, 1485, 1481, 1478, 1475, 1471, 1468, 1465, 1461, 1458, 1455, 1451,
    1448, 1445, 1442, 1438, 1435, 1432, 1429, 1426, 1422, 1419, 1416, 1413, 1410, 1406, 1403, 1400, 1397, 1394,
    1391, 1388, 1385, 1381, 1378, 1375, 1372, 1369, 1366, 1363, 1360, 1357, 1354, 1351, 1348, 1345, 1342, 1339,
    1336, 1333, 1330, 1327, 1324, 1321, 1318, 1315, 1312, 1309, 1306, 1303, 1300, 1297, 1294, 1291, 1288, 1285,
    1283, 1280, 1277, 1274, 1271, 1268, 1265, 1263, 1260, 1257, 1254, 1251, 1248, 1246, 1243, 1240, 1237, 1234,
    1232, 1229, 1226, 1223, 1221, 1218, 1215, 1212, 1210, 1207, 1204, 1202, 1199, 1196, 1193, 1191, 1188, 1185,
    1183, 1180, 1177, 1175, 1172, 1170, 1167, 1164, 1162, 1159, 1156, 1154, 1151, 1149, 1146, 1144, 1141, 1138,
    1136, 1133, 1131, 1128, 1126, 1123, 1121, 1118, 1116, 1113, 1111, 1108, 1106, 1103, 1101, 1098, 1096, 1093,
    1091, 1088, 1086, 1083, 1081, 1079, 1076, 1074, 1071, 1069, 1066, 1064, 1062, 1059, 1057, 1055, 1052, 1050,
    1047, 1045, 1043, 1040, 1038, 1036, 1033, 1031, 1029, 1026, 1024, 1022, 1020, 1017, 1015, 1013, 1010, 1008,
    1006, 1004, 1001, 999, 997, 995, 992, 990, 988, 986, 983, 981, 979, 977, 975, 972, 970, 968, 966, 964, 962,
    959, 957, 955, 953, 951, 949, 947, 944, 942, 940, 938, 936, 934, 932, 930, 928, 926, 923, 921, 919, 917, 915,
    913, 911, 909, 907, 905, 903, 901, 899, 897, 895, 893, 891, 889, 887, 885, 883, 881, 879, 877, 875, 873, 871,
    869, 867, 865, 863, 861, 859, 857, 855, 853, 852, 850, 848, 846, 844, 842, 840, 838, 836, 834, 833, 831, 829,
    827, 825, 823, 821, 820, 818, 816, 814, 812, 810, 809, 807, 805, 803, 801, 800, 798, 796, 794, 792, 791, 789,
    787, 785, 784, 782, 780, 778, 777, 775, 773, 771, 770, 768, 766, 764, 763, 761, 759, 758, 756, 754, 752, 751,
    749, 747, 746, 744, 742, 741, 739, 737, 736, 734, 732, 731, 729, 727, 726, 724, 723, 721, 719, 718, 716, 714,
    713, 711, 710, 708, 706, 705, 703, 702, 700, 699, 697, 695, 694, 692, 691, 689, 688, 686, 685, 683, 681, 680,
    678, 677, 675, 674, 672, 671, 669, 668, 666, 665, 663, 662, 660, 659, 657, 656, 654, 653, 651, 650, 649, 647,
    646, 644, 643, 641, 640, 638, 637, 636, 634, 633, 631, 630, 628, 627, 626, 624, 623, 621, 620, 619, 617, 616,
    614, 613, 612, 610, 609, 608, 606, 605, 603, 602, 601, 599, 598, 597, 595, 594, 593, 591, 590, 589, 587, 586,
    585, 583, 582, 581, 580, 578, 577, 576, 574, 573, 572, 570, 569, 568, 567, 565, 564, 563, 562, 560, 559, 558,
    557, 555, 554, 553, 552, 550, 549, 548, 547, 545, 544, 543, 542, 540, 539, 538, 537, 536, 534, 533, 532, 531,
    530, 528, 527, 526, 525, 524, 523, 521, 520, 519, 518, 517, 516, 514, 513, 512, 511, 510, 509, 507, 506, 505,
    504, 503, 502, 501, 500, 498, 497, 496, 495, 494, 493, 492, 491, 489, 488, 487, 486, 485, 484, 483, 482, 481,
    480, 479, 478, 476, 475, 474, 473, 472, 471, 470, 469, 468, 467, 466, 465, 464, 463, 462, 461, 460, 459, 458,
    456, 455, 454, 453, 452, 451, 450, 449, 448, 447, 446, 445, 444, 443, 442, 441, 440, 439, 438, 437, 436, 435,
    434, 433, 432, 432, 431, 430, 429, 428, 427, 426, 425, 424, 423, 422, 421, 420, 419, 418, 417, 416, 415, 414,
    413, 413, 412, 411, 410, 409, 408, 407, 406, 405, 404, 403, 402, 402, 401, 400, 399, 398, 397, 396, 395, 394,
    393, 393, 392, 391, 390, 389, 388, 387, 386, 386, 385, 384, 383, 382, 381, 380, 380, 379, 378, 377, 376, 375,
    374, 374, 373, 372, 371, 370, 369, 369, 368, 367, 366, 365, 364, 364, 363, 362, 361, 360, 360, 359, 358, 357,
    356, 356, 355, 354, 353, 352, 352, 351, 350, 349, 348, 348, 347, 346, 345, 344, 344, 343, 342, 341, 341, 340,
    339, 338, 338, 337, 336, 335, 335, 334, 333, 332, 332, 331, 330, 329, 329, 328, 327, 326, 326, 325, 324, 323,
    323, 322, 321, 321, 320, 319, 318, 318, 317, 316, 316, 315, 314, 313, 313, 312, 311, 311, 310, 309, 308, 308,
    307, 306, 306, 305, 304, 304, 303, 302, 302, 301, 300, 300, 299, 298, 298, 297, 296, 296, 295, 294, 294, 293,
    292, 292, 291, 290, 290, 289, 288, 288, 287, 286, 286, 285, 284, 284, 283, 283, 282, 281, 281, 280, 279, 279,
    278, 277, 277, 276, 276, 275, 274, 274, 273, 273, 272, 271, 271, 270, 269, 269, 268, 268, 267, 266, 266, 265,
    265, 264, 263, 263, 262, 262, 261, 261, 260, 259, 259, 258, 258, 257, 256, 256, 255, 255, 254, 254, 253, 252,
    252, 251, 251, 250, 250, 249, 248, 248, 247, 247, 246, 246, 245, 245, 244, 244, 243, 242, 242, 241, 241, 240,
    240, 239, 239, 238, 238, 237, 236, 236, 235, 235, 234, 234, 233, 233, 232, 232, 231, 231, 230, 230, 229, 229,
    228, 228, 227, 227, 226, 226, 225, 225, 224, 224, 223, 223, 222, 222, 221, 221, 220, 220, 219, 219, 218, 218,
    217, 217, 216, 216, 215, 215, 214, 214, 213, 213, 212, 212, 211, 211, 210, 210, 209, 209, 208, 208, 207, 207,
    207, 206, 206, 205, 205, 204, 204, 203, 203, 202, 202, 201, 201, 201, 200, 200, 199, 199, 198, 198, 197, 197,
    197, 196, 196, 195, 195, 194, 194, 193, 193, 193, 192, 192, 191, 191, 190, 190, 190, 189, 189, 188, 188, 187,
    187, 187, 186, 186, 185, 185, 185, 184, 184, 183, 183, 182, 182, 182, 181, 181, 180, 180, 180, 179, 179, 178,
    178, 178, 177, 177, 176, 176, 176, 175, 175, 174, 174, 174, 173, 173, 172, 172, 172, 171, 171, 171, 170, 170,
    169, 169, 169, 168, 168, 167, 167, 167, 166, 166, 166, 165, 165, 164, 164, 164, 163, 163, 163, 162, 162, 162,
    161, 161, 160, 160, 160, 159, 159, 159, 158, 158, 158, 157, 157, 157, 156, 156, 155, 155, 155, 154, 154, 154,
    153, 153, 153, 152, 152, 152, 151, 151, 151, 150, 150, 150, 149, 149, 149, 148, 148, 148, 147, 147, 147, 146,
    146, 146, 145, 145, 145, 144, 144, 144, 143, 143, 143, 142, 142, 142, 141, 141, 141, 140, 140, 140, 140, 139,
    139, 139, 138, 138, 138, 137, 137, 137, 136, 136, 136, 135, 135, 135, 135, 134, 134, 134, 133, 133, 133, 132,
    132, 132, 132, 131, 131, 131, 130, 130, 130, 129, 129, 129, 129, 128, 128, 128, 127, 127, 127, 127, 126, 126,
    126, 125, 125, 125, 125, 124, 124, 124, 123, 123, 123, 123, 122, 122, 122, 122, 121, 121, 121, 120, 120, 120,
    120, 119, 119, 119, 119, 118, 118, 118, 118, 117, 117, 117, 116, 116, 116, 116, 115, 115, 115, 115, 114, 114,
    114, 114, 113, 113, 113, 113, 112, 112, 112, 112, 111, 111, 111, 111, 110, 110, 110, 110, 109, 109, 109, 109,
    108, 108, 108, 108, 107, 107, 107, 107, 106, 106, 106, 106, 105, 105, 105, 105, 104, 104, 104, 104, 104, 103,
    103, 103, 103, 102, 102, 102, 102, 101, 101, 101, 101, 101, 100, 100, 100, 100, 99, 99, 99, 99, 99, 98, 98,
    98, 98, 97, 97, 97, 97, 97, 96, 96, 96, 96, 95, 95, 95, 95, 95, 94, 94, 94, 94, 94, 93, 93, 93, 93, 92, 92,
    92, 92, 92, 91, 91, 91, 91, 91, 90, 90, 90, 90, 90, 89, 89, 89, 89, 89, 88, 88, 88, 88, 88, 87, 87, 87, 87,
    87, 86, 86, 86, 86, 86, 85, 85, 85, 85, 85, 84, 84, 84, 84, 84, 84, 83, 83, 83, 83, 83, 82, 82, 82, 82, 82,
    81, 81, 81, 81, 81, 81, 80, 80, 80, 80, 80, 79, 79, 79, 79, 79, 79, 78, 78, 78, 78, 78, 78, 77, 77, 77, 77,
    77, 76, 76, 76, 76, 76, 76, 75, 75, 75, 75, 75, 75, 74, 74, 74, 74, 74, 74, 73, 73, 73, 73, 73, 73, 72, 72,
    72, 72, 72, 72, 71, 71, 71, 71, 71, 71, 70, 70, 70, 70, 70, 70, 70, 69, 69, 69, 69, 69, 69, 68, 68, 68, 68,
    68, 68, 68, 67, 67, 67, 67, 67, 67, 66, 66, 66, 66, 66, 66, 66, 65, 65, 65, 65, 65, 65, 65, 64, 64, 64, 64,
    64, 64, 64, 63, 63, 63, 63, 63, 63, 63, 62, 62, 62, 62, 62, 62, 62, 61, 61, 61, 61, 61, 61, 61, 60, 60, 60,
    60, 60, 60, 60, 59, 59, 59, 59, 59, 59, 59, 59, 58, 58, 58, 58, 58, 58, 58, 57, 57, 57, 57, 57, 57, 57, 57,
    56, 56, 56, 56, 56, 56, 56, 56, 55, 55, 55, 55, 55, 55, 55, 55, 54, 54, 54, 54, 54, 54, 54, 54, 53, 53, 53,
    53, 53, 53, 53, 53, 52, 52, 52, 52, 52, 52, 52, 52, 52, 51, 51, 51, 51, 51, 51, 51, 51, 50, 50, 50, 50, 50,
    50, 50, 50, 50, 49, 49, 49, 49, 49, 49, 49, 49, 49, 48, 48, 48, 48, 48, 48, 48, 48, 48, 47, 47, 47, 47, 47,
    47, 47, 47, 47, 47, 46, 46, 46, 46, 46, 46, 46, 46, 46, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 44, 44, 44,
    44, 44, 44, 44, 44, 44, 44, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42,
    42, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 39, 39, 39, 39,
    39, 39, 39, 39, 39, 39, 39, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 37, 37, 37, 37, 37, 37, 37, 37, 37,
    37, 37, 37, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35,
    35, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33,
    32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31,
    31, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29,
    29, 29, 29, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 27, 27, 27, 27, 27, 27, 27, 27,
    27, 27, 27, 27, 27, 27, 27, 27, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 25, 25,
    25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24,
    24, 24, 24, 24, 24, 24, 24, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 22,
    22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 21, 21, 21, 21, 21, 21, 21, 21, 21,
    21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
    20, 20, 20, 20, 20, 20, 20, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19,
    19, 19, 19, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18,
    17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 16, 16,
    16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 15, 15,
    15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15,
    14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
    14, 14, 14, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13,
    13, 13, 13, 13, 13, 13, 13, 13, 13, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12,
    12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 11, 11, 11, 11, 11, 11, 11, 11, 11,
    11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11,
    11, 11, 11, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9,
    9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 8, 8, 8,
    8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
    8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
    7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 6, 6, 6,
    6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
    6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 5, 5, 5, 5, 5, 5, 5, 5,
    5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
    5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
    3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
    3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
    3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
    3, 3, 3, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
    2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
    2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
    2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
    2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0};



 
 #endif