/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203E90
 * Mangled: start
 * Demangled: start
 *
 * Callers: 14
 *   0x0000000000547CF0  sub_547CF0
 *   0x00000000005480EC  sub_5480EC
 *   0x0000000000548378  sub_548378
 *   0x000000000054862C  sub_54862C
 *   0x00000000005487CC  sub_5487CC
 *   0x0000000000548A64  sub_548A64
 *   0x0000000000548C68  sub_548C68
 *   0x0000000000548F10  sub_548F10
 *   0x00000000005490A8  sub_5490A8
 *   0x000000000054933C  sub_54933C
 *   0x0000000000549540  sub_549540
 *   0x0000000000549880  sub_549880
 *   0x0000000000549A70  sub_549A70
 *   0x0000000000549D84  sub_549D84
 *
 * Callees: 2
 *   0x000000000056EC5C  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 8
 *   insn=0x0000000000203E90 string=0x0000000000203E94 "B<G"
 *   insn=0x0000000000203E9C string=0x0000000000203EA0 "b"
 *   insn=0x0000000000203EA0 string=0x0000000000203EA4 "D"
 *   insn=0x0000000000203EA4 string=0x0000000000203EA8 "d"
 *   insn=0x0000000000203EAC string=0x0000000000203EC0 "_"
 *   insn=0x0000000000203EB4 string=0x0000000000203EB8 "C"
 *   insn=0x0000000000203EC0 string=0x0000000000203EC4 "L"
 *   insn=0x0000000000203EC4 string=0x0000000000203EC8 "e"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall start(unsigned int *a1)
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

