/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005347F0
 * Mangled: sub_5347F0
 * Demangled: sub_5347F0
 *
 * Callers: 2
 *   0x0000000000536300  sub_536300
 *   0x0000000000536428  sub_536428
 *
 * Callees: 15
 *   0x0000000000203020  .memchr
 *   0x000000000052B45C  sub_52B45C
 *   0x000000000052B4A0  sub_52B4A0
 *   0x000000000052D354  sub_52D354
 *   0x0000000000532504  sub_532504
 *   0x0000000000532808  sub_532808
 *   0x000000000053CA8C  sub_53CA8C
 *   0x0000000000567088  sub_567088
 *   0x0000000000567890  sub_567890
 *   0x0000000000567BD4  sub_567BD4
 *   0x000000000056857C  sub_56857C
 *   0x0000000000568EA8  sub_568EA8
 *   0x0000000000568F74  sub_568F74
 *   0x0000000000569074  sub_569074
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 244
 *   insn=0x0000000000534838 string=0x000000000053483C "2"
 *   insn=0x0000000000534870 string=0x0000000000534874 "`"
 *   insn=0x0000000000534880 string=0x0000000000534890 "b"
 *   insn=0x000000000053489C string=0x00000000005348A0 "B`"
 *   insn=0x00000000005348C8 string=0x00000000005348CC " "
 *   insn=0x00000000005348CC string=0x00000000005348D0 "@"
 *   insn=0x000000000053490C string=0x0000000000534910 "H"
 *   insn=0x0000000000534910 string=0x0000000000534A18 "4"
 *   insn=0x0000000000534914 string=0x0000000000534918 " X`xa"
 *   insn=0x0000000000534918 string=0x000000000053491C "a"
 *   insn=0x000000000053491C string=0x0000000000534920 " "
 *   insn=0x000000000053491C string=0x0000000000534928 "4"
 *   insn=0x0000000000534940 string=0x0000000000534944 "_"
 *   insn=0x0000000000534944 string=0x0000000000534948 "@0"
 *   insn=0x0000000000534954 string=0x0000000000534984 "B"
 *   insn=0x000000000053495C string=0x0000000000534960 "_"
 *   insn=0x0000000000534960 string=0x0000000000534964 "`"
 *   insn=0x0000000000534964 string=0x00000000005349D0 " @"
 *   insn=0x0000000000534968 string=0x000000000053496C "@"
 *   insn=0x0000000000534970 string=0x0000000000534974 "@0"
 *   insn=0x0000000000534978 string=0x000000000053497C "_"
 *   insn=0x0000000000534988 string=0x000000000053498C "!hb8!"
 *   insn=0x000000000053498C string=0x0000000000534990 "!"
 *   insn=0x0000000000534998 string=0x000000000053499C "?"
 *   insn=0x00000000005349A0 string=0x00000000005349A4 "!"
 *   insn=0x00000000005349A0 string=0x0000000000534FD0 "4"
 *   insn=0x00000000005349BC string=0x00000000005349C0 "3"
 *   insn=0x00000000005349C4 string=0x00000000005349C8 "_"
 *   insn=0x00000000005349D0 string=0x00000000005349D4 """
 *   insn=0x00000000005349D8 string=0x00000000005349DC "b;"
 *   insn=0x00000000005349DC string=0x0000000000535148 """
 *   insn=0x00000000005349FC string=0x0000000000534A00 "L"
 *   insn=0x0000000000534A10 string=0x0000000000534A14 "\t"
 *   insn=0x0000000000534A2C string=0x0000000000534A30 "?"
 *   insn=0x0000000000534A30 string=0x0000000000534A34 "@."
 *   insn=0x0000000000534A40 string=0x0000000000534A70 "3"
 *   insn=0x0000000000534A48 string=0x0000000000534A4C "_"
 *   insn=0x0000000000534A4C string=0x0000000000534A50 "@"
 *   insn=0x0000000000534A50 string=0x0000000000534A54 "?"
 *   insn=0x0000000000534A54 string=0x0000000000534A58 " "
 *   insn=0x0000000000534A58 string=0x0000000000534B5C "4"
 *   insn=0x0000000000534A5C string=0x0000000000534A60 "@."
 *   insn=0x0000000000534A64 string=0x0000000000534A68 "?"
 *   insn=0x0000000000534A68 string=0x0000000000534A6C "@0"
 *   insn=0x0000000000534A70 string=0x0000000000534A74 "!"
 *   insn=0x0000000000534A78 string=0x0000000000534A7C "B"
 *   insn=0x0000000000534A7C string=0x0000000000534A80 "h9"
 *   insn=0x0000000000534A94 string=0x0000000000534A98 "$"
 *   insn=0x0000000000534A98 string=0x0000000000534A9C "CHB"
 *   insn=0x0000000000534A9C string=0x0000000000534AA0 """
 *   insn=0x0000000000534AA0 string=0x0000000000534AA4 "c"
 *   insn=0x0000000000534AA4 string=0x0000000000534AA8 "S"
 *   insn=0x0000000000534AA4 string=0x000000000059E580 "-0123456789"
 *   insn=0x0000000000534AAC string=0x0000000000534AB0 "th`8"
 *   insn=0x0000000000534AB4 string=0x0000000000534AB8 " "
 *   insn=0x0000000000534AC0 string=0x0000000000534AD8 "4h"8"
 *   insn=0x0000000000534AC8 string=0x0000000000534ACC "o"
 *   insn=0x0000000000534AD0 string=0x0000000000534AD4 """
 *   insn=0x0000000000534ADC string=0x0000000000534AE0 "a"
 *   insn=0x0000000000534AE4 string=0x0000000000534AE8 "_"
 *   insn=0x0000000000534AE8 string=0x0000000000534AEC "a"
 *   insn=0x0000000000534AF4 string=0x0000000000534AF8 " "
 *   insn=0x0000000000534B00 string=0x0000000000534B04 "?"
 *   insn=0x0000000000534B08 string=0x0000000000534B0C "!"
 *   insn=0x0000000000534B24 string=0x0000000000534B28 "3"
 *   insn=0x0000000000534B2C string=0x0000000000534B30 "_"
 *   insn=0x0000000000534B3C string=0x0000000000534B40 "?"
 *   insn=0x0000000000534B44 string=0x0000000000534B48 " "
 *   insn=0x0000000000534B50 string=0x0000000000534B54 "?"
 *   insn=0x0000000000534B54 string=0x0000000000534B58 "!"
 *   insn=0x0000000000534B64 string=0x0000000000534B68 "`"
 *   insn=0x0000000000534B70 string=0x0000000000534B74 " "
 *   insn=0x0000000000534B78 string=0x0000000000534B7C " "
 *   insn=0x0000000000534B80 string=0x0000000000534B84 "!"
 *   insn=0x0000000000534BA8 string=0x0000000000534BAC "a"
 *   insn=0x0000000000534BB8 string=0x0000000000534BBC "!J"
 *   insn=0x0000000000534BC0 string=0x0000000000534BC4 "{"
 *   insn=0x0000000000534BCC string=0x0000000000534BD0 "aJ"
 *   insn=0x0000000000534C08 string=0x0000000000534C0C " 9"
 *   insn=0x0000000000534C18 string=0x0000000000534C1C "v"
 *   insn=0x0000000000534C24 string=0x0000000000534C28 " "
 *   insn=0x0000000000534C3C string=0x0000000000534C40 "`<"
 *   insn=0x0000000000534C44 string=0x0000000000534C48 "4"
 *   insn=0x0000000000534C48 string=0x0000000000534C4C "a"
 *   insn=0x0000000000534C5C string=0x0000000000534C60 "!"
 *   insn=0x0000000000534C74 string=0x0000000000534C78 "@"
 *   insn=0x0000000000534C7C string=0x0000000000534C80 "?"
 *   insn=0x0000000000534C98 string=0x0000000000534C9C "_"
 *   insn=0x0000000000534CAC string=0x0000000000534CB0 "@"
 *   insn=0x0000000000534CBC string=0x0000000000534CC0 "?"
 *   insn=0x0000000000534CC0 string=0x0000000000534CC4 " "
 *   insn=0x0000000000534CC8 string=0x0000000000534CCC "Bhs8_"
 *   insn=0x0000000000534CCC string=0x0000000000534CD0 "_"
 *   insn=0x0000000000534CD0 string=0x0000000000534CD4 " "
 *   insn=0x0000000000534CE0 string=0x0000000000534CE4 "@"
 *   insn=0x0000000000534CE4 string=0x0000000000534CE8 "4"
 *   insn=0x0000000000534CE8 string=0x0000000000534CEC "C"
 *   insn=0x0000000000534D28 string=0x0000000000534D2C " h`8"
 *   insn=0x0000000000534D40 string=0x0000000000534D44 "?"
 *   insn=0x0000000000534D48 string=0x0000000000534D4C "!"
 *   insn=0x0000000000534D5C string=0x0000000000534D60 "4"
 *   insn=0x0000000000534D9C string=0x0000000000534DA0 "@"
 *   insn=0x0000000000534DB4 string=0x0000000000534DB8 "B"
 *   insn=0x0000000000534DC0 string=0x0000000000534DC4 "l"
 *   insn=0x0000000000534DDC string=0x0000000000534DE0 "2"
 *   insn=0x0000000000534DE8 string=0x0000000000534DEC "?"
 *   insn=0x0000000000534DF4 string=0x0000000000534DF8 " %"
 *   insn=0x0000000000534DFC string=0x0000000000534E00 "*"
 *   insn=0x0000000000534E00 string=0x0000000000534E04 "&"
 *   insn=0x0000000000534E0C string=0x0000000000534E10 "~"
 *   insn=0x0000000000534E1C string=0x0000000000534E20 "z"
 *   insn=0x0000000000534E34 string=0x0000000000534E38 "t"
 *   insn=0x0000000000534E3C string=0x0000000000534E40 "!"
 *   insn=0x0000000000534E40 string=0x0000000000534E44 "?"
 *   insn=0x0000000000534E44 string=0x0000000000534E48 " "
 *   insn=0x0000000000534E4C string=0x0000000000534E50 "@"
 *   insn=0x0000000000534E58 string=0x0000000000534E5C " "
 *   insn=0x0000000000534E74 string=0x0000000000534E78 " "
 *   insn=0x0000000000534E80 string=0x0000000000534E84 "?"
 *   insn=0x0000000000534E88 string=0x0000000000534E8C "!"
 *   insn=0x0000000000534E90 string=0x0000000000534E94 "4"
 *   insn=0x0000000000534EAC string=0x0000000000534EB0 "?"
 *   insn=0x0000000000534EB4 string=0x0000000000534EB8 " "
 *   insn=0x0000000000534EC0 string=0x0000000000534EC4 "!hs8?"
 *   insn=0x0000000000534EC4 string=0x0000000000534EC8 "?"
 *   insn=0x0000000000534EC8 string=0x0000000000534ECC "a"
 *   insn=0x0000000000534ED0 string=0x0000000000534ED4 " "
 *   insn=0x0000000000534ED4 string=0x0000000000534EF8 "s"
 *   insn=0x0000000000534EDC string=0x0000000000534EE0 "?"
 *   insn=0x0000000000534EE0 string=0x0000000000534EE4 "B"
 *   insn=0x0000000000534EE4 string=0x0000000000534EE8 "!"
 *   insn=0x0000000000534F08 string=0x0000000000534F0C "4"
 *   insn=0x0000000000534F10 string=0x0000000000534F14 "_"
 *   insn=0x0000000000534F14 string=0x0000000000534F18 "a"
 *   insn=0x0000000000534F20 string=0x0000000000534F24 "?"
 *   insn=0x0000000000534F28 string=0x0000000000534F2C " "
 *   insn=0x0000000000534F44 string=0x0000000000534F48 "4"
 *   insn=0x0000000000534F54 string=0x0000000000534F58 "?"
 *   insn=0x0000000000534F5C string=0x0000000000534F60 " "
 *   insn=0x0000000000534F6C string=0x0000000000534F70 "A"
 *   insn=0x0000000000534F88 string=0x0000000000534F8C "l"
 *   insn=0x0000000000534F94 string=0x0000000000534F98 "?"
 *   insn=0x0000000000534F9C string=0x0000000000534FA0 " "
 *   insn=0x0000000000534FAC string=0x0000000000534FB0 "@ha8"
 *   insn=0x0000000000534FC4 string=0x0000000000534FC8 "?"
 *   insn=0x0000000000534FD8 string=0x0000000000534FDC "u"
 *   insn=0x0000000000534FE4 string=0x0000000000534FE8 "?"
 *   insn=0x0000000000534FEC string=0x0000000000534FF0 " "
 *   insn=0x0000000000534FF4 string=0x0000000000534FF8 "$"
 *   insn=0x0000000000535000 string=0x0000000000535004 "?"
 *   insn=0x0000000000535008 string=0x000000000053500C "!"
 *   insn=0x0000000000535018 string=0x000000000053501C "@"
 *   insn=0x000000000053502C string=0x0000000000535030 "B"
 *   insn=0x0000000000535038 string=0x000000000053503C "`"
 *   insn=0x000000000053504C string=0x0000000000535050 "@"
 *   insn=0x0000000000535058 string=0x000000000053505C ""
 *   insn=0x0000000000535060 string=0x0000000000535064 " "
 *   insn=0x0000000000535078 string=0x000000000053507C "?"
 *   insn=0x000000000053507C string=0x0000000000535080 """
 *   insn=0x0000000000535080 string=0x0000000000535084 " "
 *   insn=0x0000000000535090 string=0x0000000000535094 "y"
 *   insn=0x00000000005350AC string=0x00000000005350B0 "`"
 *   insn=0x00000000005350C8 string=0x00000000005350CC "3"
 *   insn=0x00000000005350D8 string=0x00000000005350DC "_"
 *   insn=0x0000000000535104 string=0x0000000000535108 "a"
 *   insn=0x0000000000535110 string=0x0000000000535114 "_"
 *   insn=0x0000000000535124 string=0x0000000000535128 "s"
 *   insn=0x000000000053512C string=0x0000000000535130 "!$@"
 *   insn=0x0000000000535130 string=0x0000000000535134 " "
 *   insn=0x0000000000535138 string=0x000000000053513C "A"
 *   insn=0x000000000053514C string=0x0000000000535150 "A$@"
 *   insn=0x0000000000535150 string=0x0000000000535154 " "
 *   insn=0x0000000000535158 string=0x000000000053515C "A"
 *   insn=0x0000000000535160 string=0x0000000000535164 " "
 *   insn=0x000000000053516C string=0x0000000000535170 "!(@"
 *   insn=0x0000000000535170 string=0x0000000000535174 " "
 *   insn=0x0000000000535178 string=0x000000000053517C "]"
 *   insn=0x0000000000535180 string=0x0000000000535184 "!(@"
 *   insn=0x0000000000535184 string=0x0000000000535188 " "
 *   insn=0x0000000000535190 string=0x0000000000535194 "a"
 *   insn=0x0000000000535198 string=0x000000000053519C "!$@"
 *   insn=0x000000000053519C string=0x00000000005351A0 " "
 *   insn=0x00000000005351AC string=0x00000000005351B0 "s"
 *   insn=0x00000000005351B4 string=0x00000000005351B8 "!$@"
 *   insn=0x00000000005351B8 string=0x00000000005351BC " "
 *   insn=0x00000000005351DC string=0x00000000005351E0 "s"
 *   insn=0x00000000005351E0 string=0x00000000005351E4 "F"
 *   insn=0x00000000005351E8 string=0x00000000005351EC "!$@"
 *   insn=0x00000000005351EC string=0x00000000005351F0 " "
 *   insn=0x00000000005351FC string=0x0000000000535200 "!"
 *   insn=0x0000000000535208 string=0x000000000053520C "!$@"
 *   insn=0x000000000053520C string=0x0000000000535210 " "
 *   insn=0x000000000053521C string=0x0000000000535220 "8"
 *   insn=0x0000000000535224 string=0x0000000000535228 "!$@"
 *   insn=0x0000000000535228 string=0x000000000053522C " "
 *   insn=0x0000000000535238 string=0x000000000053523C "!"
 *   insn=0x0000000000535244 string=0x0000000000535248 "!$@"
 *   insn=0x0000000000535248 string=0x000000000053524C " "
 *   insn=0x000000000053525C string=0x0000000000535260 "/"
 *   insn=0x0000000000535264 string=0x0000000000535268 "!$@"
 *   insn=0x0000000000535268 string=0x000000000053526C " "
 *   insn=0x0000000000535294 string=0x0000000000535298 "@"
 *   insn=0x00000000005352A4 string=0x00000000005352A8 "#"
 *   insn=0x00000000005352AC string=0x00000000005352B0 "q"
 *   insn=0x00000000005352C4 string=0x00000000005352C8 "`"
 *   insn=0x00000000005352E4 string=0x00000000005352E8 "j"
 *   insn=0x00000000005352F8 string=0x000000000053CA8C "E"
 *   insn=0x0000000000535304 string=0x0000000000535308 " "
 *   insn=0x000000000053530C string=0x0000000000535310 " "
 *   insn=0x0000000000535314 string=0x0000000000535318 " \n"
 *   insn=0x0000000000535320 string=0x0000000000535324 ","
 *   insn=0x0000000000535334 string=0x0000000000535338 "4"
 *   insn=0x0000000000535344 string=0x0000000000535348 "0"
 *   insn=0x000000000053535C string=0x0000000000535360 "*"
 *   insn=0x0000000000535364 string=0x0000000000535368 "!"
 *   insn=0x0000000000535368 string=0x000000000053536C "?"
 *   insn=0x00000000005353A0 string=0x00000000005353A4 "?"
 *   insn=0x00000000005353A8 string=0x00000000005353AC "!"
 *   insn=0x00000000005353B4 string=0x00000000005353B8 "4"
 *   insn=0x00000000005353E4 string=0x00000000005353E8 " "
 *   insn=0x00000000005353FC string=0x0000000000535400 "4"
 *   insn=0x000000000053543C string=0x0000000000535440 "c"
 *   insn=0x0000000000535448 string=0x000000000053544C "!"
 *   insn=0x000000000053544C string=0x0000000000535450 "L"
 *   insn=0x0000000000535460 string=0x0000000000535464 "A"
 *   insn=0x0000000000535474 string=0x0000000000535478 "?"
 *   insn=0x0000000000535478 string=0x000000000053547C "A"
 *   insn=0x000000000053548C string=0x0000000000535490 "?"
 *   insn=0x0000000000535494 string=0x0000000000535498 "!"
 *   insn=0x00000000005354AC string=0x00000000005354B0 "!(@"
 *   insn=0x00000000005354B0 string=0x00000000005354B4 " "
 *   insn=0x00000000005354C8 string=0x00000000005354CC "!(@"
 *   insn=0x00000000005354CC string=0x00000000005354D0 " "
 *   insn=0x00000000005354D0 string=0x00000000005354D4 " "
 *   insn=0x00000000005354DC string=0x00000000005354E0 " "
 *   insn=0x00000000005354E4 string=0x00000000005354E8 " "
 *   insn=0x00000000005354EC string=0x00000000005354F0 "a"
 *   insn=0x00000000005354F8 string=0x00000000005354FC " "
 *   insn=0x0000000000535504 string=0x0000000000535508 "{"
 *   insn=0x0000000000535528 string=0x000000000053552C "Z"
 *   insn=0x0000000000535534 string=0x0000000000535538 "a"
 *   insn=0x0000000000535540 string=0x0000000000535544 "`"
 *   insn=0x0000000000535550 string=0x0000000000535554 "{"
 *   insn=0x000000000053555C string=0x0000000000535560 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_5347F0(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        __int64 a8)
{
  _QWORD *v8; // x19
  _QWORD *v9; // x21
  __int64 v10; // x24
  int v11; // w1
  __int64 v12; // x28
  int v13; // w22
  unsigned __int64 v14; // x1
  unsigned int v15; // w0
  unsigned __int64 v16; // kr00_8
  int v17; // w20
  _QWORD *i; // x0
  unsigned __int8 v19; // w2
  int v20; // w19
  int v21; // w0
  unsigned __int64 v22; // x1
  unsigned __int8 *v23; // x0
  int v24; // w0
  _QWORD *v25; // x0
  int v26; // w1
  _QWORD *v27; // x0
  int v28; // w19
  _QWORD *v29; // x0
  int v30; // w19
  _BYTE *v31; // x0
  char *v32; // x1
  __int64 v33; // x2
  __int64 v34; // x19
  char v35; // w20
  char *v36; // x0
  unsigned __int64 v37; // x1
  unsigned __int8 *v38; // x1
  int v39; // w0
  _BOOL4 v40; // w19
  unsigned int *v41; // x0
  _QWORD *v42; // x20
  unsigned int *v43; // x0
  _QWORD *v45; // x0
  __int64 v46; // x19
  __int64 v47; // x25
  _QWORD *v48; // x0
  int v49; // w20
  _BOOL4 v50; // w19
  unsigned __int64 v51; // x1
  __int64 v52; // x0
  __int64 v53; // x2
  _BOOL4 v54; // w19
  unsigned __int8 v55; // w0
  unsigned __int64 v56; // x1
  unsigned __int8 *v57; // x1
  int v58; // w0
  __int64 v59; // x1
  unsigned __int64 v60; // x1
  unsigned __int8 *v61; // x1
  int v62; // w0
  unsigned __int8 *v63; // x1
  int v64; // w0
  unsigned __int8 *v65; // x1
  int v66; // w0
  __int64 v67; // x2
  int v68; // w0
  unsigned __int8 *v69; // x1
  int v70; // w0
  char *v71; // x0
  __int64 v72; // x1
  __int64 v73; // x19
  char *v74; // x0
  unsigned int v75; // w0
  __int64 v76; // x1
  _BOOL4 v77; // w19
  unsigned __int8 v78; // w0
  unsigned __int64 v79; // x1
  __int64 v80; // x28
  unsigned __int64 j; // x20
  _BOOL4 v82; // w21
  unsigned __int64 v83; // x1
  _BOOL4 v85; // [xsp+74h] [xbp+74h]
  int v86; // [xsp+7Ch] [xbp+7Ch]
  unsigned __int64 v89; // [xsp+A0h] [xbp+A0h]
  unsigned __int64 v90; // [xsp+B0h] [xbp+B0h]
  unsigned __int8 v91; // [xsp+B8h] [xbp+B8h]
  int v92; // [xsp+BCh] [xbp+BCh]
  _QWORD *v93; // [xsp+D0h] [xbp+D0h] BYREF
  __int64 v94; // [xsp+D8h] [xbp+D8h]
  _QWORD *v95; // [xsp+E0h] [xbp+E0h] BYREF
  __int64 v96; // [xsp+E8h] [xbp+E8h]
  char v97[8]; // [xsp+F8h] [xbp+F8h] BYREF
  _DWORD v98[2]; // [xsp+108h] [xbp+108h] BYREF
  char *v99; // [xsp+110h] [xbp+110h] BYREF
  char *v100; // [xsp+118h] [xbp+118h] BYREF

  v8 = (_QWORD *)(a6 + 208);
  v95 = a2;
  v96 = a3;
  v93 = a4;
  v94 = a5;
  v85 = 0;
  v9 = sub_52D354(a6 + 208);
  v10 = sub_532504((__int64)v97, v8);
  if ( *(_QWORD *)(v10 + 64) )
    v85 = *(_QWORD *)(v10 + 80) != 0;
  v11 = *(unsigned __int8 *)(v10 + 32);
  v99 = &byte_6FD2F8;
  if ( v11 )
    sub_567088(&v99, 32);
  v100 = &byte_6FD2F8;
  sub_567088(&v100, 32);
  v12 = 0;
  v92 = 0;
  v91 = 0;
  v13 = 0;
  v98[0] = *(_DWORD *)(v10 + 96);
  v14 = (unsigned __int64)v98;
  v89 = v98[0];
  v90 = 0;
  v86 = 0;
  v15 = LOBYTE(v98[0]);
LABEL_6:
  v16 = v14;
  v14 = v89;
  switch ( v15 )
  {
    case 0u:
      goto LABEL_7;
    case 1u:
      v50 = sub_532808((__int64)&v95) == -1;
      if ( ((unsigned int)sub_532808((__int64)&v93) == -1) == v50
        || (*(_BYTE *)(v9[6] + (unsigned __int8)sub_532808((__int64)&v95)) & 8) == 0 )
      {
        v17 = 0;
      }
      else
      {
        if ( v95 )
        {
          v51 = v95[2];
          if ( v51 >= v95[3] )
            (*(void (__fastcall **)(_QWORD *))(*v95 + 80LL))(v95);
          else
            v95[2] = v51 + 1;
          LODWORD(v96) = -1;
          v17 = 1;
          if ( v12 == 3 )
            goto LABEL_91;
          goto LABEL_9;
        }
LABEL_7:
        v17 = 1;
      }
      if ( v12 == 3 )
        goto LABEL_91;
LABEL_9:
      for ( i = v95; i; i = v95 )
      {
        while ( 1 )
        {
          v19 = v96;
          if ( (_DWORD)v96 != -1 )
          {
            v14 = (unsigned __int64)v93;
            v20 = 0;
            if ( v93 )
              goto LABEL_13;
LABEL_17:
            v14 = *(unsigned __int8 *)(v9[6] + v19);
            if ( (v14 & 8) == 0 )
              goto LABEL_26;
            v22 = i[2];
            if ( v22 < i[3] )
            {
LABEL_19:
              LODWORD(v96) = -1;
              i[2] = v22 + 1;
              goto LABEL_20;
            }
            goto LABEL_139;
          }
          v63 = (unsigned __int8 *)i[2];
          if ( (unsigned __int64)v63 >= i[3] )
          {
            v64 = (*(__int64 (__fastcall **)(_QWORD *))(*i + 72LL))(i);
            if ( v64 == -1 )
            {
              v95 = 0;
              goto LABEL_21;
            }
          }
          else
          {
            v64 = *v63;
          }
          v14 = (unsigned __int64)v93;
          v20 = 0;
          LODWORD(v96) = v64;
          if ( v93 )
          {
LABEL_13:
            v21 = 0;
            if ( (_DWORD)v94 == -1 )
              goto LABEL_23;
LABEL_14:
            if ( v20 == v21 )
              goto LABEL_26;
            goto LABEL_15;
          }
          i = v95;
          if ( !v95 )
            break;
LABEL_16:
          v19 = v96;
          if ( (_DWORD)v96 != -1 )
            goto LABEL_17;
          v65 = (unsigned __int8 *)i[2];
          if ( (unsigned __int64)v65 >= i[3] )
          {
            v66 = (*(__int64 (__fastcall **)(_QWORD *))(*i + 72LL))(i);
            if ( v66 == -1 )
            {
              v95 = 0;
              break;
            }
          }
          else
          {
            v66 = *v65;
          }
          v14 = (unsigned __int8)v66;
          v67 = v9[6];
          LODWORD(v96) = v66;
          if ( (*(_BYTE *)(v67 + (unsigned __int8)v66) & 8) == 0 )
            goto LABEL_26;
          i = v95;
          if ( v95 )
          {
            v22 = v95[2];
            if ( v22 < v95[3] )
              goto LABEL_19;
LABEL_139:
            sub_52B4A0((__int64)i);
            i = v95;
            LODWORD(v96) = -1;
LABEL_20:
            if ( i )
              continue;
          }
          goto LABEL_21;
        }
LABEL_132:
        if ( (*(_BYTE *)(v9[6] + 255LL) & 8) == 0 )
          goto LABEL_26;
      }
LABEL_21:
      v14 = (unsigned __int64)v93;
      if ( !v93 )
        goto LABEL_26;
      v20 = 1;
      v21 = 0;
      if ( (_DWORD)v94 != -1 )
        goto LABEL_14;
LABEL_23:
      v23 = *(unsigned __int8 **)(v14 + 16);
      if ( (unsigned __int64)v23 >= *(_QWORD *)(v14 + 24) )
      {
        v24 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v14 + 72LL))(v14);
        if ( v24 == -1 )
        {
          v93 = 0;
          v21 = 1;
          goto LABEL_14;
        }
      }
      else
      {
        v24 = *v23;
      }
      LODWORD(v94) = v24;
      if ( !v20 )
        goto LABEL_26;
LABEL_15:
      i = v95;
      if ( !v95 )
        goto LABEL_132;
      goto LABEL_16;
    case 2u:
      if ( (*(_DWORD *)(a6 + 24) & 0x200) != 0 || v90 > 1 || !(_DWORD)v12 )
        goto LABEL_73;
      if ( (_DWORD)v12 == 1 )
      {
        if ( !v85 && LOBYTE(v98[0]) != 3 && BYTE2(v98[0]) != 1 )
        {
          ++v12;
          goto LABEL_29;
        }
      }
      else
      {
        v17 = 1;
        if ( (_DWORD)v12 != 2 )
          goto LABEL_27;
        if ( HIBYTE(v98[0]) != 4 )
        {
          v14 = v85;
          if ( !v85 || HIBYTE(v98[0]) != 3 )
            goto LABEL_28;
        }
      }
LABEL_73:
      v45 = v95;
      v46 = 0;
      v47 = *(_QWORD *)(v10 + 48);
      if ( !v95 )
        goto LABEL_121;
LABEL_74:
      v14 = (unsigned int)v96;
      if ( (_DWORD)v96 != -1 )
        goto LABEL_75;
      v14 = v45[2];
      if ( v14 < v45[3] )
      {
        v68 = *(unsigned __int8 *)v14;
        goto LABEL_142;
      }
      v68 = (*(__int64 (__fastcall **)(_QWORD *))(*v45 + 72LL))(v45);
      if ( v68 != -1 )
      {
LABEL_142:
        LODWORD(v96) = v68;
LABEL_75:
        v48 = v93;
        v49 = 0;
        if ( !v93 )
          goto LABEL_78;
        v14 = 0;
        if ( (_DWORD)v94 == -1 )
          goto LABEL_123;
LABEL_77:
        if ( v49 != (_DWORD)v14 )
          goto LABEL_78;
LABEL_126:
        if ( v46 == v47 )
        {
          v17 = 1;
          goto LABEL_27;
        }
LABEL_82:
        if ( !v46 && (*(_DWORD *)(a6 + 24) & 0x200) == 0 )
        {
          v17 = 1;
          goto LABEL_27;
        }
        goto LABEL_57;
      }
      v95 = 0;
      while ( 1 )
      {
LABEL_121:
        v48 = v93;
        if ( !v93 )
          goto LABEL_126;
        v49 = 1;
        v14 = 0;
        if ( (_DWORD)v94 != -1 )
          goto LABEL_77;
LABEL_123:
        v61 = (unsigned __int8 *)v48[2];
        if ( (unsigned __int64)v61 >= v48[3] )
        {
          v62 = (*(__int64 (__fastcall **)(_QWORD *))(*v48 + 72LL))(v48);
          if ( v62 == -1 )
          {
            v93 = 0;
            v14 = 1;
            goto LABEL_77;
          }
        }
        else
        {
          v62 = *v61;
        }
        v14 = 0;
        LODWORD(v94) = v62;
        if ( !v49 )
          goto LABEL_126;
LABEL_78:
        if ( v46 == v47 )
          goto LABEL_30;
        v45 = v95;
        if ( v95 )
        {
          v14 = (unsigned int)v96;
          if ( (_DWORD)v96 != -1 )
          {
            if ( *(unsigned __int8 *)(*(_QWORD *)(v10 + 40) + v46) != (unsigned __int8)v96 )
              goto LABEL_82;
            goto LABEL_116;
          }
          v57 = (unsigned __int8 *)v95[2];
          if ( (unsigned __int64)v57 < v95[3] )
          {
            v58 = *v57;
LABEL_114:
            v59 = *(_QWORD *)(v10 + 40);
            LODWORD(v96) = v58;
            v14 = *(unsigned __int8 *)(v59 + v46);
            if ( (_DWORD)v14 != (unsigned __int8)v58 )
              goto LABEL_82;
            v45 = v95;
            if ( v95 )
            {
LABEL_116:
              v60 = v45[2];
              if ( v60 >= v45[3] )
              {
                (*(void (__fastcall **)(_QWORD *))(*v45 + 80LL))(v45);
                v45 = v95;
              }
              else
              {
                v45[2] = v60 + 1;
              }
              v14 = 0xFFFFFFFFLL;
              LODWORD(v96) = -1;
            }
            ++v46;
            goto LABEL_120;
          }
          v58 = (*(__int64 (__fastcall **)(_QWORD *))(*v95 + 72LL))(v95);
          if ( v58 != -1 )
            goto LABEL_114;
          v95 = 0;
        }
        if ( *(unsigned __int8 *)(*(_QWORD *)(v10 + 40) + v46) != 255 )
          goto LABEL_82;
        v45 = v95;
        ++v46;
LABEL_120:
        if ( v45 )
          goto LABEL_74;
      }
    case 3u:
      if ( !*(_QWORD *)(v10 + 64) )
      {
        if ( !*(_QWORD *)(v10 + 80) )
        {
LABEL_64:
          v17 = !v85;
          goto LABEL_26;
        }
        goto LABEL_103;
      }
      v77 = sub_532808((__int64)&v95) == -1;
      if ( ((unsigned int)sub_532808((__int64)&v93) == -1) == v77
        || (v78 = sub_532808((__int64)&v95), v14 = **(unsigned __int8 **)(v10 + 56), (_DWORD)v14 != v78) )
      {
        if ( !*(_QWORD *)(v10 + 80) )
        {
          if ( !*(_QWORD *)(v10 + 64) )
          {
            v17 = !v85;
LABEL_26:
            if ( v17 )
              goto LABEL_27;
            goto LABEL_91;
          }
          goto LABEL_107;
        }
LABEL_103:
        v54 = sub_532808((__int64)&v95) == -1;
        if ( ((unsigned int)sub_532808((__int64)&v93) == -1) != v54
          && (v55 = sub_532808((__int64)&v95), v14 = **(unsigned __int8 **)(v10 + 72), (_DWORD)v14 == v55) )
        {
          v14 = *(_QWORD *)(v10 + 80);
          v90 = v14;
          if ( v95 )
          {
            v56 = v95[2];
            if ( v56 >= v95[3] )
            {
              sub_52B4A0((__int64)v95);
            }
            else
            {
              v14 = v56 + 1;
              v95[2] = v14;
            }
            v17 = 1;
            v86 = 1;
            LODWORD(v96) = -1;
            goto LABEL_27;
          }
        }
        else if ( !*(_QWORD *)(v10 + 64) || *(_QWORD *)(v10 + 80) )
        {
          goto LABEL_64;
        }
LABEL_107:
        v86 = 1;
        v17 = 1;
        goto LABEL_27;
      }
      v14 = *(_QWORD *)(v10 + 64);
      v90 = v14;
      if ( v95 )
      {
        v79 = v95[2];
        if ( v79 >= v95[3] )
        {
          sub_52B4A0((__int64)v95);
        }
        else
        {
          v14 = v79 + 1;
          v95[2] = v14;
        }
        v17 = 1;
        LODWORD(v96) = -1;
        goto LABEL_27;
      }
LABEL_30:
      while ( 1 )
      {
        v17 = 1;
LABEL_27:
        if ( (int)v12 + 1 > 3 )
          break;
LABEL_28:
        ++v12;
LABEL_29:
        v15 = *((unsigned __int8 *)v98 + v12);
        if ( v15 <= 4 )
          goto LABEL_6;
      }
LABEL_91:
      if ( ((unsigned __int8)v17 & (v90 > 1)) != 0 )
      {
        if ( v86 )
          v80 = *(_QWORD *)(v10 + 72);
        else
          v80 = *(_QWORD *)(v10 + 56);
        for ( j = 1; ; ++j )
        {
          v82 = sub_532808((__int64)&v95) == -1;
          if ( v82 == ((unsigned int)sub_532808((__int64)&v93) == -1)
            || j >= v90
            || *(unsigned __int8 *)(v80 + j) != (unsigned __int8)sub_532808((__int64)&v95) )
          {
            break;
          }
          if ( v95 )
          {
            v83 = v95[2];
            if ( v83 >= v95[3] )
            {
              (*(void (**)(void))(*v95 + 80LL))();
              LODWORD(v96) = -1;
            }
            else
            {
              LODWORD(v96) = -1;
              v95[2] = v83 + 1;
            }
          }
        }
        if ( j != v90 )
          goto LABEL_57;
      }
      else if ( !v17 )
      {
LABEL_57:
        *a7 |= 4u;
        goto LABEL_58;
      }
      if ( *((_QWORD *)v100 - 3) > 1u )
      {
        v52 = sub_56857C(&v100, 48, 0);
        if ( v52 )
        {
          v53 = v52;
          if ( v52 == -1 )
            v53 = *((_QWORD *)v100 - 3) - 1LL;
          sub_568F74(&v100, 0, v53);
        }
      }
      if ( v86 )
      {
        if ( (*((_DWORD *)v100 - 2) & 0x80000000) != 0 )
        {
          if ( *v100 == 48 )
            goto LABEL_189;
        }
        else
        {
          sub_568EA8(&v100);
          if ( *v100 == 48 )
            goto LABEL_189;
          if ( (*((_DWORD *)v100 - 2) & 0x80000000) == 0 )
            sub_568EA8(&v100);
        }
        sub_569074(&v100, 0, 0, 1, 45);
        *((_DWORD *)v100 - 2) = -1;
      }
LABEL_189:
      if ( *((_QWORD *)v99 - 3) )
      {
        if ( v92 )
          v76 = v91;
        else
          v76 = (unsigned __int8)v13;
        sub_567890(&v99, v76);
        if ( !(unsigned __int8)sub_53CA8C(*(_QWORD *)(v10 + 16), *(_QWORD *)(v10 + 24), &v99) )
          *a7 |= 4u;
      }
      if ( v92 && *(_DWORD *)(v10 + 88) != v13 )
        goto LABEL_57;
      sub_567BD4(a8, &v100);
LABEL_58:
      v40 = sub_532808((__int64)&v95) == -1;
      if ( ((unsigned int)sub_532808((__int64)&v93) == -1) != v40 )
      {
        v41 = (unsigned int *)(v100 - 24);
        v42 = v95;
        if ( v100 - 24 == (char *)&qword_6FD2E0 )
          goto LABEL_60;
LABEL_230:
        sub_52B45C(v41);
        v43 = (unsigned int *)(v99 - 24);
        if ( v99 - 24 == (char *)&qword_6FD2E0 )
          return v42;
LABEL_231:
        sub_52B45C(v43);
        return v42;
      }
      v42 = v95;
      *a7 |= 2u;
      v41 = (unsigned int *)(v100 - 24);
      if ( v100 - 24 != (char *)&qword_6FD2E0 )
        goto LABEL_230;
LABEL_60:
      v43 = (unsigned int *)(v99 - 24);
      if ( v99 - 24 != (char *)&qword_6FD2E0 )
        goto LABEL_231;
      return v42;
    case 4u:
      v25 = v95;
      if ( v95 )
        goto LABEL_32;
      while ( 2 )
      {
        while ( 2 )
        {
          while ( 2 )
          {
            v27 = v93;
            if ( !v93 )
              goto LABEL_55;
            v28 = 1;
            v14 = 0;
            if ( (_DWORD)v94 == -1 )
              goto LABEL_52;
LABEL_35:
            if ( (_DWORD)v14 == v28 )
              goto LABEL_55;
LABEL_36:
            v29 = v95;
            if ( v95 )
            {
LABEL_37:
              LOBYTE(v26) = v96;
              if ( (_DWORD)v96 != -1 )
                goto LABEL_38;
              v69 = (unsigned __int8 *)v29[2];
              if ( (unsigned __int64)v69 >= v29[3] )
              {
                v70 = (*(__int64 (__fastcall **)(_QWORD *))(*v29 + 72LL))(v29);
                if ( v70 == -1 )
                {
                  v26 = 255;
                  v95 = 0;
                  v30 = 255;
                  goto LABEL_39;
                }
              }
              else
              {
                v70 = *v69;
              }
              LODWORD(v96) = v70;
              v30 = (unsigned __int8)v70;
              v26 = (unsigned __int8)v70;
              goto LABEL_39;
            }
LABEL_147:
            v30 = 255;
            v31 = memchr((const void *)(v10 + 101), 255, 0xAu);
            if ( v31 )
              goto LABEL_40;
LABEL_148:
            if ( *(unsigned __int8 *)(v10 + 33) != v30 || v92 )
            {
              if ( !*(_BYTE *)(v10 + 32) || *(unsigned __int8 *)(v10 + 34) != v30 || v92 )
                goto LABEL_55;
              if ( !v13 )
              {
                v17 = 0;
LABEL_56:
                if ( !*((_QWORD *)v100 - 3) )
                  goto LABEL_57;
                goto LABEL_26;
              }
              v71 = v99;
              v72 = *((_QWORD *)v99 - 3);
              v73 = v72 + 1;
              if ( (unsigned __int64)(v72 + 1) > *((_QWORD *)v99 - 2) || *((int *)v99 - 2) > 0 )
              {
                sub_567088(&v99, v72 + 1);
                v71 = v99;
                v72 = *((_QWORD *)v99 - 3);
              }
              v71[v72] = v13;
              v13 = 0;
              v14 = (unsigned __int64)&qword_6FD2E0;
              v74 = v99;
              if ( v99 - 24 != (char *)&qword_6FD2E0 )
              {
                *((_DWORD *)v99 - 2) = 0;
                *((_QWORD *)v74 - 3) = v73;
                v74[v73] = 0;
              }
            }
            else
            {
              if ( *(int *)(v10 + 88) <= 0 )
                goto LABEL_55;
              v91 = v13;
              v13 = 0;
              v92 = 1;
            }
LABEL_46:
            v25 = v95;
            if ( !v95 )
              continue;
            break;
          }
          v37 = v95[2];
          if ( v37 >= v95[3] )
          {
            (*(void (__fastcall **)(_QWORD *))(*v95 + 80LL))(v95);
            v25 = v95;
            LODWORD(v96) = -1;
          }
          else
          {
            v14 = v37 + 1;
            LODWORD(v96) = -1;
            v95[2] = v14;
          }
          if ( !v25 )
            continue;
          break;
        }
LABEL_32:
        LOBYTE(v26) = v96;
        if ( (_DWORD)v96 != -1 )
        {
          v27 = v93;
          v28 = 0;
          if ( v93 )
          {
LABEL_34:
            v14 = 0;
            if ( (_DWORD)v94 != -1 )
              goto LABEL_35;
LABEL_52:
            v38 = (unsigned __int8 *)v27[2];
            if ( (unsigned __int64)v38 >= v27[3] )
            {
              v39 = (*(__int64 (__fastcall **)(_QWORD *))(*v27 + 72LL))(v27);
              if ( v39 == -1 )
              {
                v93 = 0;
                v14 = 1;
                goto LABEL_35;
              }
            }
            else
            {
              v39 = *v38;
            }
            v14 = 0;
            LODWORD(v94) = v39;
            if ( !v28 )
            {
LABEL_55:
              v17 = 1;
              goto LABEL_56;
            }
            goto LABEL_36;
          }
LABEL_38:
          v30 = (unsigned __int8)v26;
          v26 = (unsigned __int8)v26;
LABEL_39:
          v31 = memchr((const void *)(v10 + 101), v26, 0xAu);
          if ( !v31 )
            goto LABEL_148;
LABEL_40:
          v32 = v100;
          v33 = *((_QWORD *)v100 - 3);
          v34 = v33 + 1;
          v35 = v31[(_QWORD)off_6E8940 - 100 - v10];
          if ( (unsigned __int64)(v33 + 1) > *((_QWORD *)v100 - 2) || *((int *)v100 - 2) > 0 )
          {
            sub_567088(&v100, v33 + 1);
            v32 = v100;
            v33 = *((_QWORD *)v100 - 3);
          }
          v32[v33] = v35;
          v36 = v100;
          v14 = (unsigned __int64)&qword_6FD2E0;
          if ( v100 - 24 != (char *)&qword_6FD2E0 )
          {
            *((_DWORD *)v100 - 2) = 0;
            *((_QWORD *)v36 - 3) = v34;
            v36[v34] = 0;
          }
          ++v13;
          goto LABEL_46;
        }
        v14 = v25[2];
        if ( v14 >= v25[3] )
        {
          v75 = (*(__int64 (__fastcall **)(_QWORD *))(*v25 + 72LL))(v25);
          v14 = v75;
          if ( v75 == -1 )
          {
            v95 = 0;
            continue;
          }
        }
        else
        {
          LODWORD(v14) = *(unsigned __int8 *)v14;
        }
        break;
      }
      v27 = v93;
      v28 = 0;
      LODWORD(v96) = v14;
      if ( v93 )
        goto LABEL_34;
      v29 = v95;
      if ( v95 )
        goto LABEL_37;
      goto LABEL_147;
    default:
      v14 = v16;
      goto LABEL_30;
  }
}

