/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBA50
 * Mangled: ._ZN5Caver6Camera13AABBForZRangeEff
 * Demangled: Caver::Camera::AABBForZRange(float,float)
 *
 * Callers: 3
 *   0x0000000000458C10  Caver::CameraController::RegisterProgramLibrary(Caver::ProgramState *)
 *   0x0000000000465968  Caver::Scene::Update(float)
 *   0x000000000046CC30  Caver::SceneGrid::GetObjectsInBounds(Caver::Rectangle const&,void ***)
 *
 * Callees: 1
 *   0x00000000004573A0  Caver::Camera::AABBForZRange(float,float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBA58 string=0x00000000001FBA5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Camera::AABBForZRange(Caver::Camera *this, float a2, float a3)
{
  return _ZN5Caver6Camera13AABBForZRangeEff(this, a2, a3);
}

