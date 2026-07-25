/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203F10
 * Mangled: sub_203F10
 * Demangled: sub_203F10
 *
 * Callers: 7
 *   0x000000000054D924  sub_54D924
 *   0x000000000054DC04  sub_54DC04
 *   0x000000000054FE98  sub_54FE98
 *   0x00000000005504F8  sub_5504F8
 *   0x0000000000550C18  sub_550C18
 *   0x000000000055201C  sub_55201C
 *   0x0000000000552738  sub_552738
 *
 * Callees: 2
 *   0x000000000056EC5C  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 8
 *   insn=0x0000000000203F10 string=0x0000000000203F14 "B<G"
 *   insn=0x0000000000203F1C string=0x0000000000203F20 "b"
 *   insn=0x0000000000203F20 string=0x0000000000203F24 "D"
 *   insn=0x0000000000203F24 string=0x0000000000203F28 "d"
 *   insn=0x0000000000203F2C string=0x0000000000203F40 "_"
 *   insn=0x0000000000203F34 string=0x0000000000203F38 "C"
 *   insn=0x0000000000203F40 string=0x0000000000203F44 "L"
 *   insn=0x0000000000203F44 string=0x0000000000203F48 "E"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_203F10(unsigned int *a1)
{
  unsigned int *v1; // x3
  int v2; // w2

  if ( &pthread_create )
  {
    v1 = a1 + 4;
    do
      v2 = __ldaxr(v1);
    while ( __stlxr(v2 - 1, v1) );
  }
  else
  {
    v2 = a1[4];
    a1[4] = v2 - 1;
  }
  if ( v2 <= 0 )
    operator delete(a1);
}

