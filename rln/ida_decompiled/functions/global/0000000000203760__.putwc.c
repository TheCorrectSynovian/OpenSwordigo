/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203760
 * Mangled: .putwc
 * Demangled: .putwc
 *
 * Callers: 2
 *   0x000000000053E0A0  sub_53E0A0
 *   0x000000000053E1A8  sub_53E1A8
 *
 * Callees: 1
 *   0x00000000006FECC8  putwc
 *
 * Referenced strings: 1
 *   insn=0x0000000000203768 string=0x000000000020376C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
wint_t putwc(wchar_t wc, __FILE *stream)
{
  return putwc(wc, stream);
}

