/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003A7D94
 * Mangled: _ZNSt8_Rb_treeISsSt4pairIKSsN5boost10shared_ptrIN5Caver13PlayerProfileEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE14_M_create_nodeERKS7_
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>> const&)
 *
 * Callers: 1
 *   0x00000000001F9670  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>> const&)
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
 *   insn=0x00000000003A7DA8 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003A7DAC string=0x00000000003A7DB0 "`"
 *   insn=0x00000000003A7DBC string=0x00000000003A7DC0 "h"
 *   insn=0x00000000003A7DC4 string=0x00000000003A7DC8 "h"
 *   insn=0x00000000003A7DCC string=0x00000000003A7DD0 "\t"
 *   insn=0x00000000003A7DD0 string=0x00000000003A7DD4 ")"
 *   insn=0x00000000003A7DD4 string=0x00000000003A7DD8 "\t"
 *   insn=0x00000000003A7DEC string=0x00000000001F45E0 "P'"
 *   insn=0x00000000003A7DF0 string=0x00000000003A7DF4 "/="
 *   insn=0x00000000003A7DF4 string=0x00000000003A7DF8 "^k"
 *   insn=0x00000000003A7DF4 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003A7E00 string=0x00000000001FD590 "0'"
 *   insn=0x00000000003A7E08 string=0x00000000003A7E0C "P"
 *   insn=0x00000000003A7E50 string=0x00000000003A7E54 "@"
 *   insn=0x00000000003A7E58 string=0x00000000003A7E5C ""
 *   insn=0x00000000003A7E68 string=0x00000000001F5190 "P'"
 *   insn=0x00000000003A7E6C string=0x00000000003A7E70 "@"
 *   insn=0x00000000003A7E70 string=0x00000000003A7E74 "Hc"
 *   insn=0x00000000003A7E70 string=0x00000000003A7E98 "HC"
 *   insn=0x00000000003A7E7C string=0x00000000003A7E80 "\n"
 *   insn=0x00000000003A7EC4 string=0x00000000003A7EC8 ""
 *   insn=0x00000000003A7EC8 string=0x00000000003A7ECC ")"
 *   insn=0x00000000003A7ED0 string=0x00000000003A7ED4 """
 *   insn=0x00000000003A7ED8 string=0x00000000003A7EDC "`"
 *   insn=0x00000000003A7EDC string=0x00000000003A7EE0 "@"
 *   insn=0x00000000003A7EE0 string=0x00000000003A7EE4 "\n"
 *   insn=0x00000000003A7F00 string=0x00000000003A7F04 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>>>::_M_create_node(
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

