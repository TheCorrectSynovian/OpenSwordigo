/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000549D84
 * Mangled: sub_549D84
 * Demangled: sub_549D84
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
 * Referenced strings: 36
 *   insn=0x0000000000549D9C string=0x0000000000549DA0 "b"
 *   insn=0x0000000000549DA0 string=0x0000000000549DA4 "B`"
 *   insn=0x0000000000549DB8 string=0x0000000000549DBC "?"
 *   insn=0x0000000000549DC0 string=0x0000000000549DC4 "?"
 *   insn=0x0000000000549DC8 string=0x0000000000549DCC "`"
 *   insn=0x0000000000549DD0 string=0x0000000000549DD8 "Vm"
 *   insn=0x0000000000549DD0 string=0x000000000059E2E8 "basic_string::_S_construct null not valid"
 *   insn=0x0000000000549DDC string=0x0000000000549DE0 "`"
 *   insn=0x0000000000549DEC string=0x0000000000549DF4 "Om"
 *   insn=0x0000000000549DF8 string=0x0000000000549DFC "Y"
 *   insn=0x0000000000549E14 string=0x0000000000549E18 "s"
 *   insn=0x0000000000549E18 string=0x0000000000549E1C "@`"
 *   insn=0x0000000000549E40 string=0x0000000000549E44 "G"
 *   insn=0x0000000000549E5C string=0x0000000000549E60 "s"
 *   insn=0x0000000000549E60 string=0x0000000000549E64 "@`"
 *   insn=0x0000000000549E70 string=0x0000000000549E74 "!<G"
 *   insn=0x0000000000549E74 string=0x0000000000549E78 "A"
 *   insn=0x0000000000549E78 string=0x0000000000549E7C "B "
 *   insn=0x0000000000549E78 string=0x0000000000549F00 "A"
 *   insn=0x0000000000549E7C string=0x0000000000549E80 "A"
 *   insn=0x0000000000549E80 string=0x0000000000549E84 "#"
 *   insn=0x0000000000549E84 string=0x0000000000549E88 "C"
 *   insn=0x0000000000549E8C string=0x0000000000549E90 "?"
 *   insn=0x0000000000549E98 string=0x0000000000549E9C "p"
 *   insn=0x0000000000549EA4 string=0x0000000000549EA8 "a"
 *   insn=0x0000000000549EB8 string=0x0000000000549EBC "s"
 *   insn=0x0000000000549EC4 string=0x0000000000549EC8 "`"
 *   insn=0x0000000000549ED4 string=0x0000000000549ED8 "{"
 *   insn=0x0000000000549EDC string=0x0000000000549EE0 "!<G"
 *   insn=0x0000000000549EE4 string=0x0000000000549EE8 "B "
 *   insn=0x0000000000549EE8 string=0x0000000000549EEC "A"
 *   insn=0x0000000000549EEC string=0x0000000000549EF0 "#"
 *   insn=0x0000000000549EF0 string=0x0000000000549EF4 "C"
 *   insn=0x0000000000549F00 string=0x0000000000549F04 "#"
 *   insn=0x0000000000549F04 string=0x0000000000549F08 "C"
 *   insn=0x0000000000549F14 string=0x0000000000549F18 "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__usercall sub_549D84@<X0>(_QWORD *a1@<X0>, _QWORD *a2@<X8>)
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
  v4 = a1[8];
  if ( !v4 )
  {
    sub_56EDF4(a2, a1 + 12);
    return a2;
  }
  v5 = a1[6];
  v6 = (const wchar_t *)a1[7];
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

