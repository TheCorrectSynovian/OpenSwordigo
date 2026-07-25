/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000053CB20
 * Mangled: sub_53CB20
 * Demangled: sub_53CB20
 *
 * Callers: 4
 *   0x000000000053D774  sub_53D774
 *   0x000000000053D7B8  sub_53D7B8
 *   0x000000000053DA84  sub_53DA84
 *   0x000000000053DB28  sub_53DB28
 *
 * Callees: 21
 *   0x00000000001F8280  .__cxa_call_unexpected
 *   0x0000000000520050  sub_520050
 *   0x00000000005202A8  sub_5202A8
 *   0x000000000052C8FC  sub_52C8FC
 *   0x000000000052CE9C  sub_52CE9C
 *   0x000000000053B7BC  nullsub_2
 *   0x000000000053BE10  sub_53BE10
 *   0x000000000053BE7C  sub_53BE7C
 *   0x000000000053C4D0  sub_53C4D0
 *   0x000000000053C520  sub_53C520
 *   0x000000000053E704  sub_53E704
 *   0x000000000053E890  sub_53E890
 *   0x000000000053EB8C  sub_53EB8C
 *   0x000000000053ECF0  sub_53ECF0
 *   0x000000000053EFC4  sub_53EFC4
 *   0x000000000053F19C  sub_53F19C
 *   0x000000000054EC54  sub_54EC54
 *   0x000000000054F1F4  sub_54F1F4
 *   0x0000000000570964  sub_570964
 *   0x0000000000570A0C  sub_570A0C
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 240
 *   insn=0x000000000053CB4C string=0x000000000053CB50 "c"
 *   insn=0x000000000053CB58 string=0x000000000053CB5C "a\n"
 *   insn=0x000000000053CB68 string=0x000000000053CB6C "d"
 *   insn=0x000000000053CB6C string=0x000000000053CB70 "c"
 *   insn=0x000000000053CB74 string=0x000000000053CB80 "_h "
 *   insn=0x000000000053CB78 string=0x000000000053CB7C "b"
 *   insn=0x000000000053CB80 string=0x000000000053CB84 "?h "
 *   insn=0x000000000053CB8C string=0x000000000053CB90 "A"
 *   insn=0x000000000053CB90 string=0x000000000053CB78 "a"
 *   insn=0x000000000053CBA0 string=0x000000000053CBA4 "t"
 *   insn=0x000000000053CBC4 string=0x000000000053CBC8 "d"
 *   insn=0x000000000053CBC8 string=0x000000000053CBCC "#"
 *   insn=0x000000000053CBD8 string=0x000000000053CBDC "d"
 *   insn=0x000000000053CBE0 string=0x000000000053CBE4 "d"
 *   insn=0x000000000053CBEC string=0x000000000053CBF0 "A"
 *   insn=0x000000000053CBF8 string=0x000000000053CBFC "!(G"
 *   insn=0x000000000053CBFC string=0x000000000053CC00 "H"
 *   insn=0x000000000053CC04 string=0x000000000053CC08 "!"
 *   insn=0x000000000053CC0C string=0x000000000053CC10 "U"
 *   insn=0x000000000053CC10 string=0x000000000053CC14 "A"
 *   insn=0x000000000053CC1C string=0x000000000053CC20 "!"
 *   insn=0x000000000053CC20 string=0x000000000053CC24 "?"
 *   insn=0x000000000053CC24 string=0x000000000053CC28 "D"
 *   insn=0x000000000053CC28 string=0x000000000053CC2C "C"
 *   insn=0x000000000053CC2C string=0x000000000053CC30 ""
 *   insn=0x000000000053CC34 string=0x000000000053CC38 "bC"
 *   insn=0x000000000053CC40 string=0x000000000053CC44 "&"
 *   insn=0x000000000053CC44 string=0x000000000053CC48 "c"
 *   insn=0x000000000053CC54 string=0x000000000053CC58 "c@"
 *   insn=0x000000000053CC58 string=0x000000000053CC5C "F"
 *   insn=0x000000000053CC5C string=0x000000000053CC60 "_"
 *   insn=0x000000000053CC60 string=0x000000000053CC64 "_"
 *   insn=0x000000000053CC64 string=0x000000000053CC68 "_"
 *   insn=0x000000000053CC68 string=0x000000000053CC6C "_"
 *   insn=0x000000000053CC6C string=0x000000000053CC70 "_"
 *   insn=0x000000000053CC70 string=0x000000000053CC74 "_"
 *   insn=0x000000000053CC74 string=0x000000000053CC78 "_ "
 *   insn=0x000000000053CC78 string=0x000000000053CC7C "_ "
 *   insn=0x000000000053CC7C string=0x000000000053CC80 "_$"
 *   insn=0x000000000053CC80 string=0x000000000053CC84 "_ "
 *   insn=0x000000000053CC8C string=0x000000000053CC90 "d+"
 *   insn=0x000000000053CC98 string=0x000000000053CC9C "A"
 *   insn=0x000000000053CCA4 string=0x000000000053CCA8 "!"
 *   insn=0x000000000053CCAC string=0x000000000053CCB0 "C"
 *   insn=0x000000000053CCB4 string=0x000000000053CCB8 "A"
 *   insn=0x000000000053CCBC string=0x000000000053CCC0 "&"
 *   insn=0x000000000053CCC4 string=0x000000000053CCC8 "chE"
 *   insn=0x000000000053CCCC string=0x000000000053CCD0 "!0F"
 *   insn=0x000000000053CCD0 string=0x000000000053CCD4 "c@"
 *   insn=0x000000000053CCE0 string=0x000000000053CCE4 "C"
 *   insn=0x000000000053CCE8 string=0x000000000053CCEC "A"
 *   insn=0x000000000053CCF0 string=0x000000000053CCF4 "&"
 *   insn=0x000000000053CCF8 string=0x000000000053CCFC "c"
 *   insn=0x000000000053CD00 string=0x000000000053CD04 "!"
 *   insn=0x000000000053CD04 string=0x000000000053CD08 "c@"
 *   insn=0x000000000053CD14 string=0x000000000053CD18 "@"
 *   insn=0x000000000053CD20 string=0x000000000053CD24 """
 *   insn=0x000000000053CD28 string=0x000000000053CD2C """
 *   insn=0x000000000053CD34 string=0x000000000053CD38 "6"
 *   insn=0x000000000053CD38 string=0x000000000053CD3C "A"
 *   insn=0x000000000053CD38 string=0x000000000053BE10 "@"
 *   insn=0x000000000053CD44 string=0x000000000053CD48 "!4@"
 *   insn=0x000000000053CD54 string=0x000000000053CD58 "E"
 *   insn=0x000000000053CD58 string=0x000000000053CD5C "D"
 *   insn=0x000000000053CD64 string=0x000000000053CD68 "C"
 *   insn=0x000000000053CD70 string=0x000000000053CD74 "'"
 *   insn=0x000000000053CD8C string=0x000000000053CD90 "g"
 *   insn=0x000000000053CDEC string=0x000000000053CDF0 "EC"
 *   insn=0x000000000053CDF8 string=0x000000000053CDFC "A"
 *   insn=0x000000000053CE04 string=0x000000000053CE08 "!"
 *   insn=0x000000000053CE0C string=0x000000000053CE10 "E"
 *   insn=0x000000000053CE10 string=0x000000000053CE14 "D"
 *   insn=0x000000000053CE1C string=0x000000000053CE20 "#"
 *   insn=0x000000000053CE28 string=0x000000000053CE2C "'"
 *   insn=0x000000000053CE44 string=0x000000000053CE48 "g"
 *   insn=0x000000000053CEA4 string=0x000000000053CEA8 "%c"
 *   insn=0x000000000053CEB0 string=0x000000000053CEB4 "A"
 *   insn=0x000000000053CEBC string=0x000000000053CEC0 "!0B"
 *   insn=0x000000000053CEC4 string=0x000000000053CEC8 "C"
 *   insn=0x000000000053CECC string=0x000000000053CED0 "A"
 *   insn=0x000000000053CED4 string=0x000000000053CED8 "&"
 *   insn=0x000000000053CEDC string=0x000000000053CEE0 "c"
 *   insn=0x000000000053CEE4 string=0x000000000053CEE8 "!"
 *   insn=0x000000000053CEE8 string=0x000000000053CEEC "c@"
 *   insn=0x000000000053CEF8 string=0x000000000053CEFC "C"
 *   insn=0x000000000053CF00 string=0x000000000053CF04 "A"
 *   insn=0x000000000053CF08 string=0x000000000053CF0C "&"
 *   insn=0x000000000053CF10 string=0x000000000053CF14 "c"
 *   insn=0x000000000053CF18 string=0x000000000053CF1C "!|G"
 *   insn=0x000000000053CF1C string=0x000000000053CF20 "c@"
 *   insn=0x000000000053CF28 string=0x000000000053CF2C "}"
 *   insn=0x000000000053CF2C string=0x000000000053CF30 "D"
 *   insn=0x000000000053CF3C string=0x000000000053CF40 "%"
 *   insn=0x000000000053CF50 string=0x000000000053CF54 """
 *   insn=0x000000000053CF54 string=0x000000000053CF58 "e"
 *   insn=0x000000000053D01C string=0x000000000053D020 "7"
 *   insn=0x000000000053D020 string=0x000000000053D024 "A"
 *   insn=0x000000000053D02C string=0x000000000053D030 "!"
 *   insn=0x000000000053D030 string=0x000000000053D034 ";"
 *   insn=0x000000000053D034 string=0x000000000053D038 "C"
 *   insn=0x000000000053D03C string=0x000000000053D040 "A"
 *   insn=0x000000000053D044 string=0x000000000053D048 "&"
 *   insn=0x000000000053D04C string=0x000000000053D050 "cLF"
 *   insn=0x000000000053D054 string=0x000000000053D058 "!xF"
 *   insn=0x000000000053D058 string=0x000000000053D05C "c@"
 *   insn=0x000000000053D064 string=0x000000000053D068 "."
 *   insn=0x000000000053D068 string=0x000000000053D06C "C"
 *   insn=0x000000000053D070 string=0x000000000053D074 "A"
 *   insn=0x000000000053D078 string=0x000000000053D07C "&"
 *   insn=0x000000000053D080 string=0x000000000053D084 "c"
 *   insn=0x000000000053D088 string=0x000000000053D08C "!"
 *   insn=0x000000000053D08C string=0x000000000053D090 "c@"
 *   insn=0x000000000053D098 string=0x000000000053D09C "!"
 *   insn=0x000000000053D0A0 string=0x000000000053D0A4 "!"
 *   insn=0x000000000053D0A8 string=0x000000000053D0AC "|"
 *   insn=0x000000000053D0AC string=0x000000000053D0B0 "A"
 *   insn=0x000000000053D0B8 string=0x000000000053D0BC "!"
 *   insn=0x000000000053D0C4 string=0x000000000053D0C8 "!"
 *   insn=0x000000000053D0D0 string=0x000000000053D0D4 "A"
 *   insn=0x000000000053D0DC string=0x000000000053D0E0 "!"
 *   insn=0x000000000053D0E8 string=0x000000000053D0EC "!"
 *   insn=0x000000000053D0F0 string=0x000000000053D0F4 "F"
 *   insn=0x000000000053D0F4 string=0x000000000053D0F8 "A"
 *   insn=0x000000000053D100 string=0x000000000053D104 "!"
 *   insn=0x000000000053D108 string=0x000000000053D10C "D"
 *   insn=0x000000000053D10C string=0x000000000053D110 "C"
 *   insn=0x000000000053D124 string=0x000000000053D128 "&"
 *   insn=0x000000000053D128 string=0x000000000053D12C "c C"
 *   insn=0x000000000053D138 string=0x000000000053D13C "c@"
 *   insn=0x000000000053D13C string=0x000000000053D140 "F"
 *   insn=0x000000000053D140 string=0x000000000053D144 "_"
 *   insn=0x000000000053D144 string=0x000000000053D148 "_"
 *   insn=0x000000000053D148 string=0x000000000053D14C "_"
 *   insn=0x000000000053D14C string=0x000000000053D150 "_"
 *   insn=0x000000000053D150 string=0x000000000053D154 "_"
 *   insn=0x000000000053D154 string=0x000000000053D158 "_"
 *   insn=0x000000000053D158 string=0x000000000053D15C "_ "
 *   insn=0x000000000053D15C string=0x000000000053D160 "_H"
 *   insn=0x000000000053D160 string=0x000000000053D164 "_L"
 *   insn=0x000000000053D164 string=0x000000000053D168 "_ "
 *   insn=0x000000000053D178 string=0x000000000053D17C ""
 *   insn=0x000000000053D17C string=0x000000000053D180 "A"
 *   insn=0x000000000053D188 string=0x000000000053D18C "!"
 *   insn=0x000000000053D190 string=0x000000000053D194 "C"
 *   insn=0x000000000053D198 string=0x000000000053D19C "A"
 *   insn=0x000000000053D1A0 string=0x000000000053D1A4 "&"
 *   insn=0x000000000053D1A8 string=0x000000000053D1AC "c"
 *   insn=0x000000000053D1B0 string=0x000000000053D1B4 "!,F"
 *   insn=0x000000000053D1B4 string=0x000000000053D1B8 "c@"
 *   insn=0x000000000053D1C4 string=0x000000000053D1C8 "C"
 *   insn=0x000000000053D1CC string=0x000000000053D1D0 "A"
 *   insn=0x000000000053D1D4 string=0x000000000053D1D8 "&"
 *   insn=0x000000000053D1DC string=0x000000000053D1E0 "c"
 *   insn=0x000000000053D1E4 string=0x000000000053D1E8 "!`@"
 *   insn=0x000000000053D1E8 string=0x000000000053D1EC "c@"
 *   insn=0x000000000053D1F8 string=0x000000000053D1FC "@"
 *   insn=0x000000000053D204 string=0x000000000053D208 """
 *   insn=0x000000000053D20C string=0x000000000053D210 """
 *   insn=0x000000000053D21C string=0x000000000053D220 "A"
 *   insn=0x000000000053D228 string=0x000000000053D22C "!H@"
 *   insn=0x000000000053D238 string=0x000000000053D23C "%"
 *   insn=0x000000000053D23C string=0x000000000053D240 "$"
 *   insn=0x000000000053D254 string=0x000000000053D258 "'"
 *   insn=0x000000000053D270 string=0x000000000053D274 "g"
 *   insn=0x000000000053D2DC string=0x000000000053D2E0 "A"
 *   insn=0x000000000053D2E8 string=0x000000000053D2EC "!|C"
 *   insn=0x000000000053D2F0 string=0x000000000053D2F4 "E"
 *   insn=0x000000000053D2F4 string=0x000000000053D2F8 "D"
 *   insn=0x000000000053D30C string=0x000000000053D310 "'"
 *   insn=0x000000000053D328 string=0x000000000053D32C "g"
 *   insn=0x000000000053D394 string=0x000000000053D398 "A"
 *   insn=0x000000000053D3A0 string=0x000000000053D3A4 "!pC"
 *   insn=0x000000000053D3A4 string=0x000000000053D3A8 "^"
 *   insn=0x000000000053D3A8 string=0x000000000053D3AC "C"
 *   insn=0x000000000053D3B0 string=0x000000000053D3B4 "A"
 *   insn=0x000000000053D3B8 string=0x000000000053D3BC "&"
 *   insn=0x000000000053D3C0 string=0x000000000053D3C4 "cXB"
 *   insn=0x000000000053D3C8 string=0x000000000053D3CC "!"
 *   insn=0x000000000053D3CC string=0x000000000053D3D0 "c@"
 *   insn=0x000000000053D3D8 string=0x000000000053D3DC "Q"
 *   insn=0x000000000053D3DC string=0x000000000053D3E0 "C"
 *   insn=0x000000000053D3E4 string=0x000000000053D3E8 "A"
 *   insn=0x000000000053D3EC string=0x000000000053D3F0 "&"
 *   insn=0x000000000053D3F4 string=0x000000000053D3F8 "c<E"
 *   insn=0x000000000053D3FC string=0x000000000053D400 "!XG"
 *   insn=0x000000000053D400 string=0x000000000053D404 "c@"
 *   insn=0x000000000053D40C string=0x000000000053D410 "D"
 *   insn=0x000000000053D410 string=0x000000000053D414 "$"
 *   insn=0x000000000053D420 string=0x000000000053D424 "%"
 *   insn=0x000000000053D434 string=0x000000000053D438 """
 *   insn=0x000000000053D438 string=0x000000000053D43C "e"
 *   insn=0x000000000053D504 string=0x000000000053D508 "A"
 *   insn=0x000000000053D510 string=0x000000000053D514 "!xG"
 *   insn=0x000000000053D518 string=0x000000000053D51C "C"
 *   insn=0x000000000053D520 string=0x000000000053D524 "A"
 *   insn=0x000000000053D528 string=0x000000000053D52C "&"
 *   insn=0x000000000053D530 string=0x000000000053D534 "c"
 *   insn=0x000000000053D538 string=0x000000000053D53C "!\G"
 *   insn=0x000000000053D53C string=0x000000000053D540 "c@"
 *   insn=0x000000000053D54C string=0x000000000053D550 "#"
 *   insn=0x000000000053D554 string=0x000000000053D558 "A"
 *   insn=0x000000000053D55C string=0x000000000053D560 "&"
 *   insn=0x000000000053D564 string=0x000000000053D568 "c"
 *   insn=0x000000000053D56C string=0x000000000053D570 "!"
 *   insn=0x000000000053D570 string=0x000000000053D574 "c@"
 *   insn=0x000000000053D584 string=0x000000000053D588 "!"
 *   insn=0x000000000053D590 string=0x000000000053D594 "!"
 *   insn=0x000000000053D59C string=0x000000000053D5A0 "!"
 *   insn=0x000000000053D5A4 string=0x000000000053D5A8 "@"
 *   insn=0x000000000053D5A8 string=0x000000000053D5AC "|"
 *   insn=0x000000000053D5AC string=0x000000000053D5B0 "{C"
 *   insn=0x000000000053D5B0 string=0x000000000053D5B4 "Z"
 *   insn=0x000000000053D5B4 string=0x000000000053D5B8 "9"
 *   insn=0x000000000053D5D8 string=0x000000000053D5DC "@"
 *   insn=0x000000000053D5DC string=0x000000000053D5E0 "{"
 *   insn=0x000000000053D5E8 string=0x000000000053D5EC "z{ "
 *   insn=0x000000000053D5EC string=0x000000000053D5F0 "@"
 *   insn=0x000000000053D5F0 string=0x000000000053D5F4 "z"
 *   insn=0x000000000053D5FC string=0x000000000053D600 "Y{ "
 *   insn=0x000000000053D600 string=0x000000000053D604 "@"
 *   insn=0x000000000053D604 string=0x000000000053D608 "y"
 *   insn=0x000000000053D610 string=0x000000000053D614 "8{ "
 *   insn=0x000000000053D614 string=0x000000000053D618 "@"
 *   insn=0x000000000053D618 string=0x000000000053D61C "x"
 *   insn=0x000000000053D628 string=0x000000000053D62C "@"
 *   insn=0x000000000053D62C string=0x000000000053D630 "w"
 *   insn=0x000000000053D63C string=0x000000000053D640 "@"
 *   insn=0x000000000053D640 string=0x000000000053D644 "v"
 *   insn=0x000000000053D650 string=0x000000000053D654 "@"
 *   insn=0x000000000053D654 string=0x000000000053D658 "s"
 *   insn=0x000000000053D660 string=0x000000000053D664 "tz "
 *   insn=0x000000000053D684 string=0x000000000053D688 "@"
 *   insn=0x000000000053D698 string=0x000000000053D69C "H"
 *   insn=0x000000000053D6A8 string=0x000000000053D684 "?"
 *   insn=0x000000000053D6B4 string=0x000000000053D6B8 "A"
 *   insn=0x000000000053D6D0 string=0x000000000053D6D4 ":"
 *   insn=0x000000000053D6EC string=0x000000000053D6F0 "3"
 *   insn=0x000000000053D708 string=0x000000000053D70C ","
 *   insn=0x000000000053D724 string=0x000000000053D728 "%"
 *   insn=0x000000000053D770 string=0x00000000001F8280 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_53CB20(__int64 a1, int a2)
{
  __int64 v3; // x0
  char *v4; // x2
  char *v5; // x1
  __int16 v6; // w5
  __int64 v7; // x4
  __int64 v8; // x28
  __int64 v9; // x27
  __int64 v10; // x26
  __int64 v11; // x25
  __int64 v12; // x24
  __int64 v13; // x23
  __int64 v14; // x22
  __int64 v15; // x19
  __int64 result; // x0

  *(_DWORD *)a1 = a2;
  v3 = 0;
  *(_QWORD *)(a1 + 16) = 28;
  v4 = (char *)&unk_6FD0F0;
  *(_QWORD *)(a1 + 32) = 0;
  v5 = (char *)&unk_6FCF70;
  *(_QWORD *)(a1 + 8) = &unk_6FCF70;
  for ( *(_QWORD *)(a1 + 24) = &unk_6FD0F0; ; v4 = *(char **)(a1 + 24) )
  {
    *(_QWORD *)&v4[v3] = 0;
    *(_QWORD *)&v5[v3] = 0;
    v3 += 8;
    if ( v3 == 224 )
      break;
    v5 = *(char **)(a1 + 8);
  }
  *(_QWORD *)(a1 + 32) = &qword_6FC390;
  qword_6FC390 = (__int64)&word_6FBF00;
  v6 = *(_WORD *)sub_53BE7C();
  qword_6FC3A0 = 0;
  v7 = *(_QWORD *)(a1 + 32);
  qword_6FC398 = 0;
  word_6FBF00 = v6;
  *(_QWORD *)(v7 + 24) = 0;
  *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL) = 0;
  *(_QWORD *)(*(_QWORD *)(a1 + 32) + 40LL) = 0;
  sub_5202A8((__int64)dword_6FC520, 0, 0, 1);
  sub_53C520((_DWORD *)a1, &qword_6FBD20, dword_6FC520);
  sub_570964(dword_6FC2C0, 1);
  sub_53C520((_DWORD *)a1, &qword_6FD330, dword_6FC2C0);
  dword_6FD058 = 1;
  qword_6FD060 = 0;
  qword_6FD068 = 0;
  byte_6FD070 = 0;
  qword_6FD078 = 0;
  qword_6FD080 = 0;
  qword_6FD088 = 0;
  qword_6FD090 = 0;
  byte_6FD098 = 0;
  byte_6FD099 = 0;
  byte_6FD0D8 = 0;
  dword_6FBF78 = 1;
  qword_6FBF80 = (__int64)&qword_6FD050;
  qword_6FD050 = (__int64)off_6B70C0;
  qword_6FBF70 = (__int64)&off_6DA130;
  sub_53EFC4(&qword_6FBF70, 0);
  sub_53C520((_DWORD *)a1, &qword_6FBDD0, &qword_6FBF70);
  dword_6FD208 = 1;
  qword_6FD200 = (__int64)off_6B6D20;
  sub_53C520((_DWORD *)a1, &qword_6FBDC8, &qword_6FD200);
  dword_6FC898 = 1;
  qword_6FC890 = (__int64)off_6B6DA0;
  sub_53C520((_DWORD *)a1, &qword_6FBDC0, &qword_6FC890);
  dword_6FBE68 = 1;
  qword_6FBE60 = (__int64)off_6B6C50;
  qword_6FBE70 = sub_53BE10();
  sub_53C520((_DWORD *)a1, &qword_6FBD98, &qword_6FBE60);
  dword_6FBE88 = 1;
  qword_6FBE90 = 0;
  qword_6FBE98 = 0;
  byte_6FBEA0 = 0;
  byte_6FBEA1 = 0;
  byte_6FBEA2 = 0;
  qword_6FBEA8 = 0;
  qword_6FBEB0 = 0;
  qword_6FBEB8 = 0;
  qword_6FBEC0 = 0;
  qword_6FBEC8 = 0;
  qword_6FBED0 = 0;
  dword_6FBED8 = 0;
  byte_6FBEDC = 0;
  byte_6FBEDD = 0;
  byte_6FBEDE = 0;
  byte_6FBEDF = 0;
  byte_6FBEE0 = 0;
  byte_6FBEE1 = 0;
  byte_6FBEE2 = 0;
  byte_6FBEE3 = 0;
  byte_6FBEEF = 0;
  dword_6FC828 = 1;
  qword_6FC830 = (__int64)&qword_6FBE80;
  qword_6FBE80 = (__int64)off_6B7080;
  qword_6FC820 = (__int64)&off_6DA1F0;
  sub_53E890(&qword_6FC820, 0, 0);
  sub_53C520((_DWORD *)a1, &qword_6FBDF0, &qword_6FC820);
  dword_6FCEC8 = 1;
  qword_6FCED0 = 0;
  qword_6FCED8 = 0;
  byte_6FCEE0 = 0;
  byte_6FCEE1 = 0;
  byte_6FCEE2 = 0;
  qword_6FCEE8 = 0;
  qword_6FCEF0 = 0;
  qword_6FCEF8 = 0;
  qword_6FCF00 = 0;
  qword_6FCF08 = 0;
  qword_6FCF10 = 0;
  dword_6FCF18 = 0;
  byte_6FCF1C = 0;
  byte_6FCF1D = 0;
  byte_6FCF1E = 0;
  byte_6FCF1F = 0;
  byte_6FCF20 = 0;
  byte_6FCF21 = 0;
  byte_6FCF22 = 0;
  byte_6FCF23 = 0;
  byte_6FCF2F = 0;
  dword_6FC7E8 = 1;
  qword_6FC7F0 = (__int64)&qword_6FCEC0;
  qword_6FCEC0 = (__int64)off_6B70A0;
  qword_6FC7E0 = (__int64)&off_6DA180;
  sub_53E704(&qword_6FC7E0, 0, 0);
  sub_53C520((_DWORD *)a1, &qword_6FBDE8, &qword_6FC7E0);
  dword_6FC798 = 1;
  qword_6FC790 = (__int64)off_6B6F20;
  sub_53C520((_DWORD *)a1, &qword_6FBDE0, &qword_6FC790);
  dword_6FBF98 = 1;
  qword_6FBF90 = (__int64)off_6B6F50;
  sub_53C520((_DWORD *)a1, &qword_6FBDD8, &qword_6FBF90);
  qword_6FC140 = 0;
  dword_6FC138 = 1;
  qword_6FC148 = 0;
  qword_6FC130 = (__int64)off_6B6E00;
  qword_6FC150 = 0;
  qword_6FC158 = 0;
  qword_6FC160 = 0;
  qword_6FC168 = 0;
  qword_6FC170 = 0;
  qword_6FC178 = 0;
  qword_6FC180 = 0;
  qword_6FC188 = 0;
  qword_6FC190 = 0;
  qword_6FC198 = 0;
  qword_6FC1A0 = 0;
  qword_6FC1A8 = 0;
  qword_6FC1B0 = 0;
  qword_6FC1B8 = 0;
  qword_6FC1C0 = 0;
  qword_6FC1C8 = 0;
  qword_6FC1D0 = 0;
  qword_6FC1D8 = 0;
  qword_6FC1E0 = 0;
  qword_6FC1E8 = 0;
  qword_6FC1F0 = 0;
  qword_6FC1F8 = 0;
  qword_6FC200 = 0;
  qword_6FC208 = 0;
  qword_6FC210 = 0;
  qword_6FC218 = 0;
  qword_6FC220 = 0;
  qword_6FC228 = 0;
  qword_6FC230 = 0;
  qword_6FC238 = 0;
  qword_6FC240 = 0;
  qword_6FC248 = 0;
  qword_6FC250 = 0;
  qword_6FC258 = 0;
  qword_6FC260 = 0;
  qword_6FC268 = 0;
  qword_6FC270 = 0;
  qword_6FC278 = 0;
  qword_6FC280 = 0;
  qword_6FC288 = 0;
  qword_6FC290 = 0;
  qword_6FC298 = 0;
  qword_6FC2A0 = 0;
  qword_6FC2A8 = 0;
  qword_6FC2B0 = 0;
  byte_6FC2B8 = 0;
  sub_52C8FC((__int64)dword_6FD1D0, (__int64)&qword_6FC130, 1);
  sub_53C520((_DWORD *)a1, &qword_6FBDB8, dword_6FD1D0);
  dword_6FCF38 = 1;
  qword_6FCF30 = (__int64)off_6B6FE0;
  sub_53C520((_DWORD *)a1, &qword_6FBDA8, &qword_6FCF30);
  dword_6FC7D8 = 1;
  qword_6FC7D0 = (__int64)off_6B6F80;
  sub_53C520((_DWORD *)a1, &qword_6FBDB0, &qword_6FC7D0);
  sub_52CE9C((__int64)dword_6FBF50, 1);
  sub_53C520((_DWORD *)a1, &qword_6FBDA0, dword_6FBF50);
  sub_520050((__int64)dword_6FC8A0, 1);
  sub_53C520((_DWORD *)a1, &qword_6FBD28, dword_6FC8A0);
  sub_570A0C(dword_6FCEA0, 1);
  sub_53C520((_DWORD *)a1, &qword_6FD338, dword_6FCEA0);
  dword_6FC3D8 = 1;
  qword_6FC3E0 = 0;
  qword_6FC3E8 = 0;
  byte_6FC3F0 = 0;
  qword_6FC3F8 = 0;
  qword_6FC400 = 0;
  qword_6FC408 = 0;
  qword_6FC410 = 0;
  dword_6FC418 = 0;
  dword_6FC41C = 0;
  byte_6FC518 = 0;
  dword_6FBF38 = 1;
  qword_6FBF40 = (__int64)&qword_6FC3D0;
  qword_6FC3D0 = (__int64)off_6B7C80;
  qword_6FBF30 = (__int64)&off_6DB0E0;
  sub_53F19C(&qword_6FBF30, 0);
  sub_53C520((_DWORD *)a1, &qword_6FD2A8, &qword_6FBF30);
  dword_6FC7A8 = 1;
  qword_6FC7A0 = (__int64)off_6B78E0;
  sub_53C520((_DWORD *)a1, &qword_6FD2A0, &qword_6FC7A0);
  dword_6FC7B8 = 1;
  qword_6FC7B0 = (__int64)off_6B7960;
  sub_53C520((_DWORD *)a1, &qword_6FD298, &qword_6FC7B0);
  dword_6FC808 = 1;
  qword_6FC800 = (__int64)off_6B7810;
  qword_6FC810 = sub_53BE10();
  sub_53C520((_DWORD *)a1, &qword_6FD270, &qword_6FC800);
  dword_6FC2F8 = 1;
  qword_6FC300 = 0;
  qword_6FC308 = 0;
  byte_6FC310 = 0;
  dword_6FC314 = 0;
  dword_6FC318 = 0;
  qword_6FC320 = 0;
  qword_6FC328 = 0;
  qword_6FC330 = 0;
  qword_6FC338 = 0;
  qword_6FC340 = 0;
  qword_6FC348 = 0;
  dword_6FC350 = 0;
  byte_6FC354 = 0;
  byte_6FC355 = 0;
  byte_6FC356 = 0;
  byte_6FC357 = 0;
  byte_6FC358 = 0;
  byte_6FC359 = 0;
  byte_6FC35A = 0;
  byte_6FC35B = 0;
  byte_6FC388 = 0;
  dword_6FBF18 = 1;
  qword_6FBF20 = (__int64)&qword_6FC2F0;
  qword_6FC2F0 = (__int64)off_6B7C40;
  qword_6FBF10 = (__int64)&off_6DB1A0;
  sub_53ECF0(&qword_6FBF10, 0, 0);
  sub_53C520((_DWORD *)a1, &qword_6FD2C8, &qword_6FBF10);
  dword_6FCDF8 = 1;
  qword_6FCE00 = 0;
  qword_6FCE08 = 0;
  byte_6FCE10 = 0;
  dword_6FCE14 = 0;
  dword_6FCE18 = 0;
  qword_6FCE20 = 0;
  qword_6FCE28 = 0;
  qword_6FCE30 = 0;
  qword_6FCE38 = 0;
  qword_6FCE40 = 0;
  qword_6FCE48 = 0;
  dword_6FCE50 = 0;
  byte_6FCE54 = 0;
  byte_6FCE55 = 0;
  byte_6FCE56 = 0;
  byte_6FCE57 = 0;
  byte_6FCE58 = 0;
  byte_6FCE59 = 0;
  byte_6FCE5A = 0;
  byte_6FCE5B = 0;
  byte_6FCE88 = 0;
  dword_6FC878 = 1;
  qword_6FC880 = (__int64)&qword_6FCDF0;
  qword_6FCDF0 = (__int64)off_6B7C60;
  qword_6FC870 = (__int64)&off_6DB130;
  sub_53EB8C(&qword_6FC870, 0, 0);
  sub_53C520((_DWORD *)a1, &qword_6FD2C0, &qword_6FC870);
  dword_6FBEF8 = 1;
  qword_6FBEF0 = (__int64)off_6B7AE0;
  sub_53C520((_DWORD *)a1, &qword_6FD2B8, &qword_6FBEF0);
  dword_6FCE98 = 1;
  qword_6FCE90 = (__int64)off_6B7B10;
  sub_53C520((_DWORD *)a1, &qword_6FD2B0, &qword_6FCE90);
  qword_6FBFB0 = 0;
  dword_6FBFA8 = 1;
  qword_6FBFB8 = 0;
  qword_6FBFA0 = (__int64)off_6B79C0;
  qword_6FBFC0 = 0;
  qword_6FBFC8 = 0;
  qword_6FBFD0 = 0;
  qword_6FBFD8 = 0;
  qword_6FBFE0 = 0;
  qword_6FBFE8 = 0;
  qword_6FBFF0 = 0;
  qword_6FBFF8 = 0;
  qword_6FC000 = 0;
  qword_6FC008 = 0;
  qword_6FC010 = 0;
  qword_6FC018 = 0;
  qword_6FC020 = 0;
  qword_6FC028 = 0;
  qword_6FC030 = 0;
  qword_6FC038 = 0;
  qword_6FC040 = 0;
  qword_6FC048 = 0;
  qword_6FC050 = 0;
  qword_6FC058 = 0;
  qword_6FC060 = 0;
  qword_6FC068 = 0;
  qword_6FC070 = 0;
  qword_6FC078 = 0;
  qword_6FC080 = 0;
  qword_6FC088 = 0;
  qword_6FC090 = 0;
  qword_6FC098 = 0;
  qword_6FC0A0 = 0;
  qword_6FC0A8 = 0;
  qword_6FC0B0 = 0;
  qword_6FC0B8 = 0;
  qword_6FC0C0 = 0;
  qword_6FC0C8 = 0;
  qword_6FC0D0 = 0;
  qword_6FC0D8 = 0;
  qword_6FC0E0 = 0;
  qword_6FC0E8 = 0;
  qword_6FC0F0 = 0;
  qword_6FC0F8 = 0;
  qword_6FC100 = 0;
  qword_6FC108 = 0;
  qword_6FC110 = 0;
  qword_6FC118 = 0;
  qword_6FC120 = 0;
  byte_6FC128 = 0;
  sub_54EC54(dword_6FC760, &qword_6FBFA0, 1);
  sub_53C520((_DWORD *)a1, &qword_6FD290, dword_6FC760);
  dword_6FC3C8 = 1;
  qword_6FC3C0 = (__int64)off_6B7BA0;
  sub_53C520((_DWORD *)a1, &qword_6FD280, &qword_6FC3C0);
  dword_6FD0E8 = 1;
  qword_6FD0E0 = (__int64)off_6B7B40;
  sub_53C520((_DWORD *)a1, &qword_6FD288, &qword_6FD0E0);
  sub_54F1F4(dword_6FCDD0, 1);
  sub_53C520((_DWORD *)a1, &qword_6FD278, dword_6FCDD0);
  v8 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(v8 + 8 * sub_53C4D0(&qword_6FBDD0)) = &qword_6FD050;
  v9 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(v9 + 8 * sub_53C4D0(&qword_6FBDF0)) = &qword_6FBE80;
  v10 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(v10 + 8 * sub_53C4D0(&qword_6FBDE8)) = &qword_6FCEC0;
  v11 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(v11 + 8 * sub_53C4D0(&qword_6FBDB8)) = &qword_6FC130;
  v12 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(v12 + 8 * sub_53C4D0(&qword_6FD2A8)) = &qword_6FC3D0;
  v13 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(v13 + 8 * sub_53C4D0(&qword_6FD2C8)) = &qword_6FC2F0;
  v14 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(v14 + 8 * sub_53C4D0(&qword_6FD2C0)) = &qword_6FCDF0;
  v15 = *(_QWORD *)(a1 + 24);
  result = sub_53C4D0(&qword_6FD290);
  *(_QWORD *)(v15 + 8 * result) = &qword_6FBFA0;
  return result;
}

