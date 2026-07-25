/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDA90
 * Mangled: .towupper
 * Demangled: .towupper
 *
 * Callers: 2
 *   0x0000000000520618  sub_520618
 *   0x0000000000520620  sub_520620
 *
 * Callees: 1
 *   0x00000000006FEA18  towupper
 *
 * Referenced strings: 1
 *   insn=0x00000000001FDA98 string=0x00000000001FDA9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
wint_t towupper(wint_t wc)
{
  return towupper(wc);
}

