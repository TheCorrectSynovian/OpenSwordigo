/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE5C0
 * Mangled: .tanf
 * Demangled: .tanf
 *
 * Callers: 7
 *   0x000000000021DED4  Caver::BackgroundComponent::Draw(Caver::RenderingContext *,Caver::Camera *)
 *   0x00000000002B6760  Caver::RotatingBackgroundComponent::Draw(Caver::RenderingContext *,Caver::Camera *)
 *   0x00000000004575A0  Caver::Camera::VisibleAreaSizeAtDistance(float)
 *   0x00000000004575E4  Caver::Camera::DistanceForVisibleAreaWidth(float)
 *   0x0000000000457614  Caver::Camera::DistanceForVisibleAreaHeight(float)
 *   0x0000000000457640  Caver::Camera::MinDistanceForVisibleAreaSize(Caver::Vector2 const&)
 *   0x00000000004AF66C  Caver::Matrix4::PerspectiveFov(float,float,float,float)
 *
 * Callees: 1
 *   0x00000000006FEA78  tanf
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE5C8 string=0x00000000001FE5CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
float tanf(float x)
{
  return tanf(x);
}

