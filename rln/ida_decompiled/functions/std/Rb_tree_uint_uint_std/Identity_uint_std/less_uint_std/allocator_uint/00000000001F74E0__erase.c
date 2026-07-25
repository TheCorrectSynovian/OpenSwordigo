/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F74E0
 * Mangled: ._ZNSt8_Rb_treeIjjSt9_IdentityIjESt4lessIjESaIjEE5eraseERKj
 * Demangled: std::_Rb_tree<uint,uint,std::_Identity<uint>,std::less<uint>,std::allocator<uint>>::erase(uint const&)
 *
 * Callers: 1
 *   0x00000000004A4CE8  Caver::GUIWindow::KeyUp(uint,uint,double)
 *
 * Callees: 1
 *   0x00000000004A599C  std::vector<Caver::FWTouch,std::allocator<Caver::FWTouch>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::FWTouch*,std::vector<Caver::FWTouch,std::allocator<Caver::FWTouch>>>,Caver::FWTouch const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F74E8 string=0x00000000001F74EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::_Rb_tree<unsigned int,unsigned int,std::_Identity<unsigned int>,std::less<unsigned int>,std::allocator<unsigned int>>::erase()
{
  JUMPOUT(0x4A5BE0);
}

