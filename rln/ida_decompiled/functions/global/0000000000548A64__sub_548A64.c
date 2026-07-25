/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000548A64
 * Mangled: sub_548A64
 * Demangled: sub_548A64
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x0000000000203E90  start
 *   0x0000000000544B60  sub_544B60
 *   0x0000000000565330  sub_565330
 *   0x000000000056EC5C  operator delete(void *)
 *   0x000000000056EDF4  sub_56EDF4
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 33
 *   insn=0x0000000000548A7C string=0x0000000000548A80 "b"
 *   insn=0x0000000000548A80 string=0x0000000000548A84 "B`"
 *   insn=0x0000000000548A98 string=0x0000000000548A9C "?"
 *   insn=0x0000000000548AA0 string=0x0000000000548AA4 "?"
 *   insn=0x0000000000548AA8 string=0x0000000000548AAC "`"
 *   insn=0x0000000000548AB0 string=0x000000000059E2E8 "basic_string::_S_construct null not valid"
 *   insn=0x0000000000548ABC string=0x0000000000548AC0 "`"
 *   insn=0x0000000000548AD8 string=0x0000000000548ADC "!"
 *   insn=0x0000000000548AF4 string=0x0000000000548AF8 "s"
 *   insn=0x0000000000548AF8 string=0x0000000000548AFC "@`"
 *   insn=0x0000000000548B3C string=0x0000000000548B40 "s"
 *   insn=0x0000000000548B40 string=0x0000000000548B44 "@`"
 *   insn=0x0000000000548B50 string=0x0000000000548B54 "!<G"
 *   insn=0x0000000000548B54 string=0x0000000000548B58 "A"
 *   insn=0x0000000000548B58 string=0x0000000000548B5C "B "
 *   insn=0x0000000000548B58 string=0x0000000000548BE0 "A"
 *   insn=0x0000000000548B5C string=0x0000000000548B60 "A"
 *   insn=0x0000000000548B60 string=0x0000000000548B64 "#"
 *   insn=0x0000000000548B64 string=0x0000000000548B68 "C"
 *   insn=0x0000000000548B6C string=0x0000000000548B70 "?"
 *   insn=0x0000000000548B78 string=0x0000000000548B7C "8"
 *   insn=0x0000000000548B84 string=0x0000000000548B88 "a`"
 *   insn=0x0000000000548B98 string=0x0000000000548B9C "s"
 *   insn=0x0000000000548BA4 string=0x0000000000548BA8 "`"
 *   insn=0x0000000000548BB4 string=0x0000000000548BB8 "C"
 *   insn=0x0000000000548BBC string=0x0000000000548BC0 "!<G"
 *   insn=0x0000000000548BC4 string=0x0000000000548BC8 "B "
 *   insn=0x0000000000548BC8 string=0x0000000000548BCC "A"
 *   insn=0x0000000000548BCC string=0x0000000000548BD0 "#"
 *   insn=0x0000000000548BD0 string=0x0000000000548BD4 "C"
 *   insn=0x0000000000548BE0 string=0x0000000000548BE4 "#"
 *   insn=0x0000000000548BE4 string=0x0000000000548BE8 "C"
 *   insn=0x0000000000548BF4 string=0x0000000000548BF8 "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__usercall sub_548A64@<X0>(_QWORD *a1@<X0>, _QWORD *a2@<X8>)
{
  char *v3; // x2
  unsigned __int64 v4; // x1
  unsigned __int64 v5; // x4
  const wchar_t *v6; // x0
  char *v7; // x2
  char *v8; // x0
  unsigned int *v10; // x2
  int v11; // w1
  unsigned int *v12; // x2
  char *v13; // [xsp+48h] [xbp+48h] BYREF

  v3 = (char *)&unk_6FD318;
  *a2 = &unk_6FD318;
  v4 = a1[7];
  if ( !v4 )
  {
    sub_56EDF4(a2, a1 + 11);
    return a2;
  }
  v5 = a1[5];
  v6 = (const wchar_t *)a1[6];
  if ( v4 > v5 )
  {
    if ( (const wchar_t *)v4 != v6 )
    {
      if ( !v6 )
        sub_565330("basic_string::_S_construct null not valid");
      v3 = (char *)sub_544B60(v6, v4);
    }
    v13 = v3;
    sub_56EDF4(a2, &v13);
    v7 = v13;
    v8 = v13 - 24;
    if ( v13 - 24 == (char *)&qword_6FD300 )
      return a2;
    if ( &pthread_create )
    {
      v12 = (unsigned int *)(v13 - 8);
      do
        v11 = __ldaxr(v12);
      while ( __stlxr(v11 - 1, v12) );
      goto LABEL_18;
    }
    goto LABEL_25;
  }
  if ( (const wchar_t *)v5 != v6 )
  {
    if ( !v6 && v5 )
      sub_565330("basic_string::_S_construct null not valid");
    v3 = (char *)sub_544B60(v6, v5);
  }
  v13 = v3;
  sub_56EDF4(a2, &v13);
  v7 = v13;
  v8 = v13 - 24;
  if ( v13 - 24 != (char *)&qword_6FD300 )
  {
    if ( &pthread_create )
    {
      v10 = (unsigned int *)(v13 - 8);
      do
        v11 = __ldaxr(v10);
      while ( __stlxr(v11 - 1, v10) );
LABEL_18:
      if ( v11 <= 0 )
        operator delete(v8);
      return a2;
    }
LABEL_25:
    v11 = *((_DWORD *)v7 - 2);
    *((_DWORD *)v7 - 2) = v11 - 1;
    goto LABEL_18;
  }
  return a2;
}

