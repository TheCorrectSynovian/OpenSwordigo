/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BB600
 * Mangled: _ZNSt4listIN5Caver12TargetActionIFvbRKSsEEESaIS5_EE14_M_create_nodeERKS5_
 * Demangled: std::list<Caver::TargetAction<void ()(bool,std::string const&)>,std::allocator<Caver::TargetAction<void ()(bool,std::string const&)>>>::_M_create_node(Caver::TargetAction<void ()(bool,std::string const&)> const&)
 *
 * Callers: 1
 *   0x00000000001F5D40  std::list<Caver::TargetAction<void ()(bool,std::string const&)>,std::allocator<Caver::TargetAction<void ()(bool,std::string const&)>>>::_M_create_node(Caver::TargetAction<void ()(bool,std::string const&)> const&)
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x00000000001FE5F0  Caver::ProfileManager::ProfileManager(void)
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 30
 *   insn=0x00000000004BB614 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004BB61C string=0x00000000004BB620 "h\n"
 *   insn=0x00000000004BB624 string=0x00000000004BB628 "h"
 *   insn=0x00000000004BB62C string=0x00000000004BB630 "\t\t@"
 *   insn=0x00000000004BB630 string=0x00000000004BB634 ")"
 *   insn=0x00000000004BB634 string=0x00000000004BB638 "\t\t"
 *   insn=0x00000000004BB644 string=0x00000000004BB648 "h"
 *   insn=0x00000000004BB648 string=0x00000000004BB64C ""
 *   insn=0x00000000004BB64C string=0x00000000004BB650 ""
 *   insn=0x00000000004BB650 string=0x00000000004BB654 ""
 *   insn=0x00000000004BB658 string=0x00000000004BB65C "a"
 *   insn=0x00000000004BB66C string=0x00000000004BB670 "h"
 *   insn=0x00000000004BB674 string=0x00000000004BB678 "`"
 *   insn=0x00000000004BB690 string=0x00000000004BB694 "("
 *   insn=0x00000000004BB694 string=0x00000000004BB698 "\t\t@"
 *   insn=0x00000000004BB698 string=0x00000000004BB69C ")"
 *   insn=0x00000000004BB69C string=0x00000000004BB6A0 "\t\t"
 *   insn=0x00000000004BB6A4 string=0x00000000004BB6A8 "\t"
 *   insn=0x00000000004BB6A8 string=0x00000000004BB6AC ")@"
 *   insn=0x00000000004BB6B0 string=0x00000000004BB6B4 " "
 *   insn=0x00000000004BB6BC string=0x00000000001F45E0 "P'"
 *   insn=0x00000000004BB6C4 string=0x00000000004BB6C8 "*"
 *   insn=0x00000000004BB6C4 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004BB6D4 string=0x00000000001FD590 "0'"
 *   insn=0x00000000004BB6D8 string=0x00000000004BB6DC "z"
 *   insn=0x00000000004BB6DC string=0x00000000004BB6E0 "K"
 *   insn=0x00000000004BB6F4 string=0x00000000004BB6F8 "h"
 *   insn=0x00000000004BB6F8 string=0x00000000004BB6FC ""
 *   insn=0x00000000004BB708 string=0x00000000004BB70C "A"
 *   insn=0x00000000004BB70C string=0x00000000004BB710 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::list<Caver::TargetAction<void ()(bool,std::string const&)>>::_M_create_node(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // x0
  __int64 v4; // x19
  __int64 v5; // x8
  __int64 v6; // x8

  v3 = operator new(0x40u);
  v4 = v3;
  *(_QWORD *)(v3 + 16) = *(_QWORD *)a2;
  v5 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(v3 + 24) = v5;
  if ( v5 )
    ++*(_QWORD *)(v5 + 16);
  *(_QWORD *)(v3 + 32) = 0;
  v6 = *(_QWORD *)(a2 + 16);
  if ( v6 )
  {
    *(_QWORD *)(v3 + 32) = v6;
    if ( (v6 & 1) != 0 )
    {
      *(_QWORD *)(v3 + 56) = *(_QWORD *)(a2 + 40);
      *(_OWORD *)(v3 + 40) = *(_OWORD *)(a2 + 24);
    }
    else
    {
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(v6 & 0xFFFFFFFFFFFFFFFELL))(a2 + 24, v3 + 40, 0);
    }
  }
  return v4;
}

