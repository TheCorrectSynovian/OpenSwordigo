/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C50A8
 * Mangled: _ZNSt8_Rb_treeISsSt4pairIKSsN5boost8weak_ptrIN5Caver4FontEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE14_M_create_nodeERKS7_
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,boost::weak_ptr<Caver::Font>>,std::_Select1st<std::pair<std::string const,boost::weak_ptr<Caver::Font>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::weak_ptr<Caver::Font>>>>::_M_create_node(std::pair<std::string const,boost::weak_ptr<Caver::Font>> const&)
 *
 * Callers: 1
 *   0x00000000001FC690  std::_Rb_tree<std::string,std::pair<std::string const,boost::weak_ptr<Caver::Font>>,std::_Select1st<std::pair<std::string const,boost::weak_ptr<Caver::Font>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::weak_ptr<Caver::Font>>>>::_M_create_node(std::pair<std::string const,boost::weak_ptr<Caver::Font>> const&)
 *
 * Callees: 9
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F9830  Caver::Sprite::Clear(void)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 20
 *   insn=0x00000000004C50B8 string=0x00000000004C50BC "I"
 *   insn=0x00000000004C50BC string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004C50C0 string=0x00000000004C50C4 "`"
 *   insn=0x00000000004C50D0 string=0x00000000004C50D4 "h"
 *   insn=0x00000000004C50D8 string=0x00000000004C50DC "h"
 *   insn=0x00000000004C50E0 string=0x00000000004C50E4 "\t\t@"
 *   insn=0x00000000004C50E4 string=0x00000000004C50E8 ")"
 *   insn=0x00000000004C50E8 string=0x00000000004C50EC "\t\t"
 *   insn=0x00000000004C5100 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000004C5104 string=0x00000000004C5108 "j"
 *   insn=0x00000000004C5108 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004C5114 string=0x00000000001FD590 "0'"
 *   insn=0x00000000004C5130 string=0x00000000004C5134 "`b"
 *   insn=0x00000000004C5144 string=0x00000000004C5148 "hZ@"
 *   insn=0x00000000004C5144 string=0x00000000001F9830 "0'"
 *   insn=0x00000000004C5148 string=0x00000000004C514C "if@"
 *   insn=0x00000000004C514C string=0x00000000004C5150 "\n"
 *   insn=0x00000000004C5154 string=0x00000000004C5158 "j"
 *   insn=0x00000000004C5158 string=0x00000000004C515C "h^"
 *   insn=0x00000000004C515C string=0x00000000004C5160 "ij"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::_Rb_tree<std::string,std::pair<std::string const,boost::weak_ptr<Caver::Font>>,std::_Select1st<std::pair<std::string const,boost::weak_ptr<Caver::Font>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::weak_ptr<Caver::Font>>>>::_M_create_node(
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

