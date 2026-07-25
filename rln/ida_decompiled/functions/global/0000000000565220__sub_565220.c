/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000565220
 * Mangled: sub_565220
 * Demangled: sub_565220
 *
 * Callers: 12
 *   0x0000000000565330  sub_565330
 *   0x00000000005653E4  sub_5653E4
 *   0x0000000000565498  sub_565498
 *   0x000000000056554C  sub_56554C
 *   0x0000000000565600  sub_565600
 *   0x00000000005656B4  sub_5656B4
 *   0x0000000000565808  sub_565808
 *   0x00000000005658BC  sub_5658BC
 *   0x0000000000565970  sub_565970
 *   0x0000000000565A24  sub_565A24
 *   0x0000000000565AD8  sub_565AD8
 *   0x0000000000565C40  sub_565C40
 *
 * Callees: 2
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 8
 *   insn=0x0000000000565220 string=0x0000000000565224 "B<G"
 *   insn=0x0000000000565224 string=0x0000000000565228 """
 *   insn=0x000000000056522C string=0x0000000000565230 "b"
 *   insn=0x0000000000565230 string=0x0000000000565234 "D"
 *   insn=0x0000000000565234 string=0x0000000000565238 "d"
 *   insn=0x000000000056523C string=0x0000000000565240 "_"
 *   insn=0x0000000000565244 string=0x000000000056525C "R"
 *   insn=0x000000000056524C string=0x0000000000565250 "C"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_565220(unsigned int *a1)
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

