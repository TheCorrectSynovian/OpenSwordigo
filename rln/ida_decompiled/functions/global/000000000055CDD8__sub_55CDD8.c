/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000055CDD8
 * Mangled: sub_55CDD8
 * Demangled: sub_55CDD8
 *
 * Callers: 1
 *   0x000000000055D6E0  sub_55D6E0
 *
 * Callees: 10
 *   0x0000000000200670  .wmemchr
 *   0x000000000053CA8C  sub_53CA8C
 *   0x000000000054D8C4  sub_54D8C4
 *   0x000000000054D8E0  sub_54D8E0
 *   0x0000000000554A24  sub_554A24
 *   0x0000000000554B08  sub_554B08
 *   0x000000000055D6E0  sub_55D6E0
 *   0x0000000000567088  sub_567088
 *   0x0000000000567890  sub_567890
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 168
 *   insn=0x000000000055CE18 string=0x000000000055CE1C "@\t"
 *   insn=0x000000000055CE20 string=0x000000000055CE24 "{"
 *   insn=0x000000000055CE30 string=0x000000000055CE34 "@"
 *   insn=0x000000000055CE38 string=0x000000000055CE3C "Z"
 *   insn=0x000000000055CE48 string=0x000000000055CE4C "/"
 *   insn=0x000000000055CE54 string=0x000000000055CE58 ","
 *   insn=0x000000000055CE68 string=0x000000000055CE6C "?"
 *   insn=0x000000000055CE74 string=0x000000000055CE78 "$"
 *   insn=0x000000000055CEA0 string=0x000000000055CEA4 "@"
 *   insn=0x000000000055CEA8 string=0x000000000055CEAC " "
 *   insn=0x000000000055CEB4 string=0x000000000055CEB8 "?"
 *   insn=0x000000000055CEBC string=0x000000000055CEC0 "!"
 *   insn=0x000000000055CED0 string=0x000000000055CED4 ""
 *   insn=0x000000000055CEDC string=0x000000000055CEE0 "\n"
 *   insn=0x000000000055CEF0 string=0x000000000055CEF4 "?"
 *   insn=0x000000000055CF1C string=0x000000000055CF20 "?"
 *   insn=0x000000000055CF20 string=0x000000000055CF24 "@9"
 *   insn=0x000000000055CF24 string=0x000000000055D64C ""
 *   insn=0x000000000055CF28 string=0x000000000055CF2C "?"
 *   insn=0x000000000055CF34 string=0x000000000055CF38 "?"
 *   insn=0x000000000055CF38 string=0x000000000055CF3C " "
 *   insn=0x000000000055CF3C string=0x000000000055D2C0 "_+"
 *   insn=0x000000000055CF40 string=0x000000000055CF44 "A8"
 *   insn=0x000000000055CF48 string=0x000000000055CF4C "?"
 *   insn=0x000000000055CF50 string=0x000000000055CF60 "_C"
 *   insn=0x000000000055CF54 string=0x000000000055CF58 "?"
 *   insn=0x000000000055CF58 string=0x000000000055CF5C "!"
 *   insn=0x000000000055CF5C string=0x000000000055D300 "!"
 *   insn=0x000000000055CF60 string=0x000000000055CF64 "@"
 *   insn=0x000000000055CF68 string=0x000000000055D680 "!"
 *   insn=0x000000000055CF84 string=0x000000000055CF88 "?"
 *   insn=0x000000000055CF8C string=0x000000000055CF90 "!"
 *   insn=0x000000000055CFAC string=0x000000000055CFB0 "?"
 *   insn=0x000000000055CFBC string=0x000000000055CFC0 "?"
 *   insn=0x000000000055CFE4 string=0x000000000055CFE8 ";"
 *   insn=0x000000000055CFE8 string=0x000000000055CFEC "_C"
 *   insn=0x000000000055CFEC string=0x000000000055CFF0 " "
 *   insn=0x000000000055CFF8 string=0x000000000055CFFC "A"
 *   insn=0x000000000055CFFC string=0x000000000055D000 "X"
 *   insn=0x000000000055D000 string=0x000000000055D004 "!"
 *   insn=0x000000000055D004 string=0x000000000055D008 "!`"
 *   insn=0x000000000055D00C string=0x000000000055D010 " "
 *   insn=0x000000000055D048 string=0x000000000055D118 "`"
 *   insn=0x000000000055D058 string=0x000000000055D05C "B"
 *   insn=0x000000000055D05C string=0x000000000055D060 "`"
 *   insn=0x000000000055D060 string=0x000000000055D064 "?"
 *   insn=0x000000000055D06C string=0x000000000055D070 "6"
 *   insn=0x000000000055D07C string=0x000000000055D080 "?"
 *   insn=0x000000000055D080 string=0x000000000055D084 ""'"
 *   insn=0x000000000055D084 string=0x000000000055D088 "!"
 *   insn=0x000000000055D098 string=0x000000000055D09C "?"
 *   insn=0x000000000055D0A0 string=0x000000000055D0A4 "!"
 *   insn=0x000000000055D0A4 string=0x000000000055D0A8 "?"
 *   insn=0x000000000055D0C4 string=0x000000000055D0C8 "_"
 *   insn=0x000000000055D0CC string=0x000000000055D0D0 "?"
 *   insn=0x000000000055D0D0 string=0x000000000055D0D4 " "
 *   insn=0x000000000055D0DC string=0x000000000055D0E0 " "
 *   insn=0x000000000055D0F4 string=0x000000000055D0F8 "?"
 *   insn=0x000000000055D0F8 string=0x000000000055D0FC "b)"
 *   insn=0x000000000055D0FC string=0x000000000055D100 "3"
 *   insn=0x000000000055D11C string=0x000000000055D120 ")"
 *   insn=0x000000000055D120 string=0x000000000055D124 "`"
 *   insn=0x000000000055D128 string=0x000000000055D12C "I "
 *   insn=0x000000000055D12C string=0x000000000055D130 "`"
 *   insn=0x000000000055D12C string=0x000000000055D534 "`^"
 *   insn=0x000000000055D134 string=0x000000000055D138 "h\n"
 *   insn=0x000000000055D138 string=0x000000000055D13C "?"
 *   insn=0x000000000055D13C string=0x000000000055D140 "`"
 *   insn=0x000000000055D140 string=0x000000000055D144 "C"
 *   insn=0x000000000055D154 string=0x000000000055D158 "_"
 *   insn=0x000000000055D168 string=0x000000000055D16C "`"
 *   insn=0x000000000055D170 string=0x000000000055D174 " "
 *   insn=0x000000000055D178 string=0x000000000055D17C "3"
 *   insn=0x000000000055D180 string=0x000000000055D184 "_"
 *   insn=0x000000000055D184 string=0x000000000055D188 "A"
 *   insn=0x000000000055D190 string=0x000000000055D194 "?"
 *   insn=0x000000000055D198 string=0x000000000055D19C " "
 *   insn=0x000000000055D1AC string=0x000000000055D1B0 "?"
 *   insn=0x000000000055D1B0 string=0x000000000055D1B4 "!"
 *   insn=0x000000000055D1BC string=0x000000000055D1C0 ";"
 *   insn=0x000000000055D1C0 string=0x000000000055D1C4 "@"
 *   insn=0x000000000055D1C4 string=0x000000000055D1C8 "`"
 *   insn=0x000000000055D1E4 string=0x000000000055D1E8 ")~"
 *   insn=0x000000000055D1E8 string=0x000000000053CA8C "E"
 *   insn=0x000000000055D1EC string=0x000000000055D1F0 "@!"
 *   insn=0x000000000055D204 string=0x000000000055D208 "i"
 *   insn=0x000000000055D208 string=0x000000000055D20C "@"
 *   insn=0x000000000055D220 string=0x000000000055D224 " "
 *   insn=0x000000000055D22C string=0x000000000055D230 " "
 *   insn=0x000000000055D234 string=0x000000000055D248 "@"
 *   insn=0x000000000055D238 string=0x000000000055D23C " "
 *   insn=0x000000000055D240 string=0x000000000055D244 " "
 *   insn=0x000000000055D248 string=0x000000000055D24C "Sc"
 *   insn=0x000000000055D258 string=0x000000000055D25C "a "
 *   insn=0x000000000055D288 string=0x000000000055D28C "@"
 *   insn=0x000000000055D2B4 string=0x000000000055D2B8 " "
 *   insn=0x000000000055D2C8 string=0x000000000055D2CC "?"
 *   insn=0x000000000055D2D0 string=0x000000000055D2D4 "_#"
 *   insn=0x000000000055D2DC string=0x000000000055D2E0 " "
 *   insn=0x000000000055D2DC string=0x000000000055D2EC " "
 *   insn=0x000000000055D300 string=0x000000000055D304 "_C"
 *   insn=0x000000000055D308 string=0x000000000055D30C ""
 *   insn=0x000000000055D30C string=0x000000000055D310 "!"
 *   insn=0x000000000055D318 string=0x000000000055D31C "A"
 *   insn=0x000000000055D320 string=0x000000000055D324 "!"
 *   insn=0x000000000055D324 string=0x000000000055D328 "!`"
 *   insn=0x000000000055D32C string=0x000000000055D330 " "
 *   insn=0x000000000055D338 string=0x000000000055D33C "S'"
 *   insn=0x000000000055D398 string=0x000000000055D39C "@"
 *   insn=0x000000000055D3B0 string=0x000000000055D3B4 "?"
 *   insn=0x000000000055D3B4 string=0x000000000055D3B8 "c\t"
 *   insn=0x000000000055D3C8 string=0x000000000055D3CC "_"
 *   insn=0x000000000055D3E8 string=0x000000000055D3EC "?"
 *   insn=0x000000000055D3EC string=0x000000000055D3F0 "B"
 *   insn=0x000000000055D3F4 string=0x000000000055D3F8 "!"
 *   insn=0x000000000055D408 string=0x000000000055D40C "?"
 *   insn=0x000000000055D40C string=0x000000000055D410 """
 *   insn=0x000000000055D410 string=0x000000000055D414 "!"
 *   insn=0x000000000055D414 string=0x000000000055D418 "?"
 *   insn=0x000000000055D434 string=0x000000000055D438 "_"
 *   insn=0x000000000055D43C string=0x000000000055D440 "?"
 *   insn=0x000000000055D464 string=0x000000000055D468 "?"
 *   insn=0x000000000055D468 string=0x000000000055D46C "B"
 *   insn=0x000000000055D46C string=0x000000000055D470 "3"
 *   insn=0x000000000055D474 string=0x000000000055D478 "@\n"
 *   insn=0x000000000055D488 string=0x000000000055D48C "@"
 *   insn=0x000000000055D4A0 string=0x000000000055D4A4 " "
 *   insn=0x000000000055D4B4 string=0x000000000055D4B8 ";"
 *   insn=0x000000000055D4D8 string=0x000000000055D4DC " "
 *   insn=0x000000000055D4DC string=0x000000000055D4E0 "U"
 *   insn=0x000000000055D4E4 string=0x000000000055D4E8 "6"
 *   insn=0x000000000055D4F0 string=0x000000000055D4F4 " "
 *   insn=0x000000000055D500 string=0x000000000055D504 "_"
 *   insn=0x000000000055D510 string=0x000000000055D514 "?"
 *   insn=0x000000000055D518 string=0x000000000055D51C " "
 *   insn=0x000000000055D53C string=0x000000000055D540 "!"
 *   insn=0x000000000055D548 string=0x000000000055D54C "\t"
 *   insn=0x000000000055D550 string=0x000000000055D6A0 "3"
 *   insn=0x000000000055D568 string=0x000000000055D56C "!(@"
 *   insn=0x000000000055D56C string=0x000000000055D570 " "
 *   insn=0x000000000055D598 string=0x000000000055D59C "!(@"
 *   insn=0x000000000055D59C string=0x000000000055D5A0 " "
 *   insn=0x000000000055D5C0 string=0x000000000055D5C4 "j"
 *   insn=0x000000000055D5C8 string=0x000000000055D5CC "!$@"
 *   insn=0x000000000055D5CC string=0x000000000055D5D0 " "
 *   insn=0x000000000055D5D8 string=0x000000000055D5DC "!$@"
 *   insn=0x000000000055D5DC string=0x000000000055D5E0 " "
 *   insn=0x000000000055D5F4 string=0x000000000055D5F8 "!$@"
 *   insn=0x000000000055D5F8 string=0x000000000055D5FC " "
 *   insn=0x000000000055D608 string=0x000000000055D60C "!$@"
 *   insn=0x000000000055D60C string=0x000000000055D610 " "
 *   insn=0x000000000055D61C string=0x000000000055D620 " "
 *   insn=0x000000000055D628 string=0x000000000055D62C "!$@"
 *   insn=0x000000000055D62C string=0x000000000055D630 " "
 *   insn=0x000000000055D63C string=0x000000000055D640 "!(@"
 *   insn=0x000000000055D640 string=0x000000000055D644 " "
 *   insn=0x000000000055D644 string=0x000000000055D648 "T"
 *   insn=0x000000000055D64C string=0x000000000055D650 "g"
 *   insn=0x000000000055D654 string=0x000000000055D658 "!$@"
 *   insn=0x000000000055D658 string=0x000000000055D65C " "
 *   insn=0x000000000055D680 string=0x000000000055D684 ""
 *   insn=0x000000000055D688 string=0x000000000055D68C "Z"
 *   insn=0x000000000055D6A8 string=0x000000000055D6AC ""
 *   insn=0x000000000055D6AC string=0x000000000055D6B0 "O"
 *   insn=0x000000000055D6B4 string=0x000000000055D6B8 "@"
 *   insn=0x000000000055D6C0 string=0x000000000055D6C4 "@c"
 *   insn=0x000000000055D6C8 string=0x000000000055D6CC "`"
 *   insn=0x000000000055D6D8 string=0x000000000055D6DC "z"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_55CDD8(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        _QWORD *a8)
{
  __int64 v8; // x20
  int v9; // w27
  unsigned __int64 v10; // x26
  int v11; // w19
  unsigned int v12; // w19
  int v13; // w0
  unsigned __int64 v14; // x1
  int v15; // w22
  unsigned int v16; // w23
  unsigned __int64 v17; // x1
  int v18; // w25
  int v19; // w27
  size_t v20; // x24
  unsigned __int64 v21; // x25
  unsigned __int64 v22; // x21
  int v23; // w22
  signed int v24; // w0
  _QWORD *v25; // x0
  unsigned __int64 v26; // x1
  int *v27; // x1
  int v28; // w1
  _QWORD *v29; // x0
  int v30; // w19
  int v31; // w1
  unsigned int *v32; // x1
  bool v33; // cf
  int v34; // w0
  int *v35; // x1
  int v36; // w0
  char *v37; // x26
  int v38; // w19
  _QWORD *v39; // x20
  wchar_t *v41; // x0
  __int64 v42; // x0
  int v43; // w0
  _QWORD *v44; // x0
  unsigned __int64 v45; // x1
  int *v46; // x1
  int v47; // w1
  _QWORD *v48; // x0
  int v49; // w19
  int v50; // w1
  unsigned int *v51; // x1
  int *v52; // x1
  int v53; // w0
  bool v54; // [xsp+64h] [xbp+64h]
  int v57; // [xsp+80h] [xbp+80h]
  unsigned int v59; // [xsp+88h] [xbp+88h]
  _QWORD *v60; // [xsp+90h] [xbp+90h] BYREF
  __int64 v61; // [xsp+98h] [xbp+98h]
  _QWORD *v62; // [xsp+A0h] [xbp+A0h] BYREF
  __int64 v63; // [xsp+A8h] [xbp+A8h]
  char v64[8]; // [xsp+B8h] [xbp+B8h] BYREF
  char *v65; // [xsp+C8h] [xbp+C8h] BYREF

  v62 = a2;
  v63 = a3;
  v60 = a4;
  v61 = a5;
  v8 = sub_554A24((__int64)v64, (__int64 *)(a6 + 208));
  v9 = *(_DWORD *)(a6 + 24) & 0x4A;
  if ( v9 == 64 )
  {
    v10 = 8;
  }
  else
  {
    v10 = 16;
    if ( v9 != 8 )
      v10 = 10;
  }
  v11 = sub_554B08((__int64)&v62);
  if ( (v11 == -1) == ((unsigned int)sub_554B08((__int64)&v60) == -1) )
  {
    v12 = 0;
    v54 = 0;
    goto LABEL_128;
  }
  v12 = sub_554B08((__int64)&v62);
  v54 = v12 == *(_DWORD *)(v8 + 224);
  if ( v12 != *(_DWORD *)(v8 + 224) && v12 != *(_DWORD *)(v8 + 228) )
  {
    v13 = *(unsigned __int8 *)(v8 + 32);
    goto LABEL_14;
  }
  v13 = *(unsigned __int8 *)(v8 + 32);
  if ( *(_BYTE *)(v8 + 32) && v12 == *(_DWORD *)(v8 + 76) )
  {
    v13 = 1;
    goto LABEL_14;
  }
  if ( v12 != *(_DWORD *)(v8 + 72) )
  {
    if ( v62 )
    {
      v14 = v62[2];
      if ( v14 >= v62[3] )
        sub_54D8C4((__int64)v62);
      else
        v62[2] = v14 + 4;
      LODWORD(v63) = -1;
    }
    v15 = sub_554B08((__int64)&v62);
    if ( (v15 == -1) != ((unsigned int)sub_554B08((__int64)&v60) == -1) )
    {
      v12 = sub_554B08((__int64)&v62);
      v13 = *(unsigned __int8 *)(v8 + 32);
      goto LABEL_14;
    }
LABEL_128:
    v13 = *(unsigned __int8 *)(v8 + 32);
    v19 = 1;
    v16 = 0;
    v59 = 0;
    goto LABEL_33;
  }
LABEL_14:
  v16 = 0;
  v59 = 0;
  while ( 1 )
  {
    if ( v13 && *(_DWORD *)(v8 + 76) == v12 || *(_DWORD *)(v8 + 72) == v12 )
    {
LABEL_157:
      v19 = 0;
      goto LABEL_33;
    }
    if ( *(_DWORD *)(v8 + 240) == v12 )
    {
      if ( ((_DWORD)v10 == 10) >= v59 )
      {
        ++v16;
        if ( (_DWORD)v10 == 8 || (v59 = 1, !v9) )
        {
          v16 = 0;
          v59 = 1;
          v10 = 8;
        }
        goto LABEL_25;
      }
    }
    else if ( !v59 )
    {
      goto LABEL_157;
    }
    if ( *(_DWORD *)(v8 + 232) != v12 && *(_DWORD *)(v8 + 236) != v12 )
    {
      v59 = 1;
      v19 = 0;
      if ( (_DWORD)v10 != 16 )
        goto LABEL_34;
      goto LABEL_93;
    }
    if ( (_DWORD)v10 != 16 && v9 )
    {
      v19 = 0;
      v59 = 1;
      goto LABEL_34;
    }
    v16 = 0;
    v59 = 0;
    v10 = 16;
LABEL_25:
    if ( v62 )
    {
      v17 = v62[2];
      if ( v17 >= v62[3] )
        (*(void (__fastcall **)(_QWORD *))(*v62 + 80LL))(v62);
      else
        v62[2] = v17 + 4;
      LODWORD(v63) = -1;
    }
    v18 = sub_554B08((__int64)&v62);
    if ( (v18 == -1) == ((unsigned int)sub_554B08((__int64)&v60) == -1) )
    {
      v13 = *(unsigned __int8 *)(v8 + 32);
      v19 = 1;
      goto LABEL_33;
    }
    v12 = sub_554B08((__int64)&v62);
    if ( !v59 )
      break;
    v13 = *(unsigned __int8 *)(v8 + 32);
  }
  v13 = *(unsigned __int8 *)(v8 + 32);
  v19 = 0;
LABEL_33:
  if ( (_DWORD)v10 != 16 )
  {
LABEL_34:
    v20 = (int)v10;
    v65 = &byte_6FD2F8;
    if ( !v13 )
      goto LABEL_35;
LABEL_94:
    sub_567088(&v65, 32);
    v57 = *(unsigned __int8 *)(v8 + 328);
    v21 = 0xFFFFFFFFFFFFFFFFLL / v10;
    if ( *(_BYTE *)(v8 + 328) )
      goto LABEL_95;
LABEL_36:
    v22 = 0;
    v23 = 0;
    if ( v19 )
      goto LABEL_84;
LABEL_37:
    if ( v20 <= 0xA )
    {
LABEL_38:
      if ( v12 > 0x2F && v12 < (int)v20 + 48 )
      {
        v24 = v12 - 48;
        goto LABEL_41;
      }
LABEL_84:
      v38 = 0;
      goto LABEL_85;
    }
    while ( 1 )
    {
      v24 = v12 - 48;
      if ( v12 - 48 <= 9 )
        break;
      if ( v12 - 97 <= 5 )
      {
        v24 = v12 - 87;
        break;
      }
      if ( v12 - 65 > 5 )
        goto LABEL_84;
      v24 = v12 - 55;
      if ( v21 < v22 )
        goto LABEL_42;
LABEL_61:
      ++v16;
      v33 = ~(__int64)v24 >= v22 * v10;
      v22 = v24 + v22 * v10;
      v34 = !v33;
      v23 |= v34;
      v25 = v62;
      if ( v62 )
        goto LABEL_43;
LABEL_65:
      v29 = v60;
      if ( !v60 )
        goto LABEL_71;
      v30 = 1;
      v31 = 0;
      if ( (_DWORD)v61 != -1 )
        goto LABEL_50;
LABEL_67:
      v35 = (int *)v29[2];
      if ( (unsigned __int64)v35 >= v29[3] )
        v36 = (*(__int64 (__fastcall **)(_QWORD *))(*v29 + 72LL))(v29);
      else
        v36 = *v35;
      if ( v36 == -1 )
      {
        v60 = 0;
        v31 = 1;
        goto LABEL_50;
      }
      LODWORD(v61) = v36;
      if ( !v30 )
        goto LABEL_71;
LABEL_51:
      v12 = -1;
      if ( !v62 )
        goto LABEL_37;
      v12 = v63;
      if ( (_DWORD)v63 != -1 )
        goto LABEL_37;
      v32 = (unsigned int *)v62[2];
      if ( (unsigned __int64)v32 >= v62[3] )
        v12 = (*(__int64 (__fastcall **)(_QWORD *))(*v62 + 72LL))(v62);
      else
        v12 = *v32;
      if ( v12 == -1 )
      {
        v62 = 0;
        goto LABEL_37;
      }
      LODWORD(v63) = v12;
      if ( v20 <= 0xA )
        goto LABEL_38;
    }
LABEL_41:
    if ( v21 >= v22 )
      goto LABEL_61;
LABEL_42:
    v25 = v62;
    v23 = 1;
    if ( !v62 )
      goto LABEL_65;
LABEL_43:
    v26 = v25[2];
    if ( v26 >= v25[3] )
    {
      (*(void (__fastcall **)(_QWORD *))(*v25 + 80LL))(v25);
      v25 = v62;
      LODWORD(v63) = -1;
      if ( !v62 )
        goto LABEL_65;
    }
    else
    {
      LODWORD(v63) = -1;
      v25[2] = v26 + 4;
    }
    v27 = (int *)v25[2];
    if ( (unsigned __int64)v27 >= v25[3] )
      v28 = (*(__int64 (__fastcall **)(_QWORD *))(*v25 + 72LL))(v25);
    else
      v28 = *v27;
    if ( v28 == -1 )
    {
      v62 = 0;
      goto LABEL_65;
    }
    v29 = v60;
    v30 = 0;
    LODWORD(v63) = v28;
    if ( !v60 )
      goto LABEL_51;
    v31 = 0;
    if ( (_DWORD)v61 == -1 )
      goto LABEL_67;
LABEL_50:
    if ( v31 != v30 )
      goto LABEL_51;
LABEL_71:
    v37 = v65;
    v38 = 0;
    v19 = 1;
    if ( !*((_QWORD *)v65 - 3) )
      goto LABEL_86;
LABEL_72:
    sub_567890(&v65, v16);
    if ( !sub_53CA8C(*(_QWORD *)(v8 + 16), *(_QWORD *)(v8 + 24), (unsigned __int8 **)&v65) )
      *a7 = 4;
    v37 = v65;
    if ( (v16 == 0) <= v59 || *((_QWORD *)v65 - 3) )
      goto LABEL_76;
LABEL_87:
    *a8 = 0;
    *a7 = 4;
    goto LABEL_79;
  }
LABEL_93:
  v20 = 22;
  v65 = &byte_6FD2F8;
  if ( v13 )
    goto LABEL_94;
LABEL_35:
  v57 = *(unsigned __int8 *)(v8 + 328);
  v21 = 0xFFFFFFFFFFFFFFFFLL / v10;
  if ( !*(_BYTE *)(v8 + 328) )
    goto LABEL_36;
LABEL_95:
  if ( v19 )
  {
    v22 = 0;
    v23 = 0;
    v38 = 0;
    goto LABEL_85;
  }
  v22 = 0;
  v23 = 0;
  while ( 2 )
  {
    if ( !*(_BYTE *)(v8 + 32) || v12 != *(_DWORD *)(v8 + 76) )
    {
      if ( v12 == *(_DWORD *)(v8 + 72) )
        goto LABEL_84;
      v41 = wmemchr((const wchar_t *)(v8 + 240), v12, v20);
      if ( !v41 )
        goto LABEL_84;
      v42 = ((__int64)v41 - v8 - 240) >> 2;
      if ( (int)v42 >= 16 )
        LODWORD(v42) = v42 - 6;
      if ( v21 < v22 )
      {
        v44 = v62;
        v23 = 1;
        if ( v62 )
          goto LABEL_109;
      }
      else
      {
        ++v16;
        v33 = ~(__int64)(int)v42 >= v22 * v10;
        v22 = (int)v42 + v22 * v10;
        v43 = !v33;
        v23 |= v43;
LABEL_108:
        v44 = v62;
        if ( v62 )
        {
LABEL_109:
          v45 = v44[2];
          if ( v45 < v44[3] )
          {
            LODWORD(v63) = -1;
            v44[2] = v45 + 4;
            goto LABEL_111;
          }
          (*(void (__fastcall **)(_QWORD *))(*v44 + 80LL))(v44);
          v44 = v62;
          LODWORD(v63) = -1;
          if ( v62 )
          {
LABEL_111:
            v46 = (int *)v44[2];
            if ( (unsigned __int64)v46 >= v44[3] )
              v47 = (*(__int64 (__fastcall **)(_QWORD *))(*v44 + 72LL))(v44);
            else
              v47 = *v46;
            if ( v47 != -1 )
            {
              v48 = v60;
              v49 = 0;
              LODWORD(v63) = v47;
              if ( v60 )
              {
                v50 = 0;
                if ( (_DWORD)v61 != -1 )
                  goto LABEL_116;
LABEL_133:
                v52 = (int *)v48[2];
                if ( (unsigned __int64)v52 >= v48[3] )
                  v53 = (*(__int64 (__fastcall **)(_QWORD *))(*v48 + 72LL))(v48);
                else
                  v53 = *v52;
                if ( v53 == -1 )
                {
                  v60 = 0;
                  v50 = v57;
                }
                else
                {
                  LODWORD(v61) = v53;
                  v50 = 0;
                }
                goto LABEL_116;
              }
LABEL_117:
              v12 = -1;
              if ( v62 )
              {
                v12 = v63;
                if ( (_DWORD)v63 == -1 )
                {
                  v51 = (unsigned int *)v62[2];
                  if ( (unsigned __int64)v51 >= v62[3] )
                    v12 = (*(__int64 (__fastcall **)(_QWORD *))(*v62 + 72LL))(v62);
                  else
                    v12 = *v51;
                  if ( v12 == -1 )
                    v62 = 0;
                  else
                    LODWORD(v63) = v12;
                }
              }
              continue;
            }
            v62 = 0;
          }
        }
      }
      v48 = v60;
      if ( !v60 )
        goto LABEL_71;
      v50 = 0;
      v49 = v57;
      if ( (_DWORD)v61 == -1 )
        goto LABEL_133;
LABEL_116:
      if ( v50 == v49 )
        goto LABEL_71;
      goto LABEL_117;
    }
    break;
  }
  if ( v16 )
  {
    sub_567890(&v65, v16);
    v16 = 0;
    goto LABEL_108;
  }
  v38 = 1;
LABEL_85:
  v37 = v65;
  if ( *((_QWORD *)v65 - 3) )
    goto LABEL_72;
LABEL_86:
  if ( (v16 == 0) > v59 )
    goto LABEL_87;
LABEL_76:
  if ( v38 )
    goto LABEL_87;
  if ( v23 )
  {
    *a8 = -1;
    *a7 = 4;
  }
  else
  {
    *a8 = (v22 ^ -(__int64)v54) + v54;
  }
LABEL_79:
  if ( v19 )
    *a7 |= 2u;
  v39 = v62;
  if ( v37 - 24 != (char *)&qword_6FD2E0 )
    sub_54D8E0((unsigned int *)v37 - 6);
  return v39;
}

