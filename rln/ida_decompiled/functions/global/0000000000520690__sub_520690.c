/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000520690
 * Mangled: sub_520690
 * Demangled: sub_520690
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F46E0  .towlower
 *
 * Referenced strings: 7
 *   insn=0x0000000000520690 string=0x0000000000520694 "?"
 *   insn=0x00000000005206AC string=0x00000000005206B0 "U"
 *   insn=0x00000000005206B0 string=0x00000000005206B4 "3"
 *   insn=0x00000000005206C0 string=0x00000000005206C4 "5"
 *   insn=0x00000000005206CC string=0x00000000001F46E0 "P'"
 *   insn=0x00000000005206D8 string=0x00000000005206DC "s"
 *   insn=0x00000000005206DC string=0x00000000005206E0 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int64 __fastcall sub_520690(__int64 a1, wint_t *a2, unsigned __int64 a3)
{
  wint_t *v3; // x20
  wint_t *v5; // x19
  wint_t *v6; // x21
  bool v7; // zf

  v3 = a2;
  if ( (unsigned __int64)a2 < a3 )
  {
    v5 = a2 + 1;
    v6 = (wint_t *)((char *)a2 + ((a3 + 3 - (_QWORD)(a2 + 1)) & 0xFFFFFFFFFFFFFFFCLL) + 4);
    do
    {
      *v3 = towlower(*v3);
      v7 = v5 == v6;
      v3 = v5++;
    }
    while ( !v7 );
  }
  return a3;
}

