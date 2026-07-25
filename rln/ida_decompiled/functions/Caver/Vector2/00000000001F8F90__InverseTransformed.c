/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8F90
 * Mangled: ._ZNK5Caver7Vector218InverseTransformedERKS0_ff
 * Demangled: Caver::Vector2::InverseTransformed(Caver::Vector2 const&,float,float)
 *
 * Callers: 8
 *   0x0000000000217554  Caver::CollisionShape::NearestPointInShape(Caver::Vector2 const&)
 *   0x00000000004AC5A0  Caver::RectangleIntersectsPolygon(Caver::Rectangle const&,Caver::Vector2 const&,float,float,Caver::Polygon const&,Caver::Vector2 const&,float,float,Caver::Vector2*,float *,Caver::Vector2 const&)
 *   0x00000000004ACC90  Caver::CircleIntersectsPolygon(Caver::Circle const&,Caver::Vector2 const&,float,float,Caver::Polygon const&,Caver::Vector2 const&,float,float,Caver::Vector2*,float *)
 *   0x00000000004AD158  Caver::CircleIntersectsRectangle(Caver::Circle const&,Caver::Vector2 const&,float,float,Caver::Rectangle const&,Caver::Vector2 const&,float,float,Caver::Vector2*,float *)
 *   0x00000000004AD4F8  Caver::LineSegmentIntersectsPolygon(Caver::LineSegment const&,Caver::Polygon const&,Caver::Vector2 const&,float,float,float *,Caver::Vector2*,Caver::Vector2*,int *)
 *   0x00000000004AD6D8  Caver::LineSegmentIntersectsRectangle(Caver::LineSegment const&,Caver::Rectangle const&,Caver::Vector2 const&,float,float,float *,Caver::Vector2*)
 *   0x00000000004AD7C4  Caver::LineSegmentIntersectsCircle(Caver::LineSegment const&,Caver::Circle const&,Caver::Vector2 const&,float,float,float *,Caver::Vector2*)
 *   0x00000000004AFC30  Caver::OrientedRect::OBFromTransformedRectangle(Caver::Rectangle const&,Caver::Vector2 const&,float,float,Caver::Vector2 const&,float,float)
 *
 * Callees: 1
 *   0x00000000004B2A24  Caver::Vector2::InverseTransformed(Caver::Vector2 const&,float,float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8F98 string=0x00000000001F8F9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Vector2::InverseTransformed(
        Caver::Vector2 *this,
        const Caver::Vector2 *a2,
        float a3,
        float a4)
{
  return _ZNK5Caver7Vector218InverseTransformedERKS0_ff(this, a2, a3, a4);
}

