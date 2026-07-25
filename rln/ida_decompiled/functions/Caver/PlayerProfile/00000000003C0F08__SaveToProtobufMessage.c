/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003C0F08
 * Mangled: _ZN5Caver13PlayerProfile21SaveToProtobufMessageEPNS_5Proto13PlayerProfileE
 * Demangled: Caver::PlayerProfile::SaveToProtobufMessage(Caver::Proto::PlayerProfile *)
 *
 * Callers: 1
 *   0x0000000000202810  Caver::PlayerProfile::SaveToProtobufMessage(Caver::Proto::PlayerProfile *)
 *
 * Callees: 22
 *   0x00000000001F3910  Caver::PlayerProfile::equippedArmorName(void)
 *   0x00000000001F4250  Caver::PlayerProfile::weaponTrinketName(void)
 *   0x00000000001F4AD0  Caver::PlayerProfile::armorTrinketName(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7030  Caver::Proto::GameState::GameState(void)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F9510  Caver::PlayerProfile::currentLevelTitle(void)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *   0x00000000001FC230  Caver::Proto::PlayerProfile_Counter::PlayerProfile_Counter(void)
 *   0x00000000001FD080  Caver::GameState::SaveToProtobufMessage(Caver::Proto::GameState *)
 *   0x00000000001FDD70  Caver::DateTime::SaveToProtobufMessage(Caver::Proto::DateTime *)
 *   0x00000000001FFAA0  Caver::PlayerProfile::equippedWeaponName(void)
 *   0x00000000001FFE50  Caver::GameState::PercentCompleted(void)
 *   0x0000000000201340  Caver::Proto::DateTime::DateTime(void)
 *   0x0000000000203E80  Caver::DateTime::Now(void)
 *   0x00000000003C1668  Caver::PlayerProfile::Filename(void)
 *   0x000000000054C6A0  sub_54C6A0
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 254
 *   insn=0x00000000003C0F24 string=0x00000000003C0F28 "Y"
 *   insn=0x00000000003C0F28 string=0x00000000003C0F2C "("
 *   insn=0x00000000003C0F40 string=0x00000000003C13B0 "("
 *   insn=0x00000000003C0F48 string=0x00000000003C0F4C ")"
 *   insn=0x00000000003C0F4C string=0x00000000003C0F50 "h"
 *   insn=0x00000000003C0F50 string=0x00000000003C0F54 "`R@"
 *   insn=0x00000000003C0F54 string=0x00000000003C0F58 ")uF"
 *   insn=0x00000000003C0F5C string=0x00000000003C0F60 ""
 *   insn=0x00000000003C0F60 string=0x00000000003C0F64 "h"
 *   insn=0x00000000003C0F74 string=0x00000000003C0F78 "("
 *   insn=0x00000000003C0F74 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003C0F78 string=0x00000000003C0F7C ""
 *   insn=0x00000000003C0F7C string=0x00000000003C0F80 "a"
 *   insn=0x00000000003C0F80 string=0x00000000003C0F84 ""
 *   insn=0x00000000003C0F84 string=0x00000000003C0F88 "`R"
 *   insn=0x00000000003C0F90 string=0x00000000003C0F94 ")"
 *   insn=0x00000000003C0F94 string=0x00000000003C0F98 "h"
 *   insn=0x00000000003C0F98 string=0x00000000003C0F9C "`\n@"
 *   insn=0x00000000003C0F9C string=0x00000000003C0FA0 ")"
 *   insn=0x00000000003C0FA4 string=0x00000000003C0FA8 ""
 *   insn=0x00000000003C0FA8 string=0x00000000003C0FAC "h"
 *   insn=0x00000000003C0FBC string=0x00000000003C0FC0 "("
 *   insn=0x00000000003C0FC0 string=0x00000000003C0FC4 ""
 *   insn=0x00000000003C0FC4 string=0x00000000003C0FC8 "a"
 *   insn=0x00000000003C0FC8 string=0x00000000003C0FCC ""
 *   insn=0x00000000003C0FCC string=0x00000000003C0FD0 "`\n"
 *   insn=0x00000000003C0FD8 string=0x00000000003C0FDC "h"
 *   insn=0x00000000003C0FDC string=0x00000000003C0FE0 "u"
 *   insn=0x00000000003C0FE0 string=0x00000000003C0FE4 ""
 *   insn=0x00000000003C0FE4 string=0x00000000003C0FE8 "h"
 *   insn=0x00000000003C0FF0 string=0x00000000003C0FF4 "{"
 *   insn=0x00000000003C0FFC string=0x00000000003C1000 "u"
 *   insn=0x00000000003C1008 string=0x00000000003C100C "Y"
 *   insn=0x00000000003C100C string=0x00000000001FDD70 "0'"
 *   insn=0x00000000003C1014 string=0x00000000003C1018 ">"
 *   insn=0x00000000003C1018 string=0x00000000003C101C ")"
 *   insn=0x00000000003C1018 string=0x00000000001F9510 "0'"
 *   insn=0x00000000003C101C string=0x00000000003C1020 "h"
 *   insn=0x00000000003C1020 string=0x00000000003C1024 "`"
 *   insn=0x00000000003C1024 string=0x00000000003C1028 ")Q@"
 *   insn=0x00000000003C1028 string=0x00000000003C102C ""
 *   insn=0x00000000003C102C string=0x00000000003C1030 "h"
 *   insn=0x00000000003C103C string=0x00000000003C1040 "h"
 *   insn=0x00000000003C1040 string=0x00000000003C1044 "("
 *   insn=0x00000000003C1044 string=0x00000000003C1048 ""
 *   insn=0x00000000003C1048 string=0x00000000003C104C "a"
 *   insn=0x00000000003C104C string=0x00000000003C1050 ""
 *   insn=0x00000000003C1050 string=0x00000000003C1054 "`"
 *   insn=0x00000000003C1060 string=0x00000000003C1064 "7"
 *   insn=0x00000000003C1074 string=0x00000000003C10A8 "\t"
 *   insn=0x00000000003C107C string=0x00000000003C1080 ""
 *   insn=0x00000000003C107C string=0x00000000003C10F0 "h"
 *   insn=0x00000000003C1084 string=0x00000000003C1088 "i"
 *   insn=0x00000000003C1088 string=0x00000000003C108C "h*"
 *   insn=0x00000000003C108C string=0x00000000003C1090 ")"
 *   insn=0x00000000003C1090 string=0x00000000003C1094 "i"
 *   insn=0x00000000003C1094 string=0x00000000003C1098 "n"
 *   insn=0x00000000003C109C string=0x00000000003C10A0 "h"
 *   insn=0x00000000003C10A4 string=0x00000000003C1108 "`."
 *   insn=0x00000000003C10A8 string=0x00000000003C10AC ")=G"
 *   insn=0x00000000003C10AC string=0x00000000003C10B0 "!"
 *   insn=0x00000000003C10B4 string=0x00000000003C10B8 "\t"
 *   insn=0x00000000003C10B4 string=0x00000000003C10CC "\t"
 *   insn=0x00000000003C10B8 string=0x00000000003C10BC "*"
 *   insn=0x00000000003C10BC string=0x00000000003C10C0 "\n"
 *   insn=0x00000000003C10C8 string=0x00000000003C10D8 "?"
 *   insn=0x00000000003C10CC string=0x00000000003C10D0 "*"
 *   insn=0x00000000003C10D0 string=0x00000000003C10D4 "\n"
 *   insn=0x00000000003C10F4 string=0x00000000003C10F8 ""
 *   insn=0x00000000003C10F8 string=0x00000000003C10FC "h"
 *   insn=0x00000000003C10FC string=0x00000000003C1100 "i*"
 *   insn=0x00000000003C110C string=0x00000000003C1110 ""
 *   insn=0x00000000003C1110 string=0x00000000003C1114 "h"
 *   insn=0x00000000003C111C string=0x00000000003C1120 "i"
 *   insn=0x00000000003C1120 string=0x00000000003C1124 "_"
 *   insn=0x00000000003C1124 string=0x00000000003C1128 ")"
 *   insn=0x00000000003C1128 string=0x00000000003C112C "h"
 *   insn=0x00000000003C112C string=0x00000000003C1130 "`"@"
 *   insn=0x00000000003C1130 string=0x00000000003C1134 ")"
 *   insn=0x00000000003C1134 string=0x00000000003C1138 ""
 *   insn=0x00000000003C1138 string=0x00000000003C113C "h"
 *   insn=0x00000000003C1148 string=0x00000000003C114C "%"
 *   insn=0x00000000003C1150 string=0x00000000003C1154 ""
 *   insn=0x00000000003C1154 string=0x00000000003C1158 "`""
 *   insn=0x00000000003C115C string=0x00000000003C1160 "R"
 *   insn=0x00000000003C1170 string=0x00000000003C13E0 "\t"
 *   insn=0x00000000003C117C string=0x00000000003C1180 ")"
 *   insn=0x00000000003C117C string=0x00000000001F3910 "P'"
 *   insn=0x00000000003C1180 string=0x00000000003C1184 "h"
 *   insn=0x00000000003C1184 string=0x00000000003C1188 "`&@"
 *   insn=0x00000000003C1188 string=0x00000000003C118C ")QG"
 *   insn=0x00000000003C118C string=0x00000000003C1190 ""
 *   insn=0x00000000003C1190 string=0x00000000003C1194 "h"
 *   insn=0x00000000003C11A8 string=0x00000000003C11AC ""
 *   insn=0x00000000003C11AC string=0x00000000003C11B0 "`&"
 *   insn=0x00000000003C11B4 string=0x00000000003C11B8 "<"
 *   insn=0x00000000003C11C8 string=0x00000000003C1404 "\t"
 *   insn=0x00000000003C11D4 string=0x00000000003C11D8 ")"
 *   insn=0x00000000003C11D4 string=0x00000000001F4250 "P'"
 *   insn=0x00000000003C11D8 string=0x00000000003C11DC "h"
 *   insn=0x00000000003C11DC string=0x00000000003C11E0 "`*@"
 *   insn=0x00000000003C11E0 string=0x00000000003C11E4 ")"
 *   insn=0x00000000003C11E4 string=0x00000000003C11E8 ""
 *   insn=0x00000000003C11E8 string=0x00000000003C11EC "h"
 *   insn=0x00000000003C1200 string=0x00000000003C1204 ""
 *   insn=0x00000000003C1204 string=0x00000000003C1208 "`*"
 *   insn=0x00000000003C120C string=0x00000000003C1210 "&"
 *   insn=0x00000000003C121C string=0x00000000003C1220 "A"
 *   insn=0x00000000003C1220 string=0x00000000003C1428 "\t"
 *   insn=0x00000000003C1228 string=0x00000000003C122C ")"
 *   insn=0x00000000003C122C string=0x00000000003C1230 ")"
 *   insn=0x00000000003C122C string=0x00000000001F4AD0 "P'"
 *   insn=0x00000000003C1230 string=0x00000000003C1234 "h"
 *   insn=0x00000000003C1234 string=0x00000000003C1238 "`.@"
 *   insn=0x00000000003C1238 string=0x00000000003C123C ")"
 *   insn=0x00000000003C123C string=0x00000000003C1240 ""
 *   insn=0x00000000003C1240 string=0x00000000003C1244 "h"
 *   insn=0x00000000003C1258 string=0x00000000003C125C ""
 *   insn=0x00000000003C125C string=0x00000000003C1260 "`."
 *   insn=0x00000000003C1278 string=0x00000000003C144C "\t"
 *   insn=0x00000000003C1280 string=0x00000000003C1284 "_"
 *   insn=0x00000000003C1288 string=0x00000000003C128C ";"
 *   insn=0x00000000003C128C string=0x00000000003C1290 "{"
 *   insn=0x00000000003C1290 string=0x00000000003C1294 "v"
 *   insn=0x00000000003C1298 string=0x00000000003C129C "i"M))}@"
 *   insn=0x00000000003C129C string=0x00000000003C12A0 ")}@"
 *   insn=0x00000000003C12A0 string=0x00000000003C12A4 "?"
 *   insn=0x00000000003C12A8 string=0x00000000003C12AC "h2@"
 *   insn=0x00000000003C12A8 string=0x00000000003C12C0 "ir@"
 *   insn=0x00000000003C12AC string=0x00000000003C12B0 "*"
 *   insn=0x00000000003C12B0 string=0x00000000003C12B4 "jj"
 *   insn=0x00000000003C12C8 string=0x00000000003C12DC ""
 *   insn=0x00000000003C12D4 string=0x00000000003C12D8 "hn@"
 *   insn=0x00000000003C12D4 string=0x00000000001FAD20 "0'"
 *   insn=0x00000000003C12E0 string=0x00000000003C12E4 "hn"
 *   insn=0x00000000003C12F0 string=0x00000000003C12F4 "hj"
 *   insn=0x00000000003C12F0 string=0x00000000001FC230 "0'"
 *   insn=0x00000000003C12F4 string=0x00000000003C12F8 "i2@"
 *   insn=0x00000000003C12F8 string=0x00000000003C12FC "\n"
 *   insn=0x00000000003C12FC string=0x00000000003C1300 "jj"
 *   insn=0x00000000003C1300 string=0x00000000003C1304 "7y("
 *   insn=0x00000000003C1310 string=0x00000000003C1314 ""
 *   insn=0x00000000003C1344 string=0x00000000003C1348 ""
 *   insn=0x00000000003C1354 string=0x00000000003C1358 "_"
 *   insn=0x00000000003C1360 string=0x00000000003C1364 "h"
 *   insn=0x00000000003C1368 string=0x00000000003C136C ""
 *   insn=0x00000000003C1368 string=0x00000000003C137C "u"
 *   insn=0x00000000003C1370 string=0x00000000003C1374 "h"
 *   insn=0x00000000003C1374 string=0x00000000003C1378 "ib"
 *   insn=0x00000000003C1380 string=0x00000000003C1384 ""
 *   insn=0x00000000003C1384 string=0x00000000003C1388 "h"
 *   insn=0x00000000003C1398 string=0x00000000003C139C "%"
 *   insn=0x00000000003C139C string=0x00000000003C13A0 "u"
 *   insn=0x00000000003C139C string=0x00000000001F7030 "0'"
 *   insn=0x00000000003C13A8 string=0x00000000003C13AC "5"
 *   insn=0x00000000003C13AC string=0x00000000001FD080 "0'"
 *   insn=0x00000000003C13BC string=0x00000000003C14F0 "x"
 *   insn=0x00000000003C13E0 string=0x00000000003C13E4 ")=G"
 *   insn=0x00000000003C13E4 string=0x00000000003C13E8 "!"
 *   insn=0x00000000003C13E8 string=0x00000000003C13EC ")"
 *   insn=0x00000000003C13EC string=0x00000000003C13F0 "\t"
 *   insn=0x00000000003C13EC string=0x00000000003C1470 "\t"
 *   insn=0x00000000003C13F0 string=0x00000000003C13F4 "*"
 *   insn=0x00000000003C13F4 string=0x00000000003C13F8 "\n"
 *   insn=0x00000000003C1400 string=0x00000000003C147C "?"
 *   insn=0x00000000003C1404 string=0x00000000003C1408 ")=G"
 *   insn=0x00000000003C1408 string=0x00000000003C140C "!"
 *   insn=0x00000000003C140C string=0x00000000003C1410 "\t"
 *   insn=0x00000000003C1410 string=0x00000000003C1414 "\t"
 *   insn=0x00000000003C1410 string=0x00000000003C1490 "\t"
 *   insn=0x00000000003C1414 string=0x00000000003C1418 "*"
 *   insn=0x00000000003C1418 string=0x00000000003C141C "\n"
 *   insn=0x00000000003C1424 string=0x00000000003C149C "?"
 *   insn=0x00000000003C1428 string=0x00000000003C142C ")=G"
 *   insn=0x00000000003C142C string=0x00000000003C1430 "!"
 *   insn=0x00000000003C1434 string=0x00000000003C1438 "\t"
 *   insn=0x00000000003C1434 string=0x00000000003C14B0 "\t"
 *   insn=0x00000000003C1438 string=0x00000000003C143C "*"
 *   insn=0x00000000003C143C string=0x00000000003C1440 "\n"
 *   insn=0x00000000003C1448 string=0x00000000003C14BC "?"
 *   insn=0x00000000003C144C string=0x00000000003C1450 ")=G"
 *   insn=0x00000000003C1450 string=0x00000000003C1454 "!"
 *   insn=0x00000000003C1458 string=0x00000000003C145C "\t"
 *   insn=0x00000000003C1458 string=0x00000000003C14D0 "\t"
 *   insn=0x00000000003C145C string=0x00000000003C1460 "*"
 *   insn=0x00000000003C1460 string=0x00000000003C1464 "\n"
 *   insn=0x00000000003C146C string=0x00000000003C14DC "?"
 *   insn=0x00000000003C1470 string=0x00000000003C1474 "*"
 *   insn=0x00000000003C1474 string=0x00000000003C1478 "\n"
 *   insn=0x00000000003C1488 string=0x00000000003C148C ":"
 *   insn=0x00000000003C1490 string=0x00000000003C1494 "*"
 *   insn=0x00000000003C1494 string=0x00000000003C1498 "\n"
 *   insn=0x00000000003C149C string=0x00000000003C14A0 "l"
 *   insn=0x00000000003C14A8 string=0x00000000003C14AC "H"
 *   insn=0x00000000003C14B0 string=0x00000000003C14B4 "*"
 *   insn=0x00000000003C14B4 string=0x00000000003C14B8 "\n"
 *   insn=0x00000000003C14BC string=0x00000000003C14C0 ","
 *   insn=0x00000000003C14C8 string=0x00000000003C14CC "V"
 *   insn=0x00000000003C14D0 string=0x00000000003C14D4 "*"
 *   insn=0x00000000003C14D4 string=0x00000000003C14D8 "\n"
 *   insn=0x00000000003C14E8 string=0x00000000003C14EC "d"
 *   insn=0x00000000003C14F0 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003C14FC string=0x00000000003C1500 "W"
 *   insn=0x00000000003C1508 string=0x00000000003C150C "(a"
 *   insn=0x00000000003C1510 string=0x00000000003C1514 "`\n"
 *   insn=0x00000000003C1514 string=0x00000000003C1518 "\n"
 *   insn=0x00000000003C1518 string=0x00000000003C151C "J=G"
 *   insn=0x00000000003C151C string=0x00000000003C1520 ")!"
 *   insn=0x00000000003C1524 string=0x00000000003C1528 "*"
 *   insn=0x00000000003C1524 string=0x00000000003C163C "*"
 *   insn=0x00000000003C1528 string=0x00000000003C152C "K"
 *   insn=0x00000000003C152C string=0x00000000003C1530 "+"
 *   insn=0x00000000003C1534 string=0x00000000003C1538 ":"
 *   insn=0x00000000003C1538 string=0x00000000003C1620 "_"
 *   insn=0x00000000003C1540 string=0x00000000003C1544 "(a"
 *   insn=0x00000000003C154C string=0x00000000003C1550 "\n"
 *   insn=0x00000000003C1550 string=0x00000000003C1554 "J=G"
 *   insn=0x00000000003C1554 string=0x00000000003C1558 ")!"
 *   insn=0x00000000003C1558 string=0x00000000003C155C "\n"
 *   insn=0x00000000003C155C string=0x00000000003C1560 "*"
 *   insn=0x00000000003C1560 string=0x00000000003C1564 "K"
 *   insn=0x00000000003C1564 string=0x00000000003C1568 "+"
 *   insn=0x00000000003C156C string=0x00000000003C1570 ","
 *   insn=0x00000000003C1578 string=0x00000000003C157C "(a"
 *   insn=0x00000000003C1584 string=0x00000000003C1588 "\n"
 *   insn=0x00000000003C1588 string=0x00000000003C158C "J=G"
 *   insn=0x00000000003C158C string=0x00000000003C1590 ")!"
 *   insn=0x00000000003C1590 string=0x00000000003C1594 "J"
 *   insn=0x00000000003C1594 string=0x00000000003C1598 "*"
 *   insn=0x00000000003C1598 string=0x00000000003C159C "K"
 *   insn=0x00000000003C159C string=0x00000000003C15A0 "+"
 *   insn=0x00000000003C15B0 string=0x00000000003C15B4 "(a"
 *   insn=0x00000000003C15B8 string=0x00000000003C15BC " "
 *   insn=0x00000000003C15BC string=0x00000000003C15C0 "\n"
 *   insn=0x00000000003C15C0 string=0x00000000003C15C4 "J=G"
 *   insn=0x00000000003C15C4 string=0x00000000003C15C8 ")!"
 *   insn=0x00000000003C15CC string=0x00000000003C15D0 "*"
 *   insn=0x00000000003C15D0 string=0x00000000003C15D4 "K"
 *   insn=0x00000000003C15D4 string=0x00000000003C15D8 "+"
 *   insn=0x00000000003C15E4 string=0x00000000003C15E8 "*"
 *   insn=0x00000000003C15E8 string=0x00000000003C15EC "J"
 *   insn=0x00000000003C15F0 string=0x00000000003C15F4 "(a"
 *   insn=0x00000000003C15F8 string=0x00000000003C15FC " "
 *   insn=0x00000000003C15FC string=0x00000000003C1600 "\n"
 *   insn=0x00000000003C1600 string=0x00000000003C1604 "J=G"
 *   insn=0x00000000003C1604 string=0x00000000003C1608 ")!"
 *   insn=0x00000000003C160C string=0x00000000003C1610 "*"
 *   insn=0x00000000003C1610 string=0x00000000003C1614 "K"
 *   insn=0x00000000003C1614 string=0x00000000003C1618 "+"
 *   insn=0x00000000003C162C string=0x00000000003C1630 "]"
 *   insn=0x00000000003C163C string=0x00000000003C1640 "K"
 *   insn=0x00000000003C1640 string=0x00000000003C1644 "+"
 *   insn=0x00000000003C1644 string=0x00000000003C1648 "_"
 *   insn=0x00000000003C165C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::DateTime *__fastcall Caver::PlayerProfile::SaveToProtobufMessage(
        Caver::DateTime *this,
        Caver::Proto::PlayerProfile *a2)
{
  __int64 v2; // x20
  __int64 v4; // d0
  __int64 *v5; // x0
  __int64 *v6; // x0
  Caver::Proto::DateTime *v7; // x21
  __int64 *v8; // x0
  void *v9; // x0
  Caver::GameState *v10; // x0
  int v11; // w8
  int v12; // w9
  int v13; // s0
  int v14; // w8
  unsigned int *v15; // x8
  int v16; // w9
  int v17; // w9
  __int64 v18; // x9
  __int64 *v19; // x0
  void *v20; // x0
  __int64 *v21; // x0
  void *v22; // x0
  __int64 *v23; // x0
  void *v24; // x0
  __int64 *v25; // x0
  void *v26; // x0
  __int64 i; // x21
  int v28; // w8
  __int64 v29; // x9
  __int64 v30; // x8
  __int64 v31; // x23
  __int64 v32; // x8
  __int64 v33; // x9
  __int64 *v34; // x0
  int v35; // w8
  int v36; // w8
  Caver::Proto::GameState *v37; // x21
  Caver::GameState *v38; // x20
  unsigned int *v39; // x8
  int v40; // w9
  unsigned int *v41; // x8
  int v42; // w9
  unsigned int *v43; // x8
  int v44; // w9
  unsigned int *v45; // x8
  int v46; // w9
  __int64 v47[3]; // [xsp+8h] [xbp-68h] BYREF

  v2 = (__int64)this;
  v47[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( !*((_QWORD *)this + 16) )
    return this;
  Caver::DateTime::Now(this);
  *(_QWORD *)(v2 + 40) = v4;
  v5 = (__int64 *)*((_QWORD *)a2 + 20);
  *((_DWORD *)a2 + 42) |= 0x2000u;
  if ( v5 == &Caver::Proto::PlayerProfile::_default_identifier_ )
  {
    v5 = (__int64 *)operator new(8u);
    *v5 = (__int64)&byte_6FD2F8;
    *((_QWORD *)a2 + 20) = v5;
  }
  sub_56A6A8(v5);
  v6 = (__int64 *)*((_QWORD *)a2 + 2);
  *((_DWORD *)a2 + 42) |= 1u;
  if ( v6 == &Caver::Proto::PlayerProfile::_default_name_ )
  {
    v6 = (__int64 *)operator new(8u);
    *v6 = (__int64)&byte_6FD2F8;
    *((_QWORD *)a2 + 2) = v6;
  }
  sub_56A6A8(v6);
  v7 = (Caver::Proto::DateTime *)*((_QWORD *)a2 + 3);
  *((_DWORD *)a2 + 42) |= 2u;
  if ( !v7 )
  {
    v7 = (Caver::Proto::DateTime *)operator new(0x20u);
    Caver::Proto::DateTime::DateTime(v7);
    *((_QWORD *)a2 + 3) = v7;
  }
  Caver::DateTime::SaveToProtobufMessage((Caver::DateTime *)(v2 + 40), v7);
  Caver::PlayerProfile::currentLevelTitle((Caver::PlayerProfile *)v2);
  v8 = (__int64 *)*((_QWORD *)a2 + 4);
  *((_DWORD *)a2 + 42) |= 4u;
  if ( v8 == &Caver::Proto::PlayerProfile::_default_current_level_title_ )
  {
    v8 = (__int64 *)operator new(8u);
    *v8 = (__int64)&byte_6FD2F8;
    *((_QWORD *)a2 + 4) = v8;
  }
  sub_56A6A8(v8);
  v9 = (void *)(v47[0] - 24);
  if ( (__int64 *)(v47[0] - 24) == &qword_6FD2E0 )
    goto LABEL_11;
  v15 = (unsigned int *)(v47[0] - 8);
  if ( &pthread_create )
  {
    do
      v16 = __ldaxr(v15);
    while ( __stlxr(v16 - 1, v15) );
  }
  else
  {
    v16 = (*v15)--;
  }
  if ( v16 > 0 )
  {
LABEL_11:
    v10 = *(Caver::GameState **)(v2 + 128);
    if ( !v10 )
    {
LABEL_19:
      v17 = *(_DWORD *)(v2 + 56);
      v14 = *((_DWORD *)a2 + 42) | 8;
      *((_DWORD *)a2 + 42) = v14;
      *((_DWORD *)a2 + 10) = v17;
      v13 = *(_DWORD *)(v2 + 60);
      goto LABEL_20;
    }
  }
  else
  {
    operator delete(v9);
    v10 = *(Caver::GameState **)(v2 + 128);
    if ( !v10 )
      goto LABEL_19;
  }
  v11 = *((_DWORD *)v10 + 46);
  *(_DWORD *)(v2 + 56) = v11;
  v12 = *((_DWORD *)a2 + 42);
  *((_DWORD *)a2 + 10) = v11;
  *((_DWORD *)a2 + 42) = v12 | 8;
  Caver::GameState::PercentCompleted(v10);
  *(_DWORD *)(v2 + 60) = v13;
  v14 = *((_DWORD *)a2 + 42);
LABEL_20:
  *((_DWORD *)a2 + 11) = v13;
  v18 = *(_QWORD *)(v2 + 64);
  *((_DWORD *)a2 + 42) = v14 | 0x30;
  *((_QWORD *)a2 + 6) = v18;
  Caver::PlayerProfile::equippedWeaponName((Caver::PlayerProfile *)v2);
  v19 = (__int64 *)*((_QWORD *)a2 + 8);
  *((_DWORD *)a2 + 42) |= 0x80u;
  if ( v19 == &Caver::Proto::PlayerProfile::_default_equipped_weapon_name_ )
  {
    v19 = (__int64 *)operator new(8u);
    *v19 = (__int64)&byte_6FD2F8;
    *((_QWORD *)a2 + 8) = v19;
  }
  sub_56A6A8(v19);
  v20 = (void *)(v47[0] - 24);
  if ( (__int64 *)(v47[0] - 24) != &qword_6FD2E0 )
  {
    v39 = (unsigned int *)(v47[0] - 8);
    if ( &pthread_create )
    {
      do
        v40 = __ldaxr(v39);
      while ( __stlxr(v40 - 1, v39) );
    }
    else
    {
      v40 = (*v39)--;
    }
    if ( v40 <= 0 )
      operator delete(v20);
  }
  Caver::PlayerProfile::equippedArmorName(v47, (Caver::PlayerProfile *)v2);
  v21 = (__int64 *)*((_QWORD *)a2 + 9);
  *((_DWORD *)a2 + 42) |= 0x100u;
  if ( v21 == &Caver::Proto::PlayerProfile::_default_equipped_armor_name_ )
  {
    v21 = (__int64 *)operator new(8u);
    *v21 = (__int64)&byte_6FD2F8;
    *((_QWORD *)a2 + 9) = v21;
  }
  sub_56A6A8(v21);
  v22 = (void *)(v47[0] - 24);
  if ( (__int64 *)(v47[0] - 24) != &qword_6FD2E0 )
  {
    v41 = (unsigned int *)(v47[0] - 8);
    if ( &pthread_create )
    {
      do
        v42 = __ldaxr(v41);
      while ( __stlxr(v42 - 1, v41) );
    }
    else
    {
      v42 = (*v41)--;
    }
    if ( v42 <= 0 )
      operator delete(v22);
  }
  Caver::PlayerProfile::weaponTrinketName((Caver::PlayerProfile *)v2);
  v23 = (__int64 *)*((_QWORD *)a2 + 10);
  *((_DWORD *)a2 + 42) |= 0x200u;
  if ( v23 == &Caver::Proto::PlayerProfile::_default_weapon_trinket_name_ )
  {
    v23 = (__int64 *)operator new(8u);
    *v23 = (__int64)&byte_6FD2F8;
    *((_QWORD *)a2 + 10) = v23;
  }
  sub_56A6A8(v23);
  v24 = (void *)(v47[0] - 24);
  if ( (__int64 *)(v47[0] - 24) != &qword_6FD2E0 )
  {
    v43 = (unsigned int *)(v47[0] - 8);
    if ( &pthread_create )
    {
      do
        v44 = __ldaxr(v43);
      while ( __stlxr(v44 - 1, v43) );
    }
    else
    {
      v44 = (*v43)--;
    }
    if ( v44 <= 0 )
      operator delete(v24);
  }
  Caver::PlayerProfile::armorTrinketName((Caver::PlayerProfile *)v2);
  v25 = (__int64 *)*((_QWORD *)a2 + 11);
  *((_DWORD *)a2 + 42) |= 0x400u;
  if ( v25 == &Caver::Proto::PlayerProfile::_default_armor_trinket_name_ )
  {
    v25 = (__int64 *)operator new(8u);
    *v25 = (__int64)&byte_6FD2F8;
    *((_QWORD *)a2 + 11) = v25;
  }
  sub_56A6A8(v25);
  v26 = (void *)(v47[0] - 24);
  if ( (__int64 *)(v47[0] - 24) != &qword_6FD2E0 )
  {
    v45 = (unsigned int *)(v47[0] - 8);
    if ( &pthread_create )
    {
      do
        v46 = __ldaxr(v45);
      while ( __stlxr(v46 - 1, v45) );
    }
    else
    {
      v46 = (*v45)--;
    }
    if ( v46 <= 0 )
      operator delete(v26);
  }
  for ( i = *(_QWORD *)(v2 + 168); v2 + 152 != i; i = sub_54C6A0(i) )
  {
    v28 = *((_DWORD *)a2 + 27);
    v29 = *((int *)a2 + 26);
    if ( (int)v29 >= v28 )
    {
      if ( v28 == *((_DWORD *)a2 + 28) )
      {
        google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
          (Caver::Proto::PlayerProfile *)((char *)a2 + 96),
          v28 + 1);
        v28 = *((_DWORD *)a2 + 27);
      }
      *((_DWORD *)a2 + 27) = v28 + 1;
      v31 = operator new(0x20u);
      Caver::Proto::PlayerProfile_Counter::PlayerProfile_Counter((Caver::Proto::PlayerProfile_Counter *)v31);
      v32 = *((int *)a2 + 26);
      v33 = *((_QWORD *)a2 + 12);
      *((_DWORD *)a2 + 26) = v32 + 1;
      *(_QWORD *)(v33 + 8 * v32) = v31;
    }
    else
    {
      v30 = *((_QWORD *)a2 + 12);
      *((_DWORD *)a2 + 26) = v29 + 1;
      v31 = *(_QWORD *)(v30 + 8 * v29);
    }
    v34 = *(__int64 **)(v31 + 16);
    *(_DWORD *)(v31 + 28) |= 1u;
    if ( v34 == &Caver::Proto::PlayerProfile_Counter::_default_name_ )
    {
      v34 = (__int64 *)operator new(8u);
      *v34 = (__int64)&byte_6FD2F8;
      *(_QWORD *)(v31 + 16) = v34;
    }
    sub_56A6A8(v34);
    v35 = *(_DWORD *)(v31 + 28) | 2;
    *(_DWORD *)(v31 + 24) = *(_DWORD *)(i + 40);
    *(_DWORD *)(v31 + 28) = v35;
  }
  v36 = *((_DWORD *)a2 + 42);
  if ( *(_BYTE *)(v2 + 192) )
  {
    v36 |= 0x1000u;
    *((_DWORD *)a2 + 42) = v36;
    *((_BYTE *)a2 + 152) = 1;
  }
  v37 = (Caver::Proto::GameState *)*((_QWORD *)a2 + 7);
  v38 = *(Caver::GameState **)(v2 + 128);
  *((_DWORD *)a2 + 42) = v36 | 0x40;
  if ( !v37 )
  {
    v37 = (Caver::Proto::GameState *)operator new(0x120u);
    Caver::Proto::GameState::GameState(v37);
    *((_QWORD *)a2 + 7) = v37;
  }
  return (Caver::DateTime *)Caver::GameState::SaveToProtobufMessage(v38, v37);
}

