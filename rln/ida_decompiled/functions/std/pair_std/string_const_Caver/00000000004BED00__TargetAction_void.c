/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BED00
 * Mangled: _ZNSt4pairIKSsN5Caver12TargetActionIFvRS0_RKN5boost10shared_ptrINS1_12StoreProductEEES3_EEEED2Ev
 * Demangled: std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>::~pair()
 *
 * Callers: 1
 *   0x00000000001FC460  std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>::~pair()
 *
 * Callees: 5
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 55
 *   insn=0x00000000004BED0C string=0x00000000004BED10 "T"
 *   insn=0x00000000004BED1C string=0x00000000004BED20 "h"
 *   insn=0x00000000004BED20 string=0x00000000004BED24 "H"
 *   insn=0x00000000004BED24 string=0x00000000004BED28 ""
 *   insn=0x00000000004BED24 string=0x00000000004BED4C "`\n@"
 *   insn=0x00000000004BED28 string=0x00000000004BED2C ""
 *   insn=0x00000000004BED2C string=0x00000000004BED30 ""
 *   insn=0x00000000004BED34 string=0x00000000004BED38 "`"
 *   insn=0x00000000004BED50 string=0x00000000004BED54 "@"
 *   insn=0x00000000004BED50 string=0x00000000004BED70 "h"
 *   insn=0x00000000004BED54 string=0x00000000004BED58 ""
 *   insn=0x00000000004BED58 string=0x00000000004BED5C ""
 *   insn=0x00000000004BED60 string=0x00000000004BED64 ""
 *   insn=0x00000000004BED64 string=0x00000000004BED68 "@"
 *   insn=0x00000000004BED70 string=0x00000000004BED74 ")"
 *   insn=0x00000000004BED74 string=0x00000000004BED78 ")"
 *   insn=0x00000000004BED80 string=0x00000000004BED84 "!"
 *   insn=0x00000000004BED84 string=0x00000000004BEDA8 ")"
 *   insn=0x00000000004BED94 string=0x00000000004BEDEC "9"
 *   insn=0x00000000004BEDA8 string=0x00000000004BEDAC ")=G"
 *   insn=0x00000000004BEDAC string=0x00000000004BEDB0 "!"
 *   insn=0x00000000004BEDB4 string=0x00000000004BEDB8 "\t"
 *   insn=0x00000000004BEDB4 string=0x00000000004BEDCC "\t"
 *   insn=0x00000000004BEDB8 string=0x00000000004BEDBC "*"
 *   insn=0x00000000004BEDBC string=0x00000000004BEDC0 "\n"
 *   insn=0x00000000004BEDC8 string=0x00000000004BEDD8 "?"
 *   insn=0x00000000004BEDCC string=0x00000000004BEDD0 "*"
 *   insn=0x00000000004BEDD0 string=0x00000000004BEDD4 "\n"
 *   insn=0x00000000004BEDD8 string=0x00000000004BEDDC "l"
 *   insn=0x00000000004BEDE0 string=0x00000000004BEDE4 "p"
 *   insn=0x00000000004BEDEC string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004BEDF8 string=0x00000000004BEDFC "\t\t@"
 *   insn=0x00000000004BEDF8 string=0x00000000004BEE28 "h"
 *   insn=0x00000000004BEDFC string=0x00000000004BEE00 ")"
 *   insn=0x00000000004BEE00 string=0x00000000004BEE04 "\t\t"
 *   insn=0x00000000004BEE08 string=0x00000000004BEE0C "\t"
 *   insn=0x00000000004BEE0C string=0x00000000004BEE10 ")@"
 *   insn=0x00000000004BEE14 string=0x00000000004BEE18 " "
 *   insn=0x00000000004BEE28 string=0x00000000004BEE2C ")"
 *   insn=0x00000000004BEE2C string=0x00000000004BEE30 ")"
 *   insn=0x00000000004BEE3C string=0x00000000004BEE40 ")"
 *   insn=0x00000000004BEE40 string=0x00000000004BEE44 ")=G"
 *   insn=0x00000000004BEE44 string=0x00000000004BEE48 "!"
 *   insn=0x00000000004BEE48 string=0x00000000004BEE4C "i"
 *   insn=0x00000000004BEE4C string=0x00000000004BEE50 "\t"
 *   insn=0x00000000004BEE4C string=0x00000000004BEE78 "\t"
 *   insn=0x00000000004BEE50 string=0x00000000004BEE54 "*"
 *   insn=0x00000000004BEE54 string=0x00000000004BEE58 "\n"
 *   insn=0x00000000004BEE5C string=0x00000000004BEE60 "?"
 *   insn=0x00000000004BEE60 string=0x00000000004BEE64 "l"
 *   insn=0x00000000004BEE68 string=0x00000000004BEE6C "N"
 *   insn=0x00000000004BEE78 string=0x00000000004BEE7C "*"
 *   insn=0x00000000004BEE7C string=0x00000000004BEE80 "\n"
 *   insn=0x00000000004BEE80 string=0x00000000004BEE84 "?"
 *   insn=0x00000000004BEE84 string=0x00000000004BEE88 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>::~pair(
        _QWORD *a1)
{
  __int64 v2; // x8
  void (__fastcall *v3)(_QWORD *, _QWORD *, __int64); // x8
  _QWORD *v4; // x0
  __int64 v5; // x8
  __int64 *v6; // x0
  unsigned int *v7; // x8
  int v8; // w9

  _ReadStatusReg(TPIDR_EL0);
  v2 = a1[3];
  if ( v2 )
  {
    if ( (v2 & 1) == 0 )
    {
      v3 = *(void (__fastcall **)(_QWORD *, _QWORD *, __int64))(v2 & 0xFFFFFFFFFFFFFFFELL);
      if ( v3 )
        v3(a1 + 4, a1 + 4, 2);
    }
    a1[3] = 0;
  }
  v4 = (_QWORD *)a1[2];
  if ( v4 )
  {
    v5 = v4[2] - 1LL;
    v4[2] = v5;
    if ( !v5 )
      (*(void (__fastcall **)(_QWORD *))(*v4 + 24LL))(v4);
  }
  v6 = (__int64 *)(*a1 - 24LL);
  if ( v6 != &qword_6FD2E0 )
  {
    v7 = (unsigned int *)(*a1 - 8LL);
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
      operator delete(v6);
  }
}

