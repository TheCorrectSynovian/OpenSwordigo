/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8030
 * Mangled: .ungetwc
 * Demangled: .ungetwc
 *
 * Callers: 2
 *   0x000000000053E00C  sub_53E00C
 *   0x000000000053E034  sub_53E034
 *
 * Callees: 1
 *   0x00000000006FE7D8  ungetwc
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8038 string=0x00000000001F803C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
wint_t ungetwc(wint_t wc, __FILE *stream)
{
  return ungetwc(wc, stream);
}

