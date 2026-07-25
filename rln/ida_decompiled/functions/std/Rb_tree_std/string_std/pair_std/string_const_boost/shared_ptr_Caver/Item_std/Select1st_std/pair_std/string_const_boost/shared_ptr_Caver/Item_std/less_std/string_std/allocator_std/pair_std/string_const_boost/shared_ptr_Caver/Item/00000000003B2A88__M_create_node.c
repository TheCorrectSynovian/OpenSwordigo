/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003B2A88
 * Mangled: _ZNSt8_Rb_treeISsSt4pairIKSsN5boost10shared_ptrIN5Caver4ItemEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE14_M_create_nodeERKS7_
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Item>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Item>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Item>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::Item>> const&)
 *
 * Callers: 1
 *   0x00000000001FDAE0  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Item>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Item>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Item>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::Item>> const&)
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
 * Referenced strings: 27
 *   insn=0x00000000003B2A9C string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003B2AA0 string=0x00000000003B2AA4 "`"
 *   insn=0x00000000003B2AB0 string=0x00000000003B2AB4 "h"
 *   insn=0x00000000003B2AB8 string=0x00000000003B2ABC "h"
 *   insn=0x00000000003B2AC0 string=0x00000000003B2AC4 "\t"
 *   insn=0x00000000003B2AC4 string=0x00000000003B2AC8 ")"
 *   insn=0x00000000003B2AC8 string=0x00000000003B2ACC "\t"
 *   insn=0x00000000003B2AE0 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000003B2AE8 string=0x00000000003B2AEC "!@"
 *   insn=0x00000000003B2AE8 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003B2AF4 string=0x00000000001FD590 "0'"
 *   insn=0x00000000003B2AF8 string=0x00000000003B2AFC "r;"
 *   insn=0x00000000003B2B44 string=0x00000000003B2B48 "@"
 *   insn=0x00000000003B2B4C string=0x00000000003B2B50 ""
 *   insn=0x00000000003B2B5C string=0x00000000001F5190 "P'"
 *   insn=0x00000000003B2B60 string=0x00000000003B2B64 "@"
 *   insn=0x00000000003B2B64 string=0x00000000003B2B68 "Hc"
 *   insn=0x00000000003B2B64 string=0x00000000003B2B8C "HC"
 *   insn=0x00000000003B2B70 string=0x00000000003B2B74 "\n"
 *   insn=0x00000000003B2BB8 string=0x00000000003B2BBC ""
 *   insn=0x00000000003B2BBC string=0x00000000003B2BC0 ")"
 *   insn=0x00000000003B2BC4 string=0x00000000003B2BC8 """
 *   insn=0x00000000003B2BC8 string=0x00000000003B2BCC "q\t"
 *   insn=0x00000000003B2BCC string=0x00000000003B2BD0 "`"
 *   insn=0x00000000003B2BD0 string=0x00000000003B2BD4 "@"
 *   insn=0x00000000003B2BD4 string=0x00000000003B2BD8 "\n"
 *   insn=0x00000000003B2BF4 string=0x00000000003B2BF8 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Item>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Item>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Item>>>>::_M_create_node(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // x19
  __int64 v4; // x8

  v3 = operator new(0x38u);
  sub_56A528(v3 + 32, a2);
  *(_QWORD *)(v3 + 40) = *(_QWORD *)(a2 + 8);
  v4 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(v3 + 48) = v4;
  if ( v4 )
    ++*(_QWORD *)(v4 + 8);
  return v3;
}

