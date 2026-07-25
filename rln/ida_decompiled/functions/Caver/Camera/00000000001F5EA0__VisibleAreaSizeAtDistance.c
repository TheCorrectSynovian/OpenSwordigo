/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5EA0
 * Mangled: ._ZN5Caver6Camera25VisibleAreaSizeAtDistanceEf
 * Demangled: Caver::Camera::VisibleAreaSizeAtDistance(float)
 *
 * Callers: 2
 *   0x000000000034965C  Caver::GameSceneController::AddHeroObjectToScene(void)
 *   0x000000000045A38C  Caver::LightOverlay::UpdateWithCamera(Caver::Camera *)
 *
 * Callees: 1
 *   0x00000000004575A0  Caver::Camera::VisibleAreaSizeAtDistance(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5EA8 string=0x00000000001F5EAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Camera::VisibleAreaSizeAtDistance(Caver::Camera *this, float a2)
{
  return _ZN5Caver6Camera25VisibleAreaSizeAtDistanceEf(this, a2);
}

