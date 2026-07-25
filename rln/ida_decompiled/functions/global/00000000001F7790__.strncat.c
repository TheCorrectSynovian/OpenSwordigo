/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7790
 * Mangled: .strncat
 * Demangled: .strncat
 *
 * Callers: 1
 *   0x00000000004EF46C  sub_4EF46C
 *
 * Callees: 1
 *   0x00000000006FE798  strncat
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7798 string=0x00000000001F779C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
char *strncat(char *a1, const char *a2, size_t a3)
{
  return strncat(a1, a2, a3);
}

