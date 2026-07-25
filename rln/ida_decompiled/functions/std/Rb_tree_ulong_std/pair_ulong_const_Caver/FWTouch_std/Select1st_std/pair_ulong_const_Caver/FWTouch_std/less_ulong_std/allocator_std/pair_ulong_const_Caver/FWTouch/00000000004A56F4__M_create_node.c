/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A56F4
 * Mangled: _ZNSt8_Rb_treeImSt4pairIKmN5Caver7FWTouchEESt10_Select1stIS4_ESt4lessImESaIS4_EE14_M_create_nodeERKS4_
 * Demangled: std::_Rb_tree<ulong,std::pair<ulong const,Caver::FWTouch>,std::_Select1st<std::pair<ulong const,Caver::FWTouch>>,std::less<ulong>,std::allocator<std::pair<ulong const,Caver::FWTouch>>>::_M_create_node(std::pair<ulong const,Caver::FWTouch> const&)
 *
 * Callers: 1
 *   0x00000000002025C0  std::_Rb_tree<ulong,std::pair<ulong const,Caver::FWTouch>,std::_Select1st<std::pair<ulong const,Caver::FWTouch>>,std::less<ulong>,std::allocator<std::pair<ulong const,Caver::FWTouch>>>::_M_create_node(std::pair<ulong const,Caver::FWTouch> const&)
 *
 * Callees: 11
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x00000000001FD9E0  Caver::FWTouch::FWTouch(Caver::FWTouch const&)
 *   0x00000000001FE860  std::_Rb_tree<ulong,std::pair<ulong const,Caver::FWTouch>,std::_Select1st<std::pair<ulong const,Caver::FWTouch>>,std::less<ulong>,std::allocator<std::pair<ulong const,Caver::FWTouch>>>::_M_erase(std::_Rb_tree_node<std::pair<ulong const,Caver::FWTouch>> *)
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000054C6A0  sub_54C6A0
 *   0x000000000054CA60  sub_54CA60
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 38
 *   insn=0x00000000004A5708 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004A5710 string=0x00000000004A5714 "`"
 *   insn=0x00000000004A5714 string=0x00000000004A5718 "h"
 *   insn=0x00000000004A5720 string=0x00000000001FD9E0 "0'"
 *   insn=0x00000000004A5734 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000004A573C string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004A5748 string=0x00000000001FD590 "0'"
 *   insn=0x00000000004A574C string=0x00000000004A5750 "]p"
 *   insn=0x00000000004A5770 string=0x00000000004A5774 "a\n@"
 *   insn=0x00000000004A5774 string=0x00000000004A5778 "t""
 *   insn=0x00000000004A5778 string=0x00000000004A577C "a"
 *   insn=0x00000000004A577C string=0x00000000004A5780 ""
 *   insn=0x00000000004A578C string=0x00000000004A5790 "?"
 *   insn=0x00000000004A579C string=0x00000000004A57A0 "j"
 *   insn=0x00000000004A57A0 string=0x00000000004A57A4 ""
 *   insn=0x00000000004A57AC string=0x00000000004A57B0 """
 *   insn=0x00000000004A57C4 string=0x00000000004A5820 "x"
 *   insn=0x00000000004A57D4 string=0x00000000004A57D8 "*"
 *   insn=0x00000000004A57D8 string=0x00000000004A57DC "K"
 *   insn=0x00000000004A57D8 string=0x00000000004A57FC ")"
 *   insn=0x00000000004A57DC string=0x00000000004A57E0 "La"
 *   insn=0x00000000004A57E0 string=0x00000000004A57E4 "MA"
 *   insn=0x00000000004A57F0 string=0x00000000004A57F4 "j"
 *   insn=0x00000000004A57F4 string=0x00000000004A57F8 "*"
 *   insn=0x00000000004A57FC string=0x00000000004A5800 "*"
 *   insn=0x00000000004A5800 string=0x00000000004A5804 "+a"
 *   insn=0x00000000004A5804 string=0x00000000004A5808 ",A"
 *   insn=0x00000000004A5810 string=0x00000000004A5814 "71"
 *   insn=0x00000000004A5814 string=0x00000000004A5818 "I"
 *   insn=0x00000000004A5818 string=0x00000000004A581C ")"
 *   insn=0x00000000004A5824 string=0x00000000004A5828 "A"
 *   insn=0x00000000004A5828 string=0x00000000004A582C "h"
 *   insn=0x00000000004A5838 string=0x00000000004A583C "\td"
 *   insn=0x00000000004A5844 string=0x00000000004A5848 "t~"
 *   insn=0x00000000004A5868 string=0x00000000004A586C "}"
 *   insn=0x00000000004A5870 string=0x00000000004A5874 "h"
 *   insn=0x00000000004A587C string=0x00000000004A5880 ""
 *   insn=0x00000000004A5880 string=0x00000000004A5884 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::_Rb_tree<unsigned long,std::pair<unsigned long const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned long const,Caver::FWTouch>>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Caver::FWTouch>>>::_M_create_node(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // x19

  v3 = operator new(0x50u);
  *(_QWORD *)(v3 + 32) = *a2;
  Caver::FWTouch::FWTouch((Caver::FWTouch *)(v3 + 40), (const Caver::FWTouch *)(a2 + 1));
  return v3;
}

