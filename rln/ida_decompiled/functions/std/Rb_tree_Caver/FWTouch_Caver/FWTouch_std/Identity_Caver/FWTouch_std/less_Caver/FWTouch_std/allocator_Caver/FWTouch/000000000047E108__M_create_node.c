/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047E108
 * Mangled: _ZNSt8_Rb_treeIN5Caver7FWTouchES1_St9_IdentityIS1_ESt4lessIS1_ESaIS1_EE14_M_create_nodeERKS1_
 * Demangled: std::_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>::_M_create_node(Caver::FWTouch const&)
 *
 * Callers: 1
 *   0x00000000002002C0  std::_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>::_M_create_node(Caver::FWTouch const&)
 *
 * Callees: 11
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F66B0  std::_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>::_M_erase(std::_Rb_tree_node<Caver::FWTouch> *)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x00000000001FD9E0  Caver::FWTouch::FWTouch(Caver::FWTouch const&)
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000054C6A0  sub_54C6A0
 *   0x000000000054CA60  sub_54CA60
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 40
 *   insn=0x000000000047E118 string=0x000000000047E11C "1"
 *   insn=0x000000000047E11C string=0x00000000001F55E0 "P'"
 *   insn=0x000000000047E120 string=0x000000000047E124 "`"
 *   insn=0x000000000047E128 string=0x000000000047E12C "-"
 *   insn=0x000000000047E12C string=0x00000000001FD9E0 "0'"
 *   insn=0x000000000047E140 string=0x00000000001F45E0 "P'"
 *   insn=0x000000000047E144 string=0x000000000047E148 "Z"
 *   insn=0x000000000047E148 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000047E154 string=0x00000000001FD590 "0'"
 *   insn=0x000000000047E15C string=0x000000000047E160 "{@"
 *   insn=0x000000000047E17C string=0x000000000047E180 "a\n@"
 *   insn=0x000000000047E180 string=0x000000000047E184 "t""
 *   insn=0x000000000047E184 string=0x000000000047E188 "a"
 *   insn=0x000000000047E188 string=0x000000000047E18C ""
 *   insn=0x000000000047E198 string=0x000000000047E19C "?"
 *   insn=0x000000000047E1A8 string=0x000000000047E1AC "j"
 *   insn=0x000000000047E1AC string=0x000000000047E1B0 ""
 *   insn=0x000000000047E1B8 string=0x000000000047E1BC """
 *   insn=0x000000000047E1D0 string=0x000000000047E22C "x"
 *   insn=0x000000000047E1E0 string=0x000000000047E1E4 "*"
 *   insn=0x000000000047E1E4 string=0x000000000047E1E8 "K"
 *   insn=0x000000000047E1E4 string=0x000000000047E208 ")"
 *   insn=0x000000000047E1E8 string=0x000000000047E1EC "La"
 *   insn=0x000000000047E1EC string=0x000000000047E1F0 "MA"
 *   insn=0x000000000047E1FC string=0x000000000047E200 "j"
 *   insn=0x000000000047E200 string=0x000000000047E204 "*"
 *   insn=0x000000000047E208 string=0x000000000047E20C "*"
 *   insn=0x000000000047E20C string=0x000000000047E210 "+a"
 *   insn=0x000000000047E210 string=0x000000000047E214 ",A"
 *   insn=0x000000000047E21C string=0x000000000047E220 "71"
 *   insn=0x000000000047E220 string=0x000000000047E224 "I"
 *   insn=0x000000000047E224 string=0x000000000047E228 ")"
 *   insn=0x000000000047E230 string=0x000000000047E234 "A"
 *   insn=0x000000000047E234 string=0x000000000047E238 "h"
 *   insn=0x000000000047E248 string=0x00000000001F66B0 "0'"
 *   insn=0x000000000047E250 string=0x000000000047E254 "t~"
 *   insn=0x000000000047E278 string=0x000000000047E27C ""
 *   insn=0x000000000047E27C string=0x000000000047E280 "h"
 *   insn=0x000000000047E288 string=0x000000000047E28C ""
 *   insn=0x000000000047E28C string=0x000000000047E290 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>::_M_create_node(
        __int64 a1,
        const Caver::FWTouch *a2)
{
  __int64 v3; // x19

  v3 = operator new(0x48u);
  Caver::FWTouch::FWTouch((Caver::FWTouch *)(v3 + 32), a2);
  return v3;
}

