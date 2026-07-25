/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBC00
 * Mangled: .wcsxfrm
 * Demangled: .wcsxfrm
 *
 * Callers: 1
 *   0x0000000000570E74  sub_570E74
 *
 * Callees: 1
 *   0x00000000006FE928  wcsxfrm
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBC08 string=0x00000000001FBC0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
size_t wcsxfrm(wchar_t *s1, const wchar_t *s2, size_t n)
{
  return wcsxfrm(s1, s2, n);
}

