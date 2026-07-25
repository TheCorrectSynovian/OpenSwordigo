/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202880
 * Mangled: .feof
 * Demangled: .feof
 *
 * Callers: 1
 *   0x00000000004F9F24  sub_4F9F24
 *
 * Callees: 1
 *   0x00000000006FEC40  feof
 *
 * Referenced strings: 1
 *   insn=0x0000000000202888 string=0x000000000020288C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
int feof(FILE *stream)
{
  return feof(stream);
}

