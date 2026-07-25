/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047DFB0
 * Mangled: _ZNSt8_Rb_treeIN5Caver7FWTouchES1_St9_IdentityIS1_ESt4lessIS1_ESaIS1_EE8_M_eraseEPSt13_Rb_tree_nodeIS1_E
 * Demangled: std::_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>::_M_erase(std::_Rb_tree_node<Caver::FWTouch> *)
 *
 * Callers: 1
 *   0x00000000001F66B0  std::_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>::_M_erase(std::_Rb_tree_node<Caver::FWTouch> *)
 *
 * Callees: 2
 *   0x00000000001F66B0  std::_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>::_M_erase(std::_Rb_tree_node<Caver::FWTouch> *)
 *   0x00000000001F72B0  operator delete(void *)
 *
 * Referenced strings: 4
 *   insn=0x000000000047DFC4 string=0x000000000047DFC8 "4"
 *   insn=0x000000000047DFD4 string=0x00000000001F66B0 "0'"
 *   insn=0x000000000047DFE0 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000047DFE4 string=0x000000000047DFE8 "5"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>::_M_erase(
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
      std::_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>::_M_erase();
      v3 = (_QWORD *)v2[2];
      operator delete(v2);
      v2 = v3;
    }
    while ( v3 );
  }
}

