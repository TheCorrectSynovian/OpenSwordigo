/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000053557C
 * Mangled: sub_53557C
 * Demangled: sub_53557C
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
 *   0x0000000000532614  sub_532614
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
 * Referenced strings: 239
 *   insn=0x00000000005355B4 string=0x00000000005355B8 "g"
 *   insn=0x00000000005355FC string=0x0000000000535600 "`"
 *   insn=0x000000000053560C string=0x000000000053561C "b"
 *   insn=0x0000000000535628 string=0x000000000053562C "B`"
 *   insn=0x0000000000535654 string=0x0000000000535658 " "
 *   insn=0x0000000000535658 string=0x000000000053565C "@"
 *   insn=0x0000000000535698 string=0x000000000053569C "H"
 *   insn=0x000000000053569C string=0x00000000005357A4 "4"
 *   insn=0x00000000005356A0 string=0x00000000005356A4 " X`xa"
 *   insn=0x00000000005356A4 string=0x00000000005356A8 "a"
 *   insn=0x00000000005356A8 string=0x00000000005356AC " "
 *   insn=0x00000000005356A8 string=0x00000000005356B4 "4"
 *   insn=0x00000000005356CC string=0x00000000005356D0 "_"
 *   insn=0x00000000005356D0 string=0x00000000005356D4 "@0"
 *   insn=0x00000000005356E0 string=0x0000000000535710 "B"
 *   insn=0x00000000005356E8 string=0x00000000005356EC "_"
 *   insn=0x00000000005356EC string=0x00000000005356F0 "`"
 *   insn=0x00000000005356F0 string=0x000000000053575C " @"
 *   insn=0x00000000005356F4 string=0x00000000005356F8 "@"
 *   insn=0x00000000005356FC string=0x0000000000535700 "@0"
 *   insn=0x0000000000535704 string=0x0000000000535708 "_"
 *   insn=0x0000000000535714 string=0x0000000000535718 "!hb8!"
 *   insn=0x0000000000535718 string=0x000000000053571C "!"
 *   insn=0x0000000000535724 string=0x0000000000535728 "?"
 *   insn=0x000000000053572C string=0x0000000000535730 "!"
 *   insn=0x0000000000535748 string=0x000000000053574C "3"
 *   insn=0x0000000000535750 string=0x0000000000535754 "_"
 *   insn=0x000000000053575C string=0x0000000000535760 """
 *   insn=0x0000000000535764 string=0x0000000000535768 "b;"
 *   insn=0x0000000000535768 string=0x0000000000535ED4 """
 *   insn=0x0000000000535788 string=0x000000000053578C "L"
 *   insn=0x000000000053579C string=0x00000000005357A0 "\t"
 *   insn=0x00000000005357B8 string=0x00000000005357BC "?"
 *   insn=0x00000000005357BC string=0x00000000005357C0 "@."
 *   insn=0x00000000005357CC string=0x00000000005357FC "3"
 *   insn=0x00000000005357D4 string=0x00000000005357D8 "_"
 *   insn=0x00000000005357D8 string=0x00000000005357DC "@"
 *   insn=0x00000000005357DC string=0x00000000005357E0 "?"
 *   insn=0x00000000005357E0 string=0x00000000005357E4 " "
 *   insn=0x00000000005357E4 string=0x00000000005358E8 "4"
 *   insn=0x00000000005357E8 string=0x00000000005357EC "@."
 *   insn=0x00000000005357F0 string=0x00000000005357F4 "?"
 *   insn=0x00000000005357F4 string=0x00000000005357F8 "@0"
 *   insn=0x00000000005357FC string=0x0000000000535800 "!"
 *   insn=0x0000000000535804 string=0x0000000000535808 "B"
 *   insn=0x0000000000535820 string=0x0000000000535824 "$"
 *   insn=0x0000000000535824 string=0x0000000000535828 "CHB"
 *   insn=0x0000000000535828 string=0x000000000053582C """
 *   insn=0x000000000053582C string=0x0000000000535830 "c"
 *   insn=0x0000000000535830 string=0x0000000000535834 "S"
 *   insn=0x0000000000535830 string=0x000000000059E580 "-0123456789"
 *   insn=0x0000000000535838 string=0x000000000053583C "th`8"
 *   insn=0x0000000000535840 string=0x0000000000535844 " "
 *   insn=0x000000000053584C string=0x0000000000535864 "4h"8"
 *   insn=0x000000000053585C string=0x0000000000535860 """
 *   insn=0x0000000000535868 string=0x000000000053586C "a"
 *   insn=0x0000000000535870 string=0x0000000000535874 "_"
 *   insn=0x0000000000535874 string=0x0000000000535878 "a"
 *   insn=0x0000000000535880 string=0x0000000000535884 " "
 *   insn=0x000000000053588C string=0x0000000000535890 "?"
 *   insn=0x0000000000535894 string=0x0000000000535898 "!"
 *   insn=0x00000000005358B0 string=0x00000000005358B4 "3"
 *   insn=0x00000000005358B8 string=0x00000000005358BC "_"
 *   insn=0x00000000005358C8 string=0x00000000005358CC "?"
 *   insn=0x00000000005358D0 string=0x00000000005358D4 " "
 *   insn=0x00000000005358DC string=0x00000000005358E0 "?"
 *   insn=0x00000000005358E0 string=0x00000000005358E4 "!"
 *   insn=0x00000000005358F0 string=0x00000000005358F4 "`"
 *   insn=0x00000000005358FC string=0x0000000000535900 " "
 *   insn=0x0000000000535904 string=0x0000000000535908 " "
 *   insn=0x000000000053592C string=0x0000000000535930 "`I"
 *   insn=0x0000000000535934 string=0x0000000000535938 "a"
 *   insn=0x000000000053594C string=0x0000000000535950 "{"
 *   insn=0x0000000000535958 string=0x000000000053595C "!J"
 *   insn=0x0000000000535994 string=0x0000000000535998 " 9"
 *   insn=0x00000000005359A4 string=0x00000000005359A8 "v"
 *   insn=0x00000000005359B0 string=0x00000000005359B4 " "
 *   insn=0x00000000005359C8 string=0x00000000005359CC "`<"
 *   insn=0x00000000005359D0 string=0x00000000005359D4 "4"
 *   insn=0x00000000005359D4 string=0x00000000005359D8 "a"
 *   insn=0x00000000005359E8 string=0x00000000005359EC "!"
 *   insn=0x0000000000535A00 string=0x0000000000535A04 "@"
 *   insn=0x0000000000535A08 string=0x0000000000535A0C "?"
 *   insn=0x0000000000535A24 string=0x0000000000535A28 "_"
 *   insn=0x0000000000535A38 string=0x0000000000535A3C "@"
 *   insn=0x0000000000535A48 string=0x0000000000535A4C "?"
 *   insn=0x0000000000535A4C string=0x0000000000535A50 " "
 *   insn=0x0000000000535A54 string=0x0000000000535A58 "Bhs8_"
 *   insn=0x0000000000535A58 string=0x0000000000535A5C "_"
 *   insn=0x0000000000535A5C string=0x0000000000535A60 " "
 *   insn=0x0000000000535A6C string=0x0000000000535A70 "@"
 *   insn=0x0000000000535A70 string=0x0000000000535A74 "4"
 *   insn=0x0000000000535A74 string=0x0000000000535A78 "C"
 *   insn=0x0000000000535A80 string=0x0000000000535A84 "a"
 *   insn=0x0000000000535A90 string=0x0000000000535A94 "]"
 *   insn=0x0000000000535AA8 string=0x0000000000535AAC "W"
 *   insn=0x0000000000535AB4 string=0x0000000000535AB8 " h`8"
 *   insn=0x0000000000535ACC string=0x0000000000535AD0 "?"
 *   insn=0x0000000000535AD4 string=0x0000000000535AD8 "!"
 *   insn=0x0000000000535AE8 string=0x0000000000535AEC "4"
 *   insn=0x0000000000535B28 string=0x0000000000535B2C "@"
 *   insn=0x0000000000535B40 string=0x0000000000535B44 "B"
 *   insn=0x0000000000535B4C string=0x0000000000535B50 "\t"
 *   insn=0x0000000000535B74 string=0x0000000000535B78 "?"
 *   insn=0x0000000000535B80 string=0x0000000000535B84 " %"
 *   insn=0x0000000000535B8C string=0x0000000000535B90 "&"
 *   insn=0x0000000000535B98 string=0x0000000000535B9C ""
 *   insn=0x0000000000535BC8 string=0x0000000000535BCC "!"
 *   insn=0x0000000000535BCC string=0x0000000000535BD0 "?"
 *   insn=0x0000000000535BD0 string=0x0000000000535BD4 " "
 *   insn=0x0000000000535BD8 string=0x0000000000535BDC "@"
 *   insn=0x0000000000535BE4 string=0x0000000000535BE8 " "
 *   insn=0x0000000000535C00 string=0x0000000000535C04 " "
 *   insn=0x0000000000535C0C string=0x0000000000535C10 "?"
 *   insn=0x0000000000535C14 string=0x0000000000535C18 "!"
 *   insn=0x0000000000535C14 string=0x00000000005362AC "}"
 *   insn=0x0000000000535C1C string=0x0000000000535C20 "4"
 *   insn=0x0000000000535C38 string=0x0000000000535C3C "?"
 *   insn=0x0000000000535C40 string=0x0000000000535C44 " "
 *   insn=0x0000000000535C4C string=0x0000000000535C50 "!hs8?"
 *   insn=0x0000000000535C50 string=0x0000000000535C54 "?"
 *   insn=0x0000000000535C54 string=0x0000000000535C58 "a"
 *   insn=0x0000000000535C5C string=0x0000000000535C60 " "
 *   insn=0x0000000000535C60 string=0x0000000000535C84 "s"
 *   insn=0x0000000000535C68 string=0x0000000000535C6C "?"
 *   insn=0x0000000000535C6C string=0x0000000000535C70 "B"
 *   insn=0x0000000000535C70 string=0x0000000000535C74 "!"
 *   insn=0x0000000000535C94 string=0x0000000000535C98 "4"
 *   insn=0x0000000000535C9C string=0x0000000000535CA0 "_"
 *   insn=0x0000000000535CA0 string=0x0000000000535CA4 "a"
 *   insn=0x0000000000535CAC string=0x0000000000535CB0 "?"
 *   insn=0x0000000000535CB4 string=0x0000000000535CB8 " "
 *   insn=0x0000000000535CD0 string=0x0000000000535CD4 "4"
 *   insn=0x0000000000535CE0 string=0x0000000000535CE4 "?"
 *   insn=0x0000000000535CE8 string=0x0000000000535CEC " "
 *   insn=0x0000000000535CF8 string=0x0000000000535CFC "A"
 *   insn=0x0000000000535D14 string=0x0000000000535D18 "l"
 *   insn=0x0000000000535D20 string=0x0000000000535D24 "?"
 *   insn=0x0000000000535D28 string=0x0000000000535D2C " "
 *   insn=0x0000000000535D38 string=0x0000000000535D3C "@ha8"
 *   insn=0x0000000000535D50 string=0x0000000000535D54 "?"
 *   insn=0x0000000000535D64 string=0x0000000000535D68 "u"
 *   insn=0x0000000000535D70 string=0x0000000000535D74 "?"
 *   insn=0x0000000000535D78 string=0x0000000000535D7C " "
 *   insn=0x0000000000535D80 string=0x0000000000535D84 "$"
 *   insn=0x0000000000535D8C string=0x0000000000535D90 "?"
 *   insn=0x0000000000535D94 string=0x0000000000535D98 "!"
 *   insn=0x0000000000535DA4 string=0x0000000000535DA8 "@"
 *   insn=0x0000000000535DB8 string=0x0000000000535DBC "B"
 *   insn=0x0000000000535DC4 string=0x0000000000535DC8 "`"
 *   insn=0x0000000000535DD8 string=0x0000000000535DDC "@"
 *   insn=0x0000000000535DE4 string=0x0000000000535DE8 ""
 *   insn=0x0000000000535DEC string=0x0000000000535DF0 " "
 *   insn=0x0000000000535E04 string=0x0000000000535E08 "?"
 *   insn=0x0000000000535E08 string=0x0000000000535E0C """
 *   insn=0x0000000000535E0C string=0x0000000000535E10 " "
 *   insn=0x0000000000535E1C string=0x0000000000535E20 "y"
 *   insn=0x0000000000535E38 string=0x0000000000535E3C "`"
 *   insn=0x0000000000535E54 string=0x0000000000535E58 "3"
 *   insn=0x0000000000535E64 string=0x0000000000535E68 "_"
 *   insn=0x0000000000535E90 string=0x0000000000535E94 "a"
 *   insn=0x0000000000535E9C string=0x0000000000535EA0 "_"
 *   insn=0x0000000000535EB0 string=0x0000000000535EB4 "s"
 *   insn=0x0000000000535EB8 string=0x0000000000535EBC "!$@"
 *   insn=0x0000000000535EBC string=0x0000000000535EC0 " "
 *   insn=0x0000000000535EC4 string=0x0000000000535EC8 "A"
 *   insn=0x0000000000535ED8 string=0x0000000000535EDC "A$@"
 *   insn=0x0000000000535EDC string=0x0000000000535EE0 " "
 *   insn=0x0000000000535EE4 string=0x0000000000535EE8 "A"
 *   insn=0x0000000000535EEC string=0x0000000000535EF0 " "
 *   insn=0x0000000000535EF8 string=0x0000000000535EFC "!(@"
 *   insn=0x0000000000535EFC string=0x0000000000535F00 " "
 *   insn=0x0000000000535F04 string=0x0000000000535F08 "]"
 *   insn=0x0000000000535F0C string=0x0000000000535F10 "!(@"
 *   insn=0x0000000000535F10 string=0x0000000000535F14 " "
 *   insn=0x0000000000535F1C string=0x0000000000535F20 "a"
 *   insn=0x0000000000535F24 string=0x0000000000535F28 "!$@"
 *   insn=0x0000000000535F28 string=0x0000000000535F2C " "
 *   insn=0x0000000000535F38 string=0x0000000000535F3C "s"
 *   insn=0x0000000000535F40 string=0x0000000000535F44 "!$@"
 *   insn=0x0000000000535F44 string=0x0000000000535F48 " "
 *   insn=0x0000000000535F68 string=0x0000000000535F6C "s"
 *   insn=0x0000000000535F6C string=0x0000000000535F70 "F"
 *   insn=0x0000000000535F74 string=0x0000000000535F78 "!$@"
 *   insn=0x0000000000535F78 string=0x0000000000535F7C " "
 *   insn=0x0000000000535F88 string=0x0000000000535F8C "!"
 *   insn=0x0000000000535F94 string=0x0000000000535F98 "!$@"
 *   insn=0x0000000000535F98 string=0x0000000000535F9C " "
 *   insn=0x0000000000535FA8 string=0x0000000000535FAC "8"
 *   insn=0x0000000000535FB0 string=0x0000000000535FB4 "!$@"
 *   insn=0x0000000000535FB4 string=0x0000000000535FB8 " "
 *   insn=0x0000000000535FC4 string=0x0000000000535FC8 "!"
 *   insn=0x0000000000535FD0 string=0x0000000000535FD4 "!$@"
 *   insn=0x0000000000535FD4 string=0x0000000000535FD8 " "
 *   insn=0x0000000000535FE8 string=0x0000000000535FEC "/"
 *   insn=0x0000000000535FF0 string=0x0000000000535FF4 "!$@"
 *   insn=0x0000000000535FF4 string=0x0000000000535FF8 " "
 *   insn=0x0000000000536020 string=0x0000000000536024 "@"
 *   insn=0x0000000000536030 string=0x0000000000536034 "#"
 *   insn=0x0000000000536050 string=0x0000000000536054 "`"
 *   insn=0x0000000000536070 string=0x0000000000536074 ""
 *   insn=0x0000000000536084 string=0x000000000053CA8C "E"
 *   insn=0x0000000000536090 string=0x0000000000536094 " "
 *   insn=0x0000000000536098 string=0x000000000053609C " "
 *   insn=0x00000000005360A0 string=0x00000000005360A4 " \n"
 *   insn=0x00000000005360F0 string=0x00000000005360F4 "!"
 *   insn=0x00000000005360F4 string=0x00000000005360F8 "?"
 *   insn=0x000000000053612C string=0x0000000000536130 "?"
 *   insn=0x0000000000536134 string=0x0000000000536138 "!"
 *   insn=0x0000000000536140 string=0x0000000000536144 "4"
 *   insn=0x0000000000536170 string=0x0000000000536174 " "
 *   insn=0x0000000000536188 string=0x000000000053618C "4"
 *   insn=0x00000000005361C8 string=0x00000000005361CC "c"
 *   insn=0x00000000005361D4 string=0x00000000005361D8 "!"
 *   insn=0x00000000005361D8 string=0x00000000005361DC "L"
 *   insn=0x00000000005361EC string=0x00000000005361F0 "A"
 *   insn=0x0000000000536200 string=0x0000000000536204 "?"
 *   insn=0x0000000000536204 string=0x0000000000536208 "A"
 *   insn=0x0000000000536218 string=0x000000000053621C "?"
 *   insn=0x0000000000536220 string=0x0000000000536224 "!"
 *   insn=0x0000000000536238 string=0x000000000053623C "!(@"
 *   insn=0x000000000053623C string=0x0000000000536240 " "
 *   insn=0x0000000000536254 string=0x0000000000536258 """
 *   insn=0x0000000000536260 string=0x0000000000536264 " "
 *   insn=0x0000000000536268 string=0x000000000053626C " "
 *   insn=0x0000000000536270 string=0x0000000000536274 "a"
 *   insn=0x000000000053627C string=0x0000000000536280 "`"
 *   insn=0x0000000000536284 string=0x0000000000536288 "u"
 *   insn=0x0000000000536288 string=0x000000000053628C "{"
 *   insn=0x0000000000536298 string=0x000000000053629C " "
 *   insn=0x00000000005362A0 string=0x00000000005362A4 "n"
 *   insn=0x00000000005362AC string=0x00000000005362B0 "\"
 *   insn=0x00000000005362B8 string=0x00000000005362BC "a"
 *   insn=0x00000000005362C4 string=0x00000000005362C8 "`"
 *   insn=0x00000000005362CC string=0x00000000005362D0 "c"
 *   insn=0x00000000005362D4 string=0x00000000005362D8 "{"
 *   insn=0x00000000005362E0 string=0x00000000005362E4 "`"
 *   insn=0x00000000005362E8 string=0x00000000005362EC "\"
 *   insn=0x00000000005362F0 string=0x00000000005362F4 "t-"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_53557C(
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
  v10 = sub_532614((__int64)v97, v8);
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
            sub_52B4A0((__int64)v95);
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
      sub_567BD4(a8);
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

