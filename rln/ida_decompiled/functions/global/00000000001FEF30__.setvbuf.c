/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FEF30
 * Mangled: .setvbuf
 * Demangled: .setvbuf
 *
 * Callers: 1
 *   0x000000000051F550  sub_51F550
 *
 * Callees: 1
 *   0x00000000006FEAB8  setvbuf
 *
 * Referenced strings: 1
 *   insn=0x00000000001FEF38 string=0x00000000001FEF3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
int setvbuf(FILE *stream, char *buf, int modes, size_t n)
{
  return setvbuf(stream, buf, modes, n);
}

