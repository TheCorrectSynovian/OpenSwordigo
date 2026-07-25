/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004CE54C
 * Mangled: _ZNSt8_Rb_treeISsSt4pairIKSsN5boost13intrusive_ptrIN5Caver7TextureEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE14_M_create_nodeERKS7_
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>>>::_M_create_node(std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>> const&)
 *
 * Callers: 1
 *   0x00000000001F3990  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>>>::_M_create_node(std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>> const&)
 *
 * Callees: 12
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000054CA60  sub_54CA60
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 50
 *   insn=0x00000000004CE55C string=0x00000000004CE560 " "
 *   insn=0x00000000004CE560 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004CE564 string=0x00000000004CE568 "`"
 *   insn=0x00000000004CE574 string=0x00000000004CE578 "h"
 *   insn=0x00000000004CE57C string=0x00000000004CE580 "\t\t@"
 *   insn=0x00000000004CE580 string=0x00000000004CE584 ")"
 *   insn=0x00000000004CE584 string=0x00000000004CE588 "\t\t"
 *   insn=0x00000000004CE59C string=0x00000000001F45E0 "P'"
 *   insn=0x00000000004CE5A0 string=0x00000000004CE5A4 "C"
 *   insn=0x00000000004CE5A4 string=0x00000000004CE5A8 "r"
 *   insn=0x00000000004CE5A4 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004CE5B0 string=0x00000000001FD590 "0'"
 *   insn=0x00000000004CE5B8 string=0x00000000004CE5BC "d"
 *   insn=0x00000000004CE5D0 string=0x00000000004CE5D4 "U"
 *   insn=0x00000000004CE5E4 string=0x00000000004CE5E8 "h""
 *   insn=0x00000000004CE5FC string=0x00000000004CE600 "@"
 *   insn=0x00000000004CE600 string=0x00000000004CE604 ""
 *   insn=0x00000000004CE604 string=0x00000000004CE608 ""
 *   insn=0x00000000004CE60C string=0x00000000004CE610 ""
 *   insn=0x00000000004CE610 string=0x00000000004CE614 ""
 *   insn=0x00000000004CE620 string=0x00000000004CE624 ")"
 *   insn=0x00000000004CE638 string=0x00000000004CE63C "h"
 *   insn=0x00000000004CE63C string=0x00000000004CE640 ""
 *   insn=0x00000000004CE640 string=0x00000000004CE644 "h"
 *   insn=0x00000000004CE654 string=0x00000000004CE6B0 ""
 *   insn=0x00000000004CE66C string=0x00000000004CE670 ")=G"
 *   insn=0x00000000004CE670 string=0x00000000004CE674 "!"
 *   insn=0x00000000004CE678 string=0x00000000004CE67C "\t"
 *   insn=0x00000000004CE678 string=0x00000000004CE690 "\t"
 *   insn=0x00000000004CE67C string=0x00000000004CE680 "*"
 *   insn=0x00000000004CE680 string=0x00000000004CE684 "\n"
 *   insn=0x00000000004CE68C string=0x00000000004CE69C "?"
 *   insn=0x00000000004CE690 string=0x00000000004CE694 "*"
 *   insn=0x00000000004CE694 string=0x00000000004CE698 "\n"
 *   insn=0x00000000004CE6A4 string=0x00000000004CE6A8 "?o"
 *   insn=0x00000000004CE6B0 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004CE6B8 string=0x00000000004CE6BC "J"
 *   insn=0x00000000004CE6C0 string=0x00000000004CE6C4 "(a"
 *   insn=0x00000000004CE6D0 string=0x00000000004CE6D4 "J=G"
 *   insn=0x00000000004CE6D4 string=0x00000000004CE6D8 ")!"
 *   insn=0x00000000004CE6DC string=0x00000000004CE6E0 "*"
 *   insn=0x00000000004CE6DC string=0x00000000004CE70C "*"
 *   insn=0x00000000004CE6E0 string=0x00000000004CE6E4 "K"
 *   insn=0x00000000004CE6E4 string=0x00000000004CE6E8 "+"
 *   insn=0x00000000004CE6EC string=0x00000000004CE6F0 "_"
 *   insn=0x00000000004CE6FC string=0x00000000004CE700 ")o"
 *   insn=0x00000000004CE704 string=0x00000000004CE708 "o"
 *   insn=0x00000000004CE70C string=0x00000000004CE710 "K"
 *   insn=0x00000000004CE710 string=0x00000000004CE714 "+"
 *   insn=0x00000000004CE714 string=0x00000000004CE718 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>>>::_M_create_node(
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

