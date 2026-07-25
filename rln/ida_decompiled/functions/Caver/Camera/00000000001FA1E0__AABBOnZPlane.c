/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA1E0
 * Mangled: ._ZN5Caver6Camera12AABBOnZPlaneEf
 * Demangled: Caver::Camera::AABBOnZPlane(float)
 *
 * Callers: 1
 *   0x0000000000458C10  Caver::CameraController::RegisterProgramLibrary(Caver::ProgramState *)
 *
 * Callees: 1
 *   0x0000000000457244  Caver::Camera::AABBOnZPlane(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA1E8 string=0x00000000001FA1EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Camera::AABBOnZPlane(Caver::Camera *this, float a2)
{
  return _ZN5Caver6Camera12AABBOnZPlaneEf(this, a2);
}

