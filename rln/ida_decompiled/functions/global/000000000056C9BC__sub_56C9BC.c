/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056C9BC
 * Mangled: sub_56C9BC
 * Demangled: sub_56C9BC
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000056C650  sub_56C650
 *
 * Referenced strings: 4
 *   insn=0x000000000056C9BC string=0x000000000056C9C0 "B"
 *   insn=0x000000000056C9C8 string=0x000000000056C9CC "B"
 *   insn=0x000000000056C9EC string=0x000000000056C9F0 "3"
 *   insn=0x000000000056C9F0 string=0x000000000056C9F4 "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

char *__fastcall sub_56C9BC(const wchar_t **a1, char *a2, __int64 a3)
{
  __int64 v3; // x2
  __int64 v6; // x19

  v3 = (a3 - (__int64)a2) >> 2;
  if ( v3 )
  {
    v6 = a2 - (char *)*a1;
    sub_56C650(a1, v6 >> 2, v3, 0);
    a2 = (char *)*a1 + v6;
    *((_DWORD *)*a1 - 2) = -1;
  }
  return a2;
}

