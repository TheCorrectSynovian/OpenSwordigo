/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054933C
 * Mangled: sub_54933C
 * Demangled: sub_54933C
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
 * Referenced strings: 34
 *   insn=0x0000000000549354 string=0x0000000000549358 "b"
 *   insn=0x0000000000549358 string=0x000000000054935C "B`"
 *   insn=0x0000000000549370 string=0x0000000000549374 "?"
 *   insn=0x0000000000549378 string=0x000000000054937C "?"
 *   insn=0x0000000000549380 string=0x0000000000549384 "`"
 *   insn=0x0000000000549388 string=0x000000000059E2E8 "basic_string::_S_construct null not valid"
 *   insn=0x0000000000549394 string=0x0000000000549398 "`"
 *   insn=0x00000000005493CC string=0x00000000005493D0 "s"
 *   insn=0x00000000005493D0 string=0x00000000005493D4 "@`"
 *   insn=0x000000000054940C string=0x0000000000549410 "y"
 *   insn=0x0000000000549414 string=0x0000000000549418 "s"
 *   insn=0x0000000000549418 string=0x000000000054941C "@`"
 *   insn=0x0000000000549428 string=0x000000000054942C "!<G"
 *   insn=0x000000000054942C string=0x0000000000549430 "A"
 *   insn=0x0000000000549430 string=0x0000000000549434 "B "
 *   insn=0x0000000000549430 string=0x00000000005494B8 "A"
 *   insn=0x0000000000549434 string=0x0000000000549438 "A"
 *   insn=0x0000000000549438 string=0x000000000054943C "#"
 *   insn=0x000000000054943C string=0x0000000000549440 "C"
 *   insn=0x0000000000549444 string=0x0000000000549448 "?"
 *   insn=0x000000000054945C string=0x0000000000549460 "a@"
 *   insn=0x0000000000549460 string=0x0000000000549464 "d"
 *   insn=0x0000000000549470 string=0x0000000000549474 "s"
 *   insn=0x000000000054947C string=0x0000000000549480 "`"
 *   insn=0x000000000054948C string=0x0000000000549490 ""
 *   insn=0x0000000000549494 string=0x0000000000549498 "!<G"
 *   insn=0x000000000054949C string=0x00000000005494A0 "B "
 *   insn=0x00000000005494A0 string=0x00000000005494A4 "A"
 *   insn=0x00000000005494A4 string=0x00000000005494A8 "#"
 *   insn=0x00000000005494A8 string=0x00000000005494AC "C"
 *   insn=0x00000000005494B8 string=0x00000000005494BC "#"
 *   insn=0x00000000005494BC string=0x00000000005494C0 "C"
 *   insn=0x00000000005494CC string=0x00000000005494D0 "a"
 *   insn=0x00000000005494E0 string=0x00000000005494E4 "k"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__usercall sub_54933C@<X0>(_QWORD *a1@<X0>, _QWORD *a2@<X8>)
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
  v4 = a1[6];
  if ( !v4 )
  {
    sub_56EDF4(a2, a1 + 10);
    return a2;
  }
  v5 = a1[4];
  v6 = (const wchar_t *)a1[5];
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

