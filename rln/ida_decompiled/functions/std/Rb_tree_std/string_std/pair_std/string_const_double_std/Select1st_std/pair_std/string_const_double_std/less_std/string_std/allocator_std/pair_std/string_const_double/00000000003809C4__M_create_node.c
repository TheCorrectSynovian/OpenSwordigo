/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003809C4
 * Mangled: _ZNSt8_Rb_treeISsSt4pairIKSsdESt10_Select1stIS2_ESt4lessISsESaIS2_EE14_M_create_nodeERKS2_
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,double>,std::_Select1st<std::pair<std::string const,double>>,std::less<std::string>,std::allocator<std::pair<std::string const,double>>>::_M_create_node(std::pair<std::string const,double> const&)
 *
 * Callers: 1
 *   0x00000000001F8EA0  std::_Rb_tree<std::string,std::pair<std::string const,double>,std::_Select1st<std::pair<std::string const,double>>,std::less<std::string>,std::allocator<std::pair<std::string const,double>>>::_M_create_node(std::pair<std::string const,double> const&)
 *
 * Callees: 9
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 29
 *   insn=0x00000000003809D8 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003809DC string=0x00000000003809E0 "`"
 *   insn=0x00000000003809F4 string=0x00000000003809F8 "h"
 *   insn=0x0000000000380A04 string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000380A08 string=0x0000000000380A0C ")"
 *   insn=0x0000000000380A0C string=0x0000000000380A10 "X"
 *   insn=0x0000000000380A0C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000380A18 string=0x00000000001FD590 "0'"
 *   insn=0x0000000000380A20 string=0x0000000000380A24 "J6"
 *   insn=0x0000000000380A4C string=0x0000000000380A50 "5"
 *   insn=0x0000000000380A70 string=0x0000000000380A74 "|"
 *   insn=0x0000000000380A7C string=0x00000000001F5190 "P'"
 *   insn=0x0000000000380A80 string=0x0000000000380A84 "@"
 *   insn=0x0000000000380AAC string=0x0000000000380AB0 "b"
 *   insn=0x0000000000380AC4 string=0x0000000000380AC8 "J"
 *   insn=0x0000000000380AE0 string=0x0000000000380AE4 ""
 *   insn=0x0000000000380B14 string=0x0000000000380B18 ";"
 *   insn=0x0000000000380B24 string=0x0000000000380B28 "`"
 *   insn=0x0000000000380B2C string=0x0000000000380B30 ""
 *   insn=0x0000000000380B40 string=0x0000000000380B44 "@"
 *   insn=0x0000000000380B44 string=0x0000000000380B48 "hc"
 *   insn=0x0000000000380B44 string=0x0000000000380B6C "hC"
 *   insn=0x0000000000380B48 string=0x0000000000380B4C ""
 *   insn=0x0000000000380B50 string=0x0000000000380B54 "\n"
 *   insn=0x0000000000380B70 string=0x0000000000380B74 ""
 *   insn=0x0000000000380B90 string=0x0000000000380B94 "("
 *   insn=0x0000000000380B9C string=0x0000000000380BA0 "|"
 *   insn=0x0000000000380BA4 string=0x0000000000380BA8 "`"
 *   insn=0x0000000000380BC8 string=0x0000000000380BCC "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::_Rb_tree<std::string,std::pair<std::string const,double>,std::_Select1st<std::pair<std::string const,double>>,std::less<std::string>,std::allocator<std::pair<std::string const,double>>>::_M_create_node(
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

