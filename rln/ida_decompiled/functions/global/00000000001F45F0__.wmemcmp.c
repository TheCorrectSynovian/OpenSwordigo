/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F45F0
 * Mangled: .wmemcmp
 * Demangled: .wmemcmp
 *
 * Callers: 10
 *   0x000000000056B6DC  sub_56B6DC
 *   0x000000000056B848  sub_56B848
 *   0x000000000056B8D0  sub_56B8D0
 *   0x000000000056B958  sub_56B958
 *   0x000000000056C1A0  sub_56C1A0
 *   0x000000000056C208  sub_56C208
 *   0x000000000056C2A4  sub_56C2A4
 *   0x000000000056C36C  sub_56C36C
 *   0x000000000056C3EC  sub_56C3EC
 *   0x000000000056C4A8  sub_56C4A8
 *
 * Callees: 1
 *   0x00000000006FE600  wmemcmp
 *
 * Referenced strings: 1
 *   insn=0x00000000001F45F8 string=0x00000000001F45FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
int wmemcmp(const wchar_t *s1, const wchar_t *s2, size_t n)
{
  return wmemcmp(s1, s2, n);
}

