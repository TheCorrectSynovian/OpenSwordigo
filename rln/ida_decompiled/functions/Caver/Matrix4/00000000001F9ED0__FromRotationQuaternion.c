/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9ED0
 * Mangled: ._ZN5Caver7Matrix422FromRotationQuaternionERKNS_10QuaternionE
 * Demangled: Caver::Matrix4::FromRotationQuaternion(Caver::Quaternion const&)
 *
 * Callers: 5
 *   0x000000000044E4FC  Caver::PODLoader::CreateSkeleton(void)
 *   0x0000000000451190  Caver::SkeletonInstance::EvaluateMatrices(void)
 *   0x0000000000456D84  Caver::Camera::RayFromScreenPoint(Caver::Vector2 const&)
 *   0x00000000004571BC  Caver::Camera::ForwardDirection(void)
 *   0x0000000000457D84  Caver::Camera::EvaluateViewMatrix(void)
 *
 * Callees: 1
 *   0x00000000004AF77C  Caver::Matrix4::FromRotationQuaternion(Caver::Quaternion const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9ED8 string=0x00000000001F9EDC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Matrix4::FromRotationQuaternion(Caver::Matrix4 *this, const Caver::Quaternion *a2)
{
  return _ZN5Caver7Matrix422FromRotationQuaternionERKNS_10QuaternionE(this, a2);
}

