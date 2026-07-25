/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDD90
 * Mangled: ._ZNK5Caver6Circle27IntersectsLineSegmentOnAxisERKNS_11LineSegmentERKNS_7Vector2EPfS7_
 * Demangled: Caver::Circle::IntersectsLineSegmentOnAxis(Caver::LineSegment const&,Caver::Vector2 const&,float *,float *)
 *
 * Callers: 1
 *   0x00000000004ACC90  Caver::CircleIntersectsPolygon(Caver::Circle const&,Caver::Vector2 const&,float,float,Caver::Polygon const&,Caver::Vector2 const&,float,float,Caver::Vector2*,float *)
 *
 * Callees: 1
 *   0x00000000004D4AC8  Caver::Circle::IntersectsLineSegmentOnAxis(Caver::LineSegment const&,Caver::Vector2 const&,float *,float *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FDD98 string=0x00000000001FDD9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Circle::IntersectsLineSegmentOnAxis(
        Caver::Circle *this,
        const Caver::LineSegment *a2,
        const Caver::Vector2 *a3,
        float *a4,
        float *a5)
{
  return _ZNK5Caver6Circle27IntersectsLineSegmentOnAxisERKNS_11LineSegmentERKNS_7Vector2EPfS7_(this, a2, a3, a4, a5);
}

