/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002002C0
 * Mangled: ._ZNSt8_Rb_treeIN5Caver7FWTouchES1_St9_IdentityIS1_ESt4lessIS1_ESaIS1_EE14_M_create_nodeERKS1_
 * Demangled: std::_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>::_M_create_node(Caver::FWTouch const&)
 *
 * Callers: 1
 *   0x000000000047DFFC  std::_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>::_M_insert_unique(Caver::FWTouch const&)
 *
 * Callees: 1
 *   0x000000000047E108  std::_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>::_M_create_node(Caver::FWTouch const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002002C8 string=0x00000000002002CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>::_M_create_node()
{
  return _ZNSt8_Rb_treeIN5Caver7FWTouchES1_St9_IdentityIS1_ESt4lessIS1_ESaIS1_EE14_M_create_nodeERKS1_();
}

