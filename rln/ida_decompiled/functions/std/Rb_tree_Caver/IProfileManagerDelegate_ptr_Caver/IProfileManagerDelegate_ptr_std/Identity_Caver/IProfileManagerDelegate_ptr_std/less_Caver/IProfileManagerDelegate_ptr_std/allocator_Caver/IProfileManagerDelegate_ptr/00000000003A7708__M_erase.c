/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003A7708
 * Mangled: _ZNSt8_Rb_treeIPN5Caver23IProfileManagerDelegateES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_M_eraseEPSt13_Rb_tree_nodeIS2_E
 * Demangled: std::_Rb_tree<Caver::IProfileManagerDelegate *,Caver::IProfileManagerDelegate *,std::_Identity<Caver::IProfileManagerDelegate *>,std::less<Caver::IProfileManagerDelegate *>,std::allocator<Caver::IProfileManagerDelegate *>>::_M_erase(std::_Rb_tree_node<Caver::IProfileManagerDelegate *> *)
 *
 * Callers: 1
 *   0x00000000001FC5D0  std::_Rb_tree<Caver::IProfileManagerDelegate *,Caver::IProfileManagerDelegate *,std::_Identity<Caver::IProfileManagerDelegate *>,std::less<Caver::IProfileManagerDelegate *>,std::allocator<Caver::IProfileManagerDelegate *>>::_M_erase(std::_Rb_tree_node<Caver::IProfileManagerDelegate *> *)
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FC5D0  std::_Rb_tree<Caver::IProfileManagerDelegate *,Caver::IProfileManagerDelegate *,std::_Identity<Caver::IProfileManagerDelegate *>,std::less<Caver::IProfileManagerDelegate *>,std::allocator<Caver::IProfileManagerDelegate *>>::_M_erase(std::_Rb_tree_node<Caver::IProfileManagerDelegate *> *)
 *
 * Referenced strings: 4
 *   insn=0x00000000003A771C string=0x00000000003A7720 "4"
 *   insn=0x00000000003A772C string=0x00000000001FC5D0 "0'"
 *   insn=0x00000000003A7738 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003A773C string=0x00000000003A7740 "5"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::_Rb_tree<Caver::IProfileManagerDelegate *,Caver::IProfileManagerDelegate *,std::_Identity<Caver::IProfileManagerDelegate *>,std::less<Caver::IProfileManagerDelegate *>,std::allocator<Caver::IProfileManagerDelegate *>>::_M_erase(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // x20
  _QWORD *v3; // x21

  v2 = a2;
  if ( a2 )
  {
    do
    {
      std::_Rb_tree<Caver::IProfileManagerDelegate *,Caver::IProfileManagerDelegate *,std::_Identity<Caver::IProfileManagerDelegate *>,std::less<Caver::IProfileManagerDelegate *>,std::allocator<Caver::IProfileManagerDelegate *>>::_M_erase();
      v3 = (_QWORD *)v2[2];
      operator delete(v2);
      v2 = v3;
    }
    while ( v3 );
  }
}

