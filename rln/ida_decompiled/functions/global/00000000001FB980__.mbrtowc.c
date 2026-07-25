/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB980
 * Mangled: .mbrtowc
 * Demangled: .mbrtowc
 *
 * Callers: 2
 *   0x0000000000570C08  sub_570C08
 *   0x0000000000570D4C  sub_570D4C
 *
 * Callees: 1
 *   0x00000000006FE908  mbrtowc
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB988 string=0x00000000001FB98C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
size_t mbrtowc(wchar_t *pwc, const char *s, size_t n, mbstate_t *p)
{
  return mbrtowc(pwc, s, n, p);
}

