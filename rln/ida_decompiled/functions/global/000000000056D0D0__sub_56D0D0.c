/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056D0D0
 * Mangled: sub_56D0D0
 * Demangled: sub_56D0D0
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000056C650  sub_56C650
 *
 * Referenced strings: 6
 *   insn=0x000000000056D0DC string=0x000000000056D0E0 "%`"
 *   insn=0x000000000056D0E0 string=0x000000000056D0E4 "$"
 *   insn=0x000000000056D0F4 string=0x000000000056D0F8 "@"
 *   insn=0x000000000056D10C string=0x000000000056D110 "P"
 *   insn=0x000000000056D110 string=0x000000000056D114 "a"
 *   insn=0x000000000056D118 string=0x000000000056D11C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

const wchar_t *__fastcall sub_56D0D0(const wchar_t **a1)
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
  return v1;
}

