/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002410E0
 * Mangled: _ZN5Caver28TransformControllerComponent8RotateToEff
 * Demangled: Caver::TransformControllerComponent::RotateTo(float,float)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x00000000002410E8 string=0x00000000002410EC "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall Caver::TransformControllerComponent::RotateTo(
        Caver::TransformControllerComponent *this,
        float a2,
        float a3)
{
  __int64 v3; // x8
  float result; // s0

  v3 = *((_QWORD *)this + 5);
  *((float *)this + 32) = a2;
  *((_BYTE *)this + 124) = 1;
  result = a2 - *(float *)(v3 + 128);
  *((float *)this + 33) = result;
  *((float *)this + 34) = a3;
  return result;
}

