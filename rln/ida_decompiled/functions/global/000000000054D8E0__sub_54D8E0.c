/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054D8E0
 * Mangled: sub_54D8E0
 * Demangled: sub_54D8E0
 *
 * Callers: 17
 *   0x000000000054FE98  sub_54FE98
 *   0x00000000005504F8  sub_5504F8
 *   0x0000000000550C18  sub_550C18
 *   0x00000000005569EC  sub_5569EC
 *   0x00000000005577B8  sub_5577B8
 *   0x000000000055857C  sub_55857C
 *   0x00000000005586A4  sub_5586A4
 *   0x0000000000558854  sub_558854
 *   0x0000000000559434  sub_559434
 *   0x0000000000559690  sub_559690
 *   0x00000000005598EC  sub_5598EC
 *   0x0000000000559B48  sub_559B48
 *   0x000000000055A870  sub_55A870
 *   0x000000000055B1A0  sub_55B1A0
 *   0x000000000055BABC  sub_55BABC
 *   0x000000000055C444  sub_55C444
 *   0x000000000055CDD8  sub_55CDD8
 *
 * Callees: 2
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 9
 *   insn=0x000000000054D8E0 string=0x000000000054D8E4 "B<G"
 *   insn=0x000000000054D8E4 string=0x000000000054D8E8 """
 *   insn=0x000000000054D8EC string=0x000000000054D8F0 "b"
 *   insn=0x000000000054D8F0 string=0x000000000054D8F4 "D"
 *   insn=0x000000000054D8F4 string=0x000000000054D8F8 "d"
 *   insn=0x000000000054D8FC string=0x000000000054D900 "_"
 *   insn=0x000000000054D90C string=0x000000000054D910 "C"
 *   insn=0x000000000054D910 string=0x000000000054D914 "_"
 *   insn=0x000000000054D918 string=0x000000000054D91C "l"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_54D8E0(unsigned int *a1)
{
  unsigned int *v1; // x3
  int v2; // w2
  int v3; // w2

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

