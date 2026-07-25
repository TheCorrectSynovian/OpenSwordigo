/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200670
 * Mangled: .wmemchr
 * Demangled: .wmemchr
 *
 * Callers: 22
 *   0x0000000000528E58  sub_528E58
 *   0x00000000005569EC  sub_5569EC
 *   0x00000000005577B8  sub_5577B8
 *   0x0000000000558854  sub_558854
 *   0x0000000000559B48  sub_559B48
 *   0x000000000055A870  sub_55A870
 *   0x000000000055B1A0  sub_55B1A0
 *   0x000000000055BABC  sub_55BABC
 *   0x000000000055C444  sub_55C444
 *   0x000000000055CDD8  sub_55CDD8
 *   0x000000000056B7F8  sub_56B7F8
 *   0x000000000056BA38  sub_56BA38
 *   0x000000000056BB18  sub_56BB18
 *   0x000000000056BB68  sub_56BB68
 *   0x000000000056BC04  sub_56BC04
 *   0x000000000056BC8C  sub_56BC8C
 *   0x000000000056BD7C  sub_56BD7C
 *   0x000000000056BE14  sub_56BE14
 *   0x000000000056BEAC  sub_56BEAC
 *   0x000000000056BF94  sub_56BF94
 *   0x000000000056C02C  sub_56C02C
 *   0x000000000056C0B0  sub_56C0B0
 *
 * Callees: 1
 *   0x00000000006FEB40  wmemchr
 *
 * Referenced strings: 1
 *   insn=0x0000000000200678 string=0x000000000020067C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
wchar_t *wmemchr(const wchar_t *s, wchar_t c, size_t n)
{
  return wmemchr(s, c, n);
}

