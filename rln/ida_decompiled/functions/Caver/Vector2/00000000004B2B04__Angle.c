/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B2B04
 * Mangled: _ZNK5Caver7Vector25AngleEv
 * Demangled: Caver::Vector2::Angle(void)
 *
 * Callers: 1
 *   0x00000000001F6DE0  Caver::Vector2::Angle(void)
 *
 * Callees: 1
 *   0x00000000001F5C80  .atan2f
 *
 * Referenced strings: 8
 *   insn=0x00000000004B2B0C string=0x00000000004B2B10 "#"
 *   insn=0x00000000004B2B10 string=0x00000000004B2B14 "`  "
 *   insn=0x00000000004B2B18 string=0x00000000004B2B1C "C"
 *   insn=0x00000000004B2B1C string=0x00000000004B2B20 "`  "
 *   insn=0x00000000004B2B30 string=0x00000000004B2B34 "@"
 *   insn=0x00000000004B2B34 string=0x00000000004B2B38 "R"
 *   insn=0x00000000004B2B38 string=0x00000000004B2B3C "  "
 *   insn=0x00000000004B2B38 string=0x00000000001F5C80 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall Caver::Vector2::Angle(Caver::Vector2 *this)
{
  float v1; // s2
  float result; // s0

  v1 = *((float *)this + 1);
  if ( fabsf(*(float *)this) >= 0.0001 || (result = 0.0, fabsf(v1) >= 0.0001) )
  {
    result = atan2f(v1, *(float *)this);
    if ( result < 0.0 )
      return result + 6.28318531;
  }
  return result;
}

