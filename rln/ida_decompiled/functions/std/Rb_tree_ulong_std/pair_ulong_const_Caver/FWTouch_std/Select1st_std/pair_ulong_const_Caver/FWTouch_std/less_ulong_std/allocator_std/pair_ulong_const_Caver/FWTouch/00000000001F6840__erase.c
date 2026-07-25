/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6840
 * Mangled: ._ZNSt8_Rb_treeImSt4pairIKmN5Caver7FWTouchEESt10_Select1stIS4_ESt4lessImESaIS4_EE5eraseERS1_
 * Demangled: std::_Rb_tree<ulong,std::pair<ulong const,Caver::FWTouch>,std::_Select1st<std::pair<ulong const,Caver::FWTouch>>,std::less<ulong>,std::allocator<std::pair<ulong const,Caver::FWTouch>>>::erase(ulong const&)
 *
 * Callers: 2
 *   0x00000000004A3E0C  Caver::GUIWindow::BeginTouch(Caver::FWTouch const&)
 *   0x00000000004A46B0  Caver::GUIWindow::EndTouch(Caver::FWTouch const&)
 *
 * Callees: 1
 *   0x00000000004A56F4  std::_Rb_tree<ulong,std::pair<ulong const,Caver::FWTouch>,std::_Select1st<std::pair<ulong const,Caver::FWTouch>>,std::less<ulong>,std::allocator<std::pair<ulong const,Caver::FWTouch>>>::_M_create_node(std::pair<ulong const,Caver::FWTouch> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6848 string=0x00000000001F684C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::_Rb_tree<unsigned long,std::pair<unsigned long const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned long const,Caver::FWTouch>>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Caver::FWTouch>>>::erase()
{
  JUMPOUT(0x4A5758);
}

