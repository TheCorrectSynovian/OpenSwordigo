/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FACF0
 * Mangled: ._ZNSt8_Rb_treeIN5Caver7FWTouchES1_St9_IdentityIS1_ESt4lessIS1_ESaIS1_EE16_M_insert_uniqueERKS1_
 * Demangled: std::_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>::_M_insert_unique(Caver::FWTouch const&)
 *
 * Callers: 2
 *   0x000000000047DDB4  Caver::FWShell::TouchBegan(Caver::FWTouch const&)
 *   0x000000000047DDD0  Caver::FWShell::TouchMoved(Caver::FWTouch const&)
 *
 * Callees: 1
 *   0x000000000047DFFC  std::_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>::_M_insert_unique(Caver::FWTouch const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FACF8 string=0x00000000001FACFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>::_M_insert_unique()
{
  return _ZNSt8_Rb_treeIN5Caver7FWTouchES1_St9_IdentityIS1_ESt4lessIS1_ESaIS1_EE16_M_insert_uniqueERKS1_();
}

