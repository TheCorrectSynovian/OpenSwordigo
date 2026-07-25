/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA6A0
 * Mangled: .wcscoll
 * Demangled: .wcscoll
 *
 * Callers: 1
 *   0x0000000000570E4C  sub_570E4C
 *
 * Callees: 1
 *   0x00000000006FE8C8  wcscoll
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA6A8 string=0x00000000001FA6AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
int wcscoll(const wchar_t *s1, const wchar_t *s2)
{
  return wcscoll(s1, s2);
}

