/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054D924
 * Mangled: sub_54D924
 * Demangled: sub_54D924
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x0000000000202DD0  .wcslen
 *   0x0000000000203AC0  .wmemcpy
 *   0x0000000000203F10  sub_203F10
 *   0x0000000000565330  sub_565330
 *   0x000000000056C5B8  sub_56C5B8
 *   0x000000000056EC5C  operator delete(void *)
 *   0x0000000000570E4C  sub_570E4C
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 28
 *   insn=0x000000000054D924 string=0x000000000054D928 "?"
 *   insn=0x000000000054D950 string=0x000000000054D964 "S"
 *   insn=0x000000000054D958 string=0x000000000054D960 "t^"
 *   insn=0x000000000054D958 string=0x000000000059E2E8 "basic_string::_S_construct null not valid"
 *   insn=0x000000000054D968 string=0x000000000054D96C "x"
 *   insn=0x000000000054D98C string=0x000000000054D990 "@"
 *   insn=0x000000000054D9A0 string=0x000000000054D9A4 "G"
 *   insn=0x000000000054D9CC string=0x000000000054D9D4 "W^"
 *   insn=0x000000000054D9E8 string=0x000000000054D9EC "y"
 *   insn=0x000000000054D9F8 string=0x000000000054D9FC "?"
 *   insn=0x000000000054DA18 string=0x000000000054DA1C "A"
 *   insn=0x000000000054DA50 string=0x000000000054DA54 "s\n"
 *   insn=0x000000000054DA6C string=0x000000000054DA70 "a"
 *   insn=0x000000000054DA88 string=0x000000000054DA8C "!"
 *   insn=0x000000000054DABC string=0x000000000054DAC0 "s"
 *   insn=0x000000000054DAE8 string=0x000000000054DAEC " "
 *   insn=0x000000000054DAF0 string=0x000000000054DAF4 "!<G"
 *   insn=0x000000000054DAF4 string=0x000000000054DAF8 "a"
 *   insn=0x000000000054DB00 string=0x000000000054DB04 """
 *   insn=0x000000000054DB0C string=0x000000000054DB10 "?"
 *   insn=0x000000000054DB18 string=0x000000000054DB1C "P"
 *   insn=0x000000000054DB5C string=0x000000000054DB60 "!<G"
 *   insn=0x000000000054DB6C string=0x000000000054DB70 """
 *   insn=0x000000000054DB78 string=0x000000000054DB7C "?"
 *   insn=0x000000000054DB84 string=0x000000000054DB88 "5"
 *   insn=0x000000000054DBDC string=0x000000000054DBE0 "9"
 *   insn=0x000000000054DBE4 string=0x000000000054DBE8 """
 *   insn=0x000000000054DBF4 string=0x000000000054DBF8 """
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_54D924(int a1, const wchar_t *a2, const wchar_t *a3, const wchar_t *a4, const wchar_t *a5)
{
  signed __int64 v8; // x19
  size_t v9; // x24
  __int64 v10; // x0
  __int64 v11; // x20
  wchar_t *v12; // x23
  signed __int64 v13; // x19
  size_t v14; // x25
  __int64 v15; // x0
  __int64 v16; // x20
  wchar_t *v17; // x24
  __int64 v18; // x21
  wchar_t *v19; // x20
  wchar_t *v20; // x19
  wchar_t *v21; // x21
  wchar_t *v22; // x25
  unsigned int v23; // w0
  wchar_t *v24; // x19
  wchar_t *v25; // x20
  unsigned int v26; // w21
  wchar_t *v27; // x0
  wchar_t *v28; // x0
  unsigned int *v30; // x24
  int v31; // w1
  unsigned int *v32; // x23
  int v33; // w1
  const wchar_t *v34; // [xsp+58h] [xbp+58h]

  if ( a2 == a3 )
  {
    v12 = (wchar_t *)&unk_6FD318;
  }
  else
  {
    if ( !a2 && a3 )
      sub_565330("basic_string::_S_construct null not valid");
    v8 = (char *)a3 - (char *)a2;
    v9 = a3 - a2;
    v34 = a5;
    v10 = sub_56C5B8(v9, 0);
    v11 = v10;
    v12 = (wchar_t *)(v10 + 24);
    a5 = v34;
    if ( v9 == 1 )
    {
      *(_DWORD *)(v10 + 24) = *a2;
    }
    else
    {
      wmemcpy((wchar_t *)(v10 + 24), a2, v9);
      a5 = v34;
    }
    if ( (__int64 *)v11 != &qword_6FD300 )
    {
      *(_DWORD *)(v11 + 16) = 0;
      *(_QWORD *)v11 = v9;
      *(_DWORD *)(v11 + v8 + 24) = 0;
    }
  }
  if ( a4 == a5 )
  {
    v17 = (wchar_t *)&unk_6FD318;
    v18 = qword_6FD300;
  }
  else
  {
    if ( !a4 && a5 )
      sub_565330("basic_string::_S_construct null not valid");
    v13 = (char *)a5 - (char *)a4;
    v14 = a5 - a4;
    v15 = sub_56C5B8(v14, 0);
    v16 = v15;
    v17 = (wchar_t *)(v15 + 24);
    if ( v14 == 1 )
      *(_DWORD *)(v15 + 24) = *a4;
    else
      wmemcpy((wchar_t *)(v15 + 24), a4, v14);
    if ( (__int64 *)v16 == &qword_6FD300 )
    {
      v18 = *(_QWORD *)v16;
    }
    else
    {
      *(_DWORD *)(v16 + 16) = 0;
      *(_QWORD *)v16 = v14;
      v18 = v14;
      *(_DWORD *)(v16 + v13 + 24) = 0;
    }
  }
  v19 = v17;
  v20 = v12;
  v21 = &v17[v18];
  v22 = &v12[*((_QWORD *)v12 - 3)];
  v23 = sub_570E4C(a1, v12, v17);
  if ( v23 )
  {
LABEL_26:
    v26 = v23;
    v27 = v17 - 6;
    if ( v17 - 6 == (wchar_t *)&qword_6FD300 )
      goto LABEL_22;
    goto LABEL_27;
  }
  while ( 1 )
  {
    v24 = &v20[wcslen(v20)];
    v25 = &v19[wcslen(v19)];
    if ( v25 == v21 )
    {
      v26 = v24 != v22;
      goto LABEL_21;
    }
    if ( v24 == v22 )
      break;
    v20 = v24 + 1;
    v19 = v25 + 1;
    v23 = sub_570E4C(a1, v20, v19);
    if ( v23 )
      goto LABEL_26;
  }
  v26 = -1;
LABEL_21:
  v27 = v17 - 6;
  if ( v17 - 6 != (wchar_t *)&qword_6FD300 )
  {
LABEL_27:
    if ( &pthread_create )
    {
      v30 = (unsigned int *)(v17 - 2);
      do
        v31 = __ldaxr(v30);
      while ( __stlxr(v31 - 1, v30) );
    }
    else
    {
      v31 = *(v17 - 2);
      *(v17 - 2) = v31 - 1;
    }
    if ( v31 <= 0 )
      operator delete(v27);
  }
LABEL_22:
  v28 = v12 - 6;
  if ( v12 - 6 != (wchar_t *)&qword_6FD300 )
  {
    if ( &pthread_create )
    {
      v32 = (unsigned int *)(v12 - 2);
      do
        v33 = __ldaxr(v32);
      while ( __stlxr(v33 - 1, v32) );
    }
    else
    {
      v33 = *(v12 - 2);
      *(v12 - 2) = v33 - 1;
    }
    if ( v33 <= 0 )
      operator delete(v28);
  }
  return v26;
}

