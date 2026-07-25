/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000053AE2C
 * Mangled: sub_53AE2C
 * Demangled: sub_53AE2C
 *
 * Callers: 1
 *   0x000000000053B7A8  sub_53B7A8
 *
 * Callees: 10
 *   0x0000000000203020  .memchr
 *   0x000000000052B45C  sub_52B45C
 *   0x000000000052B4A0  sub_52B4A0
 *   0x0000000000532724  sub_532724
 *   0x0000000000532808  sub_532808
 *   0x000000000053B7A8  sub_53B7A8
 *   0x000000000053CA8C  sub_53CA8C
 *   0x0000000000567088  sub_567088
 *   0x0000000000567890  sub_567890
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 170
 *   insn=0x000000000053AE60 string=0x000000000053AE64 "0"
 *   insn=0x000000000053AE6C string=0x000000000053AE70 "@\t"
 *   insn=0x000000000053AE7C string=0x000000000053AE80 "@D"
 *   insn=0x000000000053AE84 string=0x000000000053AE88 "@"
 *   insn=0x000000000053AE8C string=0x000000000053AE90 "Z"
 *   insn=0x000000000053AE9C string=0x000000000053AEA0 "Z"
 *   insn=0x000000000053AEA8 string=0x000000000053AEAC "W"
 *   insn=0x000000000053AEBC string=0x000000000053AEC0 "?"
 *   insn=0x000000000053AEC0 string=0x000000000053AEC4 " 2"
 *   insn=0x000000000053AEC8 string=0x000000000053AECC "O"
 *   insn=0x000000000053AED4 string=0x000000000053AED8 "?"
 *   insn=0x000000000053AEE8 string=0x000000000053AEEC "A0"
 *   insn=0x000000000053AEF4 string=0x000000000053AEF8 "@"
 *   insn=0x000000000053AEFC string=0x000000000053AF00 " "
 *   insn=0x000000000053AF08 string=0x000000000053AF0C "?"
 *   insn=0x000000000053AF10 string=0x000000000053AF14 "!"
 *   insn=0x000000000053AF10 string=0x000000000053B74C "U"
 *   insn=0x000000000053AF24 string=0x000000000053AF28 "8"
 *   insn=0x000000000053AF30 string=0x000000000053AF34 "5"
 *   insn=0x000000000053AF44 string=0x000000000053AF48 "?"
 *   insn=0x000000000053AF48 string=0x000000000053AF4C " ."
 *   insn=0x000000000053AF50 string=0x000000000053AF54 "-"
 *   insn=0x000000000053AF78 string=0x000000000053B034 "_C"
 *   insn=0x000000000053AF90 string=0x000000000053B490 "_+"
 *   insn=0x000000000053AFA4 string=0x000000000053AFB4 "_C"
 *   insn=0x000000000053AFB0 string=0x000000000053B4D0 " "
 *   insn=0x000000000053AFB4 string=0x000000000053AFB8 "@"
 *   insn=0x000000000053AFBC string=0x000000000053B754 " "
 *   insn=0x000000000053AFD8 string=0x000000000053AFDC "?"
 *   insn=0x000000000053AFDC string=0x000000000053AFE0 "b:"
 *   insn=0x000000000053AFE0 string=0x000000000053AFE4 "!"
 *   insn=0x000000000053B000 string=0x000000000053B004 "?"
 *   insn=0x000000000053B010 string=0x000000000053B014 "?"
 *   insn=0x000000000053B038 string=0x000000000053B03C " "
 *   insn=0x000000000053B044 string=0x000000000053B048 "@"
 *   insn=0x000000000053B048 string=0x000000000053B04C "X"
 *   insn=0x000000000053B058 string=0x000000000053B05C "!"
 *   insn=0x000000000053B074 string=0x000000000053B078 "|7"
 *   insn=0x000000000053B088 string=0x000000000053B08C " "
 *   insn=0x000000000053B094 string=0x000000000053B098 "H"
 *   insn=0x000000000053B098 string=0x000000000053B140 "`"
 *   insn=0x000000000053B0A8 string=0x000000000053B0AC "B-"
 *   insn=0x000000000053B0AC string=0x000000000053B0B0 "`"
 *   insn=0x000000000053B0B0 string=0x000000000053B0B4 "?"
 *   insn=0x000000000053B0B4 string=0x000000000053B0B8 """
 *   insn=0x000000000053B0BC string=0x000000000053B0C0 "6"
 *   insn=0x000000000053B0CC string=0x000000000053B0D0 "?"
 *   insn=0x000000000053B0D4 string=0x000000000053B0D8 "!"
 *   insn=0x000000000053B0E8 string=0x000000000053B0EC "?"
 *   insn=0x000000000053B0EC string=0x000000000053B0F0 "b%"
 *   insn=0x000000000053B0F0 string=0x000000000053B0F4 "!"
 *   insn=0x000000000053B10C string=0x000000000053B110 "_"
 *   insn=0x000000000053B110 string=0x000000000053B114 "`"
 *   insn=0x000000000053B118 string=0x000000000053B11C "@"
 *   insn=0x000000000053B120 string=0x000000000053B124 "@)"
 *   insn=0x000000000053B134 string=0x000000000053B138 "s"
 *   insn=0x000000000053B138 string=0x000000000053B13C "\t"
 *   insn=0x000000000053B144 string=0x000000000053B148 "?$"
 *   insn=0x000000000053B148 string=0x000000000053B14C "I"
 *   insn=0x000000000053B14C string=0x000000000053B150 "`"
 *   insn=0x000000000053B15C string=0x000000000053B160 "`"
 *   insn=0x000000000053B15C string=0x000000000053B56C "`^"
 *   insn=0x000000000053B168 string=0x000000000053B16C "H'"
 *   insn=0x000000000053B16C string=0x000000000053B170 "?"
 *   insn=0x000000000053B170 string=0x000000000053B174 "`"
 *   insn=0x000000000053B174 string=0x000000000053B178 "#"
 *   insn=0x000000000053B188 string=0x000000000053B18C "_"
 *   insn=0x000000000053B19C string=0x000000000053B1A0 "@"
 *   insn=0x000000000053B1AC string=0x000000000053B1B0 "3"
 *   insn=0x000000000053B1B4 string=0x000000000053B1B8 "_"
 *   insn=0x000000000053B1C4 string=0x000000000053B1C8 "?"
 *   insn=0x000000000053B1CC string=0x000000000053B1D0 " "
 *   insn=0x000000000053B1E4 string=0x000000000053B1E8 "<"
 *   insn=0x000000000053B1EC string=0x000000000053B1F0 "@"
 *   insn=0x000000000053B1F0 string=0x000000000053B1F4 "@"
 *   insn=0x000000000053B204 string=0x000000000053B208 "I "
 *   insn=0x000000000053B218 string=0x000000000053B21C " "
 *   insn=0x000000000053B220 string=0x000000000053B234 "@"
 *   insn=0x000000000053B224 string=0x000000000053B228 " "
 *   insn=0x000000000053B22C string=0x000000000053B230 " "
 *   insn=0x000000000053B234 string=0x000000000053B238 "Sc"
 *   insn=0x000000000053B270 string=0x000000000053B274 "<"
 *   insn=0x000000000053B274 string=0x000000000053B278 "_C"
 *   insn=0x000000000053B278 string=0x000000000053B27C "!"
 *   insn=0x000000000053B284 string=0x000000000053B288 "@"
 *   insn=0x000000000053B298 string=0x000000000053B29C "!"
 *   insn=0x000000000053B2A4 string=0x000000000053B2A8 "x"
 *   insn=0x000000000053B2E4 string=0x000000000053B2E8 "`"
 *   insn=0x000000000053B300 string=0x000000000053B304 "G"
 *   insn=0x000000000053B304 string=0x000000000053B308 "`"
 *   insn=0x000000000053B318 string=0x000000000053B31C "?"
 *   insn=0x000000000053B31C string=0x000000000053B320 "#"
 *   insn=0x000000000053B320 string=0x000000000053B524 "6"
 *   insn=0x000000000053B330 string=0x000000000053B334 "_"
 *   insn=0x000000000053B344 string=0x000000000053B348 "`"
 *   insn=0x000000000053B350 string=0x000000000053B354 "?"
 *   insn=0x000000000053B354 string=0x000000000053B358 """
 *   insn=0x000000000053B358 string=0x000000000053B35C "!"
 *   insn=0x000000000053B370 string=0x000000000053B374 "?"
 *   insn=0x000000000053B378 string=0x000000000053B37C "!"
 *   insn=0x000000000053B394 string=0x000000000053B398 "_"
 *   insn=0x000000000053B3BC string=0x000000000053B3C0 "s"
 *   insn=0x000000000053B3C0 string=0x000000000053B3C4 "@"
 *   insn=0x000000000053B3D4 string=0x000000000053B774 "3"
 *   insn=0x000000000053B3E8 string=0x000000000053B3EC "3"
 *   insn=0x000000000053B3F8 string=0x000000000053B3FC "_"
 *   insn=0x000000000053B41C string=0x000000000053B420 "A"
 *   insn=0x000000000053B428 string=0x000000000053B42C "!"
 *   insn=0x000000000053B434 string=0x000000000053B438 "_"
 *   insn=0x000000000053B438 string=0x000000000053B43C "@"
 *   insn=0x000000000053B454 string=0x000000000053B458 "`"
 *   insn=0x000000000053B464 string=0x000000000053B468 "_"
 *   insn=0x000000000053B474 string=0x000000000053B478 "?"
 *   insn=0x000000000053B478 string=0x000000000053B47C "b"
 *   insn=0x000000000053B47C string=0x000000000053B480 " "
 *   insn=0x000000000053B4A0 string=0x000000000053B4A4 "_#"
 *   insn=0x000000000053B4AC string=0x000000000053B4B0 " "
 *   insn=0x000000000053B4AC string=0x000000000053B4BC " "
 *   insn=0x000000000053B4D8 string=0x000000000053B4DC "g"
 *   insn=0x000000000053B4FC string=0x000000000053B500 "!"
 *   insn=0x000000000053B510 string=0x000000000053B514 "<"
 *   insn=0x000000000053B51C string=0x000000000053B520 "V"
 *   insn=0x000000000053B530 string=0x000000000053B534 "?"
 *   insn=0x000000000053B538 string=0x000000000053B53C " "
 *   insn=0x000000000053B550 string=0x000000000053B554 "?"
 *   insn=0x000000000053B558 string=0x000000000053B55C " "
 *   insn=0x000000000053B564 string=0x000000000053B568 "\"
 *   insn=0x000000000053B574 string=0x000000000053B578 "!(@"
 *   insn=0x000000000053B578 string=0x000000000053B57C " "
 *   insn=0x000000000053B590 string=0x000000000053B594 "?"
 *   insn=0x000000000053B59C string=0x000000000053B5A0 "!$@"
 *   insn=0x000000000053B5A0 string=0x000000000053B5A4 " "
 *   insn=0x000000000053B5AC string=0x000000000053B5B0 "A"
 *   insn=0x000000000053B5D4 string=0x000000000053B5D8 "-"
 *   insn=0x000000000053B5D8 string=0x000000000053CA8C "E"
 *   insn=0x000000000053B5E8 string=0x000000000053B5EC " "
 *   insn=0x000000000053B600 string=0x000000000053B604 "i"
 *   insn=0x000000000053B604 string=0x000000000053B608 "@"
 *   insn=0x000000000053B61C string=0x000000000053B620 " "
 *   insn=0x000000000053B628 string=0x000000000053B62C " "
 *   insn=0x000000000053B634 string=0x000000000053B638 "!$@"
 *   insn=0x000000000053B638 string=0x000000000053B63C " "
 *   insn=0x000000000053B65C string=0x000000000053B660 "!(@"
 *   insn=0x000000000053B660 string=0x000000000053B664 " "
 *   insn=0x000000000053B67C string=0x000000000053B680 "?"
 *   insn=0x000000000053B688 string=0x000000000053B68C "!$@"
 *   insn=0x000000000053B68C string=0x000000000053B690 " "
 *   insn=0x000000000053B698 string=0x000000000053B69C "!"
 *   insn=0x000000000053B6A0 string=0x000000000053B6A4 "l"
 *   insn=0x000000000053B6A8 string=0x000000000053B6AC "!$@"
 *   insn=0x000000000053B6AC string=0x000000000053B6B0 " "
 *   insn=0x000000000053B6B4 string=0x000000000053B6B8 "A"
 *   insn=0x000000000053B6C8 string=0x000000000053B6CC "!$@"
 *   insn=0x000000000053B6CC string=0x000000000053B6D0 " "
 *   insn=0x000000000053B6DC string=0x000000000053B6E0 "!"
 *   insn=0x000000000053B6E8 string=0x000000000053B6EC "!$@"
 *   insn=0x000000000053B6EC string=0x000000000053B6F0 " "
 *   insn=0x000000000053B6F4 string=0x000000000053B6F8 "a"
 *   insn=0x000000000053B700 string=0x000000000053B704 "'"
 *   insn=0x000000000053B720 string=0x000000000053B724 " "
 *   insn=0x000000000053B72C string=0x000000000053B730 "!(@"
 *   insn=0x000000000053B730 string=0x000000000053B734 " "
 *   insn=0x000000000053B734 string=0x000000000053B738 "-"
 *   insn=0x000000000053B740 string=0x000000000053B744 "F"
 *   insn=0x000000000053B75C string=0x000000000053B760 "8"
 *   insn=0x000000000053B77C string=0x000000000053B780 "@"
 *   insn=0x000000000053B788 string=0x000000000053B78C "@c"
 *   insn=0x000000000053B790 string=0x000000000053B794 "`"
 *   insn=0x000000000053B798 string=0x000000000053B79C "0"
 *   insn=0x000000000053B7A0 string=0x000000000053B7A4 "H"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_53AE2C(
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
  int v9; // w28
  unsigned __int64 v10; // x26
  int v11; // w19
  unsigned int v12; // w19
  int v13; // w1
  unsigned __int64 v14; // x1
  int v15; // w22
  unsigned int v16; // w23
  unsigned __int64 v17; // x1
  int v18; // w25
  int v19; // w28
  size_t v20; // x24
  unsigned __int64 v21; // x25
  unsigned __int64 v22; // x21
  int v23; // w22
  signed int v24; // w0
  _QWORD *v25; // x0
  unsigned __int64 v26; // x1
  unsigned __int64 v27; // x2
  unsigned __int8 *v28; // x1
  int v29; // w1
  _QWORD *v30; // x0
  int v31; // w19
  int v32; // w1
  bool v33; // cf
  int v34; // w0
  unsigned __int8 *v35; // x1
  int v36; // w0
  int v37; // w19
  char *v38; // x26
  _QWORD *v39; // x20
  void *v41; // x0
  int v42; // w0
  int v43; // w0
  _QWORD *v44; // x0
  unsigned __int64 v45; // x1
  unsigned __int8 *v46; // x1
  int v47; // w1
  _QWORD *v48; // x0
  int v49; // w19
  int v50; // w1
  char *v51; // x0
  __int64 v52; // x1
  __int64 v53; // x19
  char *v54; // x0
  unsigned __int8 *v55; // x1
  int v56; // w0
  unsigned __int8 *v57; // x1
  int v58; // w0
  unsigned __int8 *v59; // x1
  int v60; // w0
  bool v61; // [xsp+64h] [xbp+64h]
  int v64; // [xsp+80h] [xbp+80h]
  unsigned int v66; // [xsp+88h] [xbp+88h]
  _QWORD *v67; // [xsp+90h] [xbp+90h] BYREF
  __int64 v68; // [xsp+98h] [xbp+98h]
  _QWORD *v69; // [xsp+A0h] [xbp+A0h] BYREF
  __int64 v70; // [xsp+A8h] [xbp+A8h]
  char v71[8]; // [xsp+B8h] [xbp+B8h] BYREF
  char *v72; // [xsp+C8h] [xbp+C8h] BYREF

  v69 = a2;
  v70 = a3;
  v67 = a4;
  v68 = a5;
  v8 = sub_532724((__int64)v71, (_QWORD *)(a6 + 208));
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
  v11 = sub_532808((__int64)&v69);
  if ( (v11 == -1) == ((unsigned int)sub_532808((__int64)&v67) == -1) )
  {
    v12 = 0;
    v61 = 0;
  }
  else
  {
    v12 = (unsigned __int8)sub_532808((__int64)&v69);
    v61 = *(unsigned __int8 *)(v8 + 110) == v12;
    if ( *(unsigned __int8 *)(v8 + 110) != v12 && *(unsigned __int8 *)(v8 + 111) != v12 )
    {
      v13 = *(unsigned __int8 *)(v8 + 32);
      goto LABEL_14;
    }
    v13 = *(unsigned __int8 *)(v8 + 32);
    if ( *(_BYTE *)(v8 + 32) && *(unsigned __int8 *)(v8 + 73) == v12 )
    {
      v13 = 1;
      goto LABEL_14;
    }
    if ( *(unsigned __int8 *)(v8 + 72) == v12 )
    {
LABEL_14:
      v16 = 0;
      v66 = 0;
      while ( (!v13 || *(unsigned __int8 *)(v8 + 73) != v12) && *(unsigned __int8 *)(v8 + 72) != v12 )
      {
        if ( *(unsigned __int8 *)(v8 + 114) == v12 )
        {
          if ( ((_DWORD)v10 == 10) >= v66 )
          {
            ++v16;
            if ( (_DWORD)v10 == 8 || (v66 = 1, !v9) )
            {
              v16 = 0;
              v66 = 1;
              v10 = 8;
            }
            goto LABEL_25;
          }
        }
        else if ( !v66 )
        {
          break;
        }
        if ( *(unsigned __int8 *)(v8 + 112) != v12 && *(unsigned __int8 *)(v8 + 113) != v12 )
        {
          v19 = 0;
          v66 = 1;
          goto LABEL_74;
        }
        if ( (_DWORD)v10 != 16 && v9 )
        {
          v19 = 0;
          v66 = 1;
          goto LABEL_32;
        }
        v16 = 0;
        v66 = 0;
        v10 = 16;
LABEL_25:
        if ( v69 )
        {
          v17 = v69[2];
          if ( v17 >= v69[3] )
            (*(void (__fastcall **)(_QWORD *))(*v69 + 80LL))(v69);
          else
            v69[2] = v17 + 1;
          LODWORD(v70) = -1;
        }
        v18 = sub_532808((__int64)&v69);
        if ( (v18 == -1) == ((unsigned int)sub_532808((__int64)&v67) == -1) )
        {
          v13 = *(unsigned __int8 *)(v8 + 32);
          v19 = 1;
          goto LABEL_74;
        }
        v12 = (unsigned __int8)sub_532808((__int64)&v69);
        v13 = *(unsigned __int8 *)(v8 + 32);
        if ( !v66 )
          break;
      }
      v19 = 0;
      if ( (_DWORD)v10 != 16 )
        goto LABEL_32;
LABEL_75:
      v20 = 22;
      v72 = &byte_6FD2F8;
      if ( v13 )
        goto LABEL_76;
LABEL_33:
      v64 = *(unsigned __int8 *)(v8 + 136);
      v21 = 0xFFFFFFFFFFFFFFFFLL / v10;
      if ( !*(_BYTE *)(v8 + 136) )
        goto LABEL_34;
LABEL_77:
      if ( !v19 )
      {
        v22 = 0;
        v23 = 0;
        while ( 1 )
        {
          if ( !*(_BYTE *)(v8 + 32) || *(unsigned __int8 *)(v8 + 73) != v12 )
          {
LABEL_81:
            if ( *(unsigned __int8 *)(v8 + 72) == v12 )
              goto LABEL_145;
            v41 = memchr((const void *)(v8 + 114), v12, v20);
            if ( !v41 )
              goto LABEL_145;
            v42 = (_DWORD)v41 - (v8 + 114);
            if ( v42 >= 16 )
              v42 -= 6;
            if ( v21 < v22 )
            {
              v23 = 1;
            }
            else
            {
              ++v16;
              v33 = ~(__int64)v42 >= v22 * v10;
              v22 = v42 + v22 * v10;
              v43 = !v33;
              v23 |= v43;
            }
            goto LABEL_90;
          }
          while ( 1 )
          {
            if ( !v16 )
            {
              v37 = 1;
              goto LABEL_65;
            }
            v51 = v72;
            v52 = *((_QWORD *)v72 - 3);
            v53 = v52 + 1;
            if ( (unsigned __int64)(v52 + 1) > *((_QWORD *)v72 - 2) || *((int *)v72 - 2) > 0 )
            {
              sub_567088(&v72, v52 + 1);
              v51 = v72;
              v52 = *((_QWORD *)v72 - 3);
            }
            v51[v52] = v16;
            v16 = 0;
            v54 = v72;
            if ( v72 - 24 == (char *)&qword_6FD2E0 )
            {
LABEL_90:
              v44 = v69;
              if ( !v69 )
                goto LABEL_107;
            }
            else
            {
              *((_DWORD *)v72 - 2) = 0;
              *((_QWORD *)v54 - 3) = v53;
              v54[v53] = 0;
              v44 = v69;
              if ( !v69 )
                goto LABEL_107;
            }
            v45 = v44[2];
            if ( v45 >= v44[3] )
            {
              (*(void (__fastcall **)(_QWORD *))(*v44 + 80LL))(v44);
              v44 = v69;
              LODWORD(v70) = -1;
              if ( !v69 )
                goto LABEL_107;
              v46 = (unsigned __int8 *)v69[2];
              if ( (unsigned __int64)v46 < v69[3] )
              {
LABEL_93:
                v47 = *v46;
LABEL_94:
                v48 = v67;
                v49 = 0;
                LODWORD(v70) = v47;
                if ( !v67 )
                  goto LABEL_97;
                v50 = 0;
                if ( (_DWORD)v68 != -1 )
                  goto LABEL_96;
                goto LABEL_109;
              }
            }
            else
            {
              v44[2] = v45 + 1;
              LODWORD(v70) = -1;
              v46 = (unsigned __int8 *)v44[2];
              if ( (unsigned __int64)v46 < v44[3] )
                goto LABEL_93;
            }
            v47 = (*(__int64 (__fastcall **)(_QWORD *))(*v44 + 72LL))(v44);
            if ( v47 != -1 )
              goto LABEL_94;
            v69 = 0;
LABEL_107:
            v48 = v67;
            if ( !v67 )
              goto LABEL_64;
            v50 = 0;
            v49 = v64;
            if ( (_DWORD)v68 != -1 )
              goto LABEL_96;
LABEL_109:
            v55 = (unsigned __int8 *)v48[2];
            if ( (unsigned __int64)v55 < v48[3] )
            {
              v56 = *v55;
LABEL_111:
              LODWORD(v68) = v56;
              v50 = 0;
              goto LABEL_96;
            }
            v56 = (*(__int64 (__fastcall **)(_QWORD *))(*v48 + 72LL))(v48);
            if ( v56 != -1 )
              goto LABEL_111;
            v67 = 0;
            v50 = v64;
LABEL_96:
            if ( v49 == v50 )
              goto LABEL_64;
LABEL_97:
            if ( !v69 )
              goto LABEL_152;
            if ( (_DWORD)v70 == -1 )
              break;
            v12 = (unsigned __int8)v70;
            if ( !*(_BYTE *)(v8 + 32) || *(unsigned __int8 *)(v8 + 73) != (unsigned __int8)v70 )
              goto LABEL_81;
          }
          v59 = (unsigned __int8 *)v69[2];
          if ( (unsigned __int64)v59 < v69[3] )
          {
            v60 = *v59;
            goto LABEL_129;
          }
          v60 = (*(__int64 (__fastcall **)(_QWORD *))(*v69 + 72LL))(v69);
          if ( v60 == -1 )
          {
            v69 = 0;
LABEL_152:
            v12 = 255;
          }
          else
          {
LABEL_129:
            LODWORD(v70) = v60;
            v12 = (unsigned __int8)v60;
          }
        }
      }
LABEL_162:
      v22 = 0;
      v23 = 0;
      v37 = 0;
      goto LABEL_65;
    }
    if ( v69 )
    {
      v14 = v69[2];
      if ( v14 >= v69[3] )
        sub_52B4A0((__int64)v69);
      else
        v69[2] = v14 + 1;
      LODWORD(v70) = -1;
    }
    v15 = sub_532808((__int64)&v69);
    if ( (v15 == -1) != ((unsigned int)sub_532808((__int64)&v67) == -1) )
    {
      v12 = (unsigned __int8)sub_532808((__int64)&v69);
      v13 = *(unsigned __int8 *)(v8 + 32);
      goto LABEL_14;
    }
  }
  v13 = *(unsigned __int8 *)(v8 + 32);
  v19 = 1;
  v16 = 0;
  v66 = 0;
LABEL_74:
  if ( (_DWORD)v10 == 16 )
    goto LABEL_75;
LABEL_32:
  v20 = (int)v10;
  v72 = &byte_6FD2F8;
  if ( !v13 )
    goto LABEL_33;
LABEL_76:
  sub_567088(&v72, 32);
  v64 = *(unsigned __int8 *)(v8 + 136);
  v21 = 0xFFFFFFFFFFFFFFFFLL / v10;
  if ( *(_BYTE *)(v8 + 136) )
    goto LABEL_77;
LABEL_34:
  if ( v19 )
    goto LABEL_162;
  v22 = 0;
  v23 = 0;
  while ( v20 > 0xA )
  {
    while ( 1 )
    {
      v24 = v12 - 48;
      if ( (unsigned __int8)(v12 - 48) <= 9u )
        goto LABEL_40;
      if ( (unsigned __int8)(v12 - 97) <= 5u )
      {
        v24 = v12 - 87;
        goto LABEL_40;
      }
      if ( (unsigned __int8)(v12 - 65) > 5u )
        goto LABEL_145;
      v24 = v12 - 55;
      if ( v21 < v22 )
        goto LABEL_41;
LABEL_55:
      ++v16;
      v33 = ~(__int64)v24 >= v22 * v10;
      v22 = v24 + v22 * v10;
      v34 = !v33;
      v23 |= v34;
      v25 = v69;
      if ( v69 )
        goto LABEL_42;
LABEL_59:
      v30 = v67;
      if ( !v67 )
        goto LABEL_64;
      v31 = 1;
      v32 = 0;
      if ( (_DWORD)v68 != -1 )
        goto LABEL_47;
LABEL_61:
      v35 = (unsigned __int8 *)v30[2];
      if ( (unsigned __int64)v35 >= v30[3] )
      {
        v36 = (*(__int64 (__fastcall **)(_QWORD *))(*v30 + 72LL))(v30);
        if ( v36 == -1 )
        {
          v67 = 0;
          v32 = 1;
          goto LABEL_47;
        }
      }
      else
      {
        v36 = *v35;
      }
      LODWORD(v68) = v36;
      if ( !v31 )
        goto LABEL_64;
LABEL_48:
      if ( !v69 )
        goto LABEL_144;
      if ( (_DWORD)v70 == -1 )
        break;
      v12 = (unsigned __int8)v70;
      if ( v20 <= 0xA )
        goto LABEL_37;
    }
    v57 = (unsigned __int8 *)v69[2];
    if ( (unsigned __int64)v57 < v69[3] )
    {
      v58 = *v57;
LABEL_126:
      LODWORD(v70) = v58;
      v12 = (unsigned __int8)v58;
      continue;
    }
    v58 = (*(__int64 (__fastcall **)(_QWORD *))(*v69 + 72LL))(v69);
    if ( v58 != -1 )
      goto LABEL_126;
    v69 = 0;
LABEL_144:
    v12 = 255;
  }
LABEL_37:
  if ( v12 <= 0x2F || v12 >= (unsigned __int8)(v20 + 48) )
  {
LABEL_145:
    v37 = 0;
    goto LABEL_65;
  }
  v24 = v12 - 48;
LABEL_40:
  if ( v21 >= v22 )
    goto LABEL_55;
LABEL_41:
  v25 = v69;
  v23 = 1;
  if ( !v69 )
    goto LABEL_59;
LABEL_42:
  v26 = v25[2];
  if ( v26 >= v25[3] )
  {
    (*(void (__fastcall **)(_QWORD *))(*v25 + 80LL))(v25);
    v25 = v69;
    LODWORD(v70) = -1;
    if ( !v69 )
      goto LABEL_59;
    v28 = (unsigned __int8 *)v69[2];
    if ( (unsigned __int64)v28 < v69[3] )
      goto LABEL_44;
LABEL_133:
    v29 = (*(__int64 (__fastcall **)(_QWORD *))(*v25 + 72LL))(v25);
    if ( v29 == -1 )
    {
      v69 = 0;
      goto LABEL_59;
    }
    goto LABEL_45;
  }
  v25[2] = v26 + 1;
  v27 = v25[3];
  v28 = (unsigned __int8 *)v25[2];
  LODWORD(v70) = -1;
  if ( (unsigned __int64)v28 >= v27 )
    goto LABEL_133;
LABEL_44:
  v29 = *v28;
LABEL_45:
  v30 = v67;
  v31 = 0;
  LODWORD(v70) = v29;
  if ( !v67 )
    goto LABEL_48;
  v32 = 0;
  if ( (_DWORD)v68 == -1 )
    goto LABEL_61;
LABEL_47:
  if ( v31 != v32 )
    goto LABEL_48;
LABEL_64:
  v37 = 0;
  v19 = 1;
LABEL_65:
  v38 = v72;
  if ( *((_QWORD *)v72 - 3) )
  {
    sub_567890(&v72, v16);
    if ( !(unsigned __int8)sub_53CA8C(*(_QWORD *)(v8 + 16), *(_QWORD *)(v8 + 24), &v72) )
      *a7 = 4;
    v38 = v72;
    if ( (v16 == 0) > v66 && !*((_QWORD *)v72 - 3) )
      goto LABEL_67;
  }
  else if ( (v16 == 0) > v66 )
  {
LABEL_67:
    *a8 = 0;
    *a7 = 4;
    goto LABEL_68;
  }
  if ( v37 )
    goto LABEL_67;
  if ( v23 )
  {
    *a8 = -1;
    *a7 = 4;
  }
  else
  {
    *a8 = (v22 ^ -(__int64)v61) + v61;
  }
LABEL_68:
  if ( v19 )
    *a7 |= 2u;
  v39 = v69;
  if ( v38 - 24 != (char *)&qword_6FD2E0 )
    sub_52B45C((unsigned int *)v38 - 6);
  return v39;
}

