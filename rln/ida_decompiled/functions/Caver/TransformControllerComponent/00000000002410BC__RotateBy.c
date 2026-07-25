/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002410BC
 * Mangled: _ZN5Caver28TransformControllerComponent8RotateByEff
 * Demangled: Caver::TransformControllerComponent::RotateBy(float,float)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x00000000002410C4 string=0x00000000002410C8 ""
 *   insn=0x00000000002410CC string=0x00000000002410D0 "@( "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall Caver::TransformControllerComponent::RotateBy(
        Caver::TransformControllerComponent *this,
        float a2,
        float a3)
{
  float v3; // s2
  float result; // s0

  v3 = *(float *)(*((_QWORD *)this + 5) + 128LL);
  *((_BYTE *)this + 124) = 1;
  *((float *)this + 34) = a3;
  result = v3 + a2;
  *((float *)this + 32) = result;
  *((float *)this + 33) = result - v3;
  return result;
}

