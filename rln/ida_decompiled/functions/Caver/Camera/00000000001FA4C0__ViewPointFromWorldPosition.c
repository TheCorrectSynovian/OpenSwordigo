/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA4C0
 * Mangled: ._ZNK5Caver6Camera26ViewPointFromWorldPositionERKNS_7Vector3EPf
 * Demangled: Caver::Camera::ViewPointFromWorldPosition(Caver::Vector3 const&,float *)
 *
 * Callers: 2
 *   0x000000000045A38C  Caver::LightOverlay::UpdateWithCamera(Caver::Camera *)
 *   0x0000000000468E8C  Caver::Scene::TouchBegan(Caver::FWTouch const&)
 *
 * Callees: 1
 *   0x0000000000456C54  Caver::Camera::ViewPointFromWorldPosition(Caver::Vector3 const&,float *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA4C8 string=0x00000000001FA4CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Camera::ViewPointFromWorldPosition(Caver::Camera *this, const Caver::Vector3 *a2, float *a3)
{
  return _ZNK5Caver6Camera26ViewPointFromWorldPositionERKNS_7Vector3EPf(this, a2, a3);
}

