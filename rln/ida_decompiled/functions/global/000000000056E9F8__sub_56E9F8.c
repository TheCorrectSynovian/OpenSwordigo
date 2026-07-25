/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056E9F8
 * Mangled: sub_56E9F8
 * Demangled: sub_56E9F8
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000056E318  sub_56E318
 *
 * Referenced strings: 7
 *   insn=0x000000000056EA18 string=0x000000000056EA1C "4"
 *   insn=0x000000000056EA28 string=0x000000000056EA2C "_"
 *   insn=0x000000000056EA38 string=0x000000000056EA3C "7"
 *   insn=0x000000000056EA3C string=0x000000000056EA40 "`"
 *   insn=0x000000000056EA48 string=0x000000000056EA4C "a"
 *   insn=0x000000000056EA50 string=0x000000000056EA54 "!"
 *   insn=0x000000000056EA54 string=0x000000000056EA58 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

const wchar_t *__fastcall sub_56E9F8(const wchar_t **a1, wchar_t a2)
{
  const wchar_t *result; // x0
  __int64 v5; // x1
  __int64 v6; // x20

  result = *a1;
  v5 = *((_QWORD *)result - 3);
  v6 = v5 + 1;
  if ( (unsigned __int64)(v5 + 1) > *((_QWORD *)result - 2) || *(result - 2) > 0 )
  {
    sub_56E318(a1, v5 + 1);
    result = *a1;
    v5 = *((_QWORD *)*a1 - 3);
  }
  result[v5] = a2;
  if ( result - 6 != (const wchar_t *)&qword_6FD300 )
  {
    *((_QWORD *)result - 3) = v6;
    *((_DWORD *)result - 2) = 0;
    result[v6] = 0;
  }
  return result;
}

