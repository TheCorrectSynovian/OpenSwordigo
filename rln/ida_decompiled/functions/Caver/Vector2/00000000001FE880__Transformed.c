/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE880
 * Mangled: ._ZNK5Caver7Vector211TransformedERKS0_ff
 * Demangled: Caver::Vector2::Transformed(Caver::Vector2 const&,float,float)
 *
 * Callers: 7
 *   0x0000000000217554  Caver::CollisionShape::NearestPointInShape(Caver::Vector2 const&)
 *   0x00000000002176CC  Caver::CollisionShape::TransformedPolygonSegmentAtIndex(int)
 *   0x0000000000217780  Caver::CollisionShape::TransformedPolygonVertexAtIndex(int)
 *   0x00000000004ACC90  Caver::CircleIntersectsPolygon(Caver::Circle const&,Caver::Vector2 const&,float,float,Caver::Polygon const&,Caver::Vector2 const&,float,float,Caver::Vector2*,float *)
 *   0x00000000004AD158  Caver::CircleIntersectsRectangle(Caver::Circle const&,Caver::Vector2 const&,float,float,Caver::Rectangle const&,Caver::Vector2 const&,float,float,Caver::Vector2*,float *)
 *   0x00000000004AD3D8  Caver::CircleIntersectsCircle(Caver::Circle const&,Caver::Vector2 const&,float,float,Caver::Circle const&,Caver::Vector2 const&,float,float,Caver::Vector2*,float *)
 *   0x00000000004AFC30  Caver::OrientedRect::OBFromTransformedRectangle(Caver::Rectangle const&,Caver::Vector2 const&,float,float,Caver::Vector2 const&,float,float)
 *
 * Callees: 1
 *   0x00000000004B2974  Caver::Vector2::Transformed(Caver::Vector2 const&,float,float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE888 string=0x00000000001FE88C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Vector2::Transformed(Caver::Vector2 *this, const Caver::Vector2 *a2, float a3, float a4)
{
  return _ZNK5Caver7Vector211TransformedERKS0_ff(this, a2, a3, a4);
}

