/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFDA0
 * Mangled: .iswctype
 * Demangled: .iswctype
 *
 * Callers: 2
 *   0x00000000005206F8  sub_5206F8
 *   0x0000000000520780  sub_520780
 *
 * Callees: 1
 *   0x00000000006FEB08  iswctype
 *
 * Referenced strings: 1
 *   insn=0x00000000001FFDA8 string=0x00000000001FFDAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
int iswctype(wint_t wc, wctype_t desc)
{
  return iswctype(wc, desc);
}

