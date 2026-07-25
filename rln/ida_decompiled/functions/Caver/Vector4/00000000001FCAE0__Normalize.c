/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCAE0
 * Mangled: ._ZN5Caver7Vector49NormalizeEv
 * Demangled: Caver::Vector4::Normalize(void)
 *
 * Callers: 4
 *   0x0000000000451590  Caver::SkeletonInstance::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *   0x0000000000456D84  Caver::Camera::RayFromScreenPoint(Caver::Vector2 const&)
 *   0x00000000004571BC  Caver::Camera::ForwardDirection(void)
 *   0x00000000004AF218  Caver::Matrix4::RotationAxis(float,float,float,float)
 *
 * Callees: 1
 *   0x00000000004B2CAC  Caver::Vector4::Normalize(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FCAE8 string=0x00000000001FCAEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Vector4::Normalize(Caver::Vector4 *this)
{
  return _ZN5Caver7Vector49NormalizeEv(this);
}

