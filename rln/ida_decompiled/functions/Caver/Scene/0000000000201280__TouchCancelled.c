/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201280
 * Mangled: ._ZN5Caver5Scene14TouchCancelledERKNS_7FWTouchE
 * Demangled: Caver::Scene::TouchCancelled(Caver::FWTouch const&)
 *
 * Callers: 1
 *   0x0000000000350370  Caver::GameSceneView::TouchCancelled(Caver::FWTouch const&)
 *
 * Callees: 1
 *   0x0000000000468FD8  Caver::Scene::TouchCancelled(Caver::FWTouch const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201288 string=0x000000000020128C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Scene::TouchCancelled(Caver::Scene *this, const Caver::FWTouch *a2)
{
  return _ZN5Caver5Scene14TouchCancelledERKNS_7FWTouchE(this, a2);
}

