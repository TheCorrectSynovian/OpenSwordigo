/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BCE3C
 * Mangled: _ZNSt8_Rb_treeIPN5Caver23IProfileManagerDelegateES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE7_M_copyEPKSt13_Rb_tree_nodeIS2_EPSA_
 * Demangled: std::_Rb_tree<Caver::IProfileManagerDelegate *,Caver::IProfileManagerDelegate *,std::_Identity<Caver::IProfileManagerDelegate *>,std::less<Caver::IProfileManagerDelegate *>,std::allocator<Caver::IProfileManagerDelegate *>>::_M_copy(std::_Rb_tree_node<Caver::IProfileManagerDelegate *> const*,std::_Rb_tree_node<Caver::IProfileManagerDelegate *>*)
 *
 * Callers: 1
 *   0x00000000001FFEB0  std::_Rb_tree<Caver::IProfileManagerDelegate *,Caver::IProfileManagerDelegate *,std::_Identity<Caver::IProfileManagerDelegate *>,std::less<Caver::IProfileManagerDelegate *>,std::allocator<Caver::IProfileManagerDelegate *>>::_M_copy(std::_Rb_tree_node<Caver::IProfileManagerDelegate *> const*,std::_Rb_tree_node<Caver::IProfileManagerDelegate *>*)
 *
 * Callees: 10
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F9A90  boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::ProfileManagerLoadingViewController,Caver::ProfileManagerLoadingViewController>(boost::shared_ptr<Caver::ProfileManagerLoadingViewController> const*,Caver::ProfileManagerLoadingViewController *)
 *   0x00000000001FC5D0  std::_Rb_tree<Caver::IProfileManagerDelegate *,Caver::IProfileManagerDelegate *,std::_Identity<Caver::IProfileManagerDelegate *>,std::less<Caver::IProfileManagerDelegate *>,std::allocator<Caver::IProfileManagerDelegate *>>::_M_erase(std::_Rb_tree_node<Caver::IProfileManagerDelegate *> *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x00000000001FFEB0  std::_Rb_tree<Caver::IProfileManagerDelegate *,Caver::IProfileManagerDelegate *,std::_Identity<Caver::IProfileManagerDelegate *>,std::less<Caver::IProfileManagerDelegate *>,std::allocator<Caver::IProfileManagerDelegate *>>::_M_copy(std::_Rb_tree_node<Caver::IProfileManagerDelegate *> const*,std::_Rb_tree_node<Caver::IProfileManagerDelegate *>*)
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 24
 *   insn=0x00000000004BCE60 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004BCE84 string=0x00000000004BCE88 "\n"
 *   insn=0x00000000004BCF04 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000004BCF10 string=0x00000000001FC5D0 "0'"
 *   insn=0x00000000004BCF1C string=0x00000000001FD590 "0'"
 *   insn=0x00000000004BCF20 string=0x00000000004BCF24 "h"
 *   insn=0x00000000004BCF24 string=0x00000000004BCF28 "\tE"
 *   insn=0x00000000004BCF48 string=0x00000000004BCF4C "I"
 *   insn=0x00000000004BCF4C string=0x00000000004BCF50 ")-G"
 *   insn=0x00000000004BCF5C string=0x00000000004BCF60 "(A"
 *   insn=0x00000000004BCF64 string=0x00000000004BCF68 ""
 *   insn=0x00000000004BCF70 string=0x00000000004BCF74 "`""
 *   insn=0x00000000004BCF80 string=0x00000000001F9A90 "0'"
 *   insn=0x00000000004BCF94 string=0x00000000004BCF98 "4"
 *   insn=0x00000000004BCF9C string=0x00000000004BCFA0 ""
 *   insn=0x00000000004BCFAC string=0x00000000004BCFB0 "\t@"
 *   insn=0x00000000004BCFBC string=0x00000000004BCFC0 ""
 *   insn=0x00000000004BCFCC string=0x00000000004BCFD0 "@"
 *   insn=0x00000000004BCFDC string=0x00000000004BCFE0 "9"
 *   insn=0x00000000004BCFE4 string=0x00000000004BCFE8 "~"
 *   insn=0x00000000004BCFEC string=0x00000000004BCFF0 "h"
 *   insn=0x00000000004BCFF0 string=0x00000000004BCFF4 ""
 *   insn=0x00000000004BD004 string=0x00000000004BD008 "b"
 *   insn=0x00000000004BD014 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::_Rb_tree<Caver::IProfileManagerDelegate *,Caver::IProfileManagerDelegate *,std::_Identity<Caver::IProfileManagerDelegate *>,std::less<Caver::IProfileManagerDelegate *>,std::allocator<Caver::IProfileManagerDelegate *>>::_M_copy(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x8
  __int64 v8; // x20
  int *v9; // x22
  __int64 v10; // x23
  __int64 v11; // x21
  int v12; // w8

  v5 = operator new(0x28u);
  v6 = *(_QWORD *)(a2 + 24);
  v7 = *(_QWORD *)(a2 + 32);
  v8 = v5;
  *(_QWORD *)(v5 + 24) = 0;
  *(_QWORD *)(v5 + 32) = v7;
  LODWORD(v7) = *(_DWORD *)a2;
  *(_QWORD *)(v5 + 8) = a3;
  *(_QWORD *)(v5 + 16) = 0;
  *(_DWORD *)v5 = v7;
  if ( v6 )
    *(_QWORD *)(v5 + 24) = std::_Rb_tree<Caver::IProfileManagerDelegate *,Caver::IProfileManagerDelegate *,std::_Identity<Caver::IProfileManagerDelegate *>,std::less<Caver::IProfileManagerDelegate *>,std::allocator<Caver::IProfileManagerDelegate *>>::_M_copy();
  v9 = *(int **)(a2 + 16);
  if ( v9 )
  {
    v10 = v8;
    do
    {
      v11 = operator new(0x28u);
      *(_QWORD *)(v11 + 32) = *((_QWORD *)v9 + 4);
      v12 = *v9;
      *(_QWORD *)(v11 + 16) = 0;
      *(_QWORD *)(v11 + 24) = 0;
      *(_DWORD *)v11 = v12;
      *(_QWORD *)(v10 + 16) = v11;
      *(_QWORD *)(v11 + 8) = v10;
      if ( *((_QWORD *)v9 + 3) )
        *(_QWORD *)(v11 + 24) = std::_Rb_tree<Caver::IProfileManagerDelegate *,Caver::IProfileManagerDelegate *,std::_Identity<Caver::IProfileManagerDelegate *>,std::less<Caver::IProfileManagerDelegate *>,std::allocator<Caver::IProfileManagerDelegate *>>::_M_copy();
      v9 = (int *)*((_QWORD *)v9 + 2);
      v10 = v11;
    }
    while ( v9 );
  }
  return v8;
}

