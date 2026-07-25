/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056D064
 * Mangled: sub_56D064
 * Demangled: sub_56D064
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000056C650  sub_56C650
 *
 * Referenced strings: 6
 *   insn=0x000000000056D074 string=0x000000000056D078 "$`"
 *   insn=0x000000000056D078 string=0x000000000056D07C "#"
 *   insn=0x000000000056D08C string=0x000000000056D090 "`"
 *   insn=0x000000000056D0A4 string=0x000000000056D0A8 "j"
 *   insn=0x000000000056D0A8 string=0x000000000056D0AC "a"
 *   insn=0x000000000056D0B4 string=0x000000000056D0B8 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

const wchar_t **__usercall sub_56D064@<X0>(const wchar_t **a1@<X0>, const wchar_t **a2@<X8>)
{
  const wchar_t *v2; // x1
  int v4; // w3
  const wchar_t **v6; // [xsp+28h] [xbp+28h]

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
  *a2 = v2;
  return a2;
}

