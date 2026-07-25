/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056D004
 * Mangled: sub_56D004
 * Demangled: sub_56D004
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000056C650  sub_56C650
 *
 * Referenced strings: 5
 *   insn=0x000000000056D010 string=0x000000000056D014 "%`"
 *   insn=0x000000000056D014 string=0x000000000056D018 "$"
 *   insn=0x000000000056D028 string=0x000000000056D02C "@"
 *   insn=0x000000000056D044 string=0x000000000056D048 "a"
 *   insn=0x000000000056D04C string=0x000000000056D050 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

const wchar_t *__fastcall sub_56D004(const wchar_t **a1)
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

