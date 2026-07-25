/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000055B1A0
 * Mangled: sub_55B1A0
 * Demangled: sub_55B1A0
 *
 * Callers: 1
 *   0x000000000055BAA8  sub_55BAA8
 *
 * Callees: 10
 *   0x0000000000200670  .wmemchr
 *   0x000000000053CA8C  sub_53CA8C
 *   0x000000000054D8C4  sub_54D8C4
 *   0x000000000054D8E0  sub_54D8E0
 *   0x0000000000554A24  sub_554A24
 *   0x0000000000554B08  sub_554B08
 *   0x000000000055BAA8  sub_55BAA8
 *   0x0000000000567088  sub_567088
 *   0x0000000000567890  sub_567890
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 157
 *   insn=0x000000000055B1E0 string=0x000000000055B1E4 "@\t"
 *   insn=0x000000000055B1F8 string=0x000000000055B1FC "@"
 *   insn=0x000000000055B200 string=0x000000000055B204 "Z"
 *   insn=0x000000000055B210 string=0x000000000055B214 "="
 *   insn=0x000000000055B21C string=0x000000000055B220 ":"
 *   insn=0x000000000055B230 string=0x000000000055B234 "?"
 *   insn=0x000000000055B23C string=0x000000000055B240 "2"
 *   insn=0x000000000055B254 string=0x000000000055B258 "`/"
 *   insn=0x000000000055B268 string=0x000000000055B26C "@"
 *   insn=0x000000000055B270 string=0x000000000055B274 " "
 *   insn=0x000000000055B27C string=0x000000000055B280 "?"
 *   insn=0x000000000055B284 string=0x000000000055B288 "!"
 *   insn=0x000000000055B298 string=0x000000000055B29C ""
 *   insn=0x000000000055B2B8 string=0x000000000055B2BC "?"
 *   insn=0x000000000055B2E4 string=0x000000000055B2E8 "?"
 *   insn=0x000000000055B2E8 string=0x000000000055B2EC "@9"
 *   insn=0x000000000055B2EC string=0x000000000055BA14 ""
 *   insn=0x000000000055B2F0 string=0x000000000055B2F4 "?"
 *   insn=0x000000000055B2FC string=0x000000000055B300 "?"
 *   insn=0x000000000055B304 string=0x000000000055B684 "_+"
 *   insn=0x000000000055B308 string=0x000000000055B30C "A8"
 *   insn=0x000000000055B310 string=0x000000000055B314 "?"
 *   insn=0x000000000055B318 string=0x000000000055B328 "_C"
 *   insn=0x000000000055B31C string=0x000000000055B320 "?"
 *   insn=0x000000000055B324 string=0x000000000055B6C4 "!"
 *   insn=0x000000000055B328 string=0x000000000055B32C "@"
 *   insn=0x000000000055B330 string=0x000000000055BA48 "!"
 *   insn=0x000000000055B34C string=0x000000000055B350 "?"
 *   insn=0x000000000055B354 string=0x000000000055B358 "!"
 *   insn=0x000000000055B374 string=0x000000000055B378 "?"
 *   insn=0x000000000055B384 string=0x000000000055B388 "?"
 *   insn=0x000000000055B3AC string=0x000000000055B3B0 ";"
 *   insn=0x000000000055B3B0 string=0x000000000055B3B4 "_C"
 *   insn=0x000000000055B3C0 string=0x000000000055B3C4 "A"
 *   insn=0x000000000055B3C4 string=0x000000000055B3C8 "X"
 *   insn=0x000000000055B3C8 string=0x000000000055B3CC "!"
 *   insn=0x000000000055B3CC string=0x000000000055B3D0 "!`"
 *   insn=0x000000000055B3EC string=0x000000000055B3F0 "a"
 *   insn=0x000000000055B3F8 string=0x000000000055B3FC "{"
 *   insn=0x000000000055B410 string=0x000000000055B4E0 "`"
 *   insn=0x000000000055B420 string=0x000000000055B424 """
 *   insn=0x000000000055B424 string=0x000000000055B428 "s"
 *   insn=0x000000000055B428 string=0x000000000055B42C "?"
 *   insn=0x000000000055B434 string=0x000000000055B438 "6"
 *   insn=0x000000000055B444 string=0x000000000055B448 "?"
 *   insn=0x000000000055B448 string=0x000000000055B44C ""'"
 *   insn=0x000000000055B44C string=0x000000000055B450 "!"
 *   insn=0x000000000055B460 string=0x000000000055B464 "?"
 *   insn=0x000000000055B464 string=0x000000000055B468 "B)"
 *   insn=0x000000000055B468 string=0x000000000055B46C "!"
 *   insn=0x000000000055B46C string=0x000000000055B470 "?"
 *   insn=0x000000000055B48C string=0x000000000055B490 "_"
 *   insn=0x000000000055B494 string=0x000000000055B498 "?"
 *   insn=0x000000000055B4A4 string=0x000000000055B4A8 " "
 *   insn=0x000000000055B4BC string=0x000000000055B4C0 "?"
 *   insn=0x000000000055B4C0 string=0x000000000055B4C4 "b)"
 *   insn=0x000000000055B4C4 string=0x000000000055B4C8 "3"
 *   insn=0x000000000055B4E4 string=0x000000000055B4E8 "i "
 *   insn=0x000000000055B4E8 string=0x000000000055B4EC "`"
 *   insn=0x000000000055B4F0 string=0x000000000055B4F4 "I "
 *   insn=0x000000000055B4F4 string=0x000000000055B4F8 "`"
 *   insn=0x000000000055B4F4 string=0x000000000055B8FC "s^"
 *   insn=0x000000000055B4FC string=0x000000000055B500 "H\n"
 *   insn=0x000000000055B500 string=0x000000000055B504 "?"
 *   insn=0x000000000055B504 string=0x000000000055B508 "s"
 *   insn=0x000000000055B508 string=0x000000000055B50C "C"
 *   insn=0x000000000055B51C string=0x000000000055B520 "t"
 *   insn=0x000000000055B534 string=0x000000000055B538 " "
 *   insn=0x000000000055B53C string=0x000000000055B540 "3"
 *   insn=0x000000000055B544 string=0x000000000055B548 "_"
 *   insn=0x000000000055B548 string=0x000000000055B54C "a"
 *   insn=0x000000000055B554 string=0x000000000055B558 "?"
 *   insn=0x000000000055B558 string=0x000000000055B55C "B""
 *   insn=0x000000000055B55C string=0x000000000055B560 " "
 *   insn=0x000000000055B564 string=0x000000000055B568 " "
 *   insn=0x000000000055B570 string=0x000000000055B574 "?"
 *   insn=0x000000000055B574 string=0x000000000055B578 "A"
 *   insn=0x000000000055B580 string=0x000000000055B584 ";"
 *   insn=0x000000000055B588 string=0x000000000055B58C "`"
 *   insn=0x000000000055B5A8 string=0x000000000055B5AC "8"
 *   insn=0x000000000055B5AC string=0x000000000053CA8C "E"
 *   insn=0x000000000055B5B0 string=0x000000000055B5B4 "`!"
 *   insn=0x000000000055B5C8 string=0x000000000055B5CC "i"
 *   insn=0x000000000055B5D8 string=0x000000000055B5DC "v"
 *   insn=0x000000000055B5E4 string=0x000000000055B5E8 " "
 *   insn=0x000000000055B5F0 string=0x000000000055B5F4 " "
 *   insn=0x000000000055B5F8 string=0x000000000055B60C "@"
 *   insn=0x000000000055B5FC string=0x000000000055B600 " "
 *   insn=0x000000000055B604 string=0x000000000055B608 " "
 *   insn=0x000000000055B678 string=0x000000000055B67C " "
 *   insn=0x000000000055B68C string=0x000000000055B690 "?"
 *   insn=0x000000000055B694 string=0x000000000055B698 "_#"
 *   insn=0x000000000055B6A0 string=0x000000000055B6A4 " "
 *   insn=0x000000000055B6A0 string=0x000000000055B6B0 " "
 *   insn=0x000000000055B6BC string=0x000000000055B6C0 " "
 *   insn=0x000000000055B6C4 string=0x000000000055B6C8 "_C"
 *   insn=0x000000000055B6CC string=0x000000000055B6D0 ""
 *   insn=0x000000000055B6D0 string=0x000000000055B6D4 "A"
 *   insn=0x000000000055B6DC string=0x000000000055B6E0 "A"
 *   insn=0x000000000055B6E4 string=0x000000000055B6E8 "!"
 *   insn=0x000000000055B6E8 string=0x000000000055B6EC "!`"
 *   insn=0x000000000055B6F0 string=0x000000000055B6F4 "@"
 *   insn=0x000000000055B6FC string=0x000000000055B700 "b."
 *   insn=0x000000000055B75C string=0x000000000055B760 "@"
 *   insn=0x000000000055B774 string=0x000000000055B778 "?"
 *   insn=0x000000000055B778 string=0x000000000055B77C "C\t"
 *   insn=0x000000000055B788 string=0x000000000055B78C "?"
 *   insn=0x000000000055B7A8 string=0x000000000055B7AC "?"
 *   insn=0x000000000055B7B4 string=0x000000000055B7B8 "!"
 *   insn=0x000000000055B7C8 string=0x000000000055B7CC "?"
 *   insn=0x000000000055B7CC string=0x000000000055B7D0 "b"
 *   insn=0x000000000055B7D0 string=0x000000000055B7D4 "!"
 *   insn=0x000000000055B7D4 string=0x000000000055B7D8 "?"
 *   insn=0x000000000055B7F4 string=0x000000000055B7F8 "_"
 *   insn=0x000000000055B7FC string=0x000000000055B800 "?"
 *   insn=0x000000000055B824 string=0x000000000055B828 "?"
 *   insn=0x000000000055B82C string=0x000000000055B830 "3"
 *   insn=0x000000000055B85C string=0x000000000055B860 "!"
 *   insn=0x000000000055B860 string=0x000000000055B864 " "
 *   insn=0x000000000055B874 string=0x000000000055B878 ";"
 *   insn=0x000000000055B89C string=0x000000000055B8A0 "V"
 *   insn=0x000000000055B8A4 string=0x000000000055B8A8 "6"
 *   insn=0x000000000055B8B0 string=0x000000000055B8B4 "@"
 *   insn=0x000000000055B8C0 string=0x000000000055B8C4 "_"
 *   insn=0x000000000055B8D0 string=0x000000000055B8D4 "?"
 *   insn=0x000000000055B8D8 string=0x000000000055B8DC " "
 *   insn=0x000000000055B904 string=0x000000000055B908 ""
 *   insn=0x000000000055B90C string=0x000000000055B910 "!"
 *   insn=0x000000000055B918 string=0x000000000055BA68 "3"
 *   insn=0x000000000055B930 string=0x000000000055B934 "!(@"
 *   insn=0x000000000055B934 string=0x000000000055B938 " "
 *   insn=0x000000000055B960 string=0x000000000055B964 "!(@"
 *   insn=0x000000000055B964 string=0x000000000055B968 " "
 *   insn=0x000000000055B988 string=0x000000000055B98C "i"
 *   insn=0x000000000055B990 string=0x000000000055B994 "!$@"
 *   insn=0x000000000055B994 string=0x000000000055B998 " "
 *   insn=0x000000000055B9A4 string=0x000000000055B9A8 "!$@"
 *   insn=0x000000000055B9A8 string=0x000000000055B9AC " "
 *   insn=0x000000000055B9BC string=0x000000000055B9C0 "!$@"
 *   insn=0x000000000055B9C0 string=0x000000000055B9C4 " "
 *   insn=0x000000000055B9D0 string=0x000000000055B9D4 "!$@"
 *   insn=0x000000000055B9D4 string=0x000000000055B9D8 " "
 *   insn=0x000000000055B9E4 string=0x000000000055B9E8 " "
 *   insn=0x000000000055B9F0 string=0x000000000055B9F4 "!$@"
 *   insn=0x000000000055B9F4 string=0x000000000055B9F8 " "
 *   insn=0x000000000055BA04 string=0x000000000055BA08 "!(@"
 *   insn=0x000000000055BA08 string=0x000000000055BA0C " "
 *   insn=0x000000000055BA0C string=0x000000000055BA10 "T"
 *   insn=0x000000000055BA14 string=0x000000000055BA18 "g"
 *   insn=0x000000000055BA1C string=0x000000000055BA20 "!$@"
 *   insn=0x000000000055BA20 string=0x000000000055BA24 " "
 *   insn=0x000000000055BA48 string=0x000000000055BA4C ""
 *   insn=0x000000000055BA50 string=0x000000000055BA54 "Z"
 *   insn=0x000000000055BA70 string=0x000000000055BA74 ""
 *   insn=0x000000000055BA74 string=0x000000000055BA78 "O"
 *   insn=0x000000000055BA7C string=0x000000000055BA80 "@"
 *   insn=0x000000000055BA90 string=0x000000000055BA94 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_55B1A0(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        _DWORD *a8)
{
  __int64 v8; // x21
  int v9; // w20
  unsigned int v10; // w26
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
  unsigned int v24; // w19
  _QWORD *v25; // x0
  unsigned __int64 v26; // x1
  int *v27; // x1
  int v28; // w1
  _QWORD *v29; // x0
  int v30; // w19
  int v31; // w1
  _DWORD *v32; // x1
  unsigned int v33; // w20
  bool v34; // cf
  int v35; // w0
  int *v36; // x1
  int v37; // w0
  char *v38; // x28
  int v39; // w19
  _QWORD *v40; // x20
  wchar_t *v42; // x0
  __int64 v43; // x0
  unsigned int v44; // w20
  int v45; // w0
  _QWORD *v46; // x0
  unsigned __int64 v47; // x1
  int *v48; // x1
  int v49; // w1
  _QWORD *v50; // x0
  int v51; // w19
  int v52; // w1
  unsigned int *v53; // x1
  int *v54; // x1
  int v55; // w0
  int v56; // [xsp+64h] [xbp+64h]
  int v59; // [xsp+80h] [xbp+80h]
  unsigned int v61; // [xsp+88h] [xbp+88h]
  _QWORD *v62; // [xsp+90h] [xbp+90h] BYREF
  __int64 v63; // [xsp+98h] [xbp+98h]
  _QWORD *v64; // [xsp+A0h] [xbp+A0h] BYREF
  __int64 v65; // [xsp+A8h] [xbp+A8h]
  char v66[8]; // [xsp+B8h] [xbp+B8h] BYREF
  char *v67; // [xsp+C8h] [xbp+C8h] BYREF

  v64 = a2;
  v65 = a3;
  v62 = a4;
  v63 = a5;
  v8 = sub_554A24((__int64)v66, (__int64 *)(a6 + 208));
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
  v11 = sub_554B08((__int64)&v64);
  if ( (v11 == -1) == ((unsigned int)sub_554B08((__int64)&v62) == -1) )
  {
    v12 = 0;
    v56 = 0;
    goto LABEL_129;
  }
  v12 = sub_554B08((__int64)&v64);
  v56 = v12 == *(_DWORD *)(v8 + 224);
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
    if ( v64 )
    {
      v14 = v64[2];
      if ( v14 >= v64[3] )
        sub_54D8C4((__int64)v64);
      else
        v64[2] = v14 + 4;
      LODWORD(v65) = -1;
    }
    v15 = sub_554B08((__int64)&v64);
    if ( (v15 == -1) != ((unsigned int)sub_554B08((__int64)&v62) == -1) )
    {
      v12 = sub_554B08((__int64)&v64);
      v13 = *(unsigned __int8 *)(v8 + 32);
      goto LABEL_15;
    }
LABEL_129:
    v13 = *(unsigned __int8 *)(v8 + 32);
    v19 = 1;
    v16 = 0;
    v61 = 0;
    goto LABEL_34;
  }
LABEL_15:
  v16 = 0;
  v61 = 0;
  while ( 1 )
  {
    if ( v13 && *(_DWORD *)(v8 + 76) == v12 || *(_DWORD *)(v8 + 72) == v12 )
    {
LABEL_159:
      v19 = 0;
      goto LABEL_34;
    }
    if ( *(_DWORD *)(v8 + 240) == v12 )
    {
      if ( (v10 == 10) >= v61 )
      {
        ++v16;
        if ( v10 == 8 || (v61 = 1, !v9) )
        {
          v16 = 0;
          v61 = 1;
          v10 = 8;
        }
        goto LABEL_26;
      }
    }
    else if ( !v61 )
    {
      goto LABEL_159;
    }
    if ( *(_DWORD *)(v8 + 232) != v12 && *(_DWORD *)(v8 + 236) != v12 )
    {
      v61 = 1;
      v19 = 0;
      if ( v10 != 16 )
        goto LABEL_35;
      goto LABEL_94;
    }
    if ( v10 != 16 && v9 )
    {
      v19 = 0;
      v61 = 1;
      goto LABEL_35;
    }
    v16 = 0;
    v61 = 0;
    v10 = 16;
LABEL_26:
    if ( v64 )
    {
      v17 = v64[2];
      if ( v17 >= v64[3] )
        (*(void (__fastcall **)(_QWORD *))(*v64 + 80LL))(v64);
      else
        v64[2] = v17 + 4;
      LODWORD(v65) = -1;
    }
    v18 = sub_554B08((__int64)&v64);
    if ( (v18 == -1) == ((unsigned int)sub_554B08((__int64)&v62) == -1) )
    {
      v13 = *(unsigned __int8 *)(v8 + 32);
      v19 = 1;
      goto LABEL_34;
    }
    v12 = sub_554B08((__int64)&v64);
    if ( !v61 )
      break;
    v13 = *(unsigned __int8 *)(v8 + 32);
  }
  v13 = *(unsigned __int8 *)(v8 + 32);
  v19 = 0;
LABEL_34:
  if ( v10 != 16 )
  {
LABEL_35:
    v20 = (int)v10;
    v67 = &byte_6FD2F8;
    if ( !v13 )
      goto LABEL_36;
LABEL_95:
    sub_567088(&v67, 32);
    v59 = *(unsigned __int8 *)(v8 + 328);
    v21 = 0xFFFFFFFF / v10;
    if ( *(_BYTE *)(v8 + 328) )
      goto LABEL_96;
LABEL_37:
    v22 = 0;
    v23 = 0;
    if ( !v19 )
    {
LABEL_38:
      while ( v20 > 0xA )
      {
        while ( 1 )
        {
          if ( v12 - 48 <= 9 )
          {
            v24 = v12 - 48;
            goto LABEL_42;
          }
          if ( v12 - 97 <= 5 )
          {
            v24 = v12 - 87;
            goto LABEL_42;
          }
          if ( v12 - 65 > 5 )
            goto LABEL_85;
          v24 = v12 - 55;
          if ( v21 < v22 )
            goto LABEL_43;
LABEL_62:
          v33 = v22 * v10;
          ++v16;
          v34 = ~v24 >= v33;
          v22 = v24 + v33;
          v35 = !v34;
          v23 |= v35;
          v25 = v64;
          if ( v64 )
            goto LABEL_44;
LABEL_66:
          v29 = v62;
          if ( !v62 )
            goto LABEL_72;
          v30 = 1;
          v31 = 0;
          if ( (_DWORD)v63 != -1 )
            goto LABEL_51;
LABEL_68:
          v36 = (int *)v29[2];
          if ( (unsigned __int64)v36 >= v29[3] )
            v37 = (*(__int64 (__fastcall **)(_QWORD *))(*v29 + 72LL))(v29);
          else
            v37 = *v36;
          if ( v37 == -1 )
          {
            v62 = 0;
            v31 = 1;
            goto LABEL_51;
          }
          LODWORD(v63) = v37;
          if ( !v30 )
            goto LABEL_72;
LABEL_52:
          v12 = -1;
          if ( !v64 )
            goto LABEL_38;
          v12 = v65;
          if ( (_DWORD)v65 != -1 )
            goto LABEL_38;
          v32 = (_DWORD *)v64[2];
          v12 = (unsigned __int64)v32 >= v64[3] ? (*(__int64 (__fastcall **)(_QWORD *))(*v64 + 72LL))(v64) : *v32;
          if ( v12 == -1 )
            break;
          LODWORD(v65) = v12;
          if ( v20 <= 0xA )
            goto LABEL_39;
        }
        v64 = 0;
      }
LABEL_39:
      if ( v12 > 0x2F && v12 < (int)v20 + 48 )
      {
        v24 = v12 - 48;
LABEL_42:
        if ( v21 >= v22 )
          goto LABEL_62;
LABEL_43:
        v25 = v64;
        v23 = 1;
        if ( !v64 )
          goto LABEL_66;
LABEL_44:
        v26 = v25[2];
        if ( v26 >= v25[3] )
        {
          (*(void (__fastcall **)(_QWORD *))(*v25 + 80LL))(v25);
          v25 = v64;
          LODWORD(v65) = -1;
          if ( !v64 )
            goto LABEL_66;
        }
        else
        {
          LODWORD(v65) = -1;
          v25[2] = v26 + 4;
        }
        v27 = (int *)v25[2];
        if ( (unsigned __int64)v27 >= v25[3] )
          v28 = (*(__int64 (__fastcall **)(_QWORD *))(*v25 + 72LL))(v25);
        else
          v28 = *v27;
        if ( v28 == -1 )
        {
          v64 = 0;
          goto LABEL_66;
        }
        v29 = v62;
        v30 = 0;
        LODWORD(v65) = v28;
        if ( !v62 )
          goto LABEL_52;
        v31 = 0;
        if ( (_DWORD)v63 == -1 )
          goto LABEL_68;
LABEL_51:
        if ( v31 != v30 )
          goto LABEL_52;
LABEL_72:
        v38 = v67;
        v39 = 0;
        v19 = 1;
        if ( !*((_QWORD *)v67 - 3) )
          goto LABEL_87;
        goto LABEL_73;
      }
    }
LABEL_85:
    v39 = 0;
    goto LABEL_86;
  }
LABEL_94:
  v20 = 22;
  v67 = &byte_6FD2F8;
  if ( v13 )
    goto LABEL_95;
LABEL_36:
  v59 = *(unsigned __int8 *)(v8 + 328);
  v21 = 0xFFFFFFFF / v10;
  if ( !*(_BYTE *)(v8 + 328) )
    goto LABEL_37;
LABEL_96:
  if ( v19 )
  {
    v22 = 0;
    v23 = 0;
    v39 = 0;
    goto LABEL_86;
  }
  v22 = 0;
  v23 = 0;
  while ( 2 )
  {
    if ( !*(_BYTE *)(v8 + 32) || v12 != *(_DWORD *)(v8 + 76) )
    {
      if ( v12 == *(_DWORD *)(v8 + 72) )
        goto LABEL_85;
      v42 = wmemchr((const wchar_t *)(v8 + 240), v12, v20);
      if ( !v42 )
        goto LABEL_85;
      v43 = ((__int64)v42 - v8 - 240) >> 2;
      if ( (int)v43 >= 16 )
        LODWORD(v43) = v43 - 6;
      if ( v21 < v22 )
      {
        v46 = v64;
        v23 = 1;
        if ( v64 )
          goto LABEL_110;
      }
      else
      {
        v44 = v22 * v10;
        ++v16;
        v34 = ~(_DWORD)v43 >= v44;
        v22 = v43 + v44;
        v45 = !v34;
        v23 |= v45;
LABEL_109:
        v46 = v64;
        if ( v64 )
        {
LABEL_110:
          v47 = v46[2];
          if ( v47 < v46[3] )
          {
            LODWORD(v65) = -1;
            v46[2] = v47 + 4;
            goto LABEL_112;
          }
          (*(void (__fastcall **)(_QWORD *))(*v46 + 80LL))(v46);
          v46 = v64;
          LODWORD(v65) = -1;
          if ( v64 )
          {
LABEL_112:
            v48 = (int *)v46[2];
            if ( (unsigned __int64)v48 >= v46[3] )
              v49 = (*(__int64 (__fastcall **)(_QWORD *))(*v46 + 72LL))(v46);
            else
              v49 = *v48;
            if ( v49 != -1 )
            {
              v50 = v62;
              v51 = 0;
              LODWORD(v65) = v49;
              if ( v62 )
              {
                v52 = 0;
                if ( (_DWORD)v63 != -1 )
                  goto LABEL_117;
LABEL_134:
                v54 = (int *)v50[2];
                if ( (unsigned __int64)v54 >= v50[3] )
                  v55 = (*(__int64 (__fastcall **)(_QWORD *))(*v50 + 72LL))(v50);
                else
                  v55 = *v54;
                if ( v55 == -1 )
                {
                  v62 = 0;
                  v52 = v59;
                }
                else
                {
                  LODWORD(v63) = v55;
                  v52 = 0;
                }
                goto LABEL_117;
              }
LABEL_118:
              v12 = -1;
              if ( v64 )
              {
                v12 = v65;
                if ( (_DWORD)v65 == -1 )
                {
                  v53 = (unsigned int *)v64[2];
                  if ( (unsigned __int64)v53 >= v64[3] )
                    v12 = (*(__int64 (__fastcall **)(_QWORD *))(*v64 + 72LL))(v64);
                  else
                    v12 = *v53;
                  if ( v12 == -1 )
                    v64 = 0;
                  else
                    LODWORD(v65) = v12;
                }
              }
              continue;
            }
            v64 = 0;
          }
        }
      }
      v50 = v62;
      if ( !v62 )
        goto LABEL_72;
      v52 = 0;
      v51 = v59;
      if ( (_DWORD)v63 == -1 )
        goto LABEL_134;
LABEL_117:
      if ( v52 == v51 )
        goto LABEL_72;
      goto LABEL_118;
    }
    break;
  }
  if ( v16 )
  {
    sub_567890(&v67, v16);
    v16 = 0;
    goto LABEL_109;
  }
  v39 = 1;
LABEL_86:
  v38 = v67;
  if ( *((_QWORD *)v67 - 3) )
  {
LABEL_73:
    sub_567890(&v67, v16);
    if ( !sub_53CA8C(*(_QWORD *)(v8 + 16), *(_QWORD *)(v8 + 24), (unsigned __int8 **)&v67) )
      *a7 = 4;
    v38 = v67;
    if ( (v16 == 0) <= v61 || *((_QWORD *)v67 - 3) )
      goto LABEL_77;
LABEL_88:
    *a8 = 0;
    *a7 = 4;
    goto LABEL_80;
  }
LABEL_87:
  if ( (v16 == 0) > v61 )
    goto LABEL_88;
LABEL_77:
  if ( v39 )
    goto LABEL_88;
  if ( v23 )
  {
    *a8 = -1;
    *a7 = 4;
  }
  else
  {
    *a8 = (v22 ^ -v56) + v56;
  }
LABEL_80:
  if ( v19 )
    *a7 |= 2u;
  v40 = v64;
  if ( v38 - 24 != (char *)&qword_6FD2E0 )
    sub_54D8E0((unsigned int *)v38 - 6);
  return v40;
}

