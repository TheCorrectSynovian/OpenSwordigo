/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002003F0
 * Mangled: ._ZN5Caver12GUIResponder10TouchMovedERKNS_7FWTouchE
 * Demangled: Caver::GUIResponder::TouchMoved(Caver::FWTouch const&)
 *
 * Callers: 1
 *   0x0000000000427B98  Caver::MapView::TouchMoved(Caver::FWTouch const&)
 *
 * Callees: 1
 *   0x000000000049B3FC  Caver::GUIResponder::TouchMoved(Caver::FWTouch const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002003F8 string=0x00000000002003FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIResponder::TouchMoved(Caver::GUIResponder *this, const Caver::FWTouch *a2)
{
  return _ZN5Caver12GUIResponder10TouchMovedERKNS_7FWTouchE(this, a2);
}

