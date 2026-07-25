/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA6F0
 * Mangled: ._ZNK5Caver11LineSegment19IntersectsRectangleERKNS_9RectangleEPNS_7Vector2ES5_
 * Demangled: Caver::LineSegment::IntersectsRectangle(Caver::Rectangle const&,Caver::Vector2 *,Caver::Vector2 *)
 *
 * Callers: 1
 *   0x000000000022C47C  Caver::OverlayTargetArrowComponent::Draw(Caver::RenderingContext *,Caver::Camera const*,Caver::Rectangle const&)
 *
 * Callees: 1
 *   0x00000000004ADDBC  Caver::LineSegment::IntersectsRectangle(Caver::Rectangle const&,Caver::Vector2 *,Caver::Vector2 *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA6F8 string=0x00000000001FA6FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::LineSegment::IntersectsRectangle(
        Caver::LineSegment *this,
        const Caver::Rectangle *a2,
        Caver::Vector2 *a3,
        Caver::Vector2 *a4)
{
  return _ZNK5Caver11LineSegment19IntersectsRectangleERKNS_9RectangleEPNS_7Vector2ES5_(this, a2, a3, a4);
}

