/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B2B60
 * Mangled: _ZN5Caver7Vector29FromAngleEf
 * Demangled: Caver::Vector2::FromAngle(float)
 *
 * Callers: 1
 *   0x00000000001F5730  Caver::Vector2::FromAngle(float)
 *
 * Callees: 2
 *   0x00000000001FF1F0  .cosf
 *   0x0000000000203C70  .sinf
 *
 * Referenced strings: 4
 *   insn=0x00000000004B2B6C string=0x00000000004B2B70 ""
 *   insn=0x00000000004B2B78 string=0x00000000004B2B7C "\t"
 *   insn=0x00000000004B2B80 string=0x00000000004B2B84 ";D"
 *   insn=0x00000000004B2B84 string=0x00000000004B2B88 "i"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall Caver::Vector2::FromAngle(float a1@<S0>, float *a2@<X8>)
{
  float v5; // s9
  float v6; // s0

  v5 = cosf(a1);
  v6 = sinf(a1);
  *a2 = v5;
  a2[1] = v6;
}

