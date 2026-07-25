/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003BDD08
 * Mangled: _ZNSt8_Rb_treeISsSt4pairIKSsN5boost10shared_ptrIN5Caver7MapZoneEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE14_M_create_nodeERKS7_
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::MapZone>> const&)
 *
 * Callers: 1
 *   0x0000000000201AE0  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::MapZone>> const&)
 *
 * Callees: 9
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x00000000001FFA30  Caver::MapNode::~MapNode()
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 23
 *   insn=0x00000000003BDD18 string=0x00000000003BDD1C "1"
 *   insn=0x00000000003BDD1C string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003BDD20 string=0x00000000003BDD24 "`"
 *   insn=0x00000000003BDD30 string=0x00000000003BDD34 "h"
 *   insn=0x00000000003BDD38 string=0x00000000003BDD3C "h"
 *   insn=0x00000000003BDD40 string=0x00000000003BDD44 "\t"
 *   insn=0x00000000003BDD44 string=0x00000000003BDD48 ")"
 *   insn=0x00000000003BDD48 string=0x00000000003BDD4C "\t"
 *   insn=0x00000000003BDD60 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000003BDD64 string=0x00000000003BDD68 "R"
 *   insn=0x00000000003BDD68 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003BDD70 string=0x00000000003BDD74 ""
 *   insn=0x00000000003BDD74 string=0x00000000001FD590 "0'"
 *   insn=0x00000000003BDD7C string=0x00000000003BDD80 "sA"
 *   insn=0x00000000003BDDA0 string=0x00000000003BDDA4 "I"
 *   insn=0x00000000003BDDA4 string=0x00000000003BDDA8 ")QB"
 *   insn=0x00000000003BDDB4 string=0x00000000003BDDB8 "(A"
 *   insn=0x00000000003BDDBC string=0x00000000003BDDC0 ""
 *   insn=0x00000000003BDDD8 string=0x00000000003BDDEC "a"
 *   insn=0x00000000003BDDE4 string=0x00000000003BDDE8 "2"
 *   insn=0x00000000003BDDF4 string=0x00000000003BDDF8 "."
 *   insn=0x00000000003BDE0C string=0x00000000003BDE10 "OA"
 *   insn=0x00000000003BDE10 string=0x00000000003BDE14 "'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>>>::_M_create_node(
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

