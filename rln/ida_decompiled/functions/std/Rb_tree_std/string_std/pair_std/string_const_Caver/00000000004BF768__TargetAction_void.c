/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BF768
 * Mangled: _ZNSt8_Rb_treeISsSt4pairIKSsN5Caver12TargetActionIFvRS1_RKN5boost10shared_ptrINS2_12StoreProductEEES4_EEEESt10_Select1stISD_ESt4lessISsESaISD_EE14_M_create_nodeERKSD_
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>,std::_Select1st<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>>>::_M_create_node(std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>> const&)
 *
 * Callers: 1
 *   0x0000000000201090  std::_Rb_tree<std::string,std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>,std::_Select1st<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>>>::_M_create_node(std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>> const&)
 *
 * Callees: 16
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F9CA0  std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>::pair(std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>> const&)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000201C40  std::_Rb_tree<std::string,std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>,std::_Select1st<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>>>::_M_get_insert_unique_pos(std::string const&)
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000054C640  sub_54C640
 *   0x000000000054C700  sub_54C700
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 82
 *   insn=0x00000000004BF77C string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004BF780 string=0x00000000004BF784 "`"
 *   insn=0x00000000004BF788 string=0x00000000004BF78C "E"
 *   insn=0x00000000004BF78C string=0x00000000001F9CA0 "0'"
 *   insn=0x00000000004BF7A0 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000004BF7A8 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004BF7B0 string=0x00000000004BF7B4 "w"
 *   insn=0x00000000004BF7B4 string=0x00000000001FD590 "0'"
 *   insn=0x00000000004BF7B8 string=0x00000000004BF7BC "B"
 *   insn=0x00000000004BF7D4 string=0x00000000004BF7D8 "U"
 *   insn=0x00000000004BF7E8 string=0x00000000004BF7EC "O"
 *   insn=0x00000000004BF7F0 string=0x00000000004BF7F4 "h"
 *   insn=0x00000000004BF7F8 string=0x00000000004BF7FC "h\n"
 *   insn=0x00000000004BF800 string=0x00000000004BF804 "\t\t@"
 *   insn=0x00000000004BF804 string=0x00000000004BF808 ")"
 *   insn=0x00000000004BF808 string=0x00000000004BF80C "\t\t"
 *   insn=0x00000000004BF818 string=0x00000000004BF81C "h"
 *   insn=0x00000000004BF81C string=0x00000000004BF820 ""
 *   insn=0x00000000004BF820 string=0x00000000004BF824 ""
 *   insn=0x00000000004BF824 string=0x00000000004BF828 ""
 *   insn=0x00000000004BF82C string=0x00000000004BF830 "a"
 *   insn=0x00000000004BF840 string=0x00000000004BF844 "h"
 *   insn=0x00000000004BF848 string=0x00000000004BF84C "`\n"
 *   insn=0x00000000004BF874 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004BF87C string=0x00000000004BF880 "("
 *   insn=0x00000000004BF880 string=0x00000000004BF884 "\t\t@"
 *   insn=0x00000000004BF880 string=0x00000000004BF8A4 "h"
 *   insn=0x00000000004BF884 string=0x00000000004BF888 ")"
 *   insn=0x00000000004BF888 string=0x00000000004BF88C "\t\t"
 *   insn=0x00000000004BF890 string=0x00000000004BF894 "\t"
 *   insn=0x00000000004BF894 string=0x00000000004BF898 ")@"
 *   insn=0x00000000004BF89C string=0x00000000004BF8A0 " "
 *   insn=0x00000000004BF8A4 string=0x00000000004BF8A8 ")"
 *   insn=0x00000000004BF8A8 string=0x00000000004BF8AC ")"
 *   insn=0x00000000004BF8B8 string=0x00000000004BF8BC ")"
 *   insn=0x00000000004BF8BC string=0x00000000004BF8C0 ")=G"
 *   insn=0x00000000004BF8C0 string=0x00000000004BF8C4 "!"
 *   insn=0x00000000004BF8C4 string=0x00000000004BF8C8 "i"
 *   insn=0x00000000004BF8C8 string=0x00000000004BF8CC "\t"
 *   insn=0x00000000004BF8C8 string=0x00000000004BF8F4 "\t"
 *   insn=0x00000000004BF8CC string=0x00000000004BF8D0 "*"
 *   insn=0x00000000004BF8D0 string=0x00000000004BF8D4 "\n"
 *   insn=0x00000000004BF8D8 string=0x00000000004BF8DC "?"
 *   insn=0x00000000004BF8DC string=0x00000000004BF8E0 "l"
 *   insn=0x00000000004BF8F4 string=0x00000000004BF8F8 "*"
 *   insn=0x00000000004BF8F8 string=0x00000000004BF8FC "\n"
 *   insn=0x00000000004BF8FC string=0x00000000004BF900 "?"
 *   insn=0x00000000004BF900 string=0x00000000004BF904 ""
 *   insn=0x00000000004BF938 string=0x00000000004BF93C "`"
 *   insn=0x00000000004BF940 string=0x00000000004BF944 "w"
 *   insn=0x00000000004BF958 string=0x00000000004BF95C """
 *   insn=0x00000000004BF960 string=0x00000000001F5190 "P'"
 *   insn=0x00000000004BF968 string=0x00000000004BF9FC ":"
 *   insn=0x00000000004BF978 string=0x00000000004BF97C "a3"
 *   insn=0x00000000004BF988 string=0x00000000004BF98C ""
 *   insn=0x00000000004BF9A0 string=0x00000000004BF9A4 "c"
 *   insn=0x00000000004BF9B8 string=0x00000000004BF9BC ")"
 *   insn=0x00000000004BF9BC string=0x00000000004BF9C0 ""
 *   insn=0x00000000004BF9C4 string=0x00000000004BF9C8 """
 *   insn=0x00000000004BF9D0 string=0x00000000004BF9D4 "@\t"
 *   insn=0x00000000004BF9D4 string=0x00000000004BF9D8 "="
 *   insn=0x00000000004BF9DC string=0x00000000004BF9E0 "_"
 *   insn=0x00000000004BF9E8 string=0x00000000004BF9EC "_"
 *   insn=0x00000000004BF9F0 string=0x00000000004BF9F4 "@"
 *   insn=0x00000000004BFA1C string=0x00000000004BFA20 "`"
 *   insn=0x00000000004BFA34 string=0x00000000004BFA38 "("
 *   insn=0x00000000004BFA4C string=0x00000000004BFA50 "?"
 *   insn=0x00000000004BFA50 string=0x00000000004BFA54 "L"
 *   insn=0x00000000004BFA58 string=0x00000000004BFA5C "?"
 *   insn=0x00000000004BFA60 string=0x00000000004BFA64 " "
 *   insn=0x00000000004BFA68 string=0x00000000004BFA6C "h"
 *   insn=0x00000000004BFA74 string=0x00000000004BFA78 "w"
 *   insn=0x00000000004BFA7C string=0x00000000004BFA80 "$"
 *   insn=0x00000000004BFA84 string=0x00000000004BFA88 "_"
 *   insn=0x00000000004BFA90 string=0x00000000004BFA94 "_"
 *   insn=0x00000000004BFA98 string=0x00000000004BFA9C "@"
 *   insn=0x00000000004BFAB0 string=0x00000000004BFAB4 "L"
 *   insn=0x00000000004BFAC0 string=0x00000000004BFAC4 "`"
 *   insn=0x00000000004BFADC string=0x00000000004BFAE0 "?"
 *   insn=0x00000000004BFAE8 string=0x00000000004BFAEC "?"
 *   insn=0x00000000004BFAF0 string=0x00000000004BFAF4 " "
 *   insn=0x00000000004BFB00 string=0x00000000004BFB04 "O"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 std::_Rb_tree<std::string,std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>,std::_Select1st<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>>>::_M_create_node()
{
  __int64 v0; // x19

  v0 = operator new(0x58u);
  std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>::pair();
  return v0;
}

