/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA250
 * Mangled: ._ZN5Caver5Scene10TouchEndedERKNS_7FWTouchE
 * Demangled: Caver::Scene::TouchEnded(Caver::FWTouch const&)
 *
 * Callers: 1
 *   0x0000000000350364  Caver::GameSceneView::TouchEnded(Caver::FWTouch const&)
 *
 * Callees: 1
 *   0x0000000000468FD4  Caver::Scene::TouchEnded(Caver::FWTouch const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA258 string=0x00000000001FA25C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Scene::TouchEnded(Caver::Scene *this, const Caver::FWTouch *a2)
{
  return _ZN5Caver5Scene10TouchEndedERKNS_7FWTouchE(this, a2);
}

