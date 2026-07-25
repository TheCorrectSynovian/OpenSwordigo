/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A6C30
 * Mangled: _ZN5Caver17GUIAnimationCurveC2ERKNS_7Vector2ES3_
 * Demangled: Caver::GUIAnimationCurve::GUIAnimationCurve(Caver::Vector2 const&,Caver::Vector2 const&)
 *
 * Callers: 1
 *   0x00000000001FB0E0  Caver::GUIAnimationCurve::GUIAnimationCurve(Caver::Vector2 const&,Caver::Vector2 const&)
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x00000000004A6C30 string=0x00000000004A6C34 "("
 *   insn=0x00000000004A6C38 string=0x00000000004A6C3C ""
 *   insn=0x00000000004A6C3C string=0x00000000004A6C40 "H"
 *   insn=0x00000000004A6C44 string=0x00000000004A6C48 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

double __fastcall Caver::GUIAnimationCurve::GUIAnimationCurve(__int64 a1, _QWORD *a2, __int64 *a3)
{
  double result; // d0
  __int64 v8; // x8

  *(_QWORD *)a1 = 0;
  __asm { FMOV            V0.2S, #1.0 }
  *(_QWORD *)(a1 + 8) = *a2;
  v8 = *a3;
  *(double *)(a1 + 24) = result;
  *(_QWORD *)(a1 + 16) = v8;
  return result;
}

