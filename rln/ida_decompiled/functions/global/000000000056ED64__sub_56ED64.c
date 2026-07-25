/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056ED64
 * Mangled: sub_56ED64
 * Demangled: sub_56ED64
 *
 * Callers: 1
 *   0x000000000053DD04  sub_53DD04
 *
 * Callees: 2
 *   0x000000000056ECAC  sub_56ECAC
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 11
 *   insn=0x000000000056ED68 string=0x000000000056ED6C "!"
 *   insn=0x000000000056ED74 string=0x000000000056ED78 " `"
 *   insn=0x000000000056ED78 string=0x000000000056ED7C "#"
 *   insn=0x000000000056ED7C string=0x000000000056ED80 "#"
 *   insn=0x000000000056ED80 string=0x000000000056ED84 "b"
 *   insn=0x000000000056ED90 string=0x000000000056ED94 "a"
 *   insn=0x000000000056EDB0 string=0x000000000056EDB4 "a"
 *   insn=0x000000000056EDCC string=0x000000000056EDD0 "  "
 *   insn=0x000000000056EDCC string=0x000000000056EDE8 "c"
 *   insn=0x000000000056EDD4 string=0x000000000056EDD8 "B"
 *   insn=0x000000000056EDE8 string=0x000000000056EDEC "#"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned int *__fastcall sub_56ED64(unsigned int **a1, unsigned int **a2)
{
  unsigned int *v2; // x1
  unsigned int *result; // x0
  int v5; // w3
  unsigned int v6; // w2
  char v7; // [xsp+28h] [xbp+28h] BYREF

  v2 = *a2;
  result = v2 - 6;
  v5 = *(v2 - 2);
  if ( v5 < 0 )
  {
    result = (unsigned int *)sub_56ECAC((__int64)result, (__int64)&v7, 0);
    *a1 = result;
  }
  else
  {
    if ( result != (unsigned int *)&qword_6FD300 )
    {
      result = (unsigned int *)&pthread_create;
      if ( &pthread_create )
      {
        result = v2 - 2;
        do
          v6 = __ldaxr(result);
        while ( __stlxr(v6 + 1, result) );
      }
      else
      {
        *(v2 - 2) = v5 + 1;
      }
    }
    *a1 = v2;
  }
  return result;
}

