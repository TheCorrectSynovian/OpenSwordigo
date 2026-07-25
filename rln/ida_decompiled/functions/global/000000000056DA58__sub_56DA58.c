/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056DA58
 * Mangled: sub_56DA58
 * Demangled: sub_56DA58
 *
 * Callers: 11
 *   0x000000000056DA58  sub_56DA58
 *   0x000000000056DD68  sub_56DD68
 *   0x000000000056DDB4  sub_56DDB4
 *   0x000000000056DDF8  sub_56DDF8
 *   0x000000000056DE10  sub_56DE10
 *   0x000000000056DE30  sub_56DE30
 *   0x000000000056DE88  sub_56DE88
 *   0x000000000056DEA8  sub_56DEA8
 *   0x000000000056DEC8  sub_56DEC8
 *   0x000000000056DEE4  sub_56DEE4
 *   0x000000000056DF04  sub_56DF04
 *
 * Callees: 10
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000203AC0  .wmemcpy
 *   0x0000000000565330  sub_565330
 *   0x000000000056554C  sub_56554C
 *   0x00000000005656B4  sub_5656B4
 *   0x000000000056B1C0  sub_56B1C0
 *   0x000000000056C5B8  sub_56C5B8
 *   0x000000000056C650  sub_56C650
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 61
 *   insn=0x000000000056DA74 string=0x000000000056DA78 "#"
 *   insn=0x000000000056DA90 string=0x000000000056DA94 "x"
 *   insn=0x000000000056DAAC string=0x000000000056DAB0 "("
 *   insn=0x000000000056DAB8 string=0x000000000056DABC "#"
 *   insn=0x000000000056DAC4 string=0x000000000056DB00 " "
 *   insn=0x000000000056DAD8 string=0x000000000056DADC "4"
 *   insn=0x000000000056DB10 string=0x000000000056DB14 "`"
 *   insn=0x000000000056DB14 string=0x000000000056DB18 """
 *   insn=0x000000000056DB1C string=0x000000000056DB20 "i"
 *   insn=0x000000000056DB20 string=0x000000000056DBAC "s"
 *   insn=0x000000000056DB24 string=0x000000000056DB28 """
 *   insn=0x000000000056DB30 string=0x000000000056DB34 "a"
 *   insn=0x000000000056DB38 string=0x000000000056DB3C "3"
 *   insn=0x000000000056DB58 string=0x000000000056DB5C "@"
 *   insn=0x000000000056DB5C string=0x000000000056DB60 "A"
 *   insn=0x000000000056DB64 string=0x000000000056DB68 "@xs"
 *   insn=0x000000000056DB68 string=0x000000000056DB6C "@x5"
 *   insn=0x000000000056DB90 string=0x000000000056DB94 "`"
 *   insn=0x000000000056DB98 string=0x000000000056DB9C "s"
 *   insn=0x000000000056DB98 string=0x000000000056DC68 "<"
 *   insn=0x000000000056DBA0 string=0x000000000059E2E8 "basic_string::_S_construct null not valid"
 *   insn=0x000000000056DBAC string=0x000000000056DBB0 "s"
 *   insn=0x000000000056DBE4 string=0x000000000056DBE8 " "
 *   insn=0x000000000056DBEC string=0x000000000056DCEC "`"
 *   insn=0x000000000056DC04 string=0x000000000056DC08 "Zc"
 *   insn=0x000000000056DC1C string=0x000000000056DC20 "t"
 *   insn=0x000000000056DC20 string=0x000000000056DC24 "Yc"
 *   insn=0x000000000056DC24 string=0x000000000056DC28 "s"
 *   insn=0x000000000056DC28 string=0x000000000056DC2C "?"
 *   insn=0x000000000056DC38 string=0x000000000056DC3C "@"
 *   insn=0x000000000056DC3C string=0x000000000056DC40 "Z#"
 *   insn=0x000000000056DC3C string=0x000000000056DD04 "@"
 *   insn=0x000000000056DC40 string=0x000000000056DC44 "@"
 *   insn=0x000000000056DC48 string=0x000000000056DC4C "A"
 *   insn=0x000000000056DC54 string=0x000000000056DC58 "L"
 *   insn=0x000000000056DC60 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000056DC74 string=0x000000000056DC78 "P"
 *   insn=0x000000000056DC88 string=0x000000000056DC8C "`"
 *   insn=0x000000000056DC8C string=0x000000000056DC90 "`"
 *   insn=0x000000000056DC94 string=0x000000000056DC98 "`"
 *   insn=0x000000000056DC9C string=0x000000000056DCA0 "`"
 *   insn=0x000000000056DCA0 string=0x000000000056DCA4 "y"
 *   insn=0x000000000056DCA8 string=0x000000000056DCAC "|"
 *   insn=0x000000000056DCAC string=0x000000000056DCB0 "?"
 *   insn=0x000000000056DCD0 string=0x000000000056DCD4 " "
 *   insn=0x000000000056DCD8 string=0x000000000056DCF8 "@"
 *   insn=0x000000000056DCE0 string=0x000000000056DCE4 "wW"
 *   insn=0x000000000056DCEC string=0x000000000056DCF0 " x5"
 *   insn=0x000000000056DCF0 string=0x000000000056DCF4 "{"
 *   insn=0x000000000056DCF8 string=0x000000000056DCFC " x5"
 *   insn=0x000000000056DD08 string=0x000000000056DD0C "A"
 *   insn=0x000000000056DD14 string=0x000000000059FAA8 "basic_string::replace"
 *   insn=0x000000000056DD20 string=0x000000000059E318 "%s: __pos (which is %zu) > this->size() (which is %zu)"
 *   insn=0x000000000056DD28 string=0x000000000056DD2C "!"
 *   insn=0x000000000056DD30 string=0x000000000056DD34 "`"
 *   insn=0x000000000056DD38 string=0x000000000056DD3C "Zc"
 *   insn=0x000000000056DD3C string=0x000000000056DD40 "_"
 *   insn=0x000000000056DD44 string=0x000000000056DD48 "`"
 *   insn=0x000000000056DD58 string=0x000000000056DD5C "c"
 *   insn=0x000000000056DD5C string=0x000000000056DD60 "d"
 *   insn=0x000000000056DD60 string=0x000000000056DD64 "="
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

const wchar_t **__fastcall sub_56DA58(
        const wchar_t **a1,
        size_t a2,
        unsigned __int64 a3,
        const wchar_t *a4,
        unsigned __int64 a5)
{
  const wchar_t *v6; // x1
  size_t v9; // x3
  __int64 v11; // x24
  __int64 v13; // x25
  __int64 v14; // x23
  unsigned __int64 v15; // x0
  __int64 v16; // x19
  const wchar_t *v17; // x26
  wchar_t *v18; // x25
  unsigned int *v19; // x26
  int v20; // w0
  __int64 v21; // x0
  __int64 v22; // x27

  v6 = *a1;
  v9 = *((_QWORD *)*a1 - 3);
  if ( a2 > v9 )
    sub_5656B4("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::replace", a2, v9);
  v11 = v9 - a2;
  if ( v9 - a2 > a3 )
    v11 = a3;
  if ( a5 > 0xFFFFFFFFFFFFFFELL - v9 + v11 )
    sub_56554C("basic_string::replace");
  if ( a4 < v6 || a4 > &v6[v9] || *(v6 - 2) > 0 )
  {
    sub_56C650(a1, a2, v11, a5);
    if ( a5 )
    {
      if ( a5 == 1 )
        (*a1)[a2] = *a4;
      else
        wmemcpy((wchar_t *)&(*a1)[a2], a4, a5);
    }
    return a1;
  }
  v13 = 4 * a5;
  v14 = a2;
  v15 = (unsigned __int64)&a4[a5];
  if ( v15 <= (unsigned __int64)&v6[a2] )
  {
    v16 = a4 - v6;
    goto LABEL_13;
  }
  if ( a4 < &v6[v11 + a2] )
  {
    if ( a4 == (const wchar_t *)v15 )
    {
      v17 = (const wchar_t *)&unk_6FD318;
    }
    else
    {
      if ( v15 && !a4 )
        sub_565330("basic_string::_S_construct null not valid");
      v21 = sub_56C5B8(v13 >> 2, 0);
      v22 = v21;
      v17 = (const wchar_t *)(v21 + 24);
      if ( v13 >> 2 == 1 )
        *(_DWORD *)(v21 + 24) = *a4;
      else
        wmemcpy((wchar_t *)(v21 + 24), a4, v13 >> 2);
      if ( (__int64 *)v22 != &qword_6FD300 )
      {
        *(_DWORD *)(v22 + 16) = 0;
        *(_QWORD *)v22 = v13 >> 2;
        *(_DWORD *)(v22 + v13 + 24) = 0;
      }
    }
    sub_56C650(a1, a2, v11, a5);
    if ( a5 )
    {
      if ( a5 == 1 )
        (*a1)[a2] = *v17;
      else
        wmemcpy((wchar_t *)&(*a1)[v14], v17, a5);
    }
    v18 = (wchar_t *)(v17 - 6);
    if ( v17 - 6 != (const wchar_t *)&qword_6FD300 )
    {
      if ( &pthread_create )
      {
        v19 = (unsigned int *)(v17 - 2);
        do
          v20 = __ldaxr(v19);
        while ( __stlxr(v20 - 1, v19) );
      }
      else
      {
        v20 = *(v17 - 2);
        *((_DWORD *)v17 - 2) = v20 - 1;
      }
      if ( v20 <= 0 )
        operator delete(v18);
    }
    return a1;
  }
  v16 = a5 + a4 - v6 - v11;
LABEL_13:
  sub_56C650(a1, a2, v11, a5);
  if ( a5 == 1 )
    (*a1)[a2] = (*a1)[v16];
  else
    wmemcpy((wchar_t *)&(*a1)[v14], &(*a1)[v16], a5);
  return a1;
}

