/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200090
 * Mangled: ._ZN5Caver12GUIResponder14TouchCancelledERKNS_7FWTouchE
 * Demangled: Caver::GUIResponder::TouchCancelled(Caver::FWTouch const&)
 *
 * Callers: 1
 *   0x0000000000427E60  Caver::MapView::TouchCancelled(Caver::FWTouch const&)
 *
 * Callees: 1
 *   0x000000000049B4AC  Caver::GUIResponder::TouchCancelled(Caver::FWTouch const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200098 string=0x000000000020009C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIResponder::TouchCancelled(Caver::GUIResponder *this, const Caver::FWTouch *a2)
{
  return _ZN5Caver12GUIResponder14TouchCancelledERKNS_7FWTouchE(this, a2);
}

