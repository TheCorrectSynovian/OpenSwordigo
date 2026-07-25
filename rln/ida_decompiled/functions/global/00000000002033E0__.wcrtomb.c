/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002033E0
 * Mangled: .wcrtomb
 * Demangled: .wcrtomb
 *
 * Callers: 1
 *   0x0000000000570AB4  sub_570AB4
 *
 * Callees: 1
 *   0x00000000006FECB0  wcrtomb
 *
 * Referenced strings: 1
 *   insn=0x00000000002033E8 string=0x00000000002033EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
size_t wcrtomb(char *s, wchar_t wc, mbstate_t *ps)
{
  return wcrtomb(s, wc, ps);
}

