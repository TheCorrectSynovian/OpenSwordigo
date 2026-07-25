/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000053B7DC
 * Mangled: sub_53B7DC
 * Demangled: sub_53B7DC
 *
 * Callers: 15
 *   0x0000000000521268  sub_521268
 *   0x0000000000521338  sub_521338
 *   0x0000000000521B48  sub_521B48
 *   0x0000000000521C18  sub_521C18
 *   0x0000000000522CAC  sub_522CAC
 *   0x0000000000524C20  sub_524C20
 *   0x0000000000527A84  sub_527A84
 *   0x0000000000528E58  sub_528E58
 *   0x0000000000530504  sub_530504
 *   0x000000000053E27C  sub_53E27C
 *   0x000000000054B120  sub_54B120
 *   0x000000000054B56C  sub_54B56C
 *   0x000000000054B5D8  sub_54B5D8
 *   0x000000000054BA28  sub_54BA28
 *   0x0000000000552738  sub_552738
 *
 * Callees: 1
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 5
 *   insn=0x000000000053B7E0 string=0x000000000053B7E4 "@"
 *   insn=0x000000000053B7EC string=0x000000000053B7F0 " "
 *   insn=0x000000000053B7EC string=0x000000000053B804 " "
 *   insn=0x000000000053B7F4 string=0x000000000053B7F8 " "
 *   insn=0x000000000053B808 string=0x000000000053B80C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_53B7DC(unsigned int **a1, unsigned int **a2)
{
  unsigned int *v2; // x1
  unsigned int v3; // w0
  __int64 result; // x0

  v2 = *a2;
  *a1 = v2;
  if ( &pthread_create )
  {
    do
    {
      v3 = __ldaxr(v2);
      result = v3 + 1;
    }
    while ( __stlxr(result, v2) );
  }
  else
  {
    result = *v2 + 1;
    *v2 = result;
  }
  return result;
}

