/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056EC0C
 * Mangled: sub_56EC0C
 * Demangled: sub_56EC0C
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 9
 *   insn=0x000000000056EC14 string=0x000000000056EC18 "A"
 *   insn=0x000000000056EC20 string=0x000000000056EC24 "!<G"
 *   insn=0x000000000056EC24 string=0x000000000056EC28 "!"
 *   insn=0x000000000056EC2C string=0x000000000056EC30 "A"
 *   insn=0x000000000056EC30 string=0x000000000056EC34 "#"
 *   insn=0x000000000056EC34 string=0x000000000056EC38 "C"
 *   insn=0x000000000056EC3C string=0x000000000056EC40 "?"
 *   insn=0x000000000056EC48 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000056EC4C string=0x000000000056EC50 """
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_56EC0C(unsigned int *a1)
{
  unsigned int *v1; // x2
  int v2; // w1

  if ( a1 != (unsigned int *)&qword_6FD300 )
  {
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
}

