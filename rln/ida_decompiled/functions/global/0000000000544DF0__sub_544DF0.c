/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000544DF0
 * Mangled: sub_544DF0
 * Demangled: sub_544DF0
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000056EC5C  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 18
 *   insn=0x0000000000544E04 string=0x0000000000544E0C "`"
 *   insn=0x0000000000544E0C string=0x0000000000544E10 "b&@"
 *   insn=0x0000000000544E10 string=0x0000000000544E14 "!"
 *   insn=0x0000000000544E14 string=0x0000000000544E18 "@`"
 *   insn=0x0000000000544E28 string=0x0000000000544E2C "!"
 *   insn=0x0000000000544E2C string=0x0000000000544E30 "!@"
 *   insn=0x0000000000544E40 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000544E50 string=0x0000000000544E54 "!<G"
 *   insn=0x0000000000544E54 string=0x0000000000544E58 "a"
 *   insn=0x0000000000544E58 string=0x0000000000544E5C "B "
 *   insn=0x0000000000544E58 string=0x0000000000544E84 "A"
 *   insn=0x0000000000544E5C string=0x0000000000544E60 "A"
 *   insn=0x0000000000544E60 string=0x0000000000544E64 "#"
 *   insn=0x0000000000544E64 string=0x0000000000544E68 "C"
 *   insn=0x0000000000544E6C string=0x0000000000544E70 "?"
 *   insn=0x0000000000544E78 string=0x0000000000544E7C "x"
 *   insn=0x0000000000544E84 string=0x0000000000544E88 "#"
 *   insn=0x0000000000544E88 string=0x0000000000544E8C "C"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_544DF0(void *a1)
{
  __int64 v2; // x2
  void *v3; // x0
  unsigned int *v4; // x2
  int v5; // w1

  *(_QWORD *)a1 = off_6DA9F0;
  v2 = *((_QWORD *)a1 + 9);
  v3 = (void *)(v2 - 24);
  if ( (__int64 *)(v2 - 24) != &qword_6FD300 )
  {
    if ( &pthread_create )
    {
      v4 = (unsigned int *)(v2 - 8);
      do
        v5 = __ldaxr(v4);
      while ( __stlxr(v5 - 1, v4) );
    }
    else
    {
      v5 = *(_DWORD *)(v2 - 8);
      *(_DWORD *)(v2 - 8) = v5 - 1;
    }
    if ( v5 <= 0 )
      operator delete(v3);
  }
  *(_QWORD *)a1 = off_6B7790;
  sub_53C0C8((unsigned int **)a1 + 7);
  operator delete(a1);
}

