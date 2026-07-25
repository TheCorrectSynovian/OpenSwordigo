/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FAF00
 * Mangled: ._ZN5Caver10Quaternion18FromRotationMatrixERKNS_7Matrix4E
 * Demangled: Caver::Quaternion::FromRotationMatrix(Caver::Matrix4 const&)
 *
 * Callers: 1
 *   0x000000000045807C  Caver::CameraController::CameraController(void)
 *
 * Callees: 1
 *   0x00000000004B12DC  Caver::Quaternion::FromRotationMatrix(Caver::Matrix4 const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FAF08 string=0x00000000001FAF0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Quaternion::FromRotationMatrix(Caver::Quaternion *this, const Caver::Matrix4 *a2)
{
  return _ZN5Caver10Quaternion18FromRotationMatrixERKNS_7Matrix4E(this, a2);
}

