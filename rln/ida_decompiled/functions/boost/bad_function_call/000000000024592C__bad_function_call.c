/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000024592C
 * Mangled: _ZN5boost17bad_function_callC2Ev
 * Demangled: boost::bad_function_call::bad_function_call(void)
 *
 * Callers: 1
 *   0x00000000002009B0  boost::bad_function_call::bad_function_call(void)
 *
 * Callees: 7
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x000000000054A024  sub_54A024
 *   0x000000000054AB28  sub_54AB28
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 43
 *   insn=0x0000000000245938 string=0x000000000024593C "T"
 *   insn=0x000000000024594C string=0x0000000000584CF7 "call to empty boost::function"
 *   insn=0x0000000000245964 string=0x0000000000245968 "p"
 *   insn=0x000000000024596C string=0x0000000000245970 "\t%"
 *   insn=0x0000000000245970 string=0x0000000000245974 ")"
 *   insn=0x0000000000245980 string=0x0000000000245984 "%"
 *   insn=0x0000000000245984 string=0x0000000000245988 ""
 *   insn=0x0000000000245988 string=0x000000000024598C "A"
 *   insn=0x000000000024598C string=0x0000000000245990 "h"
 *   insn=0x00000000002459A0 string=0x00000000002459F8 "6"
 *   insn=0x00000000002459B4 string=0x00000000002459B8 ")=G"
 *   insn=0x00000000002459B8 string=0x00000000002459BC "!"
 *   insn=0x00000000002459C0 string=0x00000000002459C4 "\t"
 *   insn=0x00000000002459C0 string=0x00000000002459D8 "\t"
 *   insn=0x00000000002459C4 string=0x00000000002459C8 "*"
 *   insn=0x00000000002459C8 string=0x00000000002459CC "\n"
 *   insn=0x00000000002459D4 string=0x00000000002459E4 "?"
 *   insn=0x00000000002459D8 string=0x00000000002459DC "*"
 *   insn=0x00000000002459DC string=0x00000000002459E0 "\n"
 *   insn=0x00000000002459EC string=0x00000000002459F0 "m"
 *   insn=0x00000000002459F8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002459FC string=0x0000000000245A00 "\n%"
 *   insn=0x0000000000245A00 string=0x0000000000245A04 "J"
 *   insn=0x0000000000245A08 string=0x0000000000245A0C "(a"
 *   insn=0x0000000000245A18 string=0x0000000000245A1C "J=G"
 *   insn=0x0000000000245A1C string=0x0000000000245A20 ")!"
 *   insn=0x0000000000245A24 string=0x0000000000245A28 "*"
 *   insn=0x0000000000245A24 string=0x0000000000245A54 "*"
 *   insn=0x0000000000245A28 string=0x0000000000245A2C "K"
 *   insn=0x0000000000245A2C string=0x0000000000245A30 "+"
 *   insn=0x0000000000245A34 string=0x0000000000245A38 "_"
 *   insn=0x0000000000245A44 string=0x0000000000245A48 "W"
 *   insn=0x0000000000245A54 string=0x0000000000245A58 "K"
 *   insn=0x0000000000245A58 string=0x0000000000245A5C "+"
 *   insn=0x0000000000245A5C string=0x0000000000245A60 "_"
 *   insn=0x0000000000245A7C string=0x0000000000245A80 "%"
 *   insn=0x0000000000245A80 string=0x0000000000245A84 "`"
 *   insn=0x0000000000245A84 string=0x0000000000245A88 ""
 *   insn=0x0000000000245A88 string=0x0000000000245A8C "A"
 *   insn=0x0000000000245A8C string=0x0000000000245A90 "h\n"
 *   insn=0x0000000000245A94 string=0x0000000000245A98 ""
 *   insn=0x0000000000245A98 string=0x0000000000245A9C ""
 *   insn=0x0000000000245AAC string=0x0000000000245AB0 "]"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::bad_function_call::bad_function_call(boost::bad_function_call *this)
{
  void *v2; // x0
  unsigned int *v3; // x8
  int v4; // w9
  _QWORD v5[3]; // [xsp+28h] [xbp-28h] BYREF

  v5[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_566BB8((int)v5, "call to empty boost::function");
  sub_54AB28(this, v5);
  v2 = (void *)(v5[0] - 24LL);
  if ( (__int64 *)(v5[0] - 24LL) != &qword_6FD2E0 )
  {
    v3 = (unsigned int *)(v5[0] - 8LL);
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
      operator delete(v2);
  }
  *(_QWORD *)this = &off_6BC9B8;
}

