/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8860
 * Mangled: ._ZN5Caver5Scene10TouchMovedERKNS_7FWTouchE
 * Demangled: Caver::Scene::TouchMoved(Caver::FWTouch const&)
 *
 * Callers: 1
 *   0x000000000034FCCC  Caver::GUIPropertyValue::ValueWithFloat(float)
 *
 * Callees: 1
 *   0x0000000000468FD0  Caver::Scene::TouchMoved(Caver::FWTouch const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8868 string=0x00000000001F886C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Scene::TouchMoved(Caver::Scene *this, const Caver::FWTouch *a2)
{
  return _ZN5Caver5Scene10TouchMovedERKNS_7FWTouchE(this, a2);
}

