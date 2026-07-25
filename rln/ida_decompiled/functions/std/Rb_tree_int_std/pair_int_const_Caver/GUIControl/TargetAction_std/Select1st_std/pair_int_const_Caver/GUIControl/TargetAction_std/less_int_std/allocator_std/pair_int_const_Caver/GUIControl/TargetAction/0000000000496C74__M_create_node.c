/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000496C74
 * Mangled: _ZNSt8_Rb_treeIiSt4pairIKiN5Caver10GUIControl12TargetActionEESt10_Select1stIS5_ESt4lessIiESaIS5_EE14_M_create_nodeERKS5_
 * Demangled: std::_Rb_tree<int,std::pair<int const,Caver::GUIControl::TargetAction>,std::_Select1st<std::pair<int const,Caver::GUIControl::TargetAction>>,std::less<int>,std::allocator<std::pair<int const,Caver::GUIControl::TargetAction>>>::_M_create_node(std::pair<int const,Caver::GUIControl::TargetAction> const&)
 *
 * Callers: 1
 *   0x0000000000202B30  std::_Rb_tree<int,std::pair<int const,Caver::GUIControl::TargetAction>,std::_Select1st<std::pair<int const,Caver::GUIControl::TargetAction>>,std::less<int>,std::allocator<std::pair<int const,Caver::GUIControl::TargetAction>>>::_M_create_node(std::pair<int const,Caver::GUIControl::TargetAction> const&)
 *
 * Callees: 7
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 17
 *   insn=0x0000000000496C84 string=0x0000000000496C88 "Vz"
 *   insn=0x0000000000496C88 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000496C90 string=0x0000000000496C94 "h""
 *   insn=0x0000000000496C98 string=0x0000000000496C9C "h"
 *   insn=0x0000000000496CA4 string=0x0000000000496CA8 "h"
 *   insn=0x0000000000496CA8 string=0x0000000000496CAC ""
 *   insn=0x0000000000496CAC string=0x0000000000496CB0 ""
 *   insn=0x0000000000496CB0 string=0x0000000000496CB4 ""
 *   insn=0x0000000000496CB8 string=0x0000000000496CBC "a"
 *   insn=0x0000000000496CCC string=0x0000000000496CD0 "h&"
 *   insn=0x0000000000496CD4 string=0x0000000000496CD8 "`"
 *   insn=0x0000000000496CEC string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000496CF0 string=0x0000000000496CF4 "o"
 *   insn=0x0000000000496CF4 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000496CFC string=0x0000000000496D00 "$"
 *   insn=0x0000000000496D00 string=0x00000000001FD590 "0'"
 *   insn=0x0000000000496D0C string=0x0000000000496D10 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::_Rb_tree<int,std::pair<int const,Caver::GUIControl::TargetAction>,std::_Select1st<std::pair<int const,Caver::GUIControl::TargetAction>>,std::less<int>,std::allocator<std::pair<int const,Caver::GUIControl::TargetAction>>>::_M_create_node(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // x0
  __int64 v4; // x19
  __int64 v5; // x8

  v3 = operator new(0x50u);
  v4 = v3;
  *(_DWORD *)(v3 + 32) = *(_DWORD *)a2;
  *(_QWORD *)(v3 + 40) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(v3 + 48) = 0;
  v5 = *(_QWORD *)(a2 + 16);
  if ( v5 )
  {
    *(_QWORD *)(v3 + 48) = v5;
    if ( (v5 & 1) != 0 )
    {
      *(_QWORD *)(v3 + 72) = *(_QWORD *)(a2 + 40);
      *(_OWORD *)(v3 + 56) = *(_OWORD *)(a2 + 24);
    }
    else
    {
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(v5 & 0xFFFFFFFFFFFFFFFELL))(a2 + 24, v3 + 56, 0);
    }
  }
  return v4;
}

