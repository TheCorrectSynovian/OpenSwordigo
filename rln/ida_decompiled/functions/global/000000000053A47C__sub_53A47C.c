/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000053A47C
 * Mangled: sub_53A47C
 * Demangled: sub_53A47C
 *
 * Callers: 1
 *   0x000000000053AE18  sub_53AE18
 *
 * Callees: 10
 *   0x0000000000203020  .memchr
 *   0x000000000052B45C  sub_52B45C
 *   0x000000000052B4A0  sub_52B4A0
 *   0x0000000000532724  sub_532724
 *   0x0000000000532808  sub_532808
 *   0x000000000053AE18  sub_53AE18
 *   0x000000000053CA8C  sub_53CA8C
 *   0x0000000000567088  sub_567088
 *   0x0000000000567890  sub_567890
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 158
 *   insn=0x000000000053A4BC string=0x000000000053A4C0 "@\t"
 *   insn=0x000000000053A4C4 string=0x000000000053A4C8 "{"
 *   insn=0x000000000053A4D4 string=0x000000000053A4D8 "@"
 *   insn=0x000000000053A50C string=0x000000000053A510 "?"
 *   insn=0x000000000053A510 string=0x000000000053A514 "`2"
 *   insn=0x000000000053A524 string=0x000000000053A528 "?"
 *   insn=0x000000000053A530 string=0x000000000053A534 " 0"
 *   insn=0x000000000053A544 string=0x000000000053A548 "@"
 *   insn=0x000000000053A54C string=0x000000000053A550 " "
 *   insn=0x000000000053A558 string=0x000000000053A55C "?"
 *   insn=0x000000000053A560 string=0x000000000053A564 "!"
 *   insn=0x000000000053A594 string=0x000000000053A598 "?"
 *   insn=0x000000000053A598 string=0x000000000053A59C "`."
 *   insn=0x000000000053A600 string=0x000000000053A95C " "
 *   insn=0x000000000053A604 string=0x000000000053A608 "@"
 *   insn=0x000000000053A60C string=0x000000000053ADC4 " "
 *   insn=0x000000000053A628 string=0x000000000053A62C "?"
 *   insn=0x000000000053A62C string=0x000000000053A630 "b;"
 *   insn=0x000000000053A630 string=0x000000000053A634 "!"
 *   insn=0x000000000053A640 string=0x000000000053A644 "q"
 *   insn=0x000000000053A64C string=0x000000000053A650 "n"
 *   insn=0x000000000053A650 string=0x000000000053A654 "?"
 *   insn=0x000000000053A660 string=0x000000000053A664 "?"
 *   insn=0x000000000053A66C string=0x000000000053A670 "f"
 *   insn=0x000000000053A684 string=0x000000000053A688 ""
 *   insn=0x000000000053A694 string=0x000000000053A698 "@"
 *   insn=0x000000000053A6CC string=0x000000000053A6D0 " "
 *   insn=0x000000000053A6DC string=0x000000000053A96C "[#"
 *   insn=0x000000000053A6FC string=0x000000000053A700 "H"
 *   insn=0x000000000053A700 string=0x000000000053A7A8 "`"
 *   insn=0x000000000053A704 string=0x000000000053A708 "i)"
 *   insn=0x000000000053A714 string=0x000000000053A718 "`"
 *   insn=0x000000000053A718 string=0x000000000053A71C "?"
 *   insn=0x000000000053A71C string=0x000000000053A720 """
 *   insn=0x000000000053A724 string=0x000000000053A728 "6"
 *   insn=0x000000000053A728 string=0x000000000053A72C " "
 *   insn=0x000000000053A734 string=0x000000000053A738 "?"
 *   insn=0x000000000053A73C string=0x000000000053A740 "!"
 *   insn=0x000000000053A750 string=0x000000000053A754 "?"
 *   insn=0x000000000053A758 string=0x000000000053A75C "!"
 *   insn=0x000000000053A774 string=0x000000000053A778 "_"
 *   insn=0x000000000053A780 string=0x000000000053A784 "`"
 *   insn=0x000000000053A794 string=0x000000000053A798 "`"
 *   insn=0x000000000053A79C string=0x000000000053A7A0 "s"
 *   insn=0x000000000053A7A0 string=0x000000000053A7A4 "\t"
 *   insn=0x000000000053A7AC string=0x000000000053A7B0 "?$"
 *   insn=0x000000000053A7B0 string=0x000000000053A7B4 "I"
 *   insn=0x000000000053A7B4 string=0x000000000053A7B8 "`"
 *   insn=0x000000000053A7C0 string=0x000000000053A7C4 "\t "
 *   insn=0x000000000053A7C4 string=0x000000000053A7C8 "`"
 *   insn=0x000000000053A7C4 string=0x000000000053ABC4 "`^"
 *   insn=0x000000000053A7D0 string=0x000000000053A7D4 "#"
 *   insn=0x000000000053A7D4 string=0x000000000053A7D8 "?"
 *   insn=0x000000000053A7D8 string=0x000000000053A7DC "`"
 *   insn=0x000000000053A7DC string=0x000000000053A7E0 "#"
 *   insn=0x000000000053A7EC string=0x000000000053A7F0 "B"
 *   insn=0x000000000053A7F4 string=0x000000000053A7F8 "_"
 *   insn=0x000000000053A808 string=0x000000000053A80C " "
 *   insn=0x000000000053A818 string=0x000000000053A81C "3"
 *   insn=0x000000000053A820 string=0x000000000053A824 "_"
 *   insn=0x000000000053A830 string=0x000000000053A834 "?"
 *   insn=0x000000000053A838 string=0x000000000053A83C " "
 *   insn=0x000000000053A850 string=0x000000000053A854 ";"
 *   insn=0x000000000053A85C string=0x000000000053A860 " "
 *   insn=0x000000000053A874 string=0x000000000053AC8C "s"
 *   insn=0x000000000053A884 string=0x000000000053A888 " "
 *   insn=0x000000000053A88C string=0x000000000053A8A0 "@"
 *   insn=0x000000000053A890 string=0x000000000053A894 " "
 *   insn=0x000000000053A898 string=0x000000000053A89C " "
 *   insn=0x000000000053A8DC string=0x000000000053A8E0 ";"
 *   insn=0x000000000053A8E4 string=0x000000000053A8E8 "A"
 *   insn=0x000000000053A8F0 string=0x000000000053A8F4 "@"
 *   insn=0x000000000053A904 string=0x000000000053A908 "A"
 *   insn=0x000000000053A914 string=0x000000000053A918 "f"
 *   insn=0x000000000053A938 string=0x000000000053A93C " "
 *   insn=0x000000000053A938 string=0x000000000053A948 " "
 *   insn=0x000000000053A954 string=0x000000000053A958 "1"
 *   insn=0x000000000053A95C string=0x000000000053A960 ""
 *   insn=0x000000000053A98C string=0x000000000053AA7C "W"
 *   insn=0x000000000053A9A8 string=0x000000000053A9AC "@"
 *   insn=0x000000000053A9BC string=0x000000000053A9C0 "?"
 *   insn=0x000000000053A9C4 string=0x000000000053AB7C "6"
 *   insn=0x000000000053A9D0 string=0x000000000053A9D4 "B"
 *   insn=0x000000000053A9D8 string=0x000000000053A9DC "_"
 *   insn=0x000000000053A9EC string=0x000000000053A9F0 "`"
 *   insn=0x000000000053A9F8 string=0x000000000053A9FC "?"
 *   insn=0x000000000053AA00 string=0x000000000053AA04 "!"
 *   insn=0x000000000053AA18 string=0x000000000053AA1C "?"
 *   insn=0x000000000053AA1C string=0x000000000053AA20 "b"
 *   insn=0x000000000053AA20 string=0x000000000053AA24 "!"
 *   insn=0x000000000053AA3C string=0x000000000053AA40 "_"
 *   insn=0x000000000053AA44 string=0x000000000053AA48 "?"
 *   insn=0x000000000053AA48 string=0x000000000053AA4C " "
 *   insn=0x000000000053AA5C string=0x000000000053AA60 " \n"
 *   insn=0x000000000053AA64 string=0x000000000053AA68 "s"
 *   insn=0x000000000053AA68 string=0x000000000053AA6C " "
 *   insn=0x000000000053AA7C string=0x000000000053ADE4 "3"
 *   insn=0x000000000053AA90 string=0x000000000053AA94 "3"
 *   insn=0x000000000053AAA0 string=0x000000000053AAA4 "_"
 *   insn=0x000000000053AAB0 string=0x000000000053AAB4 "u"
 *   insn=0x000000000053AAC4 string=0x000000000053AAC8 "A"
 *   insn=0x000000000053AAD0 string=0x000000000053AAD4 "!"
 *   insn=0x000000000053AADC string=0x000000000053AAE0 "_"
 *   insn=0x000000000053AAE0 string=0x000000000053AAE4 "@"
 *   insn=0x000000000053AB0C string=0x000000000053AB10 "_"
 *   insn=0x000000000053AB1C string=0x000000000053AB20 "?"
 *   insn=0x000000000053AB20 string=0x000000000053AB24 "B"
 *   insn=0x000000000053AB24 string=0x000000000053AB28 " "
 *   insn=0x000000000053AB50 string=0x000000000053AB54 "a"
 *   insn=0x000000000053AB54 string=0x000000000053AB58 "!"
 *   insn=0x000000000053AB68 string=0x000000000053AB6C ";"
 *   insn=0x000000000053AB74 string=0x000000000053AB78 "["
 *   insn=0x000000000053AB88 string=0x000000000053AB8C "?"
 *   insn=0x000000000053AB8C string=0x000000000053AB90 """
 *   insn=0x000000000053AB90 string=0x000000000053AB94 " "
 *   insn=0x000000000053ABA8 string=0x000000000053ABAC "?"
 *   insn=0x000000000053ABB0 string=0x000000000053ABB4 " "
 *   insn=0x000000000053ABBC string=0x000000000053ABC0 "o"
 *   insn=0x000000000053ABCC string=0x000000000053ABD0 "!(@"
 *   insn=0x000000000053ABD0 string=0x000000000053ABD4 " "
 *   insn=0x000000000053ABE8 string=0x000000000053ABEC "?"
 *   insn=0x000000000053ABEC string=0x000000000053ABF0 "c"
 *   insn=0x000000000053ABF4 string=0x000000000053ABF8 "!$@"
 *   insn=0x000000000053ABF8 string=0x000000000053ABFC " "
 *   insn=0x000000000053AC14 string=0x000000000053AC18 "!$@"
 *   insn=0x000000000053AC18 string=0x000000000053AC1C " "
 *   insn=0x000000000053AC3C string=0x000000000053AC40 " "
 *   insn=0x000000000053AC60 string=0x000000000053CA8C "E"
 *   insn=0x000000000053AC64 string=0x000000000053AC68 " \t"
 *   insn=0x000000000053AC7C string=0x000000000053AC80 "i"
 *   insn=0x000000000053AC8C string=0x000000000053AC90 "6"
 *   insn=0x000000000053ACA8 string=0x000000000053ACAC " "
 *   insn=0x000000000053ACB4 string=0x000000000053ACB8 " "
 *   insn=0x000000000053ACC0 string=0x000000000053ACC4 "!(@"
 *   insn=0x000000000053ACC4 string=0x000000000053ACC8 " "
 *   insn=0x000000000053ACD4 string=0x000000000053ACD8 " "
 *   insn=0x000000000053ACE0 string=0x000000000053ACE4 "?"
 *   insn=0x000000000053ACEC string=0x000000000053ACF0 "!$@"
 *   insn=0x000000000053ACF0 string=0x000000000053ACF4 " "
 *   insn=0x000000000053ACFC string=0x000000000053AD00 "A"
 *   insn=0x000000000053AD04 string=0x000000000053AD08 "}"
 *   insn=0x000000000053AD0C string=0x000000000053AD10 "!$@"
 *   insn=0x000000000053AD10 string=0x000000000053AD14 " "
 *   insn=0x000000000053AD2C string=0x000000000053AD30 "!$@"
 *   insn=0x000000000053AD30 string=0x000000000053AD34 " "
 *   insn=0x000000000053AD38 string=0x000000000053AD3C "!"
 *   insn=0x000000000053AD40 string=0x000000000053AD44 "!"
 *   insn=0x000000000053AD4C string=0x000000000053AD50 "!$@"
 *   insn=0x000000000053AD50 string=0x000000000053AD54 " "
 *   insn=0x000000000053AD64 string=0x000000000053AD68 "8"
 *   insn=0x000000000053AD90 string=0x000000000053AD94 " "
 *   insn=0x000000000053AD9C string=0x000000000053ADA0 "!(@"
 *   insn=0x000000000053ADA0 string=0x000000000053ADA4 " "
 *   insn=0x000000000053ADA4 string=0x000000000053ADA8 "%"
 *   insn=0x000000000053ADC4 string=0x000000000053ADC8 ""
 *   insn=0x000000000053ADCC string=0x000000000053ADD0 "0"
 *   insn=0x000000000053ADEC string=0x000000000053ADF0 "@"
 *   insn=0x000000000053AE00 string=0x000000000053AE04 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_53A47C(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        unsigned __int64 *a8)
{
  __int64 v8; // x20
  int v9; // w27
  int v10; // w28
  int v11; // w19
  unsigned int v12; // w19
  int v13; // w1
  unsigned __int64 v14; // x1
  int v15; // w22
  unsigned int v16; // w23
  unsigned __int64 v17; // x1
  int v18; // w25
  int v19; // w27
  size_t v20; // x24
  unsigned __int64 v21; // x0
  unsigned __int64 v22; // x25
  unsigned __int64 v23; // x21
  int v24; // w22
  signed int v25; // w0
  _QWORD *v26; // x0
  unsigned __int64 v27; // x1
  unsigned __int64 v28; // x2
  unsigned __int8 *v29; // x1
  int v30; // w1
  _QWORD *v31; // x0
  int v32; // w19
  int v33; // w1
  bool v34; // cf
  int v35; // w0
  unsigned __int8 *v36; // x1
  int v37; // w0
  int v38; // w19
  char *v39; // x28
  _QWORD *v40; // x20
  void *v42; // x0
  int v43; // w0
  int v44; // w0
  _QWORD *v45; // x0
  unsigned __int64 v46; // x1
  unsigned __int8 *v47; // x1
  int v48; // w1
  _QWORD *v49; // x0
  int v50; // w19
  int v51; // w1
  char *v52; // x0
  __int64 v53; // x1
  __int64 v54; // x19
  char *v55; // x0
  unsigned __int8 *v56; // x1
  int v57; // w0
  unsigned __int8 *v58; // x1
  int v59; // w0
  unsigned __int8 *v60; // x1
  int v61; // w0
  unsigned __int64 v62; // x0
  _BOOL4 v64; // [xsp+6Ch] [xbp+6Ch]
  int v66; // [xsp+80h] [xbp+80h]
  unsigned int v67; // [xsp+84h] [xbp+84h]
  unsigned __int64 v69; // [xsp+88h] [xbp+88h]
  _QWORD *v70; // [xsp+90h] [xbp+90h] BYREF
  __int64 v71; // [xsp+98h] [xbp+98h]
  _QWORD *v72; // [xsp+A0h] [xbp+A0h] BYREF
  __int64 v73; // [xsp+A8h] [xbp+A8h]
  char v74[8]; // [xsp+B8h] [xbp+B8h] BYREF
  char *v75; // [xsp+C8h] [xbp+C8h] BYREF

  v72 = a2;
  v73 = a3;
  v70 = a4;
  v71 = a5;
  v8 = sub_532724((__int64)v74, (_QWORD *)(a6 + 208));
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
  v11 = sub_532808((__int64)&v72);
  if ( (v11 == -1) == ((unsigned int)sub_532808((__int64)&v70) == -1) )
  {
    v12 = 0;
    v64 = 0;
  }
  else
  {
    v12 = (unsigned __int8)sub_532808((__int64)&v72);
    v64 = *(unsigned __int8 *)(v8 + 110) == v12;
    if ( *(unsigned __int8 *)(v8 + 110) != v12 && *(unsigned __int8 *)(v8 + 111) != v12 )
    {
      v13 = *(unsigned __int8 *)(v8 + 32);
      goto LABEL_15;
    }
    v13 = *(unsigned __int8 *)(v8 + 32);
    if ( *(_BYTE *)(v8 + 32) && *(unsigned __int8 *)(v8 + 73) == v12 )
    {
      v13 = 1;
      goto LABEL_15;
    }
    if ( *(unsigned __int8 *)(v8 + 72) == v12 )
    {
LABEL_15:
      v16 = 0;
      v67 = 0;
      while ( 1 )
      {
        if ( v13 && *(unsigned __int8 *)(v8 + 73) == v12 || *(unsigned __int8 *)(v8 + 72) == v12 )
        {
LABEL_32:
          v19 = 0;
          if ( v10 == 16 )
            goto LABEL_78;
          goto LABEL_33;
        }
        if ( *(unsigned __int8 *)(v8 + 114) != v12 )
          break;
        if ( (v10 == 10) < v67 )
          goto LABEL_21;
        ++v16;
        if ( v10 == 8 || (v67 = 1, !v9) )
        {
          v16 = 0;
          v67 = 1;
          v10 = 8;
        }
LABEL_26:
        if ( v72 )
        {
          v17 = v72[2];
          if ( v17 >= v72[3] )
            (*(void (__fastcall **)(_QWORD *))(*v72 + 80LL))(v72);
          else
            v72[2] = v17 + 1;
          LODWORD(v73) = -1;
        }
        v18 = sub_532808((__int64)&v72);
        if ( (v18 == -1) == ((unsigned int)sub_532808((__int64)&v70) == -1) )
        {
          v13 = *(unsigned __int8 *)(v8 + 32);
          v19 = 1;
          goto LABEL_77;
        }
        v12 = (unsigned __int8)sub_532808((__int64)&v72);
        v13 = *(unsigned __int8 *)(v8 + 32);
        if ( !v67 )
          goto LABEL_32;
      }
      if ( !v67 )
        goto LABEL_32;
LABEL_21:
      if ( *(unsigned __int8 *)(v8 + 112) != v12 && *(unsigned __int8 *)(v8 + 113) != v12 )
      {
        v19 = 0;
        v67 = 1;
        goto LABEL_77;
      }
      if ( v10 != 16 && v9 )
      {
        v19 = 0;
        v67 = 1;
        goto LABEL_33;
      }
      v16 = 0;
      v67 = 0;
      v10 = 16;
      goto LABEL_26;
    }
    if ( v72 )
    {
      v14 = v72[2];
      if ( v14 >= v72[3] )
        sub_52B4A0((__int64)v72);
      else
        v72[2] = v14 + 1;
      LODWORD(v73) = -1;
    }
    v15 = sub_532808((__int64)&v72);
    if ( (v15 == -1) != ((unsigned int)sub_532808((__int64)&v70) == -1) )
    {
      v12 = (unsigned __int8)sub_532808((__int64)&v72);
      v13 = *(unsigned __int8 *)(v8 + 32);
      goto LABEL_15;
    }
  }
  v13 = *(unsigned __int8 *)(v8 + 32);
  v19 = 1;
  v16 = 0;
  v67 = 0;
LABEL_77:
  if ( v10 == 16 )
  {
LABEL_78:
    v20 = 22;
    v75 = &byte_6FD2F8;
    if ( !v13 )
      goto LABEL_34;
  }
  else
  {
LABEL_33:
    v20 = v10;
    v75 = &byte_6FD2F8;
    if ( !v13 )
      goto LABEL_34;
  }
  sub_567088(&v75, 32);
LABEL_34:
  v66 = *(unsigned __int8 *)(v8 + 136);
  v21 = 0x8000000000000000LL;
  if ( !v64 )
    v21 = 0x7FFFFFFFFFFFFFFFLL;
  v69 = v21;
  v22 = v21 / v10;
  if ( *(_BYTE *)(v8 + 136) )
  {
    if ( v19 )
      goto LABEL_169;
    v23 = 0;
    v24 = 0;
LABEL_87:
    if ( !*(_BYTE *)(v8 + 32) || *(unsigned __int8 *)(v8 + 73) != v12 )
    {
LABEL_89:
      if ( *(unsigned __int8 *)(v8 + 72) == v12 )
        goto LABEL_141;
      v42 = memchr((const void *)(v8 + 114), v12, v20);
      if ( !v42 )
        goto LABEL_141;
      v43 = (_DWORD)v42 - (v8 + 114);
      if ( v43 >= 16 )
        v43 -= 6;
      if ( v22 < v23 )
      {
        v24 = 1;
      }
      else
      {
        ++v16;
        v34 = v69 - v43 >= v23 * v10;
        v23 = v43 + v23 * v10;
        v44 = !v34;
        v24 |= v44;
      }
      goto LABEL_98;
    }
    while ( 1 )
    {
      if ( !v16 )
      {
        v38 = 1;
        goto LABEL_68;
      }
      v52 = v75;
      v53 = *((_QWORD *)v75 - 3);
      v54 = v53 + 1;
      if ( (unsigned __int64)(v53 + 1) > *((_QWORD *)v75 - 2) || *((int *)v75 - 2) > 0 )
      {
        sub_567088(&v75, v53 + 1);
        v52 = v75;
        v53 = *((_QWORD *)v75 - 3);
      }
      v52[v53] = v16;
      v16 = 0;
      v55 = v75;
      if ( v75 - 24 == (char *)&qword_6FD2E0 )
      {
LABEL_98:
        v45 = v72;
        if ( !v72 )
          goto LABEL_115;
      }
      else
      {
        *((_DWORD *)v75 - 2) = 0;
        *((_QWORD *)v55 - 3) = v54;
        v55[v54] = 0;
        v45 = v72;
        if ( !v72 )
          goto LABEL_115;
      }
      v46 = v45[2];
      if ( v46 >= v45[3] )
      {
        (*(void (__fastcall **)(_QWORD *))(*v45 + 80LL))(v45);
        v45 = v72;
        LODWORD(v73) = -1;
        if ( !v72 )
          goto LABEL_115;
        v47 = (unsigned __int8 *)v72[2];
        if ( (unsigned __int64)v47 < v72[3] )
        {
LABEL_101:
          v48 = *v47;
LABEL_102:
          v49 = v70;
          v50 = 0;
          LODWORD(v73) = v48;
          if ( !v70 )
            goto LABEL_105;
          v51 = 0;
          if ( (_DWORD)v71 != -1 )
            goto LABEL_104;
          goto LABEL_117;
        }
      }
      else
      {
        v45[2] = v46 + 1;
        LODWORD(v73) = -1;
        v47 = (unsigned __int8 *)v45[2];
        if ( (unsigned __int64)v47 < v45[3] )
          goto LABEL_101;
      }
      v48 = (*(__int64 (__fastcall **)(_QWORD *))(*v45 + 72LL))(v45);
      if ( v48 != -1 )
        goto LABEL_102;
      v72 = 0;
LABEL_115:
      v49 = v70;
      if ( !v70 )
        goto LABEL_67;
      v51 = 0;
      v50 = v66;
      if ( (_DWORD)v71 != -1 )
        goto LABEL_104;
LABEL_117:
      v56 = (unsigned __int8 *)v49[2];
      if ( (unsigned __int64)v56 < v49[3] )
      {
        v57 = *v56;
LABEL_119:
        LODWORD(v71) = v57;
        v51 = 0;
        goto LABEL_104;
      }
      v57 = (*(__int64 (__fastcall **)(_QWORD *))(*v49 + 72LL))(v49);
      if ( v57 != -1 )
        goto LABEL_119;
      v70 = 0;
      v51 = v66;
LABEL_104:
      if ( v51 == v50 )
        goto LABEL_67;
LABEL_105:
      if ( !v72 )
        goto LABEL_157;
      if ( (_DWORD)v73 == -1 )
      {
        v60 = (unsigned __int8 *)v72[2];
        if ( (unsigned __int64)v60 < v72[3] )
        {
          v61 = *v60;
          goto LABEL_132;
        }
        v61 = (*(__int64 (__fastcall **)(_QWORD *))(*v72 + 72LL))(v72);
        if ( v61 == -1 )
        {
          v72 = 0;
LABEL_157:
          v12 = 255;
        }
        else
        {
LABEL_132:
          LODWORD(v73) = v61;
          v12 = (unsigned __int8)v61;
        }
        goto LABEL_87;
      }
      v12 = (unsigned __int8)v73;
      if ( !*(_BYTE *)(v8 + 32) || *(unsigned __int8 *)(v8 + 73) != (unsigned __int8)v73 )
        goto LABEL_89;
    }
  }
  if ( v19 )
  {
LABEL_169:
    v23 = 0;
    v24 = 0;
    v38 = 0;
    goto LABEL_68;
  }
  v23 = 0;
  v24 = 0;
  while ( v20 > 0xA )
  {
    while ( 1 )
    {
      v25 = v12 - 48;
      if ( (unsigned __int8)(v12 - 48) <= 9u )
        goto LABEL_43;
      if ( (unsigned __int8)(v12 - 97) <= 5u )
      {
        v25 = v12 - 87;
        goto LABEL_43;
      }
      if ( (unsigned __int8)(v12 - 65) > 5u )
        goto LABEL_141;
      v25 = v12 - 55;
      if ( v22 < v23 )
        goto LABEL_44;
LABEL_58:
      ++v16;
      v34 = v69 - v25 >= v23 * v10;
      v23 = v25 + v23 * v10;
      v35 = !v34;
      v24 |= v35;
      v26 = v72;
      if ( v72 )
        goto LABEL_45;
LABEL_62:
      v31 = v70;
      if ( !v70 )
        goto LABEL_67;
      v32 = 1;
      v33 = 0;
      if ( (_DWORD)v71 != -1 )
        goto LABEL_50;
LABEL_64:
      v36 = (unsigned __int8 *)v31[2];
      if ( (unsigned __int64)v36 >= v31[3] )
      {
        v37 = (*(__int64 (__fastcall **)(_QWORD *))(*v31 + 72LL))(v31);
        if ( v37 == -1 )
        {
          v70 = 0;
          v33 = 1;
          goto LABEL_50;
        }
      }
      else
      {
        v37 = *v36;
      }
      LODWORD(v71) = v37;
      if ( !v32 )
        goto LABEL_67;
LABEL_51:
      if ( !v72 )
        goto LABEL_140;
      if ( (_DWORD)v73 == -1 )
        break;
      v12 = (unsigned __int8)v73;
      if ( v20 <= 0xA )
        goto LABEL_40;
    }
    v58 = (unsigned __int8 *)v72[2];
    if ( (unsigned __int64)v58 < v72[3] )
    {
      v59 = *v58;
LABEL_129:
      LODWORD(v73) = v59;
      v12 = (unsigned __int8)v59;
      continue;
    }
    v59 = (*(__int64 (__fastcall **)(_QWORD *))(*v72 + 72LL))(v72);
    if ( v59 != -1 )
      goto LABEL_129;
    v72 = 0;
LABEL_140:
    v12 = 255;
  }
LABEL_40:
  if ( v12 <= 0x2F || v12 >= (unsigned __int8)(v20 + 48) )
  {
LABEL_141:
    v39 = v75;
    v38 = 0;
    if ( !*((_QWORD *)v75 - 3) )
      goto LABEL_69;
LABEL_142:
    sub_567890(&v75, v16);
    if ( !(unsigned __int8)sub_53CA8C(*(_QWORD *)(v8 + 16), *(_QWORD *)(v8 + 24), &v75) )
      *a7 = 4;
    v39 = v75;
    if ( (v16 == 0) > v67 && !*((_QWORD *)v75 - 3) )
      goto LABEL_70;
    goto LABEL_146;
  }
  v25 = v12 - 48;
LABEL_43:
  if ( v22 >= v23 )
    goto LABEL_58;
LABEL_44:
  v26 = v72;
  v24 = 1;
  if ( !v72 )
    goto LABEL_62;
LABEL_45:
  v27 = v26[2];
  if ( v27 >= v26[3] )
  {
    (*(void (__fastcall **)(_QWORD *))(*v26 + 80LL))(v26);
    v26 = v72;
    LODWORD(v73) = -1;
    if ( !v72 )
      goto LABEL_62;
    v29 = (unsigned __int8 *)v72[2];
    if ( (unsigned __int64)v29 < v72[3] )
      goto LABEL_47;
LABEL_136:
    v30 = (*(__int64 (__fastcall **)(_QWORD *))(*v26 + 72LL))(v26);
    if ( v30 == -1 )
    {
      v72 = 0;
      goto LABEL_62;
    }
    goto LABEL_48;
  }
  v26[2] = v27 + 1;
  v28 = v26[3];
  v29 = (unsigned __int8 *)v26[2];
  LODWORD(v73) = -1;
  if ( (unsigned __int64)v29 >= v28 )
    goto LABEL_136;
LABEL_47:
  v30 = *v29;
LABEL_48:
  v31 = v70;
  v32 = 0;
  LODWORD(v73) = v30;
  if ( !v70 )
    goto LABEL_51;
  v33 = 0;
  if ( (_DWORD)v71 == -1 )
    goto LABEL_64;
LABEL_50:
  if ( v32 != v33 )
    goto LABEL_51;
LABEL_67:
  v38 = 0;
  v19 = 1;
LABEL_68:
  v39 = v75;
  if ( *((_QWORD *)v75 - 3) )
    goto LABEL_142;
LABEL_69:
  if ( (v16 == 0) > v67 )
  {
LABEL_70:
    *a8 = 0;
    *a7 = 4;
    goto LABEL_71;
  }
LABEL_146:
  if ( v38 )
    goto LABEL_70;
  if ( v24 )
  {
    v62 = 0x7FFFFFFFFFFFFFFFLL;
    if ( v64 )
      v62 = 0x8000000000000000LL;
    *a8 = v62;
    *a7 = 4;
  }
  else
  {
    if ( v64 )
      v23 = -(__int64)v23;
    *a8 = v23;
  }
LABEL_71:
  if ( v19 )
    *a7 |= 2u;
  v40 = v72;
  if ( v39 - 24 != (char *)&qword_6FD2E0 )
    sub_52B45C((unsigned int *)v39 - 6);
  return v40;
}

