/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201670
 * Mangled: .wctob
 * Demangled: .wctob
 *
 * Callers: 3
 *   0x0000000000520970  sub_520970
 *   0x00000000005209C4  sub_5209C4
 *   0x0000000000520AAC  sub_520AAC
 *
 * Callees: 1
 *   0x00000000006FEBD0  wctob
 *
 * Referenced strings: 1
 *   insn=0x0000000000201678 string=0x000000000020167C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
int wctob(wint_t c)
{
  return wctob(c);
}

