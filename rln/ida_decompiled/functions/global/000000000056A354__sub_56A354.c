/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056A354
 * Mangled: sub_56A354
 * Demangled: sub_56A354
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 9
 *   insn=0x000000000056A35C string=0x000000000056A360 "A"
 *   insn=0x000000000056A368 string=0x000000000056A36C "!<G"
 *   insn=0x000000000056A36C string=0x000000000056A370 "!"
 *   insn=0x000000000056A374 string=0x000000000056A378 "A"
 *   insn=0x000000000056A378 string=0x000000000056A37C "#"
 *   insn=0x000000000056A37C string=0x000000000056A380 "C"
 *   insn=0x000000000056A384 string=0x000000000056A388 "?"
 *   insn=0x000000000056A390 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000056A394 string=0x000000000056A398 """
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_56A354(unsigned int *a1)
{
  unsigned int *v1; // x2
  int v2; // w1

  if ( a1 != (unsigned int *)&qword_6FD2E0 )
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

