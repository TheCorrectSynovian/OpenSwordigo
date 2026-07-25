/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC6D0
 * Mangled: ._ZNK5Caver12OrientedRect23IntersectsPolygonOnAxisERKNS_7PolygonERKNS_7Vector2EPfS7_
 * Demangled: Caver::OrientedRect::IntersectsPolygonOnAxis(Caver::Polygon const&,Caver::Vector2 const&,float *,float *)
 *
 * Callers: 1
 *   0x00000000004AC394  Caver::RectangleIntersectsConvexPolygon(Caver::Rectangle const&,Caver::Vector2 const&,float,float,Caver::Polygon const&,Caver::Vector2 const&,float,float,Caver::Vector2*,float *)
 *
 * Callees: 1
 *   0x00000000004AFFE0  Caver::OrientedRect::IntersectsPolygonOnAxis(Caver::Polygon const&,Caver::Vector2 const&,float *,float *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC6D8 string=0x00000000001FC6DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::OrientedRect::IntersectsPolygonOnAxis(
        Caver::OrientedRect *this,
        const Caver::Polygon *a2,
        const Caver::Vector2 *a3,
        float *a4,
        float *a5)
{
  return _ZNK5Caver12OrientedRect23IntersectsPolygonOnAxisERKNS_7PolygonERKNS_7Vector2EPfS7_(this, a2, a3, a4, a5);
}

