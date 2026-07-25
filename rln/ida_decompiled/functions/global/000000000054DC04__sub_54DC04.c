/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054DC04
 * Mangled: sub_54DC04
 * Demangled: sub_54DC04
 *
 * Callers: 0
 *
 * Callees: 16
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x0000000000202DD0  .wcslen
 *   0x0000000000203AC0  .wmemcpy
 *   0x0000000000203F10  sub_203F10
 *   0x0000000000565330  sub_565330
 *   0x000000000056C5B8  sub_56C5B8
 *   0x000000000056E318  sub_56E318
 *   0x000000000056E774  sub_56E774
 *   0x000000000056EC5C  operator delete(void *)
 *   0x0000000000570E74  sub_570E74
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 47
 *   insn=0x000000000054DC04 string=0x000000000054DC08 "?"
 *   insn=0x000000000054DC20 string=0x000000000054DC24 "A"
 *   insn=0x000000000054DC30 string=0x000000000054DC34 " `"
 *   insn=0x000000000054DC3C string=0x000000000054DC40 " "
 *   insn=0x000000000054DC40 string=0x000000000054DDA4 "9"
 *   insn=0x000000000054DC44 string=0x000000000054DC58 "T"
 *   insn=0x000000000054DC4C string=0x000000000059E2E8 "basic_string::_S_construct null not valid"
 *   insn=0x000000000054DC68 string=0x000000000054DC6C "Sz"
 *   insn=0x000000000054DC8C string=0x000000000054DC90 "@"
 *   insn=0x000000000054DC94 string=0x000000000054DC98 "!"
 *   insn=0x000000000054DCB0 string=0x000000000054DCB4 "\t"
 *   insn=0x000000000054DCB4 string=0x000000000054DCB8 "."
 *   insn=0x000000000054DCB8 string=0x00000000001F8570 "0'"
 *   insn=0x000000000054DCC0 string=0x000000000054DCC4 ""
 *   insn=0x000000000054DCD4 string=0x000000000054DCD8 "g"
 *   insn=0x000000000054DCE8 string=0x000000000054DCEC "T"
 *   insn=0x000000000054DCF0 string=0x00000000001F4F60 "P'"
 *   insn=0x000000000054DD14 string=0x000000000054DD18 "W"
 *   insn=0x000000000054DD2C string=0x000000000054DD30 "("
 *   insn=0x000000000054DD30 string=0x000000000054DD34 "`\n"
 *   insn=0x000000000054DD38 string=0x000000000054DD3C "`"
 *   insn=0x000000000054DD44 string=0x000000000054DD48 ""`"
 *   insn=0x000000000054DD48 string=0x000000000054DD4C " "
 *   insn=0x000000000054DD4C string=0x000000000054DD50 "#"
 *   insn=0x000000000054DD5C string=0x000000000054DD60 "#"
 *   insn=0x000000000054DD68 string=0x000000000054DD84 "?x "
 *   insn=0x000000000054DD70 string=0x000000000054DD74 "i"
 *   insn=0x000000000054DD78 string=0x000000000054DD7C ""`"
 *   insn=0x000000000054DD7C string=0x000000000054DD80 " "
 *   insn=0x000000000054DD84 string=0x000000000054DD88 "@"
 *   insn=0x000000000054DD88 string=0x000000000054DD8C "_"
 *   insn=0x000000000054DD90 string=0x000000000054DD94 "?"
 *   insn=0x000000000054DD94 string=0x000000000054DD98 "W"
 *   insn=0x000000000054DD98 string=0x000000000054DD9C "?x7"
 *   insn=0x000000000054DDCC string=0x000000000054DDD0 "d"
 *   insn=0x000000000054DDD0 string=0x000000000054DDD4 "Z"
 *   insn=0x000000000054DDD8 string=0x000000000054DDDC "!"
 *   insn=0x000000000054DE10 string=0x000000000054DE14 "@"
 *   insn=0x000000000054DE58 string=0x000000000054DE5C "Z"
 *   insn=0x000000000054DE64 string=0x000000000054DE68 "`"
 *   insn=0x000000000054DE6C string=0x000000000054DE70 "("
 *   insn=0x000000000054DE8C string=0x000000000054DE90 "A"
 *   insn=0x000000000054DEA0 string=0x000000000054DEA4 ""
 *   insn=0x000000000054DEAC string=0x000000000054DEB0 "0"
 *   insn=0x000000000054DEAC string=0x00000000001F45E0 "P'"
 *   insn=0x000000000054DEB8 string=0x000000000054DEBC ")"
 *   insn=0x000000000054DEC8 string=0x00000000001FD590 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__usercall sub_54DC04@<X0>(int a1@<W0>, const wchar_t *a2@<X1>, const wchar_t *a3@<X2>, __int64 *a4@<X8>)
{
  __int64 v7; // x20
  size_t v8; // x19
  __int64 v9; // x0
  __int64 v10; // x21
  wchar_t *v11; // x28
  __int64 v12; // x25
  size_t v13; // x20
  char *v14; // x25
  unsigned __int64 v15; // x0
  wchar_t *v16; // x21
  wchar_t *v17; // x19
  unsigned __int64 v18; // x2
  unsigned __int64 v19; // x0
  wchar_t *v20; // x0
  __int64 v21; // x1
  __int64 *v22; // x2
  __int64 v23; // x0
  unsigned __int64 v24; // x23
  wchar_t *v25; // x19
  unsigned int *v27; // x28
  unsigned int v28; // w26
  int v29; // w0

  *a4 = (__int64)&unk_6FD318;
  if ( a2 == a3 )
  {
    v11 = (wchar_t *)&unk_6FD318;
    v13 = 0;
    v14 = (char *)&unk_6FD318 + 4 * qword_6FD300;
LABEL_22:
    v15 = 4 * v13;
    goto LABEL_10;
  }
  if ( !a2 && a3 )
    sub_565330("basic_string::_S_construct null not valid");
  v7 = (char *)a3 - (char *)a2;
  v8 = a3 - a2;
  v9 = sub_56C5B8(v8, 0);
  v10 = v9;
  v11 = (wchar_t *)(v9 + 24);
  if ( v8 == 1 )
    *(_DWORD *)(v9 + 24) = *a2;
  else
    wmemcpy((wchar_t *)(v9 + 24), a2, v8);
  if ( (__int64 *)v10 == &qword_6FD300 )
  {
    v12 = *(_QWORD *)v10;
  }
  else
  {
    *(_DWORD *)(v10 + 16) = 0;
    *(_QWORD *)v10 = v8;
    v12 = v8;
    *(_DWORD *)(v10 + v7 + 24) = 0;
  }
  v13 = v7 >> 1;
  v14 = (char *)&v11[v12];
  v15 = -1;
  if ( v13 <= 0x1FC0000000000000LL )
    goto LABEL_22;
LABEL_10:
  v16 = (wchar_t *)operator new[](v15);
  v17 = v11;
  while ( 1 )
  {
    v18 = sub_570E74(a1, v16, v17, v13);
    if ( v13 <= v18 )
    {
      v13 = v18 + 1;
      operator delete[](v16);
      v19 = 4 * v13;
      if ( v13 > 0x1FC0000000000000LL )
        v19 = -1;
      v16 = (wchar_t *)operator new[](v19);
      v18 = sub_570E74(a1, v16, v17, v13);
    }
    sub_56E774(a4, v16, v18);
    v20 = &v17[wcslen(v17)];
    if ( v20 == (wchar_t *)v14 )
      break;
    v21 = *a4;
    v17 = v20 + 1;
    v22 = (__int64 *)(*a4 - 24);
    v23 = *v22;
    v24 = *v22 + 1;
    if ( v24 > *(_QWORD *)(*a4 - 16) || *(int *)(v21 - 8) > 0 )
    {
      sub_56E318(a4, v24);
      v21 = *a4;
      v22 = (__int64 *)(*a4 - 24);
      v23 = *v22;
    }
    *(_DWORD *)(v21 + 4 * v23) = 0;
    if ( v22 != &qword_6FD300 )
    {
      *(_DWORD *)(v21 - 8) = 0;
      *v22 = v24;
      *(_DWORD *)(v21 + 4 * v24) = 0;
    }
  }
  v25 = v11 - 6;
  operator delete[](v16);
  if ( v11 - 6 != (wchar_t *)&qword_6FD300 )
  {
    if ( &pthread_create )
    {
      v27 = (unsigned int *)(v11 - 2);
      do
        v28 = __ldaxr(v27);
      while ( __stlxr(v28 - 1, v27) );
      v29 = v28;
    }
    else
    {
      v29 = *(v11 - 2);
      *(v11 - 2) = v29 - 1;
    }
    if ( v29 <= 0 )
      operator delete(v25);
  }
  return a4;
}

