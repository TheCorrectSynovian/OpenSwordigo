/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BFC88
 * Mangled: _ZNSt8_Rb_treeISsSt4pairIKSsN5Caver12TargetActionIFvRS1_bS4_EEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE14_M_create_nodeERKS7_
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>,std::_Select1st<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>>>::_M_create_node(std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>> const&)
 *
 * Callers: 1
 *   0x0000000000203710  std::_Rb_tree<std::string,std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>,std::_Select1st<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>>>::_M_create_node(std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>> const&)
 *
 * Callees: 13
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x0000000000203D50  std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>::pair(std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>> const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 64
 *   insn=0x00000000004BFC98 string=0x00000000004BFC9C "Q"
 *   insn=0x00000000004BFC9C string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004BFCA0 string=0x00000000004BFCA4 "`"
 *   insn=0x00000000004BFCA8 string=0x00000000004BFCAC ")"
 *   insn=0x00000000004BFCC0 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000004BFCC4 string=0x00000000004BFCC8 "z"
 *   insn=0x00000000004BFCC8 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004BFCD0 string=0x00000000004BFCD4 "/"
 *   insn=0x00000000004BFCD4 string=0x00000000001FD590 "0'"
 *   insn=0x00000000004BFCF4 string=0x00000000004BFCF8 "U"
 *   insn=0x00000000004BFD08 string=0x00000000004BFD0C ""
 *   insn=0x00000000004BFD10 string=0x00000000004BFD14 "h"
 *   insn=0x00000000004BFD18 string=0x00000000004BFD1C "h\n"
 *   insn=0x00000000004BFD20 string=0x00000000004BFD24 "\t\t@"
 *   insn=0x00000000004BFD24 string=0x00000000004BFD28 ")"
 *   insn=0x00000000004BFD28 string=0x00000000004BFD2C "\t\t"
 *   insn=0x00000000004BFD38 string=0x00000000004BFD3C "h"
 *   insn=0x00000000004BFD3C string=0x00000000004BFD40 ""
 *   insn=0x00000000004BFD40 string=0x00000000004BFD44 ""
 *   insn=0x00000000004BFD44 string=0x00000000004BFD48 ""
 *   insn=0x00000000004BFD4C string=0x00000000004BFD50 "a"
 *   insn=0x00000000004BFD60 string=0x00000000004BFD64 "h"
 *   insn=0x00000000004BFD68 string=0x00000000004BFD6C "`\n"
 *   insn=0x00000000004BFD7C string=0x00000000004BFD94 "O"
 *   insn=0x00000000004BFD94 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004BFD9C string=0x00000000004BFDA0 "("
 *   insn=0x00000000004BFDA0 string=0x00000000004BFDA4 "\t\t@"
 *   insn=0x00000000004BFDA0 string=0x00000000004BFDC4 "h"
 *   insn=0x00000000004BFDA4 string=0x00000000004BFDA8 ")"
 *   insn=0x00000000004BFDA8 string=0x00000000004BFDAC "\t\t"
 *   insn=0x00000000004BFDB0 string=0x00000000004BFDB4 "\t"
 *   insn=0x00000000004BFDB4 string=0x00000000004BFDB8 ")@"
 *   insn=0x00000000004BFDBC string=0x00000000004BFDC0 " "
 *   insn=0x00000000004BFDC4 string=0x00000000004BFDC8 ")"
 *   insn=0x00000000004BFDC8 string=0x00000000004BFDCC ")"
 *   insn=0x00000000004BFDD8 string=0x00000000004BFDDC ")"
 *   insn=0x00000000004BFDDC string=0x00000000004BFDE0 ")=G"
 *   insn=0x00000000004BFDE0 string=0x00000000004BFDE4 "!"
 *   insn=0x00000000004BFDE4 string=0x00000000004BFDE8 "i"
 *   insn=0x00000000004BFDE8 string=0x00000000004BFDEC "\t"
 *   insn=0x00000000004BFDE8 string=0x00000000004BFE14 "\t"
 *   insn=0x00000000004BFDEC string=0x00000000004BFDF0 "*"
 *   insn=0x00000000004BFDF0 string=0x00000000004BFDF4 "\n"
 *   insn=0x00000000004BFDF8 string=0x00000000004BFDFC "?"
 *   insn=0x00000000004BFDFC string=0x00000000004BFE00 "l"
 *   insn=0x00000000004BFE04 string=0x00000000004BFE08 "g"
 *   insn=0x00000000004BFE14 string=0x00000000004BFE18 "*"
 *   insn=0x00000000004BFE18 string=0x00000000004BFE1C "\n"
 *   insn=0x00000000004BFE1C string=0x00000000004BFE20 "?"
 *   insn=0x00000000004BFE20 string=0x00000000004BFE24 ""
 *   insn=0x00000000004BFE70 string=0x00000000004BFE74 "@"
 *   insn=0x00000000004BFE78 string=0x00000000004BFE7C ""
 *   insn=0x00000000004BFE88 string=0x00000000001F5190 "P'"
 *   insn=0x00000000004BFE8C string=0x00000000004BFE90 "@"
 *   insn=0x00000000004BFE90 string=0x00000000004BFE94 "Hc"
 *   insn=0x00000000004BFE90 string=0x00000000004BFEB8 "HC"
 *   insn=0x00000000004BFE9C string=0x00000000004BFEA0 "\n"
 *   insn=0x00000000004BFEE4 string=0x00000000004BFEE8 ""
 *   insn=0x00000000004BFEE8 string=0x00000000004BFEEC ")"
 *   insn=0x00000000004BFEF0 string=0x00000000004BFEF4 """
 *   insn=0x00000000004BFEF8 string=0x00000000004BFEFC "`"
 *   insn=0x00000000004BFEFC string=0x00000000004BFF00 "@"
 *   insn=0x00000000004BFF00 string=0x00000000004BFF04 "\n"
 *   insn=0x00000000004BFF20 string=0x00000000004BFF24 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 std::_Rb_tree<std::string,std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>,std::_Select1st<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>>>::_M_create_node()
{
  __int64 v0; // x19

  v0 = operator new(0x58u);
  std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>::pair();
  return v0;
}

