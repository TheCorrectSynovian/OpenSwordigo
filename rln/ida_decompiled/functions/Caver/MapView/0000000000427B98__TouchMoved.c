/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000427B98
 * Mangled: _ZN5Caver7MapView10TouchMovedERKNS_7FWTouchE
 * Demangled: Caver::MapView::TouchMoved(Caver::FWTouch const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000002003F0  Caver::GUIResponder::TouchMoved(Caver::FWTouch const&)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MapView::TouchMoved(Caver::MapView *this, const Caver::FWTouch *a2)
{
  return Caver::GUIResponder::TouchMoved(this, a2);
}

