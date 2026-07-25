/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000350370
 * Mangled: _ZN5Caver13GameSceneView14TouchCancelledERKNS_7FWTouchE
 * Demangled: Caver::GameSceneView::TouchCancelled(Caver::FWTouch const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000201280  Caver::Scene::TouchCancelled(Caver::FWTouch const&)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GameSceneView::TouchCancelled(Caver::GameSceneView *this, const Caver::FWTouch *a2)
{
  return Caver::Scene::TouchCancelled(*(Caver::Scene **)(*((_QWORD *)this + 30) + 32LL), a2);
}

