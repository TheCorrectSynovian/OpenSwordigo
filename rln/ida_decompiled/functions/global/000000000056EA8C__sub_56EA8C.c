/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056EA8C
 * Mangled: sub_56EA8C
 * Demangled: sub_56EA8C
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000056E318  sub_56E318
 *
 * Referenced strings: 6
 *   insn=0x000000000056EAAC string=0x000000000056EAB0 "4"
 *   insn=0x000000000056EABC string=0x000000000056EAC0 "_"
 *   insn=0x000000000056EAD0 string=0x000000000056EAD4 "`"
 *   insn=0x000000000056EADC string=0x000000000056EAE0 "a"
 *   insn=0x000000000056EAE4 string=0x000000000056EAE8 "!"
 *   insn=0x000000000056EAE8 string=0x000000000056EAEC "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

const wchar_t **__fastcall sub_56EA8C(const wchar_t **a1, wchar_t a2)
{
  const wchar_t *v3; // x0
  __int64 v5; // x1
  __int64 v6; // x20

  v3 = *a1;
  v5 = *((_QWORD *)v3 - 3);
  v6 = v5 + 1;
  if ( (unsigned __int64)(v5 + 1) > *((_QWORD *)v3 - 2) || *(v3 - 2) > 0 )
  {
    sub_56E318(a1, v5 + 1);
    v3 = *a1;
    v5 = *((_QWORD *)*a1 - 3);
  }
  v3[v5] = a2;
  if ( v3 - 6 != (const wchar_t *)&qword_6FD300 )
  {
    *((_QWORD *)v3 - 3) = v6;
    *((_DWORD *)v3 - 2) = 0;
    v3[v6] = 0;
  }
  return a1;
}

