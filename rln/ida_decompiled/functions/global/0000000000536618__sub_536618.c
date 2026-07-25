/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000536618
 * Mangled: sub_536618
 * Demangled: sub_536618
 *
 * Callers: 4
 *   0x0000000000536428  sub_536428
 *   0x00000000005372A4  sub_5372A4
 *   0x00000000005374EC  sub_5374EC
 *   0x0000000000537734  sub_537734
 *
 * Callees: 11
 *   0x0000000000203020  .memchr
 *   0x000000000052B45C  sub_52B45C
 *   0x000000000052B4A0  sub_52B4A0
 *   0x0000000000532724  sub_532724
 *   0x0000000000532808  sub_532808
 *   0x00000000005372A4  sub_5372A4
 *   0x000000000053CA8C  sub_53CA8C
 *   0x0000000000567088  sub_567088
 *   0x0000000000567890  sub_567890
 *   0x0000000000568CB8  sub_568CB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 217
 *   insn=0x0000000000536650 string=0x0000000000536654 "4"
 *   insn=0x0000000000536668 string=0x000000000053666C "g"
 *   insn=0x0000000000536674 string=0x0000000000536678 "d"
 *   insn=0x0000000000536688 string=0x000000000053668C "?"
 *   insn=0x000000000053669C string=0x00000000005366A0 "8"
 *   insn=0x00000000005366A0 string=0x00000000005366A4 "y"
 *   insn=0x00000000005366A4 string=0x00000000005366A8 " "
 *   insn=0x00000000005366CC string=0x00000000005366D0 "x"
 *   insn=0x00000000005366F8 string=0x00000000005366FC "?"
 *   insn=0x0000000000536708 string=0x000000000053670C "_"
 *   insn=0x000000000053671C string=0x0000000000536720 "6"
 *   insn=0x0000000000536724 string=0x0000000000536728 "!"
 *   insn=0x000000000053672C string=0x0000000000536730 "_"
 *   insn=0x0000000000536730 string=0x0000000000536734 "A"
 *   insn=0x0000000000536744 string=0x0000000000536748 "?"
 *   insn=0x0000000000536748 string=0x000000000053674C "B4"
 *   insn=0x000000000053674C string=0x0000000000536750 "!"
 *   insn=0x0000000000536764 string=0x0000000000536768 "?"
 *   insn=0x000000000053676C string=0x0000000000536770 "!"
 *   insn=0x0000000000536788 string=0x000000000053678C "_"
 *   insn=0x0000000000536790 string=0x0000000000536794 "?"
 *   insn=0x000000000053679C string=0x00000000005367A0 "`"
 *   insn=0x00000000005367A4 string=0x00000000005367A8 "Z"
 *   insn=0x00000000005367A4 string=0x00000000005367DC "9"
 *   insn=0x00000000005367C4 string=0x000000000053CA8C "E"
 *   insn=0x00000000005367D4 string=0x00000000005367D8 " "
 *   insn=0x00000000005367DC string=0x00000000005367E0 "`b"
 *   insn=0x0000000000536838 string=0x000000000053683C " &"
 *   insn=0x000000000053683C string=0x0000000000536D00 "@"
 *   insn=0x0000000000536848 string=0x0000000000536B20 "@"
 *   insn=0x0000000000536850 string=0x0000000000536854 "B"
 *   insn=0x0000000000536858 string=0x000000000053685C "`"
 *   insn=0x0000000000536868 string=0x000000000053686C """
 *   insn=0x0000000000536870 string=0x0000000000536874 " "
 *   insn=0x0000000000536884 string=0x0000000000536888 """
 *   insn=0x0000000000536888 string=0x000000000053688C "_"
 *   insn=0x0000000000536890 string=0x00000000005368A8 "6h 8"
 *   insn=0x00000000005368A0 string=0x00000000005368A4 " "
 *   insn=0x00000000005368AC string=0x00000000005368B0 "!"
 *   insn=0x00000000005368B4 string=0x00000000005368B8 "_"
 *   insn=0x00000000005368B8 string=0x00000000005368BC "A,"
 *   insn=0x00000000005368C0 string=0x00000000005368C4 "6"
 *   insn=0x00000000005368C8 string=0x00000000005368CC " "
 *   insn=0x00000000005368D4 string=0x00000000005368D8 "?"
 *   insn=0x00000000005368D8 string=0x00000000005368DC "b%"
 *   insn=0x00000000005368DC string=0x00000000005368E0 "!"
 *   insn=0x00000000005368F4 string=0x00000000005368F8 "?"
 *   insn=0x00000000005368FC string=0x0000000000536900 "!"
 *   insn=0x0000000000536918 string=0x000000000053691C "_"
 *   insn=0x0000000000536920 string=0x0000000000536924 "?"
 *   insn=0x000000000053692C string=0x0000000000536930 "@("
 *   insn=0x000000000053693C string=0x0000000000536940 "s"
 *   insn=0x0000000000536954 string=0x0000000000536D28 "@"
 *   insn=0x0000000000536970 string=0x0000000000536974 "I"
 *   insn=0x0000000000536980 string=0x0000000000536984 "3"
 *   insn=0x0000000000536990 string=0x0000000000536994 "_"
 *   insn=0x00000000005369B8 string=0x00000000005369BC "!"
 *   insn=0x00000000005369C0 string=0x00000000005369C4 "_"
 *   insn=0x00000000005369C4 string=0x00000000005369C8 "a$"
 *   insn=0x00000000005369CC string=0x00000000005369D0 " "
 *   insn=0x00000000005369D8 string=0x00000000005369DC "_"
 *   insn=0x00000000005369DC string=0x00000000005369E0 ")$"
 *   insn=0x00000000005369E0 string=0x00000000005369E4 "!"
 *   insn=0x0000000000536A14 string=0x0000000000536A18 "@2"
 *   insn=0x0000000000536A1C string=0x0000000000536A20 "z"
 *   insn=0x0000000000536A28 string=0x0000000000536A2C "?"
 *   insn=0x0000000000536A30 string=0x0000000000536BC0 "x"
 *   insn=0x0000000000536A34 string=0x0000000000536A38 ":"
 *   insn=0x0000000000536A40 string=0x0000000000536A44 "a"
 *   insn=0x0000000000536A50 string=0x0000000000536A54 "3"
 *   insn=0x0000000000536A60 string=0x0000000000536A64 "_"
 *   insn=0x0000000000536A80 string=0x0000000000536A84 ":"
 *   insn=0x0000000000536A88 string=0x0000000000536A8C "!"
 *   insn=0x0000000000536A90 string=0x0000000000536A94 "_"
 *   insn=0x0000000000536AB0 string=0x0000000000536AB4 "@"
 *   insn=0x0000000000536AB8 string=0x0000000000536ABC "3"
 *   insn=0x0000000000536AC0 string=0x0000000000536AC4 "_"
 *   insn=0x0000000000536AC4 string=0x0000000000536AC8 "a"
 *   insn=0x0000000000536AD0 string=0x0000000000536AD4 "?"
 *   insn=0x0000000000536AD8 string=0x0000000000536ADC " "
 *   insn=0x0000000000536AE4 string=0x0000000000536AE8 "?"
 *   insn=0x0000000000536AF0 string=0x0000000000536AF4 "E"
 *   insn=0x0000000000536B04 string=0x0000000000536B08 "?"
 *   insn=0x0000000000536B08 string=0x0000000000536B0C "B"
 *   insn=0x0000000000536B0C string=0x0000000000536B10 " "
 *   insn=0x0000000000536B3C string=0x0000000000536B40 "T"
 *   insn=0x0000000000536B4C string=0x0000000000536B50 "3"
 *   insn=0x0000000000536B5C string=0x0000000000536B60 "_"
 *   insn=0x0000000000536B6C string=0x0000000000536B70 "F"
 *   insn=0x0000000000536B80 string=0x0000000000536B84 "<"
 *   insn=0x0000000000536B88 string=0x0000000000536B8C "!"
 *   insn=0x0000000000536B90 string=0x0000000000536B94 "_"
 *   insn=0x0000000000536BA8 string=0x0000000000536BAC " "
 *   insn=0x0000000000536BB0 string=0x0000000000536BB4 "@"
 *   insn=0x0000000000536BB8 string=0x0000000000536BBC "V"
 *   insn=0x0000000000536BFC string=0x0000000000536C00 "$"
 *   insn=0x0000000000536C0C string=0x0000000000536C10 "3"
 *   insn=0x0000000000536C1C string=0x0000000000536C20 "_"
 *   insn=0x0000000000536C44 string=0x0000000000536C48 "!"
 *   insn=0x0000000000536C4C string=0x0000000000536C50 "_"
 *   insn=0x0000000000536C58 string=0x0000000000536C5C " "
 *   insn=0x0000000000536C64 string=0x0000000000536C68 "?"
 *   insn=0x0000000000536C6C string=0x0000000000536C70 "!"
 *   insn=0x0000000000536CB4 string=0x0000000000536CB8 "?"
 *   insn=0x0000000000536CBC string=0x0000000000536CC0 "A"
 *   insn=0x0000000000536CD0 string=0x0000000000536CD4 ":"
 *   insn=0x0000000000536CE0 string=0x0000000000536CE4 "?"
 *   insn=0x0000000000536CE8 string=0x0000000000536CEC " "
 *   insn=0x0000000000536D2C string=0x0000000000536D30 "I"
 *   insn=0x0000000000536D3C string=0x0000000000536D40 "<"
 *   insn=0x0000000000536D40 string=0x0000000000536D44 "}"
 *   insn=0x0000000000536D50 string=0x0000000000536D54 "_"
 *   insn=0x0000000000536D54 string=0x0000000000536D58 " '"
 *   insn=0x0000000000536D58 string=0x000000000053723C ":"
 *   insn=0x0000000000536D5C string=0x0000000000536D60 "_"
 *   insn=0x0000000000536D64 string=0x0000000000536D68 "?"
 *   insn=0x0000000000536D64 string=0x0000000000536EB4 ":"
 *   insn=0x0000000000536D6C string=0x0000000000536D70 "a"
 *   insn=0x0000000000536D74 string=0x0000000000536D78 "A"
 *   insn=0x0000000000536D7C string=0x0000000000536D80 ":"
 *   insn=0x0000000000536D88 string=0x0000000000536D8C "!(@"
 *   insn=0x0000000000536D8C string=0x0000000000536D90 " "
 *   insn=0x0000000000536DA8 string=0x0000000000536DAC "?"
 *   insn=0x0000000000536DB4 string=0x0000000000536DB8 "!$@"
 *   insn=0x0000000000536DB8 string=0x0000000000536DBC " "
 *   insn=0x0000000000536DCC string=0x0000000000536DD0 "x"
 *   insn=0x0000000000536DD4 string=0x0000000000536DD8 "!(@"
 *   insn=0x0000000000536DD8 string=0x0000000000536DDC " "
 *   insn=0x0000000000536DE8 string=0x0000000000536DEC " "
 *   insn=0x0000000000536DF4 string=0x0000000000536DF8 "?"
 *   insn=0x0000000000536E00 string=0x0000000000536E04 "!$@"
 *   insn=0x0000000000536E04 string=0x0000000000536E08 " "
 *   insn=0x0000000000536E18 string=0x0000000000536E1C "%"
 *   insn=0x0000000000536E20 string=0x0000000000536E24 "!$@"
 *   insn=0x0000000000536E24 string=0x0000000000536E28 " "
 *   insn=0x0000000000536E3C string=0x0000000000536E40 "|"
 *   insn=0x0000000000536E64 string=0x0000000000536E68 "!(@"
 *   insn=0x0000000000536E68 string=0x0000000000536E6C " "
 *   insn=0x0000000000536E74 string=0x0000000000536E78 "!$@"
 *   insn=0x0000000000536E78 string=0x0000000000536E7C " "
 *   insn=0x0000000000536E94 string=0x0000000000536E98 "!$@"
 *   insn=0x0000000000536E98 string=0x0000000000536E9C " "
 *   insn=0x0000000000536EA8 string=0x0000000000536EAC "!"
 *   insn=0x0000000000536EAC string=0x0000000000536EB0 "9"
 *   insn=0x0000000000536EB4 string=0x0000000000536EB8 "^"
 *   insn=0x0000000000536ED4 string=0x0000000000536ED8 "l"
 *   insn=0x0000000000536EE0 string=0x0000000000536EE4 "I"
 *   insn=0x0000000000536EEC string=0x0000000000536EF0 "?"
 *   insn=0x0000000000536F04 string=0x0000000000536F08 "_"
 *   insn=0x0000000000536F0C string=0x000000000053726C "!"
 *   insn=0x0000000000536F10 string=0x0000000000536F14 "_"
 *   insn=0x0000000000536F20 string=0x0000000000536F24 "a"
 *   insn=0x0000000000536F28 string=0x0000000000536F2C "A"
 *   insn=0x0000000000536F2C string=0x0000000000536F30 "X"
 *   insn=0x0000000000536F34 string=0x0000000000536F38 " "
 *   insn=0x0000000000536F40 string=0x0000000000536F44 "?"
 *   insn=0x0000000000536F44 string=0x0000000000536F48 "b"
 *   insn=0x0000000000536F48 string=0x0000000000536F4C "!"
 *   insn=0x0000000000536F5C string=0x0000000000536F60 "*"
 *   insn=0x0000000000536F68 string=0x0000000000536F6C "'"
 *   insn=0x0000000000536F7C string=0x0000000000536F80 "?"
 *   insn=0x0000000000536F9C string=0x0000000000536FA0 "y"
 *   insn=0x0000000000536FB4 string=0x0000000000536FB8 " "
 *   insn=0x0000000000536FB8 string=0x0000000000536EBC " "
 *   insn=0x0000000000536FC0 string=0x0000000000536FC4 "`"
 *   insn=0x0000000000536FE8 string=0x0000000000536FEC "?"
 *   insn=0x0000000000536FF0 string=0x0000000000536FF4 "!"
 *   insn=0x0000000000537004 string=0x0000000000537008 "?"
 *   insn=0x000000000053700C string=0x0000000000537010 "!"
 *   insn=0x0000000000537028 string=0x000000000053702C "_"
 *   insn=0x0000000000537030 string=0x0000000000537034 "?"
 *   insn=0x0000000000537034 string=0x0000000000537038 " "
 *   insn=0x0000000000537038 string=0x00000000005370DC "6"
 *   insn=0x000000000053703C string=0x0000000000537040 "S"
 *   insn=0x0000000000537044 string=0x0000000000537048 "_"
 *   insn=0x000000000053704C string=0x0000000000537050 "Z"
 *   insn=0x000000000053704C string=0x0000000000537184 "`\n@"
 *   insn=0x0000000000537054 string=0x0000000000537058 "6"
 *   insn=0x0000000000537060 string=0x0000000000537064 "`"
 *   insn=0x0000000000537064 string=0x0000000000537068 "`"
 *   insn=0x0000000000537068 string=0x000000000053706C "9"
 *   insn=0x000000000053706C string=0x0000000000537070 "`b"
 *   insn=0x00000000005370A4 string=0x00000000005370A8 "`"
 *   insn=0x00000000005370C8 string=0x00000000005370CC "?"
 *   insn=0x00000000005370CC string=0x00000000005370D0 "`"
 *   insn=0x00000000005370E4 string=0x00000000005370E8 "p"
 *   insn=0x00000000005370F0 string=0x00000000005370F4 "?"
 *   insn=0x00000000005370F4 string=0x00000000005370F8 ""\t"
 *   insn=0x00000000005370F8 string=0x00000000005370FC " "
 *   insn=0x0000000000537114 string=0x0000000000537118 "6"
 *   insn=0x0000000000537124 string=0x0000000000537128 "_"
 *   insn=0x0000000000537148 string=0x000000000053714C "!"
 *   insn=0x0000000000537150 string=0x0000000000537154 "_"
 *   insn=0x0000000000537174 string=0x0000000000537178 " "
 *   insn=0x0000000000537178 string=0x000000000053717C "6"
 *   insn=0x0000000000537184 string=0x0000000000537188 "a"
 *   insn=0x0000000000537190 string=0x00000000005371EC "a"
 *   insn=0x00000000005371A4 string=0x00000000005371A8 "!(@"
 *   insn=0x00000000005371A8 string=0x00000000005371AC " "
 *   insn=0x00000000005371C0 string=0x00000000005371C4 "?"
 *   insn=0x00000000005371C4 string=0x00000000005371C8 "C"
 *   insn=0x00000000005371CC string=0x00000000005371D0 "!$@"
 *   insn=0x00000000005371D0 string=0x00000000005371D4 " "
 *   insn=0x00000000005371F0 string=0x00000000005371F4 "!$@"
 *   insn=0x00000000005371F4 string=0x00000000005371F8 " "
 *   insn=0x0000000000537214 string=0x0000000000537218 "$"
 *   insn=0x000000000053721C string=0x0000000000537220 "!$@"
 *   insn=0x0000000000537220 string=0x0000000000537224 " "
 *   insn=0x0000000000537230 string=0x0000000000537234 "!"
 *   insn=0x000000000053723C string=0x0000000000537240 "}"
 *   insn=0x0000000000537258 string=0x000000000053725C "B"
 *   insn=0x0000000000537264 string=0x0000000000537268 "M"
 *   insn=0x000000000053726C string=0x0000000000537270 "J"
 *   insn=0x0000000000537274 string=0x0000000000537278 "7"
 *   insn=0x0000000000537280 string=0x0000000000537284 "9"
 *   insn=0x000000000053728C string=0x0000000000537290 "`"
 *   insn=0x0000000000537294 string=0x0000000000537298 "q"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_536618(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        __int64 *a8)
{
  int v9; // w19
  __int64 v10; // x21
  int v11; // w22
  int v12; // w1
  unsigned int v13; // w23
  unsigned int i; // w22
  int v15; // w24
  unsigned int v16; // w26
  unsigned int v17; // w28
  char v18; // w24
  __int64 v19; // x22
  __int64 v20; // x0
  __int64 v21; // x19
  __int64 v22; // x0
  _QWORD *v23; // x0
  unsigned __int64 v24; // x1
  unsigned __int8 *v25; // x1
  int v26; // w1
  _QWORD *v27; // x0
  int v28; // w19
  int v29; // w1
  char *v30; // x19
  unsigned int *v31; // x0
  _QWORD *v32; // x20
  int v34; // w0
  void *v35; // x0
  __int64 v36; // x1
  char v37; // w22
  __int64 v38; // x0
  __int64 v39; // x19
  __int64 v40; // x0
  _QWORD *v41; // x0
  unsigned __int64 v42; // x1
  unsigned __int8 *v43; // x1
  int v44; // w1
  _QWORD *v45; // x0
  int v46; // w19
  int v47; // w1
  __int64 v48; // x0
  __int64 v49; // x1
  __int64 v50; // x19
  __int64 v51; // x0
  unsigned __int64 v52; // x1
  _BOOL4 v53; // w19
  char v54; // w24
  __int64 v55; // x0
  __int64 v56; // x1
  unsigned __int8 *v57; // x1
  int v58; // w0
  unsigned __int8 *v59; // x1
  int v60; // w0
  __int64 v61; // x0
  __int64 v62; // x1
  __int64 v63; // x19
  __int64 v64; // x0
  __int64 v65; // x0
  __int64 v66; // x1
  __int64 v67; // x19
  __int64 v68; // x0
  unsigned __int64 v69; // x1
  _BOOL4 v70; // w19
  unsigned __int8 *v71; // x1
  int v72; // w0
  __int64 v73; // x1
  int v74; // w26
  __int64 v75; // x1
  unsigned __int64 v76; // x1
  int v77; // w19
  _QWORD *v78; // x0
  unsigned __int64 v79; // x1
  unsigned __int64 v80; // x2
  unsigned __int8 *v81; // x1
  int v82; // w1
  _QWORD *v83; // x0
  int v84; // w22
  int v85; // w1
  unsigned __int8 *v86; // x1
  int v87; // w0
  __int64 v88; // x0
  __int64 v89; // x1
  __int64 v90; // x22
  __int64 v91; // x0
  unsigned __int8 *v92; // x0
  int v93; // w0
  int v95; // [xsp+6Ch] [xbp+6Ch]
  void *v96; // [xsp+78h] [xbp+78h]
  _QWORD *v97; // [xsp+80h] [xbp+80h] BYREF
  __int64 v98; // [xsp+88h] [xbp+88h]
  _QWORD *v99; // [xsp+90h] [xbp+90h] BYREF
  __int64 v100; // [xsp+98h] [xbp+98h]
  char v101[8]; // [xsp+A8h] [xbp+A8h] BYREF
  char *v102; // [xsp+B8h] [xbp+B8h] BYREF

  v99 = a2;
  v100 = a3;
  v97 = a4;
  v98 = a5;
  v9 = 0;
  v10 = sub_532724((__int64)v101, (_QWORD *)(a6 + 208));
  v11 = sub_532808((__int64)&v99);
  if ( (v11 == -1) == ((unsigned int)sub_532808((__int64)&v97) == -1) )
    goto LABEL_2;
  v74 = (unsigned __int8)sub_532808((__int64)&v99);
  if ( *(unsigned __int8 *)(v10 + 111) == v74 || *(unsigned __int8 *)(v10 + 110) == v74 )
  {
    v12 = *(unsigned __int8 *)(v10 + 32);
    if ( *(_BYTE *)(v10 + 32) && *(unsigned __int8 *)(v10 + 73) == v74 )
    {
      v12 = 1;
    }
    else if ( *(unsigned __int8 *)(v10 + 72) != v74 )
    {
      if ( *(unsigned __int8 *)(v10 + 111) == v74 )
        v75 = 43;
      else
        v75 = 45;
      sub_567890(a8, v75);
      if ( v99 )
      {
        v76 = v99[2];
        if ( v76 >= v99[3] )
          sub_52B4A0((__int64)v99);
        else
          v99[2] = v76 + 1;
        LODWORD(v100) = -1;
      }
      v77 = sub_532808((__int64)&v99);
      if ( (v77 == -1) == ((unsigned int)sub_532808((__int64)&v97) == -1) )
      {
        v9 = v74;
LABEL_2:
        v12 = *(unsigned __int8 *)(v10 + 32);
        v13 = 0;
        i = 0;
        v15 = 1;
        goto LABEL_3;
      }
      v74 = (unsigned __int8)sub_532808((__int64)&v99);
      v12 = *(unsigned __int8 *)(v10 + 32);
    }
  }
  else
  {
    v12 = *(unsigned __int8 *)(v10 + 32);
  }
  v13 = 0;
  for ( i = 0; ; i = 1 )
  {
    if ( v12 && *(unsigned __int8 *)(v10 + 73) == v74 )
    {
      v9 = v74;
      v15 = 0;
      v102 = &byte_6FD2F8;
      goto LABEL_140;
    }
    if ( *(unsigned __int8 *)(v10 + 72) == v74 )
      break;
    v9 = *(unsigned __int8 *)(v10 + 114);
    if ( v9 != v74 )
      break;
    if ( i )
      goto LABEL_160;
    v88 = *a8;
    v89 = *(_QWORD *)(*a8 - 24);
    v90 = v89 + 1;
    if ( (unsigned __int64)(v89 + 1) > *(_QWORD *)(*a8 - 16) || *(int *)(v88 - 8) > 0 )
    {
      sub_567088(a8, v89 + 1);
      v88 = *a8;
      v89 = *(_QWORD *)(*a8 - 24);
    }
    *(_BYTE *)(v88 + v89) = 48;
    v91 = *a8;
    if ( (__int64 *)(*a8 - 24) == &qword_6FD2E0 )
    {
LABEL_160:
      v78 = v99;
      ++v13;
      if ( !v99 )
        goto LABEL_188;
    }
    else
    {
      *(_DWORD *)(v91 - 8) = 0;
      ++v13;
      *(_QWORD *)(v91 - 24) = v90;
      *(_BYTE *)(v91 + v90) = 0;
      v78 = v99;
      if ( !v99 )
        goto LABEL_188;
    }
    v79 = v78[2];
    if ( v79 >= v78[3] )
    {
      (*(void (__fastcall **)(_QWORD *))(*v78 + 80LL))(v78);
      LODWORD(v100) = -1;
      v78 = v99;
      if ( !v99 )
        goto LABEL_188;
      v81 = (unsigned __int8 *)v99[2];
      if ( (unsigned __int64)v81 < v99[3] )
      {
LABEL_163:
        v82 = *v81;
        goto LABEL_164;
      }
    }
    else
    {
      v78[2] = v79 + 1;
      v80 = v78[3];
      v81 = (unsigned __int8 *)v78[2];
      LODWORD(v100) = -1;
      if ( (unsigned __int64)v81 < v80 )
        goto LABEL_163;
    }
    v82 = (*(__int64 (__fastcall **)(_QWORD *))(*v78 + 72LL))(v78);
    if ( v82 == -1 )
    {
      v99 = 0;
LABEL_188:
      v83 = v97;
      if ( !v97 )
      {
LABEL_179:
        i = 1;
        v12 = *(unsigned __int8 *)(v10 + 32);
        v15 = 1;
        goto LABEL_3;
      }
      v84 = 1;
      goto LABEL_165;
    }
LABEL_164:
    v83 = v97;
    v84 = 0;
    LODWORD(v100) = v82;
    if ( !v97 )
      goto LABEL_167;
LABEL_165:
    v85 = 0;
    if ( (_DWORD)v98 != -1 )
      goto LABEL_166;
    v86 = (unsigned __int8 *)v83[2];
    if ( (unsigned __int64)v86 < v83[3] )
    {
      v87 = *v86;
LABEL_182:
      LODWORD(v98) = v87;
      v85 = 0;
      goto LABEL_166;
    }
    v87 = (*(__int64 (__fastcall **)(_QWORD *))(*v83 + 72LL))(v83);
    if ( v87 != -1 )
      goto LABEL_182;
    v97 = 0;
    v85 = 1;
LABEL_166:
    if ( v85 == v84 )
      goto LABEL_179;
LABEL_167:
    if ( v99 )
    {
      if ( (_DWORD)v100 != -1 )
      {
        v74 = (unsigned __int8)v100;
        goto LABEL_170;
      }
      v92 = (unsigned __int8 *)v99[2];
      if ( (unsigned __int64)v92 < v99[3] )
      {
        v93 = *v92;
LABEL_192:
        LODWORD(v100) = v93;
        v74 = (unsigned __int8)v93;
        goto LABEL_170;
      }
      v93 = (*(__int64 (__fastcall **)(_QWORD *))(*v99 + 72LL))(v99);
      if ( v93 != -1 )
        goto LABEL_192;
      v99 = 0;
    }
    v74 = 255;
LABEL_170:
    v12 = *(unsigned __int8 *)(v10 + 32);
  }
  v9 = v74;
  v15 = 0;
LABEL_3:
  v102 = &byte_6FD2F8;
  if ( v12 )
LABEL_140:
    sub_567088(&v102, 32);
  v95 = *(unsigned __int8 *)(v10 + 136);
  if ( !*(_BYTE *)(v10 + 136) )
  {
    if ( !v15 )
    {
      v16 = 0;
      v17 = 0;
      while ( 1 )
      {
        v18 = v9 - 48;
        if ( (unsigned __int8)(v9 - 48) <= 9u )
        {
          v19 = *a8;
          v20 = *(_QWORD *)(*a8 - 24);
          v21 = v20 + 1;
          if ( (unsigned __int64)(v20 + 1) > *(_QWORD *)(*a8 - 16) || *(int *)(v19 - 8) > 0 )
          {
            sub_567088(a8, v21);
            v19 = *a8;
            v20 = *(_QWORD *)(*a8 - 24);
          }
          *(_BYTE *)(v19 + v20) = v18 + 48;
          i = 1;
          v22 = *a8;
          if ( (__int64 *)(*a8 - 24) == &qword_6FD2E0 )
            goto LABEL_12;
          goto LABEL_67;
        }
        if ( *(unsigned __int8 *)(v10 + 72) == v9 && (v16 ^ 1) > v17 )
        {
          sub_567890(a8, 46);
          v17 = 1;
LABEL_12:
          v23 = v99;
          if ( !v99 )
            goto LABEL_68;
          goto LABEL_13;
        }
        if ( *(unsigned __int8 *)(v10 + 128) != v9 && *(unsigned __int8 *)(v10 + 134) != v9 || i <= v16 )
          goto LABEL_19;
        v48 = *a8;
        v49 = *(_QWORD *)(*a8 - 24);
        v50 = v49 + 1;
        if ( (unsigned __int64)(v49 + 1) > *(_QWORD *)(*a8 - 16) || *(int *)(v48 - 8) > 0 )
        {
          sub_567088(a8, v49 + 1);
          v48 = *a8;
          v49 = *(_QWORD *)(*a8 - 24);
        }
        *(_BYTE *)(v48 + v49) = 101;
        v51 = *a8;
        if ( (__int64 *)(*a8 - 24) != &qword_6FD2E0 )
        {
          *(_DWORD *)(v51 - 8) = 0;
          *(_QWORD *)(v51 - 24) = v50;
          *(_BYTE *)(v51 + v50) = 0;
        }
        if ( v99 )
        {
          v52 = v99[2];
          if ( v99[3] <= v52 )
            (*(void (**)(void))(*v99 + 80LL))();
          else
            v99[2] = v52 + 1;
          LODWORD(v100) = -1;
        }
        v53 = sub_532808((__int64)&v99) == -1;
        if ( ((unsigned int)sub_532808((__int64)&v97) == -1) == v53 )
          goto LABEL_171;
        v9 = (unsigned __int8)sub_532808((__int64)&v99);
        if ( *(unsigned __int8 *)(v10 + 111) == v9 )
          break;
        v16 = 1;
        v54 = 45;
        if ( *(unsigned __int8 *)(v10 + 110) == v9 )
        {
LABEL_63:
          v55 = *a8;
          v56 = *(_QWORD *)(*a8 - 24);
          v21 = v56 + 1;
          if ( (unsigned __int64)(v56 + 1) > *(_QWORD *)(*a8 - 16) || *(int *)(v55 - 8) > 0 )
          {
            sub_567088(a8, v56 + 1);
            v55 = *a8;
            v56 = *(_QWORD *)(*a8 - 24);
          }
          *(_BYTE *)(v55 + v56) = v54;
          v16 = 1;
          v22 = *a8;
          if ( (__int64 *)(*a8 - 24) == &qword_6FD2E0 )
            goto LABEL_12;
LABEL_67:
          *(_DWORD *)(v22 - 8) = 0;
          *(_QWORD *)(v22 - 24) = v21;
          *(_BYTE *)(v22 + v21) = 0;
          v23 = v99;
          if ( !v99 )
            goto LABEL_68;
LABEL_13:
          v24 = v23[2];
          if ( v24 >= v23[3] )
          {
            (*(void (__fastcall **)(_QWORD *))(*v23 + 80LL))(v23);
            v23 = v99;
            LODWORD(v100) = -1;
            if ( !v99 )
              goto LABEL_68;
            v25 = (unsigned __int8 *)v99[2];
            if ( (unsigned __int64)v25 < v99[3] )
            {
LABEL_15:
              v26 = *v25;
              goto LABEL_16;
            }
          }
          else
          {
            v23[2] = v24 + 1;
            LODWORD(v100) = -1;
            v25 = (unsigned __int8 *)v23[2];
            if ( (unsigned __int64)v25 < v23[3] )
              goto LABEL_15;
          }
          v26 = (*(__int64 (__fastcall **)(_QWORD *))(*v23 + 72LL))(v23);
          if ( v26 == -1 )
          {
            v99 = 0;
LABEL_68:
            v27 = v97;
            if ( !v97 )
              goto LABEL_19;
            v28 = 1;
            v29 = 0;
            if ( (_DWORD)v98 != -1 )
              goto LABEL_18;
            goto LABEL_70;
          }
LABEL_16:
          v27 = v97;
          v28 = 0;
          LODWORD(v100) = v26;
          if ( !v97 )
            goto LABEL_73;
          v29 = 0;
          if ( (_DWORD)v98 != -1 )
            goto LABEL_18;
LABEL_70:
          v57 = (unsigned __int8 *)v27[2];
          if ( (unsigned __int64)v57 >= v27[3] )
          {
            v58 = (*(__int64 (__fastcall **)(_QWORD *))(*v27 + 72LL))(v27);
            if ( v58 == -1 )
            {
              v97 = 0;
              v29 = 1;
LABEL_18:
              if ( v29 == v28 )
                goto LABEL_19;
              goto LABEL_73;
            }
          }
          else
          {
            v58 = *v57;
          }
          LODWORD(v98) = v58;
          if ( !v28 )
            goto LABEL_19;
LABEL_73:
          v9 = (unsigned __int8)sub_532808((__int64)&v99);
        }
      }
      v54 = 43;
      goto LABEL_63;
    }
    goto LABEL_175;
  }
  if ( v15 )
  {
LABEL_175:
    v30 = v102;
    if ( !*((_QWORD *)v102 - 3) )
      goto LABEL_23;
LABEL_176:
    sub_567890(&v102, v13);
    v30 = v102;
LABEL_21:
    if ( !(unsigned __int8)sub_53CA8C(*(_QWORD *)(v10 + 16), *(_QWORD *)(v10 + 24), &v102) )
      *a7 = 4;
LABEL_23:
    v31 = (unsigned int *)(v30 - 24);
    v32 = v99;
    if ( v30 - 24 != (char *)&qword_6FD2E0 )
      goto LABEL_173;
    return v32;
  }
  v34 = *(unsigned __int8 *)(v10 + 32);
  v16 = 0;
  v96 = (void *)(v10 + 114);
  v17 = 0;
LABEL_27:
  if ( !v34 )
    goto LABEL_29;
  while ( 1 )
  {
    if ( *(unsigned __int8 *)(v10 + 73) == v9 )
    {
      if ( (v16 ^ 1) <= v17 )
        break;
      if ( !v13 )
      {
        sub_568CB8(a8, 0, *(_QWORD *)(*a8 - 24), 0);
        v17 = 0;
LABEL_19:
        v30 = v102;
        if ( !*((_QWORD *)v102 - 3) )
          goto LABEL_23;
        if ( v17 < (v16 ^ 1) )
          goto LABEL_176;
        goto LABEL_21;
      }
      sub_567890(&v102, v13);
      v17 = 0;
      v13 = 0;
LABEL_37:
      v41 = v99;
      if ( !v99 )
        goto LABEL_85;
      goto LABEL_38;
    }
LABEL_29:
    if ( *(unsigned __int8 *)(v10 + 72) == v9 )
    {
      if ( (v16 ^ 1) <= v17 )
        break;
      if ( *((_QWORD *)v102 - 3) )
        sub_567890(&v102, v13);
      v61 = *a8;
      v62 = *(_QWORD *)(*a8 - 24);
      v63 = v62 + 1;
      if ( (unsigned __int64)(v62 + 1) > *(_QWORD *)(*a8 - 16) || *(int *)(v61 - 8) > 0 )
      {
        sub_567088(a8, v62 + 1);
        v61 = *a8;
        v62 = *(_QWORD *)(*a8 - 24);
      }
      *(_BYTE *)(v61 + v62) = 46;
      v17 = 1;
      v64 = *a8;
      if ( (__int64 *)(*a8 - 24) == &qword_6FD2E0 )
        goto LABEL_37;
      *(_DWORD *)(v64 - 8) = 0;
      *(_QWORD *)(v64 - 24) = v63;
      *(_BYTE *)(v64 + v63) = 0;
      v41 = v99;
      if ( !v99 )
        goto LABEL_85;
LABEL_38:
      v42 = v41[2];
      if ( v42 >= v41[3] )
      {
        (*(void (__fastcall **)(_QWORD *))(*v41 + 80LL))(v41);
        v41 = v99;
        LODWORD(v100) = -1;
        if ( !v99 )
          goto LABEL_85;
        v43 = (unsigned __int8 *)v99[2];
        if ( (unsigned __int64)v43 < v99[3] )
        {
LABEL_40:
          v44 = *v43;
          goto LABEL_41;
        }
      }
      else
      {
        v41[2] = v42 + 1;
        LODWORD(v100) = -1;
        v43 = (unsigned __int8 *)v41[2];
        if ( (unsigned __int64)v43 < v41[3] )
          goto LABEL_40;
      }
      v44 = (*(__int64 (__fastcall **)(_QWORD *))(*v41 + 72LL))(v41);
      if ( v44 == -1 )
      {
        v99 = 0;
LABEL_85:
        v45 = v97;
        if ( !v97 )
          goto LABEL_19;
        v46 = v95;
        goto LABEL_42;
      }
LABEL_41:
      v45 = v97;
      v46 = 0;
      LODWORD(v100) = v44;
      if ( !v97 )
        goto LABEL_44;
LABEL_42:
      v47 = 0;
      if ( (_DWORD)v98 != -1 )
        goto LABEL_43;
      v59 = (unsigned __int8 *)v45[2];
      if ( (unsigned __int64)v59 < v45[3] )
      {
        v60 = *v59;
LABEL_76:
        LODWORD(v98) = v60;
        v47 = 0;
        goto LABEL_43;
      }
      v60 = (*(__int64 (__fastcall **)(_QWORD *))(*v45 + 72LL))(v45);
      if ( v60 != -1 )
        goto LABEL_76;
      v97 = 0;
      v47 = v95;
LABEL_43:
      if ( v47 == v46 )
        goto LABEL_19;
LABEL_44:
      if ( !v99 )
        goto LABEL_132;
      if ( (_DWORD)v100 == -1 )
      {
        v71 = (unsigned __int8 *)v99[2];
        if ( (unsigned __int64)v71 < v99[3] )
        {
          v72 = *v71;
          goto LABEL_109;
        }
        v72 = (*(__int64 (**)(void))(*v99 + 72LL))();
        if ( v72 == -1 )
        {
          v99 = 0;
LABEL_132:
          v9 = 255;
          v34 = *(unsigned __int8 *)(v10 + 32);
        }
        else
        {
LABEL_109:
          LODWORD(v100) = v72;
          v9 = (unsigned __int8)v72;
          v34 = *(unsigned __int8 *)(v10 + 32);
        }
      }
      else
      {
        v9 = (unsigned __int8)v100;
        v34 = *(unsigned __int8 *)(v10 + 32);
      }
      goto LABEL_27;
    }
    v35 = memchr(v96, v9, 0xAu);
    if ( v35 )
    {
      v36 = *a8;
      v37 = (_BYTE)v35 - (_BYTE)v96 + 48;
      v38 = *(_QWORD *)(*a8 - 24);
      v39 = v38 + 1;
      if ( (unsigned __int64)(v38 + 1) > *(_QWORD *)(*a8 - 16) || *(int *)(v36 - 8) > 0 )
      {
        sub_567088(a8, v39);
        v36 = *a8;
        v38 = *(_QWORD *)(*a8 - 24);
      }
      *(_BYTE *)(v36 + v38) = v37;
      v40 = *a8;
      if ( (__int64 *)(*a8 - 24) != &qword_6FD2E0 )
      {
        *(_DWORD *)(v40 - 8) = 0;
        *(_QWORD *)(v40 - 24) = v39;
        *(_BYTE *)(v40 + v39) = 0;
      }
      ++v13;
      i = 1;
      goto LABEL_37;
    }
    if ( *(unsigned __int8 *)(v10 + 128) != v9 && *(unsigned __int8 *)(v10 + 134) != v9 || i <= v16 )
      goto LABEL_19;
    if ( !v17 && *((_QWORD *)v102 - 3) )
      sub_567890(&v102, v13);
    v65 = *a8;
    v66 = *(_QWORD *)(*a8 - 24);
    v67 = v66 + 1;
    if ( (unsigned __int64)(v66 + 1) > *(_QWORD *)(*a8 - 16) || *(int *)(v65 - 8) > 0 )
    {
      sub_567088(a8, v66 + 1);
      v65 = *a8;
      v66 = *(_QWORD *)(*a8 - 24);
    }
    *(_BYTE *)(v65 + v66) = 101;
    v68 = *a8;
    if ( (__int64 *)(*a8 - 24) != &qword_6FD2E0 )
    {
      *(_DWORD *)(v68 - 8) = 0;
      *(_QWORD *)(v68 - 24) = v67;
      *(_BYTE *)(v68 + v67) = 0;
    }
    if ( v99 )
    {
      v69 = v99[2];
      if ( v69 >= v99[3] )
        sub_52B4A0((__int64)v99);
      else
        v99[2] = v69 + 1;
      LODWORD(v100) = -1;
    }
    v70 = sub_532808((__int64)&v99) == -1;
    if ( ((unsigned int)sub_532808((__int64)&v97) == -1) == v70 )
      break;
    v9 = (unsigned __int8)sub_532808((__int64)&v99);
    if ( *(unsigned __int8 *)(v10 + 111) != v9 && *(unsigned __int8 *)(v10 + 110) != v9 )
    {
      v34 = *(unsigned __int8 *)(v10 + 32);
      v16 = 1;
      goto LABEL_27;
    }
    v34 = *(unsigned __int8 *)(v10 + 32);
    if ( !*(_BYTE *)(v10 + 32) || *(unsigned __int8 *)(v10 + 73) != v9 )
    {
      if ( *(unsigned __int8 *)(v10 + 72) != v9 )
      {
        if ( *(unsigned __int8 *)(v10 + 111) == v9 )
          v73 = 43;
        else
          v73 = 45;
        sub_567890(a8, v73);
        v16 = 1;
        goto LABEL_37;
      }
      v16 = 1;
      goto LABEL_27;
    }
    v16 = 1;
  }
LABEL_171:
  v30 = v102;
  if ( *((_QWORD *)v102 - 3) )
    goto LABEL_21;
  v31 = (unsigned int *)(v102 - 24);
  v32 = v99;
  if ( v102 - 24 != (char *)&qword_6FD2E0 )
LABEL_173:
    sub_52B45C(v31);
  return v32;
}

