/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000046A0F4
 * Mangled: _ZNSt8_Rb_treeIllSt9_IdentityIlESt4lessIlESaIlEE8_M_eraseEPSt13_Rb_tree_nodeIlE
 * Demangled: std::_Rb_tree<long,long,std::_Identity<long>,std::less<long>,std::allocator<long>>::_M_erase(std::_Rb_tree_node<long> *)
 *
 * Callers: 1
 *   0x00000000001FF7A0  std::_Rb_tree<long,long,std::_Identity<long>,std::less<long>,std::allocator<long>>::_M_erase(std::_Rb_tree_node<long> *)
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FF7A0  std::_Rb_tree<long,long,std::_Identity<long>,std::less<long>,std::allocator<long>>::_M_erase(std::_Rb_tree_node<long> *)
 *
 * Referenced strings: 4
 *   insn=0x000000000046A108 string=0x000000000046A10C "4"
 *   insn=0x000000000046A120 string=0x000000000046A124 "c4"
 *   insn=0x000000000046A124 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000046A128 string=0x000000000046A12C "5"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::_Rb_tree<long,long,std::_Identity<long>,std::less<long>,std::allocator<long>>::_M_erase(
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
      std::_Rb_tree<long,long,std::_Identity<long>,std::less<long>,std::allocator<long>>::_M_erase();
      v3 = (_QWORD *)v2[2];
      operator delete(v2);
      v2 = v3;
    }
    while ( v3 );
  }
}

