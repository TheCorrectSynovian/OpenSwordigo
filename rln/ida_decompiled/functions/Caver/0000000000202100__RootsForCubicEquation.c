/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202100
 * Mangled: ._ZN5Caver21RootsForCubicEquationEffffPf
 * Demangled: Caver::RootsForCubicEquation(float,float,float,float,float *)
 *
 * Callers: 1
 *   0x00000000004ABF8C  Caver::BezierSegment::IntersectsWithX(float,int *,float *)
 *
 * Callees: 1
 *   0x00000000004B24EC  Caver::RootsForCubicEquation(float,float,float,float,float *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202108 string=0x000000000020210C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::RootsForCubicEquation(Caver *this, float a2, float a3, float a4, float a5, float *a6)
{
  return _ZN5Caver21RootsForCubicEquationEffffPf(this, a2, a3, a4, a5, a6);
}

