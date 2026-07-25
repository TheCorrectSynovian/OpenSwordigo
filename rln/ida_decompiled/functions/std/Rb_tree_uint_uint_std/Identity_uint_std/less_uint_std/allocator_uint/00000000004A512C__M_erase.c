/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A512C
 * Mangled: _ZNSt8_Rb_treeIjjSt9_IdentityIjESt4lessIjESaIjEE8_M_eraseEPSt13_Rb_tree_nodeIjE
 * Demangled: std::_Rb_tree<uint,uint,std::_Identity<uint>,std::less<uint>,std::allocator<uint>>::_M_erase(std::_Rb_tree_node<uint> *)
 *
 * Callers: 1
 *   0x00000000001F5D20  std::_Rb_tree<uint,uint,std::_Identity<uint>,std::less<uint>,std::allocator<uint>>::_M_erase(std::_Rb_tree_node<uint> *)
 *
 * Callees: 2
 *   0x00000000001F5D20  std::_Rb_tree<uint,uint,std::_Identity<uint>,std::less<uint>,std::allocator<uint>>::_M_erase(std::_Rb_tree_node<uint> *)
 *   0x00000000001F72B0  operator delete(void *)
 *
 * Referenced strings: 5
 *   insn=0x00000000004A5140 string=0x00000000004A5144 "4"
 *   insn=0x00000000004A5150 string=0x00000000001F5D20 "P'"
 *   insn=0x00000000004A5158 string=0x00000000004A515C "UH"
 *   insn=0x00000000004A515C string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004A5160 string=0x00000000004A5164 "5"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::_Rb_tree<unsigned int,unsigned int,std::_Identity<unsigned int>,std::less<unsigned int>,std::allocator<unsigned int>>::_M_erase(
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
      std::_Rb_tree<unsigned int,unsigned int,std::_Identity<unsigned int>,std::less<unsigned int>,std::allocator<unsigned int>>::_M_erase();
      v3 = (_QWORD *)v2[2];
      operator delete(v2);
      v2 = v3;
    }
    while ( v3 );
  }
}

