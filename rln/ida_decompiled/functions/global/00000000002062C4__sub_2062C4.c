/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002062C4
 * Mangled: sub_2062C4
 * Demangled: sub_2062C4
 *
 * Callers: 1
 *   0x000000000020641C  sub_20641C
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 37
 *   insn=0x00000000002062D4 string=0x00000000002062D8 "S"
 *   insn=0x00000000002062D8 string=0x00000000002062DC "h"
 *   insn=0x00000000002062FC string=0x0000000000206300 "a"
 *   insn=0x0000000000206310 string=0x0000000000206314 "'"
 *   insn=0x0000000000206314 string=0x0000000000206318 ""
 *   insn=0x0000000000206324 string=0x0000000000206328 "h"
 *   insn=0x0000000000206330 string=0x0000000000206334 "!"
 *   insn=0x000000000020634C string=0x0000000000206350 ")=G"
 *   insn=0x0000000000206350 string=0x0000000000206354 "!"
 *   insn=0x0000000000206354 string=0x0000000000206358 "\t"
 *   insn=0x0000000000206358 string=0x000000000020635C "\t"
 *   insn=0x0000000000206358 string=0x00000000002063B8 "\t"
 *   insn=0x000000000020635C string=0x0000000000206360 "*"
 *   insn=0x0000000000206360 string=0x0000000000206364 "\n"
 *   insn=0x000000000020636C string=0x00000000002063C4 "?"
 *   insn=0x0000000000206370 string=0x0000000000206374 ")=G"
 *   insn=0x0000000000206374 string=0x0000000000206378 "!"
 *   insn=0x000000000020637C string=0x0000000000206380 "\t"
 *   insn=0x000000000020637C string=0x00000000002063D8 "\t"
 *   insn=0x0000000000206380 string=0x0000000000206384 "*"
 *   insn=0x0000000000206384 string=0x0000000000206388 "\n"
 *   insn=0x0000000000206390 string=0x00000000002063E4 "?"
 *   insn=0x0000000000206394 string=0x0000000000206398 ")=G"
 *   insn=0x0000000000206398 string=0x000000000020639C "!"
 *   insn=0x00000000002063A0 string=0x00000000002063A4 "\t"
 *   insn=0x00000000002063A0 string=0x00000000002063F8 "\t"
 *   insn=0x00000000002063A4 string=0x00000000002063A8 "*"
 *   insn=0x00000000002063A8 string=0x00000000002063AC "\n"
 *   insn=0x00000000002063B4 string=0x0000000000206404 "?"
 *   insn=0x00000000002063B8 string=0x00000000002063BC "*"
 *   insn=0x00000000002063BC string=0x00000000002063C0 "\n"
 *   insn=0x00000000002063D8 string=0x00000000002063DC "*"
 *   insn=0x00000000002063DC string=0x00000000002063E0 "\n"
 *   insn=0x00000000002063E4 string=0x00000000002063E8 "l"
 *   insn=0x00000000002063F8 string=0x00000000002063FC "*"
 *   insn=0x00000000002063FC string=0x0000000000206400 "\n"
 *   insn=0x0000000000206418 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void sub_2062C4()
{
  void *v0; // x0
  void *v1; // x0
  void *v2; // x0
  unsigned int *v3; // x8
  int v4; // w9
  unsigned int *v5; // x8
  int v6; // w9
  unsigned int *v7; // x8
  int v8; // w9

  _ReadStatusReg(TPIDR_EL0);
  v0 = (void *)(qword_6E8BF0 - 24);
  if ( (__int64 *)(qword_6E8BF0 - 24) != &qword_6FD2E0 )
  {
    v3 = (unsigned int *)(qword_6E8BF0 - 8);
    if ( &pthread_create )
    {
      do
        v4 = __ldaxr(v3);
      while ( __stlxr(v4 - 1, v3) );
    }
    else
    {
      v4 = (*v3)--;
    }
    if ( v4 <= 0 )
      operator delete(v0);
  }
  v1 = (void *)(qword_6E8BE8 - 24);
  if ( (__int64 *)(qword_6E8BE8 - 24) != &qword_6FD2E0 )
  {
    v5 = (unsigned int *)(qword_6E8BE8 - 8);
    if ( &pthread_create )
    {
      do
        v6 = __ldaxr(v5);
      while ( __stlxr(v6 - 1, v5) );
    }
    else
    {
      v6 = (*v5)--;
    }
    if ( v6 <= 0 )
      operator delete(v1);
  }
  v2 = (void *)(qword_6E8BE0 - 24);
  if ( (__int64 *)(qword_6E8BE0 - 24) != &qword_6FD2E0 )
  {
    v7 = (unsigned int *)(qword_6E8BE0 - 8);
    if ( &pthread_create )
    {
      do
        v8 = __ldaxr(v7);
      while ( __stlxr(v8 - 1, v7) );
    }
    else
    {
      v8 = (*v7)--;
    }
    if ( v8 <= 0 )
      operator delete(v2);
  }
}

