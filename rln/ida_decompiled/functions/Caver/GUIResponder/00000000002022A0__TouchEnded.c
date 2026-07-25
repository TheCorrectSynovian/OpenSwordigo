/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002022A0
 * Mangled: ._ZN5Caver12GUIResponder10TouchEndedERKNS_7FWTouchE
 * Demangled: Caver::GUIResponder::TouchEnded(Caver::FWTouch const&)
 *
 * Callers: 4
 *   0x0000000000401988  Caver::GameOverView::TouchEnded(Caver::FWTouch const&)
 *   0x0000000000427B9C  Caver::MapView::TouchEnded(Caver::FWTouch const&)
 *   0x000000000042CEEC  Caver::PauseView::TouchEnded(Caver::FWTouch const&)
 *   0x00000000004D4658  Caver::GUIPopoverView::TouchEnded(Caver::FWTouch const&)
 *
 * Callees: 1
 *   0x000000000049B454  Caver::GUIResponder::TouchEnded(Caver::FWTouch const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002022A8 string=0x00000000002022AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIResponder::TouchEnded(Caver::GUIResponder *this, const Caver::FWTouch *a2)
{
  return _ZN5Caver12GUIResponder10TouchEndedERKNS_7FWTouchE(this, a2);
}

