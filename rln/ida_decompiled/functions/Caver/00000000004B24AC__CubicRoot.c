/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B24AC
 * Mangled: _ZN5Caver9CubicRootEf
 * Demangled: Caver::CubicRoot(float)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FF180  .powf
 *
 * Referenced strings: 6
 *   insn=0x00000000004B24B4 string=0x00000000004B24B8 "("
 *   insn=0x00000000004B24BC string=0x00000000004B24C0 ""
 *   insn=0x00000000004B24C4 string=0x00000000004B24C8 ".3"
 *   insn=0x00000000004B24CC string=0x00000000004B24D0 "! "
 *   insn=0x00000000004B24D8 string=0x00000000004B24DC "AL!"
 *   insn=0x00000000004B24DC string=0x00000000004B24E0 "  "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall Caver::CubicRoot(Caver *this, float a2)
{
  float v3; // s0
  float v4; // s1

  v3 = powf(fabsf(a2), 0.33333);
  v4 = 1.0;
  if ( a2 < 0.0 )
    v4 = -1.0;
  return v4 * v3;
}

