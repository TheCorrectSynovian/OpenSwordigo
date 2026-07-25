/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000427E78
 * Mangled: _ZN5Caver7MapViewD2Ev
 * Demangled: Caver::MapView::~MapView()
 *
 * Callers: 1
 *   0x00000000001FD0E0  Caver::MapView::~MapView()
 *
 * Callees: 6
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000428DBC  Caver::MapView::~MapView()
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 506
 *   insn=0x0000000000427E8C string=0x0000000000427E90 ""
 *   insn=0x0000000000427E90 string=0x0000000000427E94 "t\nB"
 *   insn=0x0000000000427E94 string=0x0000000000427E98 ""
 *   insn=0x0000000000427E98 string=0x0000000000427E9C "A"
 *   insn=0x0000000000427E9C string=0x0000000000427EA0 "h"
 *   insn=0x0000000000427EA0 string=0x0000000000427EA4 "4"
 *   insn=0x0000000000427EA4 string=0x0000000000427EE8 "`"
 *   insn=0x0000000000427EA8 string=0x0000000000427EAC ""
 *   insn=0x0000000000427EB8 string=0x0000000000427EBC "\t@"
 *   insn=0x0000000000427EC8 string=0x0000000000427ECC ""
 *   insn=0x0000000000427ED8 string=0x0000000000427EDC "@"
 *   insn=0x0000000000427EEC string=0x0000000000427EF0 "@"
 *   insn=0x0000000000427EEC string=0x0000000000427F0C "`"
 *   insn=0x0000000000427EF0 string=0x0000000000427EF4 ""
 *   insn=0x0000000000427EF4 string=0x0000000000427EF8 ""
 *   insn=0x0000000000427EFC string=0x0000000000427F00 ""
 *   insn=0x0000000000427F00 string=0x0000000000427F04 ""
 *   insn=0x0000000000427F10 string=0x0000000000427F14 "@"
 *   insn=0x0000000000427F10 string=0x0000000000427F30 "`"
 *   insn=0x0000000000427F14 string=0x0000000000427F18 ""
 *   insn=0x0000000000427F18 string=0x0000000000427F1C ""
 *   insn=0x0000000000427F20 string=0x0000000000427F24 ""
 *   insn=0x0000000000427F24 string=0x0000000000427F28 ""
 *   insn=0x0000000000427F34 string=0x0000000000427F38 "@"
 *   insn=0x0000000000427F34 string=0x0000000000427F54 "`"
 *   insn=0x0000000000427F38 string=0x0000000000427F3C ""
 *   insn=0x0000000000427F3C string=0x0000000000427F40 ""
 *   insn=0x0000000000427F44 string=0x0000000000427F48 ""
 *   insn=0x0000000000427F48 string=0x0000000000427F4C ""
 *   insn=0x0000000000427F58 string=0x0000000000427F5C "@"
 *   insn=0x0000000000427F58 string=0x0000000000427F78 "`"
 *   insn=0x0000000000427F5C string=0x0000000000427F60 ""
 *   insn=0x0000000000427F60 string=0x0000000000427F64 ""
 *   insn=0x0000000000427F68 string=0x0000000000427F6C ""
 *   insn=0x0000000000427F6C string=0x0000000000427F70 ""
 *   insn=0x0000000000427F7C string=0x0000000000427F80 "@"
 *   insn=0x0000000000427F7C string=0x0000000000427F9C "`"
 *   insn=0x0000000000427F80 string=0x0000000000427F84 ""
 *   insn=0x0000000000427F84 string=0x0000000000427F88 ""
 *   insn=0x0000000000427F8C string=0x0000000000427F90 ""
 *   insn=0x0000000000427F90 string=0x0000000000427F94 ""
 *   insn=0x0000000000427FA0 string=0x0000000000427FA4 "@"
 *   insn=0x0000000000427FA0 string=0x0000000000427FC0 "`"
 *   insn=0x0000000000427FA4 string=0x0000000000427FA8 ""
 *   insn=0x0000000000427FA8 string=0x0000000000427FAC ""
 *   insn=0x0000000000427FB0 string=0x0000000000427FB4 ""
 *   insn=0x0000000000427FB4 string=0x0000000000427FB8 ""
 *   insn=0x0000000000427FC4 string=0x0000000000427FC8 "@"
 *   insn=0x0000000000427FC4 string=0x0000000000427FE4 "`"
 *   insn=0x0000000000427FC8 string=0x0000000000427FCC ""
 *   insn=0x0000000000427FCC string=0x0000000000427FD0 ""
 *   insn=0x0000000000427FD4 string=0x0000000000427FD8 ""
 *   insn=0x0000000000427FD8 string=0x0000000000427FDC ""
 *   insn=0x0000000000427FE8 string=0x0000000000427FEC "@"
 *   insn=0x0000000000427FE8 string=0x0000000000428008 "`"
 *   insn=0x0000000000427FEC string=0x0000000000427FF0 ""
 *   insn=0x0000000000427FF0 string=0x0000000000427FF4 ""
 *   insn=0x0000000000427FF8 string=0x0000000000427FFC ""
 *   insn=0x0000000000427FFC string=0x0000000000428000 ""
 *   insn=0x000000000042800C string=0x0000000000428010 "@"
 *   insn=0x000000000042800C string=0x000000000042802C "`"
 *   insn=0x0000000000428010 string=0x0000000000428014 ""
 *   insn=0x0000000000428014 string=0x0000000000428018 ""
 *   insn=0x000000000042801C string=0x0000000000428020 ""
 *   insn=0x0000000000428020 string=0x0000000000428024 ""
 *   insn=0x0000000000428030 string=0x0000000000428034 "@"
 *   insn=0x0000000000428030 string=0x0000000000428050 "`"
 *   insn=0x0000000000428034 string=0x0000000000428038 ""
 *   insn=0x0000000000428038 string=0x000000000042803C ""
 *   insn=0x0000000000428040 string=0x0000000000428044 ""
 *   insn=0x0000000000428044 string=0x0000000000428048 ""
 *   insn=0x0000000000428054 string=0x0000000000428058 "@"
 *   insn=0x0000000000428054 string=0x0000000000428074 "`"
 *   insn=0x0000000000428058 string=0x000000000042805C ""
 *   insn=0x000000000042805C string=0x0000000000428060 ""
 *   insn=0x0000000000428064 string=0x0000000000428068 ""
 *   insn=0x0000000000428068 string=0x000000000042806C ""
 *   insn=0x0000000000428078 string=0x000000000042807C "@"
 *   insn=0x0000000000428078 string=0x0000000000428098 "`"
 *   insn=0x000000000042807C string=0x0000000000428080 ""
 *   insn=0x0000000000428080 string=0x0000000000428084 ""
 *   insn=0x0000000000428088 string=0x000000000042808C ""
 *   insn=0x000000000042808C string=0x0000000000428090 ""
 *   insn=0x000000000042809C string=0x00000000004280A0 "@"
 *   insn=0x000000000042809C string=0x00000000004280BC "`"
 *   insn=0x00000000004280A0 string=0x00000000004280A4 ""
 *   insn=0x00000000004280A4 string=0x00000000004280A8 ""
 *   insn=0x00000000004280AC string=0x00000000004280B0 ""
 *   insn=0x00000000004280B0 string=0x00000000004280B4 ""
 *   insn=0x00000000004280C0 string=0x00000000004280C4 "@"
 *   insn=0x00000000004280C0 string=0x00000000004280E0 "`"
 *   insn=0x00000000004280C4 string=0x00000000004280C8 ""
 *   insn=0x00000000004280C8 string=0x00000000004280CC ""
 *   insn=0x00000000004280D0 string=0x00000000004280D4 ""
 *   insn=0x00000000004280D4 string=0x00000000004280D8 ""
 *   insn=0x00000000004280E4 string=0x00000000004280E8 "@"
 *   insn=0x00000000004280E4 string=0x0000000000428104 "`"
 *   insn=0x00000000004280E8 string=0x00000000004280EC ""
 *   insn=0x00000000004280EC string=0x00000000004280F0 ""
 *   insn=0x00000000004280F4 string=0x00000000004280F8 ""
 *   insn=0x00000000004280F8 string=0x00000000004280FC ""
 *   insn=0x0000000000428108 string=0x000000000042810C "@"
 *   insn=0x0000000000428108 string=0x0000000000428128 "`"
 *   insn=0x000000000042810C string=0x0000000000428110 ""
 *   insn=0x0000000000428110 string=0x0000000000428114 ""
 *   insn=0x0000000000428118 string=0x000000000042811C ""
 *   insn=0x000000000042811C string=0x0000000000428120 ""
 *   insn=0x000000000042812C string=0x0000000000428130 "@"
 *   insn=0x000000000042812C string=0x000000000042814C "`"
 *   insn=0x0000000000428130 string=0x0000000000428134 ""
 *   insn=0x0000000000428134 string=0x0000000000428138 ""
 *   insn=0x000000000042813C string=0x0000000000428140 ""
 *   insn=0x0000000000428140 string=0x0000000000428144 ""
 *   insn=0x0000000000428150 string=0x0000000000428154 "@"
 *   insn=0x0000000000428150 string=0x0000000000428170 "`"
 *   insn=0x0000000000428154 string=0x0000000000428158 ""
 *   insn=0x0000000000428158 string=0x000000000042815C ""
 *   insn=0x0000000000428160 string=0x0000000000428164 ""
 *   insn=0x0000000000428164 string=0x0000000000428168 ""
 *   insn=0x0000000000428170 string=0x0000000000428174 "@"
 *   insn=0x0000000000428174 string=0x0000000000428178 "z3"
 *   insn=0x0000000000428174 string=0x000000000042817C "`"
 *   insn=0x0000000000428178 string=0x00000000001F4F60 "P'"
 *   insn=0x000000000042817C string=0x0000000000428180 "@"
 *   insn=0x0000000000428180 string=0x0000000000428184 "w3"
 *   insn=0x0000000000428180 string=0x0000000000428188 "`zA"
 *   insn=0x000000000042818C string=0x0000000000428190 "@"
 *   insn=0x000000000042818C string=0x00000000004281AC "`vA"
 *   insn=0x0000000000428190 string=0x0000000000428194 ""
 *   insn=0x0000000000428194 string=0x0000000000428198 ""
 *   insn=0x000000000042819C string=0x00000000004281A0 ""
 *   insn=0x00000000004281A0 string=0x00000000004281A4 ""
 *   insn=0x00000000004281B0 string=0x00000000004281B4 "@"
 *   insn=0x00000000004281B0 string=0x00000000004281D0 "trA"
 *   insn=0x00000000004281B4 string=0x00000000004281B8 ""
 *   insn=0x00000000004281B8 string=0x00000000004281BC ""
 *   insn=0x00000000004281C0 string=0x00000000004281C4 ""
 *   insn=0x00000000004281C4 string=0x00000000004281C8 ""
 *   insn=0x00000000004281D0 string=0x00000000004281D4 "4"
 *   insn=0x00000000004281D4 string=0x0000000000428218 "tjA"
 *   insn=0x00000000004281D8 string=0x00000000004281DC ""
 *   insn=0x00000000004281E8 string=0x00000000004281EC "\t@"
 *   insn=0x00000000004281F8 string=0x00000000004281FC ""
 *   insn=0x0000000000428208 string=0x000000000042820C "@"
 *   insn=0x0000000000428218 string=0x000000000042821C "4"
 *   insn=0x000000000042821C string=0x0000000000428260 "tbA"
 *   insn=0x0000000000428220 string=0x0000000000428224 ""
 *   insn=0x0000000000428230 string=0x0000000000428234 "\t@"
 *   insn=0x0000000000428240 string=0x0000000000428244 ""
 *   insn=0x0000000000428250 string=0x0000000000428254 "@"
 *   insn=0x0000000000428260 string=0x0000000000428264 "4"
 *   insn=0x0000000000428264 string=0x00000000004282A8 "tZA"
 *   insn=0x0000000000428268 string=0x000000000042826C ""
 *   insn=0x0000000000428278 string=0x000000000042827C "\t@"
 *   insn=0x0000000000428288 string=0x000000000042828C ""
 *   insn=0x0000000000428298 string=0x000000000042829C "@"
 *   insn=0x00000000004282A8 string=0x00000000004282AC "4"
 *   insn=0x00000000004282AC string=0x00000000004282F0 "tNA"
 *   insn=0x00000000004282B0 string=0x00000000004282B4 ""
 *   insn=0x00000000004282C0 string=0x00000000004282C4 "\t@"
 *   insn=0x00000000004282D0 string=0x00000000004282D4 ""
 *   insn=0x00000000004282E0 string=0x00000000004282E4 "@"
 *   insn=0x00000000004282F0 string=0x00000000004282F4 "4"
 *   insn=0x00000000004282F4 string=0x0000000000428338 "`:A"
 *   insn=0x00000000004282F8 string=0x00000000004282FC ""
 *   insn=0x0000000000428308 string=0x000000000042830C "\t@"
 *   insn=0x0000000000428318 string=0x000000000042831C ""
 *   insn=0x0000000000428328 string=0x000000000042832C "@"
 *   insn=0x0000000000428338 string=0x000000000042833C "@"
 *   insn=0x000000000042833C string=0x0000000000428340 "3"
 *   insn=0x000000000042833C string=0x0000000000428344 "`.A"
 *   insn=0x0000000000428344 string=0x0000000000428348 "@"
 *   insn=0x0000000000428348 string=0x0000000000428350 "`"
 *   insn=0x0000000000428354 string=0x0000000000428358 "@"
 *   insn=0x0000000000428354 string=0x0000000000428374 "`"
 *   insn=0x0000000000428358 string=0x000000000042835C ""
 *   insn=0x000000000042835C string=0x0000000000428360 ""
 *   insn=0x0000000000428364 string=0x0000000000428368 ""
 *   insn=0x0000000000428368 string=0x000000000042836C ""
 *   insn=0x0000000000428374 string=0x0000000000428378 "@"
 *   insn=0x0000000000428378 string=0x0000000000428380 "`"
 *   insn=0x0000000000428380 string=0x0000000000428384 "@"
 *   insn=0x0000000000428384 string=0x000000000042838C "`"
 *   insn=0x0000000000428390 string=0x0000000000428394 "@"
 *   insn=0x0000000000428390 string=0x00000000004283B0 "`"
 *   insn=0x0000000000428394 string=0x0000000000428398 ""
 *   insn=0x0000000000428398 string=0x000000000042839C ""
 *   insn=0x00000000004283A0 string=0x00000000004283A4 ""
 *   insn=0x00000000004283A4 string=0x00000000004283A8 ""
 *   insn=0x00000000004283B0 string=0x00000000004283B4 "@"
 *   insn=0x00000000004283B4 string=0x00000000004283BC "`"
 *   insn=0x00000000004283BC string=0x00000000004283C0 "@"
 *   insn=0x00000000004283C0 string=0x00000000004283C8 "`"
 *   insn=0x00000000004283CC string=0x00000000004283D0 "@"
 *   insn=0x00000000004283CC string=0x00000000004283EC "`"
 *   insn=0x00000000004283D0 string=0x00000000004283D4 ""
 *   insn=0x00000000004283D4 string=0x00000000004283D8 ""
 *   insn=0x00000000004283DC string=0x00000000004283E0 ""
 *   insn=0x00000000004283E0 string=0x00000000004283E4 ""
 *   insn=0x00000000004283EC string=0x00000000004283F0 "@"
 *   insn=0x00000000004283F0 string=0x00000000004283F8 "`"
 *   insn=0x00000000004283F8 string=0x00000000004283FC "@"
 *   insn=0x00000000004283FC string=0x0000000000428404 "`"
 *   insn=0x0000000000428408 string=0x000000000042840C "@"
 *   insn=0x0000000000428408 string=0x0000000000428428 "t"
 *   insn=0x000000000042840C string=0x0000000000428410 ""
 *   insn=0x0000000000428410 string=0x0000000000428414 ""
 *   insn=0x0000000000428418 string=0x000000000042841C ""
 *   insn=0x000000000042841C string=0x0000000000428420 ""
 *   insn=0x0000000000428430 string=0x000000000042848C "t"
 *   insn=0x0000000000428434 string=0x0000000000428438 "5"
 *   insn=0x000000000042843C string=0x0000000000428440 ""
 *   insn=0x000000000042844C string=0x0000000000428450 "\t@"
 *   insn=0x000000000042845C string=0x0000000000428460 ""
 *   insn=0x000000000042846C string=0x0000000000428470 "@"
 *   insn=0x0000000000428484 string=0x0000000000428488 "t"
 *   insn=0x000000000042848C string=0x0000000000428498 "t"
 *   insn=0x0000000000428494 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000428498 string=0x000000000042849C "4"
 *   insn=0x000000000042849C string=0x00000000004284E0 "t"
 *   insn=0x00000000004284A0 string=0x00000000004284A4 ""
 *   insn=0x00000000004284B0 string=0x00000000004284B4 "\t@"
 *   insn=0x00000000004284C0 string=0x00000000004284C4 ""
 *   insn=0x00000000004284D0 string=0x00000000004284D4 "@"
 *   insn=0x00000000004284E0 string=0x00000000004284E4 "4"
 *   insn=0x00000000004284E8 string=0x00000000004284EC ""
 *   insn=0x00000000004284F8 string=0x00000000004284FC "\t@"
 *   insn=0x0000000000428508 string=0x000000000042850C ""
 *   insn=0x0000000000428518 string=0x000000000042851C "@"
 *   insn=0x0000000000428538 string=0x000000000042853C "=Z"
 *   insn=0x0000000000428544 string=0x0000000000428C68 "u"
 *   insn=0x0000000000428548 string=0x000000000042854C "`"
 *   insn=0x000000000042854C string=0x0000000000428550 " 7"
 *   insn=0x0000000000428554 string=0x0000000000428C38 "`"
 *   insn=0x0000000000428558 string=0x000000000042855C "`"
 *   insn=0x0000000000428564 string=0x0000000000428BFC "`"
 *   insn=0x0000000000428568 string=0x000000000042856C "`"
 *   insn=0x000000000042856C string=0x0000000000428570 "`2"
 *   insn=0x0000000000428574 string=0x0000000000428BC0 "`"
 *   insn=0x0000000000428578 string=0x000000000042857C "urA"
 *   insn=0x0000000000428580 string=0x0000000000428584 "5"
 *   insn=0x0000000000428584 string=0x0000000000428A58 "ujA"
 *   insn=0x0000000000428588 string=0x000000000042858C "`vA"
 *   insn=0x000000000042858C string=0x0000000000428590 " #"
 *   insn=0x0000000000428590 string=0x00000000004289F4 "@"
 *   insn=0x0000000000428594 string=0x0000000000428A10 "urA"
 *   insn=0x0000000000428598 string=0x000000000042859C "`"
 *   insn=0x00000000004285A0 string=0x00000000004289B8 "j1"
 *   insn=0x00000000004285A4 string=0x00000000004289BC "`"
 *   insn=0x00000000004285A8 string=0x00000000004285AC "`"
 *   insn=0x00000000004285AC string=0x00000000004285B0 " "
 *   insn=0x00000000004285B0 string=0x0000000000428994 "@"
 *   insn=0x00000000004285B4 string=0x00000000004289B0 "`"
 *   insn=0x00000000004285B8 string=0x00000000004285BC "`"
 *   insn=0x00000000004285C0 string=0x0000000000428970 "@"
 *   insn=0x00000000004285C4 string=0x000000000042898C "`"
 *   insn=0x00000000004285C8 string=0x00000000004285CC "`"
 *   insn=0x00000000004285D0 string=0x000000000042894C "@"
 *   insn=0x00000000004285D4 string=0x0000000000428968 "`"
 *   insn=0x00000000004285D8 string=0x00000000004285DC "`"
 *   insn=0x00000000004285DC string=0x00000000004285E0 "@"
 *   insn=0x00000000004285E0 string=0x0000000000428928 "@"
 *   insn=0x00000000004285E4 string=0x0000000000428944 "`"
 *   insn=0x00000000004285E8 string=0x00000000004285EC "`"
 *   insn=0x00000000004285F0 string=0x0000000000428904 "@"
 *   insn=0x00000000004285F4 string=0x0000000000428920 "`"
 *   insn=0x00000000004285F8 string=0x00000000004285FC "`"
 *   insn=0x0000000000428600 string=0x00000000004288E0 "@"
 *   insn=0x0000000000428604 string=0x00000000004288FC "`"
 *   insn=0x0000000000428608 string=0x000000000042860C "`"
 *   insn=0x000000000042860C string=0x0000000000428610 "`"
 *   insn=0x0000000000428610 string=0x00000000004288BC "@"
 *   insn=0x0000000000428614 string=0x00000000004288D8 "`"
 *   insn=0x0000000000428618 string=0x000000000042861C "`"
 *   insn=0x0000000000428620 string=0x0000000000428898 "@"
 *   insn=0x0000000000428624 string=0x00000000004288B4 "`"
 *   insn=0x0000000000428628 string=0x000000000042862C "`"
 *   insn=0x000000000042862C string=0x0000000000428630 " "
 *   insn=0x0000000000428630 string=0x0000000000428874 "@"
 *   insn=0x0000000000428634 string=0x0000000000428890 "`"
 *   insn=0x0000000000428638 string=0x000000000042863C "`"
 *   insn=0x0000000000428640 string=0x0000000000428850 "@"
 *   insn=0x0000000000428644 string=0x000000000042886C "`"
 *   insn=0x0000000000428648 string=0x000000000042864C "`"
 *   insn=0x0000000000428650 string=0x0000000000428654 "}"
 *   insn=0x0000000000428650 string=0x000000000042882C "@"
 *   insn=0x0000000000428654 string=0x0000000000428848 "`"
 *   insn=0x0000000000428658 string=0x000000000042865C "`"
 *   insn=0x000000000042865C string=0x0000000000428660 "@"
 *   insn=0x0000000000428660 string=0x0000000000428664 "p"
 *   insn=0x0000000000428660 string=0x0000000000428808 "@"
 *   insn=0x0000000000428664 string=0x0000000000428824 "`"
 *   insn=0x0000000000428668 string=0x000000000042866C "`"
 *   insn=0x0000000000428670 string=0x0000000000428674 "c"
 *   insn=0x0000000000428670 string=0x00000000004287E4 "@"
 *   insn=0x0000000000428674 string=0x0000000000428800 "`"
 *   insn=0x0000000000428678 string=0x000000000042867C "`"
 *   insn=0x0000000000428680 string=0x0000000000428684 "V"
 *   insn=0x0000000000428680 string=0x00000000004287C0 "@"
 *   insn=0x0000000000428684 string=0x00000000004287DC "`"
 *   insn=0x0000000000428688 string=0x000000000042868C "`"
 *   insn=0x000000000042868C string=0x0000000000428690 "`"
 *   insn=0x0000000000428690 string=0x0000000000428694 "I"
 *   insn=0x0000000000428690 string=0x000000000042879C "@"
 *   insn=0x0000000000428694 string=0x00000000004287B8 "`"
 *   insn=0x0000000000428698 string=0x000000000042869C "`"
 *   insn=0x00000000004286A0 string=0x00000000004286A4 "<"
 *   insn=0x00000000004286A0 string=0x0000000000428778 "@"
 *   insn=0x00000000004286A4 string=0x0000000000428794 "`"
 *   insn=0x00000000004286A8 string=0x00000000004286AC "`"
 *   insn=0x00000000004286AC string=0x00000000004286B0 " "
 *   insn=0x00000000004286B0 string=0x00000000004286B4 "/"
 *   insn=0x00000000004286B0 string=0x0000000000428754 "@"
 *   insn=0x00000000004286B4 string=0x0000000000428770 "`"
 *   insn=0x00000000004286C0 string=0x00000000004286C4 "u"
 *   insn=0x00000000004286D0 string=0x00000000004286D4 "`:A"
 *   insn=0x00000000004286D4 string=0x00000000004286D8 "@%"
 *   insn=0x00000000004286D8 string=0x00000000004286DC "*"
 *   insn=0x00000000004286DC string=0x0000000000428B84 "`.A"
 *   insn=0x00000000004286E0 string=0x00000000004286E4 "uNA"
 *   insn=0x00000000004286E8 string=0x00000000004286EC "#"
 *   insn=0x00000000004286EC string=0x0000000000428B78 "`:A"
 *   insn=0x00000000004286F0 string=0x00000000004286F4 "uZA"
 *   insn=0x00000000004286F8 string=0x00000000004286FC ""
 *   insn=0x00000000004286FC string=0x0000000000428B30 "uNA"
 *   insn=0x0000000000428700 string=0x0000000000428704 "ubA"
 *   insn=0x000000000042870C string=0x0000000000428AE8 "uZA"
 *   insn=0x0000000000428710 string=0x0000000000428714 "ujA"
 *   insn=0x0000000000428714 string=0x0000000000428718 "U"
 *   insn=0x000000000042871C string=0x0000000000428AA0 "ubA"
 *   insn=0x0000000000428724 string=0x0000000000428728 "("
 *   insn=0x0000000000428728 string=0x000000000042872C "\t\t@"
 *   insn=0x0000000000428728 string=0x000000000042874C "`"
 *   insn=0x000000000042872C string=0x0000000000428730 ")"
 *   insn=0x0000000000428730 string=0x0000000000428734 "\t\t"
 *   insn=0x0000000000428738 string=0x000000000042873C "\t"
 *   insn=0x000000000042873C string=0x0000000000428740 ")"
 *   insn=0x0000000000428744 string=0x0000000000428748 " "
 *   insn=0x0000000000428754 string=0x0000000000428758 ""
 *   insn=0x0000000000428758 string=0x000000000042875C ""
 *   insn=0x0000000000428760 string=0x0000000000428764 ""
 *   insn=0x0000000000428764 string=0x0000000000428768 ""
 *   insn=0x0000000000428778 string=0x000000000042877C ""
 *   insn=0x000000000042877C string=0x0000000000428780 ""
 *   insn=0x0000000000428784 string=0x0000000000428788 ""
 *   insn=0x0000000000428788 string=0x000000000042878C ""
 *   insn=0x000000000042879C string=0x00000000004287A0 ""
 *   insn=0x00000000004287A0 string=0x00000000004287A4 ""
 *   insn=0x00000000004287A8 string=0x00000000004287AC ""
 *   insn=0x00000000004287AC string=0x00000000004287B0 ""
 *   insn=0x00000000004287C0 string=0x00000000004287C4 ""
 *   insn=0x00000000004287C4 string=0x00000000004287C8 ""
 *   insn=0x00000000004287CC string=0x00000000004287D0 ""
 *   insn=0x00000000004287D0 string=0x00000000004287D4 ""
 *   insn=0x00000000004287E4 string=0x00000000004287E8 ""
 *   insn=0x00000000004287E8 string=0x00000000004287EC ""
 *   insn=0x00000000004287F0 string=0x00000000004287F4 ""
 *   insn=0x00000000004287F4 string=0x00000000004287F8 ""
 *   insn=0x0000000000428808 string=0x000000000042880C ""
 *   insn=0x000000000042880C string=0x0000000000428810 ""
 *   insn=0x0000000000428814 string=0x0000000000428818 ""
 *   insn=0x0000000000428818 string=0x000000000042881C ""
 *   insn=0x000000000042882C string=0x0000000000428830 ""
 *   insn=0x0000000000428830 string=0x0000000000428834 ""
 *   insn=0x0000000000428838 string=0x000000000042883C ""
 *   insn=0x000000000042883C string=0x0000000000428840 ""
 *   insn=0x0000000000428850 string=0x0000000000428854 ""
 *   insn=0x0000000000428854 string=0x0000000000428858 ""
 *   insn=0x000000000042885C string=0x0000000000428860 ""
 *   insn=0x0000000000428860 string=0x0000000000428864 ""
 *   insn=0x0000000000428874 string=0x0000000000428878 ""
 *   insn=0x0000000000428878 string=0x000000000042887C ""
 *   insn=0x0000000000428880 string=0x0000000000428884 ""
 *   insn=0x0000000000428884 string=0x0000000000428888 ""
 *   insn=0x0000000000428898 string=0x000000000042889C ""
 *   insn=0x000000000042889C string=0x00000000004288A0 ""
 *   insn=0x00000000004288A4 string=0x00000000004288A8 ""
 *   insn=0x00000000004288A8 string=0x00000000004288AC ""
 *   insn=0x00000000004288BC string=0x00000000004288C0 ""
 *   insn=0x00000000004288C0 string=0x00000000004288C4 ""
 *   insn=0x00000000004288C8 string=0x00000000004288CC ""
 *   insn=0x00000000004288CC string=0x00000000004288D0 ""
 *   insn=0x00000000004288E0 string=0x00000000004288E4 ""
 *   insn=0x00000000004288E4 string=0x00000000004288E8 ""
 *   insn=0x00000000004288EC string=0x00000000004288F0 ""
 *   insn=0x00000000004288F0 string=0x00000000004288F4 ""
 *   insn=0x0000000000428904 string=0x0000000000428908 ""
 *   insn=0x0000000000428908 string=0x000000000042890C ""
 *   insn=0x0000000000428910 string=0x0000000000428914 ""
 *   insn=0x0000000000428914 string=0x0000000000428918 ""
 *   insn=0x0000000000428928 string=0x000000000042892C ""
 *   insn=0x000000000042892C string=0x0000000000428930 ""
 *   insn=0x0000000000428934 string=0x0000000000428938 ""
 *   insn=0x0000000000428938 string=0x000000000042893C ""
 *   insn=0x000000000042894C string=0x0000000000428950 ""
 *   insn=0x0000000000428950 string=0x0000000000428954 ""
 *   insn=0x0000000000428958 string=0x000000000042895C ""
 *   insn=0x000000000042895C string=0x0000000000428960 ""
 *   insn=0x0000000000428970 string=0x0000000000428974 ""
 *   insn=0x0000000000428974 string=0x0000000000428978 ""
 *   insn=0x000000000042897C string=0x0000000000428980 ""
 *   insn=0x0000000000428980 string=0x0000000000428984 ""
 *   insn=0x0000000000428994 string=0x0000000000428998 ""
 *   insn=0x0000000000428998 string=0x000000000042899C ""
 *   insn=0x00000000004289A0 string=0x00000000004289A4 ""
 *   insn=0x00000000004289A4 string=0x00000000004289A8 ""
 *   insn=0x00000000004289B0 string=0x00000000004289B4 "@"
 *   insn=0x00000000004289BC string=0x00000000004289C0 "@"
 *   insn=0x00000000004289C0 string=0x00000000004289C4 "g1"
 *   insn=0x00000000004289C0 string=0x00000000004289C8 "`zA"
 *   insn=0x00000000004289CC string=0x00000000004289D0 "@"
 *   insn=0x00000000004289CC string=0x00000000004289EC "`vA"
 *   insn=0x00000000004289D0 string=0x00000000004289D4 ""
 *   insn=0x00000000004289D4 string=0x00000000004289D8 ""
 *   insn=0x00000000004289DC string=0x00000000004289E0 ""
 *   insn=0x00000000004289E0 string=0x00000000004289E4 ""
 *   insn=0x00000000004289F4 string=0x00000000004289F8 ""
 *   insn=0x00000000004289F8 string=0x00000000004289FC ""
 *   insn=0x0000000000428A00 string=0x0000000000428A04 ""
 *   insn=0x0000000000428A04 string=0x0000000000428A08 ""
 *   insn=0x0000000000428A10 string=0x0000000000428A14 "5"
 *   insn=0x0000000000428A18 string=0x0000000000428A1C ""
 *   insn=0x0000000000428A28 string=0x0000000000428A2C "\t@"
 *   insn=0x0000000000428A38 string=0x0000000000428A3C ""
 *   insn=0x0000000000428A48 string=0x0000000000428A4C "@"
 *   insn=0x0000000000428A58 string=0x0000000000428A5C "5"
 *   insn=0x0000000000428A60 string=0x0000000000428A64 ""
 *   insn=0x0000000000428A70 string=0x0000000000428A74 "\t@"
 *   insn=0x0000000000428A80 string=0x0000000000428A84 ""
 *   insn=0x0000000000428A90 string=0x0000000000428A94 "@"
 *   insn=0x0000000000428AA0 string=0x0000000000428AA4 "5"
 *   insn=0x0000000000428AA8 string=0x0000000000428AAC ""
 *   insn=0x0000000000428AB8 string=0x0000000000428ABC "\t@"
 *   insn=0x0000000000428AC8 string=0x0000000000428ACC ""
 *   insn=0x0000000000428AD8 string=0x0000000000428ADC "@"
 *   insn=0x0000000000428AE8 string=0x0000000000428AEC "5"
 *   insn=0x0000000000428AF0 string=0x0000000000428AF4 ""
 *   insn=0x0000000000428B00 string=0x0000000000428B04 "\t@"
 *   insn=0x0000000000428B10 string=0x0000000000428B14 ""
 *   insn=0x0000000000428B20 string=0x0000000000428B24 "@"
 *   insn=0x0000000000428B30 string=0x0000000000428B34 "5"
 *   insn=0x0000000000428B38 string=0x0000000000428B3C ""
 *   insn=0x0000000000428B48 string=0x0000000000428B4C "\t@"
 *   insn=0x0000000000428B58 string=0x0000000000428B5C ""
 *   insn=0x0000000000428B68 string=0x0000000000428B6C "@"
 *   insn=0x0000000000428B78 string=0x0000000000428B7C "@"
 *   insn=0x0000000000428B84 string=0x0000000000428B88 "@"
 *   insn=0x0000000000428B88 string=0x0000000000428B90 "`"
 *   insn=0x0000000000428B94 string=0x0000000000428B98 "@"
 *   insn=0x0000000000428B94 string=0x0000000000428BB4 "`"
 *   insn=0x0000000000428B98 string=0x0000000000428B9C ""
 *   insn=0x0000000000428B9C string=0x0000000000428BA0 ""
 *   insn=0x0000000000428BA4 string=0x0000000000428BA8 ""
 *   insn=0x0000000000428BA8 string=0x0000000000428BAC ""
 *   insn=0x0000000000428BB4 string=0x0000000000428BB8 "@"
 *   insn=0x0000000000428BC0 string=0x0000000000428BC4 "@"
 *   insn=0x0000000000428BC4 string=0x0000000000428BCC "`"
 *   insn=0x0000000000428BD0 string=0x0000000000428BD4 "@"
 *   insn=0x0000000000428BD0 string=0x0000000000428BF0 "`"
 *   insn=0x0000000000428BD4 string=0x0000000000428BD8 ""
 *   insn=0x0000000000428BD8 string=0x0000000000428BDC ""
 *   insn=0x0000000000428BE0 string=0x0000000000428BE4 ""
 *   insn=0x0000000000428BE4 string=0x0000000000428BE8 ""
 *   insn=0x0000000000428BF0 string=0x0000000000428BF4 "@"
 *   insn=0x0000000000428BFC string=0x0000000000428C00 "@"
 *   insn=0x0000000000428C00 string=0x0000000000428C08 "`"
 *   insn=0x0000000000428C0C string=0x0000000000428C10 "@"
 *   insn=0x0000000000428C0C string=0x0000000000428C2C "`"
 *   insn=0x0000000000428C10 string=0x0000000000428C14 ""
 *   insn=0x0000000000428C14 string=0x0000000000428C18 ""
 *   insn=0x0000000000428C1C string=0x0000000000428C20 ""
 *   insn=0x0000000000428C20 string=0x0000000000428C24 ""
 *   insn=0x0000000000428C2C string=0x0000000000428C30 "@"
 *   insn=0x0000000000428C38 string=0x0000000000428C3C "@"
 *   insn=0x0000000000428C3C string=0x0000000000428C44 "`"
 *   insn=0x0000000000428C48 string=0x0000000000428C4C "@"
 *   insn=0x0000000000428C4C string=0x0000000000428C50 ""
 *   insn=0x0000000000428C50 string=0x0000000000428C54 ""
 *   insn=0x0000000000428C58 string=0x0000000000428C5C ""
 *   insn=0x0000000000428C5C string=0x0000000000428C60 ""
 *   insn=0x0000000000428C70 string=0x0000000000428CCC "5"
 *   insn=0x0000000000428C74 string=0x0000000000428C78 "6"
 *   insn=0x0000000000428C7C string=0x0000000000428C80 ""
 *   insn=0x0000000000428C8C string=0x0000000000428C90 "\t@"
 *   insn=0x0000000000428C9C string=0x0000000000428CA0 ""
 *   insn=0x0000000000428CAC string=0x0000000000428CB0 "@"
 *   insn=0x0000000000428CC4 string=0x0000000000428CC8 "u"
 *   insn=0x0000000000428CCC string=0x0000000000428D10 "u"
 *   insn=0x0000000000428CD4 string=0x0000000000428D0C "i9"
 *   insn=0x0000000000428CDC string=0x0000000000428CE0 "h"
 *   insn=0x0000000000428CEC string=0x0000000000428CF0 "p9"
 *   insn=0x0000000000428CF8 string=0x0000000000428CFC "h"
 *   insn=0x0000000000428D00 string=0x0000000000428D04 "h"
 *   insn=0x0000000000428D10 string=0x0000000000428D14 "5"
 *   insn=0x0000000000428D14 string=0x0000000000428D58 "u"
 *   insn=0x0000000000428D18 string=0x0000000000428D1C ""
 *   insn=0x0000000000428D28 string=0x0000000000428D2C "\t@"
 *   insn=0x0000000000428D38 string=0x0000000000428D3C ""
 *   insn=0x0000000000428D48 string=0x0000000000428D4C "@"
 *   insn=0x0000000000428D58 string=0x0000000000428D5C "5"
 *   insn=0x0000000000428D60 string=0x0000000000428D64 ""
 *   insn=0x0000000000428D70 string=0x0000000000428D74 "\t@"
 *   insn=0x0000000000428D80 string=0x0000000000428D84 ""
 *   insn=0x0000000000428D90 string=0x0000000000428D94 "@"
 *   insn=0x0000000000428DA0 string=0x0000000000428DA4 "#X"
 *   insn=0x0000000000428DB4 string=0x0000000000428DB8 "e"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MapView::~MapView(Caver::MapView *this)
{
  _QWORD *v2; // x20
  __int64 v3; // x8
  __int64 v4; // x8
  _DWORD *v5; // x0
  int v6; // w8
  _DWORD *v7; // x0
  int v8; // w8
  _DWORD *v9; // x0
  int v10; // w8
  _DWORD *v11; // x0
  int v12; // w8
  _DWORD *v13; // x0
  int v14; // w8
  _DWORD *v15; // x0
  int v16; // w8
  _DWORD *v17; // x0
  int v18; // w8
  _DWORD *v19; // x0
  int v20; // w8
  _DWORD *v21; // x0
  int v22; // w8
  _DWORD *v23; // x0
  int v24; // w8
  _DWORD *v25; // x0
  int v26; // w8
  _DWORD *v27; // x0
  int v28; // w8
  _DWORD *v29; // x0
  int v30; // w8
  _DWORD *v31; // x0
  int v32; // w8
  _DWORD *v33; // x0
  int v34; // w8
  _DWORD *v35; // x0
  int v36; // w8
  _DWORD *v37; // x0
  int v38; // w8
  _DWORD *v39; // x0
  int v40; // w8
  void *v41; // x0
  void *v42; // x0
  _DWORD *v43; // x0
  int v44; // w8
  _DWORD *v45; // x0
  int v46; // w8
  _QWORD *v47; // x20
  __int64 v48; // x8
  __int64 v49; // x8
  _QWORD *v50; // x20
  __int64 v51; // x8
  __int64 v52; // x8
  _QWORD *v53; // x20
  __int64 v54; // x8
  __int64 v55; // x8
  _QWORD *v56; // x20
  __int64 v57; // x8
  __int64 v58; // x8
  _QWORD *v59; // x20
  __int64 v60; // x8
  __int64 v61; // x8
  void *v62; // x0
  void *v63; // x0
  _DWORD *v64; // x0
  int v65; // w8
  void *v66; // x0
  void *v67; // x0
  _DWORD *v68; // x0
  int v69; // w8
  void *v70; // x0
  void *v71; // x0
  _DWORD *v72; // x0
  int v73; // w8
  void *v74; // x0
  void *v75; // x0
  _DWORD *v76; // x0
  int v77; // w8
  _QWORD *v78; // x20
  _QWORD *v79; // x22
  _QWORD *v80; // x21
  __int64 v81; // x8
  __int64 v82; // x8
  _QWORD *v83; // x20
  __int64 v84; // x8
  __int64 v85; // x8
  _QWORD *v86; // x20
  __int64 v87; // x8
  __int64 v88; // x8

  v2 = (_QWORD *)*((_QWORD *)this + 130);
  *(_QWORD *)this = off_6D2D60;
  if ( v2 )
  {
    v3 = v2[1] - 1LL;
    v2[1] = v3;
    if ( !v3 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v2 + 16LL))(v2);
      v4 = v2[2] - 1LL;
      v2[2] = v4;
      if ( !v4 )
        (*(void (__fastcall **)(_QWORD *))(*v2 + 24LL))(v2);
    }
  }
  v5 = (_DWORD *)*((_QWORD *)this + 122);
  if ( v5 )
  {
    v6 = v5[2] - 1;
    v5[2] = v6;
    if ( !v6 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 8LL))(v5);
  }
  v7 = (_DWORD *)*((_QWORD *)this + 121);
  if ( v7 )
  {
    v8 = v7[2] - 1;
    v7[2] = v8;
    if ( !v8 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 8LL))(v7);
  }
  v9 = (_DWORD *)*((_QWORD *)this + 120);
  if ( v9 )
  {
    v10 = v9[2] - 1;
    v9[2] = v10;
    if ( !v10 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v9 + 8LL))(v9);
  }
  v11 = (_DWORD *)*((_QWORD *)this + 119);
  if ( v11 )
  {
    v12 = v11[2] - 1;
    v11[2] = v12;
    if ( !v12 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v11 + 8LL))(v11);
  }
  v13 = (_DWORD *)*((_QWORD *)this + 118);
  if ( v13 )
  {
    v14 = v13[2] - 1;
    v13[2] = v14;
    if ( !v14 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v13 + 8LL))(v13);
  }
  v15 = (_DWORD *)*((_QWORD *)this + 117);
  if ( v15 )
  {
    v16 = v15[2] - 1;
    v15[2] = v16;
    if ( !v16 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v15 + 8LL))(v15);
  }
  v17 = (_DWORD *)*((_QWORD *)this + 116);
  if ( v17 )
  {
    v18 = v17[2] - 1;
    v17[2] = v18;
    if ( !v18 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v17 + 8LL))(v17);
  }
  v19 = (_DWORD *)*((_QWORD *)this + 115);
  if ( v19 )
  {
    v20 = v19[2] - 1;
    v19[2] = v20;
    if ( !v20 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v19 + 8LL))(v19);
  }
  v21 = (_DWORD *)*((_QWORD *)this + 114);
  if ( v21 )
  {
    v22 = v21[2] - 1;
    v21[2] = v22;
    if ( !v22 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v21 + 8LL))(v21);
  }
  v23 = (_DWORD *)*((_QWORD *)this + 113);
  if ( v23 )
  {
    v24 = v23[2] - 1;
    v23[2] = v24;
    if ( !v24 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v23 + 8LL))(v23);
  }
  v25 = (_DWORD *)*((_QWORD *)this + 112);
  if ( v25 )
  {
    v26 = v25[2] - 1;
    v25[2] = v26;
    if ( !v26 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v25 + 8LL))(v25);
  }
  v27 = (_DWORD *)*((_QWORD *)this + 111);
  if ( v27 )
  {
    v28 = v27[2] - 1;
    v27[2] = v28;
    if ( !v28 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v27 + 8LL))(v27);
  }
  v29 = (_DWORD *)*((_QWORD *)this + 110);
  if ( v29 )
  {
    v30 = v29[2] - 1;
    v29[2] = v30;
    if ( !v30 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v29 + 8LL))(v29);
  }
  v31 = (_DWORD *)*((_QWORD *)this + 109);
  if ( v31 )
  {
    v32 = v31[2] - 1;
    v31[2] = v32;
    if ( !v32 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v31 + 8LL))(v31);
  }
  v33 = (_DWORD *)*((_QWORD *)this + 108);
  if ( v33 )
  {
    v34 = v33[2] - 1;
    v33[2] = v34;
    if ( !v34 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v33 + 8LL))(v33);
  }
  v35 = (_DWORD *)*((_QWORD *)this + 107);
  if ( v35 )
  {
    v36 = v35[2] - 1;
    v35[2] = v36;
    if ( !v36 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v35 + 8LL))(v35);
  }
  v37 = (_DWORD *)*((_QWORD *)this + 106);
  if ( v37 )
  {
    v38 = v37[2] - 1;
    v37[2] = v38;
    if ( !v38 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v37 + 8LL))(v37);
  }
  v39 = (_DWORD *)*((_QWORD *)this + 105);
  if ( v39 )
  {
    v40 = v39[2] - 1;
    v39[2] = v40;
    if ( !v40 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v39 + 8LL))(v39);
  }
  v41 = (void *)*((_QWORD *)this + 101);
  if ( v41 )
    operator delete[](v41);
  v42 = (void *)*((_QWORD *)this + 98);
  if ( v42 )
    operator delete[](v42);
  v43 = (_DWORD *)*((_QWORD *)this + 94);
  if ( v43 )
  {
    v44 = v43[2] - 1;
    v43[2] = v44;
    if ( !v44 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v43 + 8LL))(v43);
  }
  v45 = (_DWORD *)*((_QWORD *)this + 93);
  if ( v45 )
  {
    v46 = v45[2] - 1;
    v45[2] = v46;
    if ( !v46 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v45 + 8LL))(v45);
  }
  v47 = (_QWORD *)*((_QWORD *)this + 92);
  if ( v47 )
  {
    v48 = v47[1] - 1LL;
    v47[1] = v48;
    if ( !v48 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v47 + 16LL))(v47);
      v49 = v47[2] - 1LL;
      v47[2] = v49;
      if ( !v49 )
        (*(void (__fastcall **)(_QWORD *))(*v47 + 24LL))(v47);
    }
  }
  v50 = (_QWORD *)*((_QWORD *)this + 90);
  if ( v50 )
  {
    v51 = v50[1] - 1LL;
    v50[1] = v51;
    if ( !v51 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v50 + 16LL))(v50);
      v52 = v50[2] - 1LL;
      v50[2] = v52;
      if ( !v52 )
        (*(void (__fastcall **)(_QWORD *))(*v50 + 24LL))(v50);
    }
  }
  v53 = (_QWORD *)*((_QWORD *)this + 88);
  if ( v53 )
  {
    v54 = v53[1] - 1LL;
    v53[1] = v54;
    if ( !v54 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v53 + 16LL))(v53);
      v55 = v53[2] - 1LL;
      v53[2] = v55;
      if ( !v55 )
        (*(void (__fastcall **)(_QWORD *))(*v53 + 24LL))(v53);
    }
  }
  v56 = (_QWORD *)*((_QWORD *)this + 86);
  if ( v56 )
  {
    v57 = v56[1] - 1LL;
    v56[1] = v57;
    if ( !v57 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v56 + 16LL))(v56);
      v58 = v56[2] - 1LL;
      v56[2] = v58;
      if ( !v58 )
        (*(void (__fastcall **)(_QWORD *))(*v56 + 24LL))(v56);
    }
  }
  v59 = (_QWORD *)*((_QWORD *)this + 83);
  if ( v59 )
  {
    v60 = v59[1] - 1LL;
    v59[1] = v60;
    if ( !v60 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v59 + 16LL))(v59);
      v61 = v59[2] - 1LL;
      v59[2] = v61;
      if ( !v61 )
        (*(void (__fastcall **)(_QWORD *))(*v59 + 24LL))(v59);
    }
  }
  v62 = (void *)*((_QWORD *)this + 78);
  if ( v62 )
    operator delete[](v62);
  v63 = (void *)*((_QWORD *)this + 75);
  if ( v63 )
    operator delete[](v63);
  v64 = (_DWORD *)*((_QWORD *)this + 71);
  if ( v64 )
  {
    v65 = v64[2] - 1;
    v64[2] = v65;
    if ( !v65 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v64 + 8LL))(v64);
  }
  v66 = (void *)*((_QWORD *)this + 67);
  if ( v66 )
    operator delete[](v66);
  v67 = (void *)*((_QWORD *)this + 64);
  if ( v67 )
    operator delete[](v67);
  v68 = (_DWORD *)*((_QWORD *)this + 60);
  if ( v68 )
  {
    v69 = v68[2] - 1;
    v68[2] = v69;
    if ( !v69 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v68 + 8LL))(v68);
  }
  v70 = (void *)*((_QWORD *)this + 56);
  if ( v70 )
    operator delete[](v70);
  v71 = (void *)*((_QWORD *)this + 53);
  if ( v71 )
    operator delete[](v71);
  v72 = (_DWORD *)*((_QWORD *)this + 49);
  if ( v72 )
  {
    v73 = v72[2] - 1;
    v72[2] = v73;
    if ( !v73 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v72 + 8LL))(v72);
  }
  v74 = (void *)*((_QWORD *)this + 45);
  if ( v74 )
    operator delete[](v74);
  v75 = (void *)*((_QWORD *)this + 42);
  if ( v75 )
    operator delete[](v75);
  v76 = (_DWORD *)*((_QWORD *)this + 38);
  if ( v76 )
  {
    v77 = v76[2] - 1;
    v76[2] = v77;
    if ( !v77 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v76 + 8LL))(v76);
  }
  v78 = (_QWORD *)*((_QWORD *)this + 35);
  v79 = (_QWORD *)*((_QWORD *)this + 36);
  if ( v78 != v79 )
  {
    do
    {
      v80 = (_QWORD *)v78[1];
      if ( v80 )
      {
        v81 = v80[1] - 1LL;
        v80[1] = v81;
        if ( !v81 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v80 + 16LL))(v80);
          v82 = v80[2] - 1LL;
          v80[2] = v82;
          if ( !v82 )
            (*(void (__fastcall **)(_QWORD *))(*v80 + 24LL))(v80);
        }
      }
      v78 += 2;
    }
    while ( v79 != v78 );
    v78 = (_QWORD *)*((_QWORD *)this + 35);
  }
  if ( v78 )
    operator delete(v78);
  v83 = (_QWORD *)*((_QWORD *)this + 34);
  if ( v83 )
  {
    v84 = v83[1] - 1LL;
    v83[1] = v84;
    if ( !v84 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v83 + 16LL))(v83);
      v85 = v83[2] - 1LL;
      v83[2] = v85;
      if ( !v85 )
        (*(void (__fastcall **)(_QWORD *))(*v83 + 24LL))(v83);
    }
  }
  v86 = (_QWORD *)*((_QWORD *)this + 32);
  if ( v86 )
  {
    v87 = v86[1] - 1LL;
    v86[1] = v87;
    if ( !v87 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v86 + 16LL))(v86);
      v88 = v86[2] - 1LL;
      v86[2] = v88;
      if ( !v88 )
        (*(void (__fastcall **)(_QWORD *))(*v86 + 24LL))(v86);
    }
  }
  Caver::GUIView::~GUIView(this);
}

