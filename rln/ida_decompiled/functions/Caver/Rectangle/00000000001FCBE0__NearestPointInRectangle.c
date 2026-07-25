/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCBE0
 * Mangled: ._ZNK5Caver9Rectangle23NearestPointInRectangleERKNS_7Vector2E
 * Demangled: Caver::Rectangle::NearestPointInRectangle(Caver::Vector2 const&)
 *
 * Callers: 2
 *   0x0000000000217554  Caver::CollisionShape::NearestPointInShape(Caver::Vector2 const&)
 *   0x000000000022C47C  Caver::OverlayTargetArrowComponent::Draw(Caver::RenderingContext *,Caver::Camera const*,Caver::Rectangle const&)
 *
 * Callees: 1
 *   0x00000000004B15C8  Caver::Rectangle::NearestPointInRectangle(Caver::Vector2 const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FCBE4 string=0x00000000004B15C8 "!"
 *   insn=0x00000000001FCBE8 string=0x00000000001FCBEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Rectangle::NearestPointInRectangle(Caver::Rectangle *this, const Caver::Vector2 *a2)
{
  return _ZNK5Caver9Rectangle23NearestPointInRectangleERKNS_7Vector2E(this, a2);
}

