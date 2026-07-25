/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002009D0
 * Mangled: .strcspn
 * Demangled: .strcspn
 *
 * Callers: 1
 *   0x00000000004EF46C  sub_4EF46C
 *
 * Callees: 1
 *   0x00000000006FEB80  strcspn
 *
 * Referenced strings: 1
 *   insn=0x00000000002009D8 string=0x00000000002009DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
size_t strcspn(const char *a1, const char *a2)
{
  return strcspn(a1, a2);
}

