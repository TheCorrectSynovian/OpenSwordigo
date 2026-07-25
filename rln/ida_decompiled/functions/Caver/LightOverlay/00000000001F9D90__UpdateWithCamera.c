/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9D90
 * Mangled: ._ZN5Caver12LightOverlay16UpdateWithCameraEPNS_6CameraE
 * Demangled: Caver::LightOverlay::UpdateWithCamera(Caver::Camera *)
 *
 * Callers: 1
 *   0x00000000004667AC  Caver::Scene::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x000000000045A38C  Caver::LightOverlay::UpdateWithCamera(Caver::Camera *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9D98 string=0x00000000001F9D9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::LightOverlay::UpdateWithCamera(Caver::LightOverlay *this, Caver::Camera *a2)
{
  return _ZN5Caver12LightOverlay16UpdateWithCameraEPNS_6CameraE(this, a2);
}

