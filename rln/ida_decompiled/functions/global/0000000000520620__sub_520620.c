/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000520620
 * Mangled: sub_520620
 * Demangled: sub_520620
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FDA90  .towupper
 *
 * Referenced strings: 8
 *   insn=0x0000000000520620 string=0x0000000000520624 "?"
 *   insn=0x000000000052063C string=0x0000000000520640 "U"
 *   insn=0x0000000000520640 string=0x0000000000520644 "3"
 *   insn=0x0000000000520650 string=0x0000000000520654 "5"
 *   insn=0x0000000000520658 string=0x000000000052065C "u"
 *   insn=0x000000000052065C string=0x00000000001FDA90 "0'"
 *   insn=0x0000000000520668 string=0x000000000052066C "s"
 *   insn=0x000000000052066C string=0x0000000000520670 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int64 __fastcall sub_520620(__int64 a1, wint_t *a2, unsigned __int64 a3)
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
      *v3 = towupper(*v3);
      v7 = v5 == v6;
      v3 = v5++;
    }
    while ( !v7 );
  }
  return a3;
}

