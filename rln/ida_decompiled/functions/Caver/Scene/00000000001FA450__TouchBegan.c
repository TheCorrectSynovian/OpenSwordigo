/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA450
 * Mangled: ._ZN5Caver5Scene10TouchBeganERKNS_7FWTouchE
 * Demangled: Caver::Scene::TouchBegan(Caver::FWTouch const&)
 *
 * Callers: 1
 *   0x000000000034FCCC  Caver::GUIPropertyValue::ValueWithFloat(float)
 *
 * Callees: 1
 *   0x0000000000468E8C  Caver::Scene::TouchBegan(Caver::FWTouch const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA458 string=0x00000000001FA45C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Scene::TouchBegan(Caver::Scene *this, const Caver::FWTouch *a2)
{
  return _ZN5Caver5Scene10TouchBeganERKNS_7FWTouchE(this, a2);
}

