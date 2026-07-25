/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCFA0
 * Mangled: ._ZNK5Caver12OrientedRect28IntersectsOrientedRectOnAxisERKS0_RKNS_7Vector2EPfS6_
 * Demangled: Caver::OrientedRect::IntersectsOrientedRectOnAxis(Caver::OrientedRect const&,Caver::Vector2 const&,float *,float *)
 *
 * Callers: 1
 *   0x00000000004ACA14  Caver::RectangleIntersectsRectangle(Caver::Rectangle const&,Caver::Vector2 const&,float,float,Caver::Rectangle const&,Caver::Vector2 const&,float,float,Caver::Vector2*,float *,Caver::Vector2 const&)
 *
 * Callees: 1
 *   0x00000000004AFEF0  Caver::OrientedRect::IntersectsOrientedRectOnAxis(Caver::OrientedRect const&,Caver::Vector2 const&,float *,float *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FCFA8 string=0x00000000001FCFAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::OrientedRect::IntersectsOrientedRectOnAxis()
{
  return _ZNK5Caver12OrientedRect28IntersectsOrientedRectOnAxisERKS0_RKNS_7Vector2EPfS6_();
}

