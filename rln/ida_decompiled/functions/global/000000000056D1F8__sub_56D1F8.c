/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056D1F8
 * Mangled: sub_56D1F8
 * Demangled: sub_56D1F8
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000056C650  sub_56C650
 *
 * Referenced strings: 7
 *   insn=0x000000000056D208 string=0x000000000056D20C "$`"
 *   insn=0x000000000056D20C string=0x000000000056D210 "#"
 *   insn=0x000000000056D214 string=0x000000000056D250 """
 *   insn=0x000000000056D220 string=0x000000000056D224 "`"
 *   insn=0x000000000056D23C string=0x000000000056D240 "a"
 *   insn=0x000000000056D248 string=0x000000000056D24C " "
 *   insn=0x000000000056D258 string=0x000000000056D25C "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__usercall sub_56D1F8@<X0>(const wchar_t **a1@<X0>, _QWORD *a2@<X8>)
{
  const wchar_t *v2; // x1
  int v4; // w3
  _QWORD *result; // x0
  _QWORD *v6; // [xsp+28h] [xbp+28h]

  v2 = *a1;
  v4 = *(*a1 - 2);
  if ( (v4 & 0x80000000) == 0 && *a1 - 6 != (const wchar_t *)&qword_6FD300 )
  {
    if ( v4 )
    {
      v6 = a2;
      sub_56C650(a1, 0, 0, 0);
      v2 = *a1;
      a2 = v6;
    }
    *((_DWORD *)v2 - 2) = -1;
  }
  result = a2;
  *a2 = &v2[*((_QWORD *)v2 - 3)];
  return result;
}

