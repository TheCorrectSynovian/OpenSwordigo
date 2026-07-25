/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056D26C
 * Mangled: sub_56D26C
 * Demangled: sub_56D26C
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000056C650  sub_56C650
 *
 * Referenced strings: 7
 *   insn=0x000000000056D278 string=0x000000000056D27C "%`"
 *   insn=0x000000000056D27C string=0x000000000056D280 "$"
 *   insn=0x000000000056D280 string=0x000000000056D284 "3"
 *   insn=0x000000000056D284 string=0x000000000056D288 "s"
 *   insn=0x000000000056D28C string=0x000000000056D2C4 " "
 *   insn=0x000000000056D298 string=0x000000000056D29C "@"
 *   insn=0x000000000056D2BC string=0x000000000056D2C0 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

const wchar_t *__fastcall sub_56D26C(const wchar_t **a1)
{
  const wchar_t *v1; // x1
  int v2; // w4
  __int64 v3; // x19

  v1 = *a1;
  v2 = *(*a1 - 2);
  v3 = *((_QWORD *)*a1 - 3) - 1LL;
  if ( (v2 & 0x80000000) == 0 && *a1 - 6 != (const wchar_t *)&qword_6FD300 )
  {
    if ( v2 )
    {
      sub_56C650(a1, 0, 0, 0);
      v1 = *a1;
    }
    *((_DWORD *)v1 - 2) = -1;
  }
  return &v1[v3];
}

