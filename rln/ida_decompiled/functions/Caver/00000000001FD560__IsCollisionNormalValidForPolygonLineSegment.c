/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD560
 * Mangled: ._ZN5Caver43IsCollisionNormalValidForPolygonLineSegmentERKNS_7Vector2ERKNS_7PolygonEi
 * Demangled: Caver::IsCollisionNormalValidForPolygonLineSegment(Caver::Vector2 const&,Caver::Polygon const&,int)
 *
 * Callers: 2
 *   0x00000000004AC5A0  Caver::RectangleIntersectsPolygon(Caver::Rectangle const&,Caver::Vector2 const&,float,float,Caver::Polygon const&,Caver::Vector2 const&,float,float,Caver::Vector2*,float *,Caver::Vector2 const&)
 *   0x00000000004ACC90  Caver::CircleIntersectsPolygon(Caver::Circle const&,Caver::Vector2 const&,float,float,Caver::Polygon const&,Caver::Vector2 const&,float,float,Caver::Vector2*,float *)
 *
 * Callees: 1
 *   0x00000000004AC2A8  Caver::IsCollisionNormalValidForPolygonLineSegment(Caver::Vector2 const&,Caver::Polygon const&,int)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FD564 string=0x00000000004AC2A8 "("
 *   insn=0x00000000001FD568 string=0x00000000001FD56C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::IsCollisionNormalValidForPolygonLineSegment(
        Caver *this,
        const Caver::Vector2 *a2,
        const Caver::Polygon *a3,
        int a4)
{
  return _ZN5Caver43IsCollisionNormalValidForPolygonLineSegmentERKNS_7Vector2ERKNS_7PolygonEi(this, a2, a3, a4);
}

