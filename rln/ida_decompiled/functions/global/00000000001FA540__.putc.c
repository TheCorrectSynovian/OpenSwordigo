/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA540
 * Mangled: .putc
 * Demangled: .putc
 *
 * Callers: 1
 *   0x000000000053E16C  sub_53E16C
 *
 * Callees: 1
 *   0x00000000006FE8B0  putc
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA548 string=0x00000000001FA54C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
int putc(int c, FILE *stream)
{
  return putc(c, stream);
}

