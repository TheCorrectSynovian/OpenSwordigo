/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047DDB4
 * Mangled: _ZN5Caver7FWShell10TouchBeganERKNS_7FWTouchE
 * Demangled: Caver::FWShell::TouchBegan(Caver::FWTouch const&)
 *
 * Callers: 1
 *   0x00000000001FB100  Caver::FWShell::TouchBegan(Caver::FWTouch const&)
 *
 * Callees: 1
 *   0x00000000001FACF0  std::_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>::_M_insert_unique(Caver::FWTouch const&)
 *
 * Referenced strings: 1
 *   insn=0x000000000047DDC0 string=0x00000000001FACF0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::FWShell::TouchBegan(Caver::FWShell *this, const Caver::FWTouch *a2)
{
  std::_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>::_M_insert_unique();
  return 1;
}

