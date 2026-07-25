/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056754C
 * Mangled: sub_56754C
 * Demangled: sub_56754C
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000567088  sub_567088
 *
 * Referenced strings: 10
 *   insn=0x0000000000567560 string=0x0000000000567564 "5"
 *   insn=0x000000000056756C string=0x0000000000567570 "4"
 *   insn=0x000000000056757C string=0x0000000000567580 "_"
 *   insn=0x0000000000567590 string=0x0000000000567594 "`"
 *   insn=0x00000000005675A0 string=0x00000000005675A8 "a"
 *   insn=0x00000000005675A8 string=0x00000000005675AC ""`"
 *   insn=0x00000000005675AC string=0x00000000005675B0 "_"
 *   insn=0x00000000005675B4 string=0x00000000005675CC "4"
 *   insn=0x00000000005675D0 string=0x00000000005675D4 "?"
 *   insn=0x00000000005675D4 string=0x00000000005675D8 "?h48"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_BYTE **__fastcall sub_56754C(_BYTE **a1, char a2)
{
  _BYTE *v3; // x0
  __int64 v5; // x1
  __int64 v6; // x20
  _BYTE *v7; // x1
  _BYTE **result; // x0

  v3 = *a1;
  v5 = *((_QWORD *)v3 - 3);
  v6 = v5 + 1;
  if ( (unsigned __int64)(v5 + 1) > *((_QWORD *)v3 - 2) || *((int *)v3 - 2) > 0 )
  {
    sub_567088(a1, v5 + 1);
    v3 = *a1;
    v5 = *((_QWORD *)*a1 - 3);
  }
  v3[v5] = a2;
  v7 = *a1;
  if ( *a1 - 24 == (_BYTE *)&qword_6FD2E0 )
    return a1;
  *((_QWORD *)v7 - 3) = v6;
  result = a1;
  *((_DWORD *)v7 - 2) = 0;
  v7[v6] = 0;
  return result;
}

