/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5C80
 * Mangled: .atan2f
 * Demangled: .atan2f
 *
 * Callers: 1
 *   0x00000000004B2B04  Caver::Vector2::Angle(void)
 *
 * Callees: 1
 *   0x00000000006FE6B0  atan2f
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5C88 string=0x00000000001F5C8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
float atan2f(float y, float x)
{
  return atan2f(y, x);
}

