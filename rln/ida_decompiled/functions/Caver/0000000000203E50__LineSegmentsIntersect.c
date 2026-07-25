/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203E50
 * Mangled: ._ZN5Caver21LineSegmentsIntersectERKNS_7Vector2ES2_S2_S2_PfS3_b
 * Demangled: Caver::LineSegmentsIntersect(Caver::Vector2 const&,Caver::Vector2 const&,Caver::Vector2 const&,Caver::Vector2 const&,float *,float *,bool)
 *
 * Callers: 1
 *   0x00000000004B0200  Caver::PolygonSelfIntersects(Caver::Vector2 const*,int)
 *
 * Callees: 1
 *   0x00000000004AD8B0  Caver::LineSegmentsIntersect(Caver::Vector2 const&,Caver::Vector2 const&,Caver::Vector2 const&,Caver::Vector2 const&,float *,float *,bool)
 *
 * Referenced strings: 2
 *   insn=0x0000000000203E54 string=0x00000000004AD8B0 "a@-@"
 *   insn=0x0000000000203E58 string=0x0000000000203E5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::LineSegmentsIntersect(
        Caver *this,
        const Caver::Vector2 *a2,
        const Caver::Vector2 *a3,
        const Caver::Vector2 *a4,
        const Caver::Vector2 *a5,
        float *a6,
        float *a7,
        bool a8)
{
  return _ZN5Caver21LineSegmentsIntersectERKNS_7Vector2ES2_S2_S2_PfS3_b(this, a2, a3, a4, a5, a6, a7, a8);
}

