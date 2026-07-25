/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203ED0
 * Mangled: sub_203ED0
 * Demangled: sub_203ED0
 *
 * Callers: 16
 *   0x00000000005459D8  sub_5459D8
 *   0x0000000000545DD0  sub_545DD0
 *   0x000000000054606C  sub_54606C
 *   0x0000000000546320  sub_546320
 *   0x00000000005464C0  sub_5464C0
 *   0x0000000000546758  sub_546758
 *   0x000000000054695C  sub_54695C
 *   0x0000000000546A98  sub_546A98
 *   0x0000000000546C04  sub_546C04
 *   0x0000000000546D9C  sub_546D9C
 *   0x0000000000547030  sub_547030
 *   0x0000000000547234  sub_547234
 *   0x00000000005473C8  sub_5473C8
 *   0x0000000000547574  sub_547574
 *   0x0000000000547764  sub_547764
 *   0x0000000000547A78  sub_547A78
 *
 * Callees: 2
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 8
 *   insn=0x0000000000203ED0 string=0x0000000000203ED4 "B<G"
 *   insn=0x0000000000203EDC string=0x0000000000203EE0 "b"
 *   insn=0x0000000000203EE0 string=0x0000000000203EE4 "D"
 *   insn=0x0000000000203EE4 string=0x0000000000203EE8 "d"
 *   insn=0x0000000000203EEC string=0x0000000000203F00 "_"
 *   insn=0x0000000000203EF4 string=0x0000000000203EF8 "C"
 *   insn=0x0000000000203F00 string=0x0000000000203F04 "L"
 *   insn=0x0000000000203F04 string=0x0000000000203F08 "'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_203ED0(unsigned int *a1)
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

