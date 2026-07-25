/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000566530
 * Mangled: sub_566530
 * Demangled: sub_566530
 *
 * Callers: 2
 *   0x0000000000569E1C  sub_569E1C
 *   0x000000000056A798  sub_56A798
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 11
 *   insn=0x0000000000566530 string=0x0000000000566534 "!<G"
 *   insn=0x0000000000566534 string=0x0000000000566538 "!"
 *   insn=0x000000000056653C string=0x0000000000566540 "A"
 *   insn=0x0000000000566540 string=0x0000000000566544 "#"
 *   insn=0x0000000000566544 string=0x0000000000566548 "C"
 *   insn=0x000000000056654C string=0x0000000000566550 "?"
 *   insn=0x0000000000566554 string=0x0000000000566570 "PC"
 *   insn=0x000000000056655C string=0x0000000000566560 """
 *   insn=0x0000000000566560 string=0x0000000000566564 "?"
 *   insn=0x0000000000566568 string=0x000000000056656C "l"
 *   insn=0x0000000000566570 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_566530(unsigned int *a1)
{
  unsigned int *v1; // x2
  int v2; // w1
  int v3; // w1

  if ( !&pthread_create )
  {
    v3 = a1[4];
    a1[4] = v3 - 1;
    if ( v3 > 0 )
      return;
LABEL_7:
    operator delete(a1);
    return;
  }
  v1 = a1 + 4;
  do
    v2 = __ldaxr(v1);
  while ( __stlxr(v2 - 1, v1) );
  if ( v2 <= 0 )
    goto LABEL_7;
}

