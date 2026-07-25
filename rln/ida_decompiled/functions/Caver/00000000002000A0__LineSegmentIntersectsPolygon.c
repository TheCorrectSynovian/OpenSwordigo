/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002000A0
 * Mangled: ._ZN5Caver28LineSegmentIntersectsPolygonERKNS_11LineSegmentERKNS_7PolygonERKNS_7Vector2EffPfPS6_SA_Pi
 * Demangled: Caver::LineSegmentIntersectsPolygon(Caver::LineSegment const&,Caver::Polygon const&,Caver::Vector2 const&,float,float,float *,Caver::Vector2*,Caver::Vector2*,int *)
 *
 * Callers: 1
 *   0x000000000021742C  Caver::CollisionShape::IntersectsWithLineSegment(Caver::LineSegment const&,Caver::Vector2 *,Caver::Vector2 *,int *)
 *
 * Callees: 1
 *   0x00000000004AD4F8  Caver::LineSegmentIntersectsPolygon(Caver::LineSegment const&,Caver::Polygon const&,Caver::Vector2 const&,float,float,float *,Caver::Vector2*,Caver::Vector2*,int *)
 *
 * Referenced strings: 1
 *   insn=0x00000000002000A8 string=0x00000000002000AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::LineSegmentIntersectsPolygon(
        Caver *this,
        const Caver::LineSegment *a2,
        const Caver::Polygon *a3,
        const Caver::Vector2 *a4,
        float a5,
        float a6,
        float *a7,
        Caver::Vector2 *a8,
        Caver::Vector2 *a9,
        int *a10)
{
  return _ZN5Caver28LineSegmentIntersectsPolygonERKNS_11LineSegmentERKNS_7PolygonERKNS_7Vector2EffPfPS6_SA_Pi(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10);
}

