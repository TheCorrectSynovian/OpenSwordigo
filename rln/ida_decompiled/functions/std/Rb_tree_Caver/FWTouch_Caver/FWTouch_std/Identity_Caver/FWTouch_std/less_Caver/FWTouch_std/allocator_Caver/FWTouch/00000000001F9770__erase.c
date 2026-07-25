/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9770
 * Mangled: ._ZNSt8_Rb_treeIN5Caver7FWTouchES1_St9_IdentityIS1_ESt4lessIS1_ESaIS1_EE5eraseERKS1_
 * Demangled: std::_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>::erase(Caver::FWTouch const&)
 *
 * Callers: 3
 *   0x000000000047DDD0  Caver::FWShell::TouchMoved(Caver::FWTouch const&)
 *   0x000000000047DE78  Caver::FWShell::TouchEnded(Caver::FWTouch const&)
 *   0x000000000047DF04  Caver::FWShell::TouchCancelled(Caver::FWTouch const&)
 *
 * Callees: 1
 *   0x000000000047E108  std::_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>::_M_create_node(Caver::FWTouch const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9778 string=0x00000000001F977C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>::erase()
{
  JUMPOUT(0x47E164);
}

