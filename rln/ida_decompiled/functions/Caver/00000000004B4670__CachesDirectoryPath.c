/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B4670
 * Mangled: _ZN5Caver19CachesDirectoryPathEv
 * Demangled: Caver::CachesDirectoryPath(void)
 *
 * Callers: 1
 *   0x00000000002016E0  Caver::CachesDirectoryPath(void)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FB380  Caver::CreateDirectoryAtPath(std::string const&,bool)
 *   0x00000000001FBDF0  Caver::StringByAppendingPathComponent(std::string const&,std::string const&)
 *   0x00000000001FDDD0  Caver::FileExistsAtPath(std::string const&)
 *   0x00000000004B4834  Caver::TemporaryDirectoryPath(void)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 47
 *   insn=0x00000000004B4680 string=0x00000000004B4684 "T"
 *   insn=0x00000000004B4694 string=0x000000000059739A "Caches"
 *   insn=0x00000000004B46A0 string=0x00000000004B46A4 "E"
 *   insn=0x00000000004B46B8 string=0x00000000001FBDF0 "0'"
 *   insn=0x00000000004B46D8 string=0x00000000001FDDD0 "0'"
 *   insn=0x00000000004B46E4 string=0x00000000004B46E8 "&"
 *   insn=0x00000000004B46E8 string=0x00000000001FB380 "0'"
 *   insn=0x00000000004B4710 string=0x00000000004B4714 ")=G"
 *   insn=0x00000000004B4714 string=0x00000000004B4718 "!"
 *   insn=0x00000000004B471C string=0x00000000004B4720 "\t"
 *   insn=0x00000000004B471C string=0x00000000004B4734 "\t"
 *   insn=0x00000000004B4720 string=0x00000000004B4724 "*"
 *   insn=0x00000000004B4724 string=0x00000000004B4728 "\n"
 *   insn=0x00000000004B4730 string=0x00000000004B4740 "?"
 *   insn=0x00000000004B4734 string=0x00000000004B4738 "*"
 *   insn=0x00000000004B4738 string=0x00000000004B473C "\n"
 *   insn=0x00000000004B4754 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004B475C string=0x00000000004B4760 "J"
 *   insn=0x00000000004B4764 string=0x00000000004B4768 "(a"
 *   insn=0x00000000004B4774 string=0x00000000004B4778 "J=G"
 *   insn=0x00000000004B4778 string=0x00000000004B477C ")!"
 *   insn=0x00000000004B477C string=0x00000000004B4780 "*"
 *   insn=0x00000000004B4780 string=0x00000000004B4784 "*"
 *   insn=0x00000000004B4780 string=0x00000000004B47A4 "*"
 *   insn=0x00000000004B4784 string=0x00000000004B4788 "K"
 *   insn=0x00000000004B4788 string=0x00000000004B478C "+"
 *   insn=0x00000000004B4790 string=0x00000000004B4794 "_"
 *   insn=0x00000000004B47A4 string=0x00000000004B47A8 "K"
 *   insn=0x00000000004B47A8 string=0x00000000004B47AC "+"
 *   insn=0x00000000004B47AC string=0x00000000004B47B0 "_"
 *   insn=0x00000000004B47B0 string=0x00000000004B47B4 "M"
 *   insn=0x00000000004B47C0 string=0x00000000004B47C4 "@4"
 *   insn=0x00000000004B47C4 string=0x00000000004B47C8 "i"
 *   insn=0x00000000004B47CC string=0x00000000004B47D0 "(a"
 *   insn=0x00000000004B47DC string=0x00000000004B47E0 "J=G"
 *   insn=0x00000000004B47E0 string=0x00000000004B47E4 ")!"
 *   insn=0x00000000004B47E8 string=0x00000000004B47EC "*"
 *   insn=0x00000000004B47E8 string=0x00000000004B4818 "*"
 *   insn=0x00000000004B47EC string=0x00000000004B47F0 "K"
 *   insn=0x00000000004B47F0 string=0x00000000004B47F4 "+"
 *   insn=0x00000000004B47F8 string=0x00000000004B47FC "_"
 *   insn=0x00000000004B47FC string=0x00000000004B4800 "l"
 *   insn=0x00000000004B4810 string=0x00000000004B4814 ",4"
 *   insn=0x00000000004B4818 string=0x00000000004B481C "K"
 *   insn=0x00000000004B481C string=0x00000000004B4820 "+"
 *   insn=0x00000000004B4820 string=0x00000000004B4824 "_"
 *   insn=0x00000000004B482C string=0x00000000004B4830 "%4"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::CachesDirectoryPath(Caver *this)
{
  void *v1; // x0
  __int64 result; // x0
  unsigned int *v3; // x8
  int v4; // w9
  _QWORD v5[3]; // [xsp+8h] [xbp-38h] BYREF

  v5[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_566BB8((int)v5, "Caches");
  Caver::StringByAppendingPathComponent();
  v1 = (void *)(v5[0] - 24LL);
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
      operator delete(v1);
  }
  result = Caver::FileExistsAtPath();
  if ( (result & 1) == 0 )
    return Caver::CreateDirectoryAtPath();
  return result;
}

