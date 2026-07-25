/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005206F8
 * Mangled: sub_5206F8
 * Demangled: sub_5206F8
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FFDA0  .iswctype
 *
 * Referenced strings: 5
 *   insn=0x0000000000520708 string=0x000000000052070C "6"
 *   insn=0x0000000000520720 string=0x0000000000520730 "a"
 *   insn=0x0000000000520730 string=0x0000000000520734 "s"
 *   insn=0x0000000000520738 string=0x000000000052073C "@"
 *   insn=0x000000000052074C string=0x0000000000520750 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_5206F8(__int64 a1, unsigned __int8 a2, wint_t wc)
{
  int v3; // w22
  unsigned __int8 *v5; // x19
  wctype_t *v6; // x20
  unsigned __int8 *v7; // x21
  int v8; // w1

  v3 = a2;
  v5 = (unsigned __int8 *)(a1 + 1180);
  v6 = (wctype_t *)(a1 + 1200);
  v7 = (unsigned __int8 *)(a1 + 1196);
  do
  {
    v8 = *v5++;
    if ( (v3 & v8) != 0 && iswctype(wc, *v6) )
      return 1;
    ++v6;
  }
  while ( v5 != v7 );
  return 0;
}

