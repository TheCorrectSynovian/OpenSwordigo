/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6A40
 * Mangled: ._Z13RangesOverlapffffPf
 * Demangled: RangesOverlap(float,float,float,float,float *)
 *
 * Callers: 1
 *   0x00000000004AD158  Caver::CircleIntersectsRectangle(Caver::Circle const&,Caver::Vector2 const&,float,float,Caver::Rectangle const&,Caver::Vector2 const&,float,float,Caver::Vector2*,float *)
 *
 * Callees: 1
 *   0x00000000004AC204  RangesOverlap(float,float,float,float,float *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6A48 string=0x00000000001F6A4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall RangesOverlap(float a1, float a2, float a3, float a4, float *a5)
{
  return _Z13RangesOverlapffffPf(a1, a2, a3, a4, a5);
}

