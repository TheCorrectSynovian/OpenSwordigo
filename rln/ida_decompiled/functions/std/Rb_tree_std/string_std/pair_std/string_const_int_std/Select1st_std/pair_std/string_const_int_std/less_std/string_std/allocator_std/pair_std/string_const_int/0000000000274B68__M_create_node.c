/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000274B68
 * Mangled: _ZNSt8_Rb_treeISsSt4pairIKSsiESt10_Select1stIS2_ESt4lessISsESaIS2_EE14_M_create_nodeERKS2_
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::_M_create_node(std::pair<std::string const,int> const&)
 *
 * Callers: 1
 *   0x00000000002003D0  std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::_M_create_node(std::pair<std::string const,int> const&)
 *
 * Callees: 11
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000201C20  std::deque<Caver::HeroEntityComponent::SafePosition,std::allocator<Caver::HeroEntityComponent::SafePosition>>::_M_destroy_data_aux(std::_Deque_iterator<Caver::HeroEntityComponent::SafePosition,Caver::HeroEntityComponent::SafePosition&,Caver::HeroEntityComponent::SafePosition*>,std::_Deque_iterator<Caver::HeroEntityComponent::SafePosition,Caver::HeroEntityComponent::SafePosition&,Caver::HeroEntityComponent::SafePosition*>)
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000274CC4  std::deque<Caver::HeroEntityComponent::SafePosition,std::allocator<Caver::HeroEntityComponent::SafePosition>>::_M_destroy_data_aux(std::_Deque_iterator<Caver::HeroEntityComponent::SafePosition,Caver::HeroEntityComponent::SafePosition&,Caver::HeroEntityComponent::SafePosition*>,std::_Deque_iterator<Caver::HeroEntityComponent::SafePosition,Caver::HeroEntityComponent::SafePosition&,Caver::HeroEntityComponent::SafePosition*>)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 25
 *   insn=0x0000000000274B7C string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000274B80 string=0x0000000000274B84 "`"
 *   insn=0x0000000000274B88 string=0x0000000000274B8C "g"
 *   insn=0x0000000000274B98 string=0x0000000000274B9C "h*"
 *   insn=0x0000000000274BA8 string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000274BB0 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000274BB8 string=0x0000000000274BBC "u""
 *   insn=0x0000000000274BBC string=0x00000000001FD590 "0'"
 *   insn=0x0000000000274BC0 string=0x0000000000274BC4 "@3"
 *   insn=0x0000000000274BDC string=0x0000000000274BE0 "T"
 *   insn=0x0000000000274BEC string=0x0000000000274BF0 "`"
 *   insn=0x0000000000274BF0 string=0x0000000000274BF4 "h&B"
 *   insn=0x0000000000274BF4 string=0x0000000000274BF8 "a"
 *   insn=0x0000000000274BF8 string=0x0000000000274BFC "j.D"
 *   insn=0x0000000000274C18 string=0x0000000000274C1C "`"
 *   insn=0x0000000000274C20 string=0x0000000000274C24 "u&@"
 *   insn=0x0000000000274C24 string=0x0000000000274C28 "h"
 *   insn=0x0000000000274C48 string=0x0000000000274C4C "`"
 *   insn=0x0000000000274C78 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000274C84 string=0x0000000000274C88 "u&@"
 *   insn=0x0000000000274C88 string=0x0000000000274C8C "i"
 *   insn=0x0000000000274C90 string=0x0000000000274C94 "?"
 *   insn=0x0000000000274C98 string=0x0000000000274C9C "6!"
 *   insn=0x0000000000274CAC string=0x0000000000274CB0 "h"
 *   insn=0x0000000000274CB4 string=0x0000000000274CB8 "~\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::_M_create_node(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // x19
  __int64 result; // x0

  v3 = operator new(0x30u);
  sub_56A528(v3 + 32, a2);
  result = v3;
  *(_DWORD *)(v3 + 40) = *(_DWORD *)(a2 + 8);
  return result;
}

