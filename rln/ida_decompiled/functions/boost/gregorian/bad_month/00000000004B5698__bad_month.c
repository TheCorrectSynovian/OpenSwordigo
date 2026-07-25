/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B5698
 * Mangled: _ZN5boost9gregorian9bad_monthC2Ev
 * Demangled: boost::gregorian::bad_month::bad_month(void)
 *
 * Callers: 1
 *   0x00000000001FD240  boost::gregorian::bad_month::bad_month(void)
 *
 * Callees: 7
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x000000000054A3F8  sub_54A3F8
 *   0x000000000054AADC  sub_54AADC
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 38
 *   insn=0x00000000004B56A4 string=0x00000000004B56A8 "T"
 *   insn=0x00000000004B56B8 string=0x00000000005973E8 "Month number is out of range 1..12"
 *   insn=0x00000000004B56C4 string=0x00000000004B56C8 "<"
 *   insn=0x00000000004B56DC string=0x00000000004B56E0 ")"
 *   insn=0x00000000004B56EC string=0x00000000004B5720 "i"
 *   insn=0x00000000004B56F0 string=0x00000000004B56F4 "eB"
 *   insn=0x00000000004B56F4 string=0x00000000004B56F8 "A"
 *   insn=0x00000000004B56F8 string=0x00000000004B56FC "h"
 *   insn=0x00000000004B5720 string=0x00000000004B5724 ")=G"
 *   insn=0x00000000004B5724 string=0x00000000004B5728 "!"
 *   insn=0x00000000004B572C string=0x00000000004B5730 "\t"
 *   insn=0x00000000004B572C string=0x00000000004B5744 "\t"
 *   insn=0x00000000004B5730 string=0x00000000004B5734 "*"
 *   insn=0x00000000004B5734 string=0x00000000004B5738 "\n"
 *   insn=0x00000000004B5740 string=0x00000000004B5750 "?"
 *   insn=0x00000000004B5744 string=0x00000000004B5748 "*"
 *   insn=0x00000000004B5748 string=0x00000000004B574C "\n"
 *   insn=0x00000000004B5764 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004B576C string=0x00000000004B5770 "J"
 *   insn=0x00000000004B5774 string=0x00000000004B5778 "(a"
 *   insn=0x00000000004B5780 string=0x00000000004B5784 "j"
 *   insn=0x00000000004B5784 string=0x00000000004B5788 "J=G"
 *   insn=0x00000000004B5788 string=0x00000000004B578C ")!"
 *   insn=0x00000000004B5790 string=0x00000000004B5794 "*"
 *   insn=0x00000000004B5790 string=0x00000000004B57C0 "*"
 *   insn=0x00000000004B5794 string=0x00000000004B5798 "K"
 *   insn=0x00000000004B5798 string=0x00000000004B579C "+"
 *   insn=0x00000000004B57A0 string=0x00000000004B57A4 "_"
 *   insn=0x00000000004B57B8 string=0x00000000004B57BC "B0"
 *   insn=0x00000000004B57C0 string=0x00000000004B57C4 "K"
 *   insn=0x00000000004B57C4 string=0x00000000004B57C8 "+"
 *   insn=0x00000000004B57C8 string=0x00000000004B57CC "_"
 *   insn=0x00000000004B57EC string=0x00000000004B57F0 "`"
 *   insn=0x00000000004B57F0 string=0x00000000004B57F4 ""
 *   insn=0x00000000004B57F4 string=0x00000000004B57F8 "A"
 *   insn=0x00000000004B57F8 string=0x00000000004B57FC "h\n"
 *   insn=0x00000000004B5800 string=0x00000000004B5804 ""
 *   insn=0x00000000004B5804 string=0x00000000004B5808 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::gregorian::bad_month::bad_month(boost::gregorian::bad_month *this)
{
  void *v2; // x0
  unsigned int *v3; // x8
  int v4; // w9
  _QWORD v5[3]; // [xsp+28h] [xbp-28h] BYREF

  v5[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_566BB8((int)v5, "Month number is out of range 1..12");
  sub_54AADC(this, v5);
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
  *(_QWORD *)this = &off_6D6F88;
}

