/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003BE3BC
 * Mangled: _ZNSt8_Rb_treeISsSt4pairIKSsN5boost10shared_ptrIN5Caver7MapNodeEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE14_M_create_nodeERKS7_
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::MapNode>> const&)
 *
 * Callers: 1
 *   0x00000000001FA730  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::MapNode>> const&)
 *
 * Callees: 10
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x00000000001FFD30  std::_Deque_base<boost::shared_ptr<Caver::MapNode>,std::allocator<boost::shared_ptr<Caver::MapNode>>>::_M_create_nodes(boost::shared_ptr<Caver::MapNode>**,boost::shared_ptr<Caver::MapNode>**)
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000565294  sub_565294
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 80
 *   insn=0x00000000003BE3D0 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003BE3D4 string=0x00000000003BE3D8 "`"
 *   insn=0x00000000003BE3DC string=0x00000000003BE3E0 "R"
 *   insn=0x00000000003BE3E4 string=0x00000000003BE3E8 "h"
 *   insn=0x00000000003BE3EC string=0x00000000003BE3F0 "h"
 *   insn=0x00000000003BE3F4 string=0x00000000003BE3F8 "\t"
 *   insn=0x00000000003BE3F8 string=0x00000000003BE3FC ")"
 *   insn=0x00000000003BE3FC string=0x00000000003BE400 "\t"
 *   insn=0x00000000003BE414 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000003BE41C string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003BE424 string=0x00000000003BE428 "Z"
 *   insn=0x00000000003BE428 string=0x00000000001FD590 "0'"
 *   insn=0x00000000003BE42C string=0x00000000003BE430 "%"
 *   insn=0x00000000003BE44C string=0x00000000003BE450 "\t"
 *   insn=0x00000000003BE450 string=0x00000000003BE454 "?!"
 *   insn=0x00000000003BE45C string=0x00000000003BE460 ")"
 *   insn=0x00000000003BE460 string=0x00000000003BE464 "i"
 *   insn=0x00000000003BE468 string=0x00000000003BE46C " "
 *   insn=0x00000000003BE468 string=0x00000000003BE4E4 "l"
 *   insn=0x00000000003BE470 string=0x00000000003BE474 "["
 *   insn=0x00000000003BE474 string=0x00000000003BE478 "h"
 *   insn=0x00000000003BE478 string=0x00000000003BE47C "`"
 *   insn=0x00000000003BE47C string=0x00000000003BE480 ""
 *   insn=0x00000000003BE480 string=0x00000000003BE484 ""
 *   insn=0x00000000003BE484 string=0x00000000003BE488 ""
 *   insn=0x00000000003BE49C string=0x00000000003BE4A0 "$"
 *   insn=0x00000000003BE4A8 string=0x00000000003BE4AC "i&"
 *   insn=0x00000000003BE4B0 string=0x00000000003BE4B4 "\t"
 *   insn=0x00000000003BE4B4 string=0x00000000003BE4B8 "h""
 *   insn=0x00000000003BE4B8 string=0x00000000003BE4BC "iZ"
 *   insn=0x00000000003BE4C0 string=0x00000000003BE4C4 "+"
 *   insn=0x00000000003BE4C4 string=0x00000000003BE4C8 "*"
 *   insn=0x00000000003BE4C8 string=0x00000000003BE4CC "j&"
 *   insn=0x00000000003BE4CC string=0x00000000003BE4D0 "k""
 *   insn=0x00000000003BE4E8 string=0x00000000003BE4EC "`"
 *   insn=0x00000000003BE4EC string=0x00000000003BE4F0 "p"
 *   insn=0x00000000003BE4FC string=0x00000000003BE500 "$"
 *   insn=0x00000000003BE534 string=0x00000000003BE538 "*"
 *   insn=0x00000000003BE560 string=0x00000000003BE564 "`"
 *   insn=0x00000000003BE564 string=0x00000000003BE568 "R"
 *   insn=0x00000000003BE584 string=0x00000000003BE588 "q?"
 *   insn=0x00000000003BE5A8 string=0x00000000003BE5AC "h"
 *   insn=0x00000000003BE5AC string=0x00000000003BE5B0 "6!"
 *   insn=0x00000000003BE5C8 string=0x00000000003BE5CC "5"
 *   insn=0x00000000003BE5D0 string=0x00000000003BE5D4 ""
 *   insn=0x00000000003BE5E4 string=0x00000000003BE5E8 "\t@"
 *   insn=0x00000000003BE5F0 string=0x00000000003BE5F4 ""
 *   insn=0x00000000003BE604 string=0x00000000003BE608 "@"
 *   insn=0x00000000003BE618 string=0x00000000003BE61C "h"
 *   insn=0x00000000003BE630 string=0x00000000003BE634 "?"
 *   insn=0x00000000003BE634 string=0x00000000003BE638 "@"
 *   insn=0x00000000003BE638 string=0x00000000003BE700 "t"
 *   insn=0x00000000003BE644 string=0x00000000003BE69C "tV@"
 *   insn=0x00000000003BE648 string=0x00000000003BE64C "4"
 *   insn=0x00000000003BE650 string=0x00000000003BE654 ""
 *   insn=0x00000000003BE664 string=0x00000000003BE668 "\t@"
 *   insn=0x00000000003BE670 string=0x00000000003BE674 ""
 *   insn=0x00000000003BE684 string=0x00000000003BE688 "@"
 *   insn=0x00000000003BE6A8 string=0x00000000003BE6AC "3"
 *   insn=0x00000000003BE6AC string=0x00000000003BE6B0 "h"
 *   insn=0x00000000003BE6B0 string=0x00000000003BE6B4 ""
 *   insn=0x00000000003BE6B4 string=0x00000000003BE6B8 "h"
 *   insn=0x00000000003BE6BC string=0x00000000003BE6C0 "h"
 *   insn=0x00000000003BE6C4 string=0x00000000003BE6C8 "\t@"
 *   insn=0x00000000003BE6CC string=0x00000000003BE6D0 "h\n@"
 *   insn=0x00000000003BE6D0 string=0x00000000003BE6D4 ""
 *   insn=0x00000000003BE6D4 string=0x00000000003BE6D8 "h\n"
 *   insn=0x00000000003BE6DC string=0x00000000003BE6E0 "h"
 *   insn=0x00000000003BE6E4 string=0x00000000003BE6E8 "@"
 *   insn=0x00000000003BE70C string=0x00000000003BE710 "3"
 *   insn=0x00000000003BE710 string=0x00000000003BE714 "h"
 *   insn=0x00000000003BE714 string=0x00000000003BE718 ""
 *   insn=0x00000000003BE718 string=0x00000000003BE71C "h"
 *   insn=0x00000000003BE720 string=0x00000000003BE724 "h"
 *   insn=0x00000000003BE728 string=0x00000000003BE72C "\t@"
 *   insn=0x00000000003BE730 string=0x00000000003BE734 "h\n@"
 *   insn=0x00000000003BE734 string=0x00000000003BE738 ""
 *   insn=0x00000000003BE738 string=0x00000000003BE73C "h\n"
 *   insn=0x00000000003BE740 string=0x00000000003BE744 "h"
 *   insn=0x00000000003BE748 string=0x00000000003BE74C "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>>>::_M_create_node(
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

