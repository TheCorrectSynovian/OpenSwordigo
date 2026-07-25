/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF180
 * Mangled: .powf
 * Demangled: .powf
 *
 * Callers: 2
 *   0x00000000004B24AC  Caver::CubicRoot(float)
 *   0x00000000004B24EC  Caver::RootsForCubicEquation(float,float,float,float,float *)
 *
 * Callees: 1
 *   0x00000000006FEAC8  powf
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF188 string=0x00000000001FF18C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
float powf(float x, float y)
{
  return powf(x, y);
}

