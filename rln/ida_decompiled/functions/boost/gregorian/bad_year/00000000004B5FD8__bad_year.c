/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B5FD8
 * Mangled: _ZN5boost9gregorian8bad_yearC2Ev
 * Demangled: boost::gregorian::bad_year::bad_year(void)
 *
 * Callers: 1
 *   0x00000000001F4C50  boost::gregorian::bad_year::bad_year(void)
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
 * Referenced strings: 39
 *   insn=0x00000000004B5FE4 string=0x00000000004B5FE8 "T"
 *   insn=0x00000000004B5FF8 string=0x000000000059740B "Year is out of valid range: 1400..10000"
 *   insn=0x00000000004B6018 string=0x00000000004B601C "i"
 *   insn=0x00000000004B601C string=0x00000000004B6020 ")"
 *   insn=0x00000000004B602C string=0x00000000004B6060 "i"
 *   insn=0x00000000004B6030 string=0x00000000004B6034 "5C"
 *   insn=0x00000000004B6034 string=0x00000000004B6038 "A"
 *   insn=0x00000000004B6038 string=0x00000000004B603C "h"
 *   insn=0x00000000004B6060 string=0x00000000004B6064 ")=G"
 *   insn=0x00000000004B6064 string=0x00000000004B6068 "!"
 *   insn=0x00000000004B606C string=0x00000000004B6070 "\t"
 *   insn=0x00000000004B606C string=0x00000000004B6084 "\t"
 *   insn=0x00000000004B6070 string=0x00000000004B6074 "*"
 *   insn=0x00000000004B6074 string=0x00000000004B6078 "\n"
 *   insn=0x00000000004B6080 string=0x00000000004B6090 "?"
 *   insn=0x00000000004B6084 string=0x00000000004B6088 "*"
 *   insn=0x00000000004B6088 string=0x00000000004B608C "\n"
 *   insn=0x00000000004B60A4 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004B60A8 string=0x00000000004B60AC "j"
 *   insn=0x00000000004B60AC string=0x00000000004B60B0 "J"
 *   insn=0x00000000004B60B4 string=0x00000000004B60B8 "(a"
 *   insn=0x00000000004B60C0 string=0x00000000004B60C4 "j"
 *   insn=0x00000000004B60C4 string=0x00000000004B60C8 "J=G"
 *   insn=0x00000000004B60C8 string=0x00000000004B60CC ")!"
 *   insn=0x00000000004B60D0 string=0x00000000004B60D4 "*"
 *   insn=0x00000000004B60D0 string=0x00000000004B6100 "*"
 *   insn=0x00000000004B60D4 string=0x00000000004B60D8 "K"
 *   insn=0x00000000004B60D8 string=0x00000000004B60DC "+"
 *   insn=0x00000000004B60E0 string=0x00000000004B60E4 "_"
 *   insn=0x00000000004B6100 string=0x00000000004B6104 "K"
 *   insn=0x00000000004B6104 string=0x00000000004B6108 "+"
 *   insn=0x00000000004B6108 string=0x00000000004B610C "_"
 *   insn=0x00000000004B6128 string=0x00000000004B612C "h"
 *   insn=0x00000000004B612C string=0x00000000004B6130 "`"
 *   insn=0x00000000004B6130 string=0x00000000004B6134 ""
 *   insn=0x00000000004B6134 string=0x00000000004B6138 "A"
 *   insn=0x00000000004B6138 string=0x00000000004B613C "h\n"
 *   insn=0x00000000004B6140 string=0x00000000004B6144 ""
 *   insn=0x00000000004B6144 string=0x00000000004B6148 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::gregorian::bad_year::bad_year(boost::gregorian::bad_year *this)
{
  void *v2; // x0
  unsigned int *v3; // x8
  int v4; // w9
  _QWORD v5[3]; // [xsp+28h] [xbp-28h] BYREF

  v5[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_566BB8((int)v5, "Year is out of valid range: 1400..10000");
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
  *(_QWORD *)this = &off_6D7118;
}

