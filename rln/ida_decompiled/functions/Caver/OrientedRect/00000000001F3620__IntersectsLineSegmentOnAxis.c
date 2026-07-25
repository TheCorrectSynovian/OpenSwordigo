/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3620
 * Mangled: ._ZNK5Caver12OrientedRect27IntersectsLineSegmentOnAxisERKNS_11LineSegmentERKNS_7Vector2EPfS7_
 * Demangled: Caver::OrientedRect::IntersectsLineSegmentOnAxis(Caver::LineSegment const&,Caver::Vector2 const&,float *,float *)
 *
 * Callers: 1
 *   0x00000000004AC5A0  Caver::RectangleIntersectsPolygon(Caver::Rectangle const&,Caver::Vector2 const&,float,float,Caver::Polygon const&,Caver::Vector2 const&,float,float,Caver::Vector2*,float *,Caver::Vector2 const&)
 *
 * Callees: 1
 *   0x00000000004AFDD0  Caver::OrientedRect::IntersectsLineSegmentOnAxis(Caver::LineSegment const&,Caver::Vector2 const&,float *,float *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3628 string=0x00000000001F362C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::OrientedRect::IntersectsLineSegmentOnAxis(
        Caver::OrientedRect *this,
        const Caver::LineSegment *a2,
        const Caver::Vector2 *a3,
        float *a4,
        float *a5)
{
  return _ZNK5Caver12OrientedRect27IntersectsLineSegmentOnAxisERKNS_11LineSegmentERKNS_7Vector2EPfS7_(
           this,
           a2,
           a3,
           a4,
           a5);
}

