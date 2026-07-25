/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD670
 * Mangled: .strcat
 * Demangled: .strcat
 *
 * Callers: 1
 *   0x00000000004EF46C  sub_4EF46C
 *
 * Callees: 1
 *   0x00000000006FEA00  strcat
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD678 string=0x00000000001FD67C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
char *strcat(char *a1, const char *a2)
{
  return strcat(a1, a2);
}

