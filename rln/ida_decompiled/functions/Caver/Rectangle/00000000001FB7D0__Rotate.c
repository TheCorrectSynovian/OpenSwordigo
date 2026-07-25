/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB7D0
 * Mangled: ._ZN5Caver9Rectangle6RotateEf
 * Demangled: Caver::Rectangle::Rotate(float)
 *
 * Callers: 6
 *   0x00000000002B8988  Caver::GroundMeshComponent::Draw(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000004B1FAC  Caver::Rectangle::Transform(Caver::Vector2 const&,float)
 *   0x00000000004B1FE0  Caver::Rectangle::Transform(Caver::Vector2 const&,float,Caver::Vector2 const&)
 *   0x00000000004B2090  Caver::Rectangle::RotatedRectangle(float)
 *   0x00000000004B2104  Caver::Rectangle::TransformedRectangle(Caver::Vector2 const&,float)
 *   0x00000000004B2144  Caver::Rectangle::TransformedRectangle(Caver::Vector2 const&,float,Caver::Vector2 const&)
 *
 * Callees: 1
 *   0x00000000004B1D98  Caver::Rectangle::Rotate(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB7D8 string=0x00000000001FB7DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Rectangle::Rotate(Caver::Rectangle *this, float a2)
{
  return _ZN5Caver9Rectangle6RotateEf(this, a2);
}

