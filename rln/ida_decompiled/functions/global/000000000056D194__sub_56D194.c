/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056D194
 * Mangled: sub_56D194
 * Demangled: sub_56D194
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000056C650  sub_56C650
 *
 * Referenced strings: 7
 *   insn=0x000000000056D1A0 string=0x000000000056D1A4 "%`"
 *   insn=0x000000000056D1A4 string=0x000000000056D1A8 "$"
 *   insn=0x000000000056D1AC string=0x000000000056D1E4 " "
 *   insn=0x000000000056D1B8 string=0x000000000056D1BC "@"
 *   insn=0x000000000056D1D4 string=0x000000000056D1D8 "a"
 *   insn=0x000000000056D1DC string=0x000000000056D1E0 " "
 *   insn=0x000000000056D1EC string=0x000000000056D1F0 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

const wchar_t *__fastcall sub_56D194(const wchar_t **a1)
{
  const wchar_t *v1; // x1
  int v2; // w4

  v1 = *a1;
  v2 = *(*a1 - 2);
  if ( (v2 & 0x80000000) == 0 && *a1 - 6 != (const wchar_t *)&qword_6FD300 )
  {
    if ( v2 )
    {
      sub_56C650(a1, 0, 0, 0);
      v1 = *a1;
    }
    *((_DWORD *)v1 - 2) = -1;
  }
  return &v1[*((_QWORD *)v1 - 3)];
}

