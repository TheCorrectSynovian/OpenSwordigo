/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004575A0
 * Mangled: _ZN5Caver6Camera25VisibleAreaSizeAtDistanceEf
 * Demangled: Caver::Camera::VisibleAreaSizeAtDistance(float)
 *
 * Callers: 1
 *   0x00000000001F5EA0  Caver::Camera::VisibleAreaSizeAtDistance(float)
 *
 * Callees: 1
 *   0x00000000001FE5C0  .tanf
 *
 * Referenced strings: 4
 *   insn=0x00000000004575B0 string=0x00000000004575B4 ""
 *   insn=0x00000000004575B4 string=0x00000000004575B8 "`"
 *   insn=0x00000000004575C0 string=0x00000000004575C4 "a"
 *   insn=0x00000000004575CC string=0x00000000004575D0 "! "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __usercall Caver::Camera::VisibleAreaSizeAtDistance@<S0>(Caver::Camera *this@<X0>, float a2@<S0>, float *a3@<X8>)
{
  float result; // s0

  result = tanf(*((float *)this + 61)) * a2;
  *a3 = *((float *)this + 60) * result;
  a3[1] = result;
  return result;
}

