/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000055A870
 * Mangled: sub_55A870
 * Demangled: sub_55A870
 *
 * Callers: 1
 *   0x000000000055B18C  sub_55B18C
 *
 * Callees: 10
 *   0x0000000000200670  .wmemchr
 *   0x000000000053CA8C  sub_53CA8C
 *   0x000000000054D8C4  sub_54D8C4
 *   0x000000000054D8E0  sub_54D8E0
 *   0x0000000000554A24  sub_554A24
 *   0x0000000000554B08  sub_554B08
 *   0x000000000055B18C  sub_55B18C
 *   0x0000000000567088  sub_567088
 *   0x0000000000567890  sub_567890
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 160
 *   insn=0x000000000055A8A4 string=0x000000000055A8A8 "_"
 *   insn=0x000000000055A8B0 string=0x000000000055A8B4 "@\t"
 *   insn=0x000000000055A8C8 string=0x000000000055A8CC "@"
 *   insn=0x000000000055A8D0 string=0x000000000055A8D4 "Z"
 *   insn=0x000000000055A900 string=0x000000000055A904 "?"
 *   insn=0x000000000055A90C string=0x000000000055A910 "~"
 *   insn=0x000000000055A924 string=0x000000000055A928 "@0"
 *   insn=0x000000000055A938 string=0x000000000055A93C "@"
 *   insn=0x000000000055A940 string=0x000000000055A944 " "
 *   insn=0x000000000055A94C string=0x000000000055A950 "?"
 *   insn=0x000000000055A954 string=0x000000000055A958 "!"
 *   insn=0x000000000055A968 string=0x000000000055A96C "g"
 *   insn=0x000000000055A974 string=0x000000000055A978 "d"
 *   insn=0x000000000055A988 string=0x000000000055A98C "?"
 *   insn=0x000000000055A994 string=0x000000000055A998 "\"
 *   insn=0x000000000055A9B4 string=0x000000000055A9B8 "?"
 *   insn=0x000000000055A9BC string=0x000000000055B0F8 ""
 *   insn=0x000000000055A9C0 string=0x000000000055A9C4 "?"
 *   insn=0x000000000055A9CC string=0x000000000055A9D0 "?"
 *   insn=0x000000000055A9D4 string=0x000000000055AD64 "_+"
 *   insn=0x000000000055A9E0 string=0x000000000055A9E4 "?"
 *   insn=0x000000000055A9E8 string=0x000000000055A9F8 "_C"
 *   insn=0x000000000055A9EC string=0x000000000055A9F0 "?"
 *   insn=0x000000000055A9F4 string=0x000000000055ADA4 "!"
 *   insn=0x000000000055A9F8 string=0x000000000055A9FC "@"
 *   insn=0x000000000055A9FC string=0x000000000055AA00 "t9"
 *   insn=0x000000000055AA00 string=0x000000000055B12C "!"
 *   insn=0x000000000055AA1C string=0x000000000055AA20 "?"
 *   insn=0x000000000055AA20 string=0x000000000055AA24 ""6"
 *   insn=0x000000000055AA24 string=0x000000000055AA28 "!"
 *   insn=0x000000000055AA34 string=0x000000000055AA38 "4"
 *   insn=0x000000000055AA40 string=0x000000000055AA44 "1"
 *   insn=0x000000000055AA44 string=0x000000000055AA48 "?"
 *   insn=0x000000000055AA54 string=0x000000000055AA58 "?"
 *   insn=0x000000000055AA60 string=0x000000000055AA64 ")"
 *   insn=0x000000000055AA6C string=0x000000000055AA70 " 7"
 *   insn=0x000000000055AA7C string=0x000000000055AA80 ";"
 *   insn=0x000000000055AA80 string=0x000000000055AA84 "_C"
 *   insn=0x000000000055AA90 string=0x000000000055AA94 "A"
 *   insn=0x000000000055AA94 string=0x000000000055AA98 "X"
 *   insn=0x000000000055AA98 string=0x000000000055AA9C "!"
 *   insn=0x000000000055AA9C string=0x000000000055AAA0 "!`"
 *   insn=0x000000000055AAC0 string=0x000000000055ADFC ""
 *   insn=0x000000000055AAE4 string=0x000000000055ABB4 "`"
 *   insn=0x000000000055AAF8 string=0x000000000055AAFC "`"
 *   insn=0x000000000055AAFC string=0x000000000055AB00 "?"
 *   insn=0x000000000055AB08 string=0x000000000055AB0C "6"
 *   insn=0x000000000055AB0C string=0x000000000055AB10 " "
 *   insn=0x000000000055AB18 string=0x000000000055AB1C "?"
 *   insn=0x000000000055AB20 string=0x000000000055AB24 "!"
 *   insn=0x000000000055AB34 string=0x000000000055AB38 "?"
 *   insn=0x000000000055AB38 string=0x000000000055AB3C "B*"
 *   insn=0x000000000055AB3C string=0x000000000055AB40 "!"
 *   insn=0x000000000055AB40 string=0x000000000055AB44 "?"
 *   insn=0x000000000055AB44 string=0x000000000055AB48 "`%"
 *   insn=0x000000000055AB60 string=0x000000000055AB64 "_"
 *   insn=0x000000000055AB64 string=0x000000000055AB68 "@"
 *   insn=0x000000000055AB68 string=0x000000000055AB6C "?"
 *   insn=0x000000000055AB6C string=0x000000000055AB70 "`"
 *   insn=0x000000000055AB78 string=0x000000000055AB7C " "
 *   insn=0x000000000055AB90 string=0x000000000055AB94 "?"
 *   insn=0x000000000055AB98 string=0x000000000055AB9C "3"
 *   insn=0x000000000055ABB8 string=0x000000000055ABBC ")"
 *   insn=0x000000000055ABBC string=0x000000000055ABC0 "`"
 *   insn=0x000000000055ABC8 string=0x000000000055ABCC "`"
 *   insn=0x000000000055ABC8 string=0x000000000055AFE0 "`^"
 *   insn=0x000000000055ABD4 string=0x000000000055ABD8 "?"
 *   insn=0x000000000055ABD8 string=0x000000000055ABDC "`"
 *   insn=0x000000000055ABDC string=0x000000000055ABE0 "C"
 *   insn=0x000000000055ABF0 string=0x000000000055ABF4 "!"
 *   insn=0x000000000055AC0C string=0x000000000055AC10 " "
 *   insn=0x000000000055AC14 string=0x000000000055AC18 " "
 *   insn=0x000000000055AC1C string=0x000000000055AC20 "3"
 *   insn=0x000000000055AC24 string=0x000000000055AC28 "_"
 *   insn=0x000000000055AC34 string=0x000000000055AC38 "?"
 *   insn=0x000000000055AC3C string=0x000000000055AC40 " "
 *   insn=0x000000000055AC50 string=0x000000000055AC54 "?"
 *   insn=0x000000000055AC60 string=0x000000000055AC64 ";"
 *   insn=0x000000000055AC68 string=0x000000000055AC6C "`"
 *   insn=0x000000000055AC8C string=0x000000000053CA8C "E"
 *   insn=0x000000000055ACA8 string=0x000000000055ACAC "i"
 *   insn=0x000000000055ACC4 string=0x000000000055ACC8 " "
 *   insn=0x000000000055ACD0 string=0x000000000055ACD4 " "
 *   insn=0x000000000055ACD8 string=0x000000000055ACEC "@"
 *   insn=0x000000000055ACDC string=0x000000000055ACE0 " "
 *   insn=0x000000000055ACE4 string=0x000000000055ACE8 " "
 *   insn=0x000000000055AD58 string=0x000000000055AD5C " "
 *   insn=0x000000000055AD6C string=0x000000000055AD70 "?"
 *   insn=0x000000000055AD70 string=0x000000000055AD74 "c"
 *   insn=0x000000000055AD74 string=0x000000000055AD78 "_#"
 *   insn=0x000000000055AD80 string=0x000000000055AD84 " "
 *   insn=0x000000000055AD80 string=0x000000000055AD90 " "
 *   insn=0x000000000055AD88 string=0x000000000055AD8C "4"
 *   insn=0x000000000055ADA4 string=0x000000000055ADA8 "_C"
 *   insn=0x000000000055ADAC string=0x000000000055ADB0 ""
 *   insn=0x000000000055ADBC string=0x000000000055ADC0 "A"
 *   insn=0x000000000055ADC4 string=0x000000000055ADC8 "!"
 *   insn=0x000000000055ADC8 string=0x000000000055ADCC "!`"
 *   insn=0x000000000055ADF4 string=0x000000000055ADF8 "a"
 *   insn=0x000000000055AE38 string=0x000000000055AE3C ""
 *   insn=0x000000000055AE3C string=0x000000000055AE40 "@"
 *   insn=0x000000000055AE54 string=0x000000000055AE58 "?"
 *   insn=0x000000000055AE68 string=0x000000000055AE6C "!"
 *   insn=0x000000000055AE94 string=0x000000000055AE98 "?"
 *   insn=0x000000000055AE98 string=0x000000000055AE9C "B"
 *   insn=0x000000000055AE9C string=0x000000000055AEA0 "!"
 *   insn=0x000000000055AEB4 string=0x000000000055AEB8 "?"
 *   insn=0x000000000055AEB8 string=0x000000000055AEBC """
 *   insn=0x000000000055AEBC string=0x000000000055AEC0 "!"
 *   insn=0x000000000055AEC0 string=0x000000000055AEC4 "?"
 *   insn=0x000000000055AEE0 string=0x000000000055AEE4 "_"
 *   insn=0x000000000055AEE8 string=0x000000000055AEEC "?"
 *   insn=0x000000000055AEEC string=0x000000000055AEF0 "`"
 *   insn=0x000000000055AF04 string=0x000000000055AF08 "A"
 *   insn=0x000000000055AF10 string=0x000000000055AF14 "?"
 *   insn=0x000000000055AF14 string=0x000000000055AF18 "B"
 *   insn=0x000000000055AF18 string=0x000000000055AF1C "3"
 *   insn=0x000000000055AF20 string=0x000000000055AF24 "@\n"
 *   insn=0x000000000055AF48 string=0x000000000055AF4C "A"
 *   insn=0x000000000055AF4C string=0x000000000055AF50 " "
 *   insn=0x000000000055AF60 string=0x000000000055AF64 ";"
 *   insn=0x000000000055AF84 string=0x000000000055AF88 " "
 *   insn=0x000000000055AF88 string=0x000000000055AF8C "S"
 *   insn=0x000000000055AF90 string=0x000000000055AF94 "6"
 *   insn=0x000000000055AFAC string=0x000000000055AFB0 "_"
 *   insn=0x000000000055AFBC string=0x000000000055AFC0 "?"
 *   insn=0x000000000055AFC4 string=0x000000000055AFC8 " "
 *   insn=0x000000000055AFE8 string=0x000000000055AFEC "!"
 *   insn=0x000000000055AFF4 string=0x000000000055AFF8 ""
 *   insn=0x000000000055AFFC string=0x000000000055B14C "3"
 *   insn=0x000000000055B004 string=0x000000000055B008 ""2"
 *   insn=0x000000000055B014 string=0x000000000055B018 "!(@"
 *   insn=0x000000000055B018 string=0x000000000055B01C " "
 *   insn=0x000000000055B024 string=0x000000000055B028 "`"
 *   insn=0x000000000055B044 string=0x000000000055B048 "!(@"
 *   insn=0x000000000055B048 string=0x000000000055B04C " "
 *   insn=0x000000000055B06C string=0x000000000055B070 "h"
 *   insn=0x000000000055B074 string=0x000000000055B078 "!$@"
 *   insn=0x000000000055B078 string=0x000000000055B07C " "
 *   insn=0x000000000055B084 string=0x000000000055B088 "!$@"
 *   insn=0x000000000055B088 string=0x000000000055B08C " "
 *   insn=0x000000000055B0A0 string=0x000000000055B0A4 "!$@"
 *   insn=0x000000000055B0A4 string=0x000000000055B0A8 " "
 *   insn=0x000000000055B0B4 string=0x000000000055B0B8 "!$@"
 *   insn=0x000000000055B0B8 string=0x000000000055B0BC " "
 *   insn=0x000000000055B0C8 string=0x000000000055B0CC " "
 *   insn=0x000000000055B0D4 string=0x000000000055B0D8 "!$@"
 *   insn=0x000000000055B0D8 string=0x000000000055B0DC " "
 *   insn=0x000000000055B0E8 string=0x000000000055B0EC "!(@"
 *   insn=0x000000000055B0EC string=0x000000000055B0F0 " "
 *   insn=0x000000000055B0F0 string=0x000000000055B0F4 "O"
 *   insn=0x000000000055B0F8 string=0x000000000055B0FC "b"
 *   insn=0x000000000055B100 string=0x000000000055B104 "!$@"
 *   insn=0x000000000055B104 string=0x000000000055B108 " "
 *   insn=0x000000000055B12C string=0x000000000055B130 ""
 *   insn=0x000000000055B134 string=0x000000000055B138 "U"
 *   insn=0x000000000055B154 string=0x000000000055B158 ""
 *   insn=0x000000000055B158 string=0x000000000055B15C "J"
 *   insn=0x000000000055B160 string=0x000000000055B164 "@"
 *   insn=0x000000000055B174 string=0x000000000055B178 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_55A870(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        _WORD *a8)
{
  __int64 v8; // x21
  int v9; // w20
  int v10; // w26
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
  unsigned int v21; // w25
  unsigned int v22; // w20
  int v23; // w22
  unsigned int v24; // w0
  _QWORD *v25; // x0
  unsigned __int64 v26; // x1
  int *v27; // x1
  int v28; // w1
  _QWORD *v29; // x0
  int v30; // w19
  int v31; // w1
  unsigned int *v32; // x1
  int v33; // w20
  _BOOL4 v34; // w1
  int *v35; // x1
  int v36; // w0
  char *v37; // x28
  int v38; // w19
  _QWORD *v39; // x20
  wchar_t *v41; // x0
  __int64 v42; // x0
  int v43; // w20
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
  __int16 v54; // [xsp+64h] [xbp+64h]
  int v57; // [xsp+84h] [xbp+84h]
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
  else if ( v9 == 8 )
  {
    v10 = 16;
  }
  else
  {
    v10 = 10;
  }
  v11 = sub_554B08((__int64)&v62);
  if ( (v11 == -1) == ((unsigned int)sub_554B08((__int64)&v60) == -1) )
  {
    v12 = 0;
    v54 = 0;
    goto LABEL_123;
  }
  v12 = sub_554B08((__int64)&v62);
  v54 = v12 == *(_DWORD *)(v8 + 224);
  if ( v12 != *(_DWORD *)(v8 + 224) && v12 != *(_DWORD *)(v8 + 228) )
  {
    v13 = *(unsigned __int8 *)(v8 + 32);
    goto LABEL_15;
  }
  v13 = *(unsigned __int8 *)(v8 + 32);
  if ( *(_BYTE *)(v8 + 32) && v12 == *(_DWORD *)(v8 + 76) )
  {
    v13 = 1;
    goto LABEL_15;
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
      goto LABEL_15;
    }
LABEL_123:
    v13 = *(unsigned __int8 *)(v8 + 32);
    v19 = 1;
    v16 = 0;
    v59 = 0;
    goto LABEL_34;
  }
LABEL_15:
  v16 = 0;
  v59 = 0;
  while ( 1 )
  {
    if ( v13 && *(_DWORD *)(v8 + 76) == v12 || *(_DWORD *)(v8 + 72) == v12 )
    {
LABEL_152:
      v19 = 0;
      goto LABEL_34;
    }
    if ( *(_DWORD *)(v8 + 240) == v12 )
    {
      if ( (v10 == 10) >= v59 )
      {
        ++v16;
        if ( v10 == 8 || (v59 = 1, !v9) )
        {
          v16 = 0;
          v59 = 1;
          v10 = 8;
        }
        goto LABEL_26;
      }
    }
    else if ( !v59 )
    {
      goto LABEL_152;
    }
    if ( *(_DWORD *)(v8 + 232) != v12 && *(_DWORD *)(v8 + 236) != v12 )
    {
      v59 = 1;
      v19 = 0;
      if ( v10 != 16 )
        goto LABEL_35;
      goto LABEL_91;
    }
    if ( v10 != 16 && v9 )
    {
      v19 = 0;
      v59 = 1;
      goto LABEL_35;
    }
    v16 = 0;
    v59 = 0;
    v10 = 16;
LABEL_26:
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
      goto LABEL_34;
    }
    v12 = sub_554B08((__int64)&v62);
    if ( !v59 )
      break;
    v13 = *(unsigned __int8 *)(v8 + 32);
  }
  v13 = *(unsigned __int8 *)(v8 + 32);
  v19 = 0;
LABEL_34:
  if ( v10 != 16 )
  {
LABEL_35:
    v20 = v10;
    v65 = &byte_6FD2F8;
    if ( !v13 )
      goto LABEL_36;
LABEL_92:
    sub_567088(&v65, 32);
    v57 = *(unsigned __int8 *)(v8 + 328);
    v21 = 0xFFFF / v10;
    if ( *(_BYTE *)(v8 + 328) )
      goto LABEL_93;
LABEL_37:
    v22 = 0;
    v23 = 0;
    if ( v19 )
      goto LABEL_82;
LABEL_38:
    if ( v20 <= 0xA )
    {
LABEL_39:
      if ( v12 > 0x2F && v12 < (int)v20 + 48 )
      {
        v24 = v12 - 48;
        goto LABEL_42;
      }
LABEL_82:
      v38 = 0;
      goto LABEL_83;
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
        goto LABEL_82;
      v24 = v12 - 55;
      if ( v21 < v22 )
        goto LABEL_43;
LABEL_62:
      ++v16;
      v33 = (unsigned __int16)(v22 * v10);
      v34 = v33 > (int)(0xFFFF - v24);
      v22 = (unsigned __int16)(v33 + v24);
      v25 = v62;
      v23 |= v34;
      if ( v62 )
        goto LABEL_44;
LABEL_63:
      v29 = v60;
      if ( !v60 )
        goto LABEL_69;
      v30 = 1;
      v31 = 0;
      if ( (_DWORD)v61 != -1 )
        goto LABEL_51;
LABEL_65:
      v35 = (int *)v29[2];
      if ( (unsigned __int64)v35 >= v29[3] )
        v36 = (*(__int64 (__fastcall **)(_QWORD *))(*v29 + 72LL))(v29);
      else
        v36 = *v35;
      if ( v36 == -1 )
      {
        v60 = 0;
        v31 = 1;
        goto LABEL_51;
      }
      LODWORD(v61) = v36;
      if ( !v30 )
        goto LABEL_69;
LABEL_52:
      v12 = -1;
      if ( !v62 )
        goto LABEL_38;
      v12 = v63;
      if ( (_DWORD)v63 != -1 )
        goto LABEL_38;
      v32 = (unsigned int *)v62[2];
      if ( (unsigned __int64)v32 >= v62[3] )
        v12 = (*(__int64 (__fastcall **)(_QWORD *))(*v62 + 72LL))(v62);
      else
        v12 = *v32;
      if ( v12 == -1 )
      {
        v62 = 0;
        goto LABEL_38;
      }
      LODWORD(v63) = v12;
      if ( v20 <= 0xA )
        goto LABEL_39;
    }
LABEL_42:
    if ( v21 >= v22 )
      goto LABEL_62;
LABEL_43:
    v25 = v62;
    v23 = 1;
    if ( !v62 )
      goto LABEL_63;
LABEL_44:
    v26 = v25[2];
    if ( v26 >= v25[3] )
    {
      (*(void (__fastcall **)(_QWORD *))(*v25 + 80LL))(v25);
      v25 = v62;
      LODWORD(v63) = -1;
      if ( !v62 )
        goto LABEL_63;
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
      goto LABEL_63;
    }
    v29 = v60;
    v30 = 0;
    LODWORD(v63) = v28;
    if ( !v60 )
      goto LABEL_52;
    v31 = 0;
    if ( (_DWORD)v61 == -1 )
      goto LABEL_65;
LABEL_51:
    if ( v31 != v30 )
      goto LABEL_52;
LABEL_69:
    v37 = v65;
    v38 = 0;
    v19 = 1;
    if ( !*((_QWORD *)v65 - 3) )
      goto LABEL_84;
LABEL_70:
    sub_567890(&v65, v16);
    if ( !sub_53CA8C(*(_QWORD *)(v8 + 16), *(_QWORD *)(v8 + 24), (unsigned __int8 **)&v65) )
      *a7 = 4;
    v37 = v65;
    if ( (v16 == 0) <= v59 || *((_QWORD *)v65 - 3) )
      goto LABEL_74;
LABEL_85:
    *a8 = 0;
    *a7 = 4;
    goto LABEL_77;
  }
LABEL_91:
  v20 = 22;
  v65 = &byte_6FD2F8;
  if ( v13 )
    goto LABEL_92;
LABEL_36:
  v57 = *(unsigned __int8 *)(v8 + 328);
  v21 = 0xFFFF / v10;
  if ( !*(_BYTE *)(v8 + 328) )
    goto LABEL_37;
LABEL_93:
  if ( v19 )
  {
    LOWORD(v22) = 0;
    v23 = 0;
    v38 = 0;
    goto LABEL_83;
  }
  v22 = 0;
  v23 = 0;
  while ( 2 )
  {
    if ( !*(_BYTE *)(v8 + 32) || v12 != *(_DWORD *)(v8 + 76) )
    {
      if ( v12 == *(_DWORD *)(v8 + 72) )
        goto LABEL_82;
      v41 = wmemchr((const wchar_t *)(v8 + 240), v12, v20);
      if ( !v41 )
        goto LABEL_82;
      v42 = ((__int64)v41 - v8 - 240) >> 2;
      if ( (int)v42 >= 16 )
        LODWORD(v42) = v42 - 6;
      if ( v21 >= v22 )
      {
        ++v16;
        v43 = (unsigned __int16)(v22 * v10);
        v23 |= v43 > 0xFFFF - (int)v42;
        v22 = (unsigned __int16)(v43 + v42);
        goto LABEL_103;
      }
      v44 = v62;
      v23 = 1;
      if ( !v62 )
      {
LABEL_126:
        v48 = v60;
        if ( !v60 )
          goto LABEL_69;
        v50 = 0;
        v49 = v57;
        if ( (_DWORD)v61 == -1 )
        {
LABEL_128:
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
        }
LABEL_111:
        if ( v50 == v49 )
          goto LABEL_69;
        goto LABEL_112;
      }
LABEL_104:
      v45 = v44[2];
      if ( v45 >= v44[3] )
      {
        (*(void (__fastcall **)(_QWORD *))(*v44 + 80LL))(v44);
        v44 = v62;
        LODWORD(v63) = -1;
        if ( !v62 )
          goto LABEL_126;
      }
      else
      {
        v44[2] = v45 + 4;
        LODWORD(v63) = -1;
      }
      v46 = (int *)v44[2];
      if ( (unsigned __int64)v46 >= v44[3] )
        v47 = (*(__int64 (__fastcall **)(_QWORD *))(*v44 + 72LL))(v44);
      else
        v47 = *v46;
      if ( v47 == -1 )
      {
        v62 = 0;
        goto LABEL_126;
      }
      v48 = v60;
      v49 = 0;
      LODWORD(v63) = v47;
      if ( v60 )
      {
        v50 = 0;
        if ( (_DWORD)v61 == -1 )
          goto LABEL_128;
        goto LABEL_111;
      }
LABEL_112:
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
    break;
  }
  if ( v16 )
  {
    sub_567890(&v65, v16);
    v16 = 0;
LABEL_103:
    v44 = v62;
    if ( !v62 )
      goto LABEL_126;
    goto LABEL_104;
  }
  v38 = 1;
LABEL_83:
  v37 = v65;
  if ( *((_QWORD *)v65 - 3) )
    goto LABEL_70;
LABEL_84:
  if ( (v16 == 0) > v59 )
    goto LABEL_85;
LABEL_74:
  if ( v38 )
    goto LABEL_85;
  if ( v23 )
  {
    *a8 = -1;
    *a7 = 4;
  }
  else
  {
    *a8 = v54 + (v22 ^ -v54);
  }
LABEL_77:
  if ( v19 )
    *a7 |= 2u;
  v39 = v62;
  if ( v37 - 24 != (char *)&qword_6FD2E0 )
    sub_54D8E0((unsigned int *)v37 - 6);
  return v39;
}

