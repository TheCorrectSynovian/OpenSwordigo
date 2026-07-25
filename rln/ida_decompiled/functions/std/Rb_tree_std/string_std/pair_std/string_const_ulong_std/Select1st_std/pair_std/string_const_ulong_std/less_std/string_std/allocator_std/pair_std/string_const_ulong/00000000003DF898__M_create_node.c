/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003DF898
 * Mangled: _ZNSt8_Rb_treeISsSt4pairIKSsmESt10_Select1stIS2_ESt4lessISsESaIS2_EE14_M_create_nodeERKS2_
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,ulong>,std::_Select1st<std::pair<std::string const,ulong>>,std::less<std::string>,std::allocator<std::pair<std::string const,ulong>>>::_M_create_node(std::pair<std::string const,ulong> const&)
 *
 * Callers: 1
 *   0x00000000002006C0  std::_Rb_tree<std::string,std::pair<std::string const,ulong>,std::_Select1st<std::pair<std::string const,ulong>>,std::less<std::string>,std::allocator<std::pair<std::string const,ulong>>>::_M_create_node(std::pair<std::string const,ulong> const&)
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 30
 *   insn=0x00000000003DF8A8 string=0x00000000003DF8AC "MW"
 *   insn=0x00000000003DF8AC string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003DF8B0 string=0x00000000003DF8B4 "`"
 *   insn=0x00000000003DF8B8 string=0x00000000003DF8BC "+"
 *   insn=0x00000000003DF8C8 string=0x00000000003DF8CC "h"
 *   insn=0x00000000003DF8D8 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000003DF8DC string=0x00000000003DF8E0 "t^"
 *   insn=0x00000000003DF8E0 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003DF8E8 string=0x00000000003DF8EC ")w"
 *   insn=0x00000000003DF8EC string=0x00000000001FD590 "0'"
 *   insn=0x00000000003DF918 string=0x00000000003DF91C "vb"
 *   insn=0x00000000003DF920 string=0x00000000003DF924 "@"
 *   insn=0x00000000003DF924 string=0x00000000003DF928 "\t"
 *   insn=0x00000000003DF928 string=0x00000000003DF92C "?"
 *   insn=0x00000000003DF934 string=0x00000000003DF93C "(}"
 *   insn=0x00000000003DF93C string=0x00000000003DF940 ""
 *   insn=0x00000000003DF94C string=0x00000000003DF950 "\n"
 *   insn=0x00000000003DF950 string=0x00000000003DF954 "J"
 *   insn=0x00000000003DF954 string=0x00000000003DF958 "\n"
 *   insn=0x00000000003DF960 string=0x00000000003DF964 "5"
 *   insn=0x00000000003DF968 string=0x00000000003DF96C ""
 *   insn=0x00000000003DF97C string=0x00000000003DF980 "\t@"
 *   insn=0x00000000003DF988 string=0x00000000003DF98C ""
 *   insn=0x00000000003DF99C string=0x00000000003DF9A0 "@"
 *   insn=0x00000000003DF9B8 string=0x00000000003DF9BC "l"
 *   insn=0x00000000003DF9D4 string=0x00000000003DF9D8 "4"
 *   insn=0x00000000003DF9DC string=0x00000000003DF9E0 ""
 *   insn=0x00000000003DF9F0 string=0x00000000003DF9F4 "\t@"
 *   insn=0x00000000003DF9FC string=0x00000000003DFA00 ""
 *   insn=0x00000000003DFA10 string=0x00000000003DFA14 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::_Rb_tree<std::string,std::pair<std::string const,unsigned long>,std::_Select1st<std::pair<std::string const,unsigned long>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned long>>>::_M_create_node(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // x19
  __int64 result; // x0

  v3 = operator new(0x30u);
  sub_56A528(v3 + 32, a2);
  result = v3;
  *(_QWORD *)(v3 + 40) = *(_QWORD *)(a2 + 8);
  return result;
}

