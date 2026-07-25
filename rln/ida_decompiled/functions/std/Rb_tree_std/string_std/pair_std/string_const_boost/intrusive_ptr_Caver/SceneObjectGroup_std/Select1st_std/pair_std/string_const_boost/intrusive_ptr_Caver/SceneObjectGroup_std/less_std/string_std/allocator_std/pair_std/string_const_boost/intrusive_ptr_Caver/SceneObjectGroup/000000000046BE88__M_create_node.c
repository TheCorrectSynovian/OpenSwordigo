/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000046BE88
 * Mangled: _ZNSt8_Rb_treeISsSt4pairIKSsN5boost13intrusive_ptrIN5Caver16SceneObjectGroupEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE14_M_create_nodeERKS7_
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>::_M_create_node(std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>> const&)
 *
 * Callers: 1
 *   0x00000000001FA460  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>::_M_create_node(std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>> const&)
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
 * Referenced strings: 32
 *   insn=0x000000000046BE9C string=0x00000000001F55E0 "P'"
 *   insn=0x000000000046BEA0 string=0x000000000046BEA4 "`"
 *   insn=0x000000000046BEB0 string=0x000000000046BEB4 "h"
 *   insn=0x000000000046BEB8 string=0x000000000046BEBC "\t\t@"
 *   insn=0x000000000046BEBC string=0x000000000046BEC0 ")"
 *   insn=0x000000000046BEC0 string=0x000000000046BEC4 "\t\t"
 *   insn=0x000000000046BED8 string=0x00000000001F45E0 "P'"
 *   insn=0x000000000046BEE0 string=0x000000000046BEE4 "#["
 *   insn=0x000000000046BEE0 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000046BEEC string=0x00000000001FD590 "0'"
 *   insn=0x000000000046BEF0 string=0x000000000046BEF4 "tV"
 *   insn=0x000000000046BF20 string=0x000000000046BF24 "5"
 *   insn=0x000000000046BF44 string=0x000000000046BF48 "|"
 *   insn=0x000000000046BF50 string=0x00000000001F5190 "P'"
 *   insn=0x000000000046BF54 string=0x000000000046BF58 "@"
 *   insn=0x000000000046BF80 string=0x000000000046BF84 "b"
 *   insn=0x000000000046BF98 string=0x000000000046BF9C "J"
 *   insn=0x000000000046BFB4 string=0x000000000046BFB8 ""
 *   insn=0x000000000046BFE8 string=0x000000000046BFEC ";"
 *   insn=0x000000000046BFF8 string=0x000000000046BFFC "`"
 *   insn=0x000000000046C000 string=0x000000000046C004 ""
 *   insn=0x000000000046C00C string=0x000000000046C010 "`$"
 *   insn=0x000000000046C014 string=0x000000000046C018 "@"
 *   insn=0x000000000046C018 string=0x000000000046C01C "hc"
 *   insn=0x000000000046C018 string=0x000000000046C040 "hC"
 *   insn=0x000000000046C01C string=0x000000000046C020 ""
 *   insn=0x000000000046C024 string=0x000000000046C028 "\n"
 *   insn=0x000000000046C044 string=0x000000000046C048 ""
 *   insn=0x000000000046C064 string=0x000000000046C068 "("
 *   insn=0x000000000046C070 string=0x000000000046C074 "G$"
 *   insn=0x000000000046C078 string=0x000000000046C07C "`"
 *   insn=0x000000000046C09C string=0x000000000046C0A0 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>::_M_create_node(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // x19
  __int64 v4; // x8

  v3 = operator new(0x30u);
  sub_56A528(v3 + 32, a2);
  v4 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(v3 + 40) = v4;
  if ( v4 )
    ++*(_DWORD *)(v4 + 8);
  return v3;
}

