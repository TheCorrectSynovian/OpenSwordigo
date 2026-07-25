/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000350364
 * Mangled: _ZN5Caver13GameSceneView10TouchEndedERKNS_7FWTouchE
 * Demangled: Caver::GameSceneView::TouchEnded(Caver::FWTouch const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FA250  Caver::Scene::TouchEnded(Caver::FWTouch const&)
 *
 * Referenced strings: 1
 *   insn=0x000000000035036C string=0x00000000001FA250 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GameSceneView::TouchEnded(Caver::GameSceneView *this, const Caver::FWTouch *a2)
{
  return Caver::Scene::TouchEnded(*(Caver::Scene **)(*((_QWORD *)this + 30) + 32LL), a2);
}

