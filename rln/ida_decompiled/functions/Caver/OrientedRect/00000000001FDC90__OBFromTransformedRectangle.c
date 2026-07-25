/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDC90
 * Mangled: ._ZN5Caver12OrientedRect26OBFromTransformedRectangleERKNS_9RectangleERKNS_7Vector2EffS6_ff
 * Demangled: Caver::OrientedRect::OBFromTransformedRectangle(Caver::Rectangle const&,Caver::Vector2 const&,float,float,Caver::Vector2 const&,float,float)
 *
 * Callers: 3
 *   0x00000000004AC394  Caver::RectangleIntersectsConvexPolygon(Caver::Rectangle const&,Caver::Vector2 const&,float,float,Caver::Polygon const&,Caver::Vector2 const&,float,float,Caver::Vector2*,float *)
 *   0x00000000004AC5A0  Caver::RectangleIntersectsPolygon(Caver::Rectangle const&,Caver::Vector2 const&,float,float,Caver::Polygon const&,Caver::Vector2 const&,float,float,Caver::Vector2*,float *,Caver::Vector2 const&)
 *   0x00000000004ACA14  Caver::RectangleIntersectsRectangle(Caver::Rectangle const&,Caver::Vector2 const&,float,float,Caver::Rectangle const&,Caver::Vector2 const&,float,float,Caver::Vector2*,float *,Caver::Vector2 const&)
 *
 * Callees: 1
 *   0x00000000004AFC30  Caver::OrientedRect::OBFromTransformedRectangle(Caver::Rectangle const&,Caver::Vector2 const&,float,float,Caver::Vector2 const&,float,float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FDC98 string=0x00000000001FDC9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::OrientedRect::OBFromTransformedRectangle(
        Caver::OrientedRect *this,
        const Caver::Rectangle *a2,
        const Caver::Vector2 *a3,
        float a4,
        float a5,
        const Caver::Vector2 *a6,
        float a7,
        float a8)
{
  return _ZN5Caver12OrientedRect26OBFromTransformedRectangleERKNS_9RectangleERKNS_7Vector2EffS6_ff(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8);
}

