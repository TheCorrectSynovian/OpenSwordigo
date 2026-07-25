/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC160
 * Mangled: .fmodf
 * Demangled: .fmodf
 *
 * Callers: 1
 *   0x00000000004AC14C  AngleDifference(float,float)
 *
 * Callees: 1
 *   0x00000000006FE960  fmodf
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC168 string=0x00000000001FC16C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
float fmodf(float x, float y)
{
  return fmodf(x, y);
}

