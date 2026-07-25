/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000020559C
 * Mangled: sub_20559C
 * Demangled: sub_20559C
 *
 * Callers: 1
 *   0x0000000000205698  sub_205698
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 31
 *   insn=0x00000000002055A8 string=0x00000000002055AC "S"
 *   insn=0x00000000002055AC string=0x00000000002055B0 "h"
 *   insn=0x00000000002055B0 string=0x00000000002055B4 "\t'"
 *   insn=0x00000000002055C0 string=0x00000000002055C4 "("
 *   insn=0x00000000002055D4 string=0x00000000002055D8 "'"
 *   insn=0x00000000002055D8 string=0x00000000002055DC ""
 *   insn=0x00000000002055E4 string=0x00000000002055E8 "A"
 *   insn=0x00000000002055E8 string=0x00000000002055EC "h"
 *   insn=0x000000000020560C string=0x0000000000205610 ")=G"
 *   insn=0x0000000000205610 string=0x0000000000205614 "!"
 *   insn=0x0000000000205618 string=0x000000000020561C "\t"
 *   insn=0x0000000000205618 string=0x0000000000205654 "\t"
 *   insn=0x000000000020561C string=0x0000000000205620 "*"
 *   insn=0x0000000000205620 string=0x0000000000205624 "\n"
 *   insn=0x0000000000205628 string=0x000000000020562C ""
 *   insn=0x000000000020562C string=0x0000000000205660 "?"
 *   insn=0x0000000000205630 string=0x0000000000205634 ")=G"
 *   insn=0x0000000000205634 string=0x0000000000205638 "!"
 *   insn=0x000000000020563C string=0x0000000000205640 "\t"
 *   insn=0x000000000020563C string=0x0000000000205674 "\t"
 *   insn=0x0000000000205640 string=0x0000000000205644 "*"
 *   insn=0x0000000000205644 string=0x0000000000205648 "\n"
 *   insn=0x0000000000205650 string=0x0000000000205680 "?"
 *   insn=0x0000000000205654 string=0x0000000000205658 "*"
 *   insn=0x0000000000205658 string=0x000000000020565C "\n"
 *   insn=0x0000000000205668 string=0x000000000020566C "N"
 *   insn=0x0000000000205674 string=0x0000000000205678 "*"
 *   insn=0x0000000000205678 string=0x000000000020567C "\n"
 *   insn=0x0000000000205680 string=0x0000000000205684 "L"
 *   insn=0x0000000000205688 string=0x000000000020568C "F"
 *   insn=0x0000000000205694 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void sub_20559C()
{
  void *v0; // x0
  void *v1; // x0
  unsigned int *v2; // x8
  int v3; // w9
  unsigned int *v4; // x8
  int v5; // w9

  _ReadStatusReg(TPIDR_EL0);
  v0 = (void *)(qword_6E8BA0 - 24);
  if ( (__int64 *)(qword_6E8BA0 - 24) != &qword_6FD2E0 )
  {
    v2 = (unsigned int *)(qword_6E8BA0 - 8);
    if ( &pthread_create )
    {
      do
        v3 = __ldaxr(v2);
      while ( __stlxr(v3 - 1, v2) );
    }
    else
    {
      v3 = (*v2)--;
    }
    if ( v3 <= 0 )
      operator delete(v0);
  }
  v1 = (void *)(qword_6E8B98 - 24);
  if ( (__int64 *)(qword_6E8B98 - 24) != &qword_6FD2E0 )
  {
    v4 = (unsigned int *)(qword_6E8B98 - 8);
    if ( &pthread_create )
    {
      do
        v5 = __ldaxr(v4);
      while ( __stlxr(v5 - 1, v4) );
    }
    else
    {
      v5 = (*v4)--;
    }
    if ( v5 <= 0 )
      operator delete(v1);
  }
}

