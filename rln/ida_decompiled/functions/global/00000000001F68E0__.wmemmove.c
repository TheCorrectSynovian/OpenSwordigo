/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F68E0
 * Mangled: .wmemmove
 * Demangled: .wmemmove
 *
 * Callers: 3
 *   0x000000000056B300  sub_56B300
 *   0x000000000056C650  sub_56C650
 *   0x000000000056CB34  sub_56CB34
 *
 * Callees: 1
 *   0x00000000006FE728  wmemmove
 *
 * Referenced strings: 1
 *   insn=0x00000000001F68E8 string=0x00000000001F68EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
wchar_t *wmemmove(wchar_t *s1, const wchar_t *s2, size_t n)
{
  return wmemmove(s1, s2, n);
}

