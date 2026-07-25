/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4100
 * Mangled: .strncpy
 * Demangled: .strncpy
 *
 * Callers: 2
 *   0x00000000004EF46C  sub_4EF46C
 *   0x00000000004FBC90  sub_4FBC90
 *
 * Callees: 1
 *   0x00000000006FE5E0  strncpy
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4108 string=0x00000000001F410C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
char *strncpy(char *a1, const char *a2, size_t a3)
{
  return strncpy(a1, a2, a3);
}

