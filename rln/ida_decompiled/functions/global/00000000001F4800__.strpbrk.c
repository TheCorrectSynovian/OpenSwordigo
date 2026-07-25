/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4800
 * Mangled: .strpbrk
 * Demangled: .strpbrk
 *
 * Callers: 1
 *   0x00000000004FCAF8  sub_4FCAF8
 *
 * Callees: 1
 *   0x00000000006FE610  strpbrk
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4808 string=0x00000000001F480C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
char *strpbrk(const char *a1, const char *a2)
{
  return strpbrk(a1, a2);
}

