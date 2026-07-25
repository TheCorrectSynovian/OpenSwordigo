/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000045E6EC
 * Mangled: _ZNSt8_Rb_treeISsSt4pairIKSsN5boost8weak_ptrIN5Caver13ObjectLibraryEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE14_M_create_nodeERKS7_
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>>,std::_Select1st<std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>>>>::_M_create_node(std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>> const&)
 *
 * Callers: 1
 *   0x00000000001F3660  std::_Rb_tree<std::string,std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>>,std::_Select1st<std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>>>>::_M_create_node(std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>> const&)
 *
 * Callees: 9
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FAD10  Caver::ObjectLibrary::~ObjectLibrary()
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 20
 *   insn=0x000000000045E700 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000045E704 string=0x000000000045E708 "`"
 *   insn=0x000000000045E714 string=0x000000000045E718 "h"
 *   insn=0x000000000045E71C string=0x000000000045E720 "h"
 *   insn=0x000000000045E724 string=0x000000000045E728 "\t\t@"
 *   insn=0x000000000045E728 string=0x000000000045E72C ")"
 *   insn=0x000000000045E72C string=0x000000000045E730 "\t\t"
 *   insn=0x000000000045E744 string=0x00000000001F45E0 "P'"
 *   insn=0x000000000045E74C string=0x000000000045E750 ""
 *   insn=0x000000000045E74C string=0x00000000001F72B0 "0'"
 *   insn=0x000000000045E758 string=0x00000000001FD590 "0'"
 *   insn=0x000000000045E75C string=0x000000000045E760 "Y"
 *   insn=0x000000000045E784 string=0x000000000045E788 ")"
 *   insn=0x000000000045E788 string=0x000000000045E78C ")"
 *   insn=0x000000000045E798 string=0x000000000045E79C "(A"
 *   insn=0x000000000045E7A0 string=0x000000000045E7A4 ""
 *   insn=0x000000000045E7C0 string=0x000000000045E7C4 "Sq"
 *   insn=0x000000000045E7C4 string=0x00000000001FAD10 "0'"
 *   insn=0x000000000045E7E0 string=0x000000000045E7E8 "j{"
 *   insn=0x000000000045E7EC string=0x000000000045E7F0 "5"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::_Rb_tree<std::string,std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>>,std::_Select1st<std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>>>>::_M_create_node(
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
    ++*(_QWORD *)(v4 + 16);
  return v3;
}

