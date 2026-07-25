/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000057FC60
 * Mangled: sub_57FC60
 * Demangled: sub_57FC60
 *
 * Callers: 5
 *   0x000000000057FCC8  sub_57FCC8
 *   0x00000000005801B0  sub_5801B0
 *   0x00000000005806A8  sub_5806A8
 *   0x0000000000580ACC  sub_580ACC
 *   0x0000000000581080  sub_581080
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x000000000057FC70 string=0x000000000057FC74 "c"
 *   insn=0x000000000057FC74 string=0x000000000057FC78 "B"
 *   insn=0x000000000057FC78 string=0x000000000057FC7C "e"
 *   insn=0x000000000057FC7C string=0x000000000057FC80 """
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

char *__fastcall sub_57FC60(char *result, _QWORD *a2)
{
  __int64 v2; // x2
  int v3; // w3
  char v4; // t1
  unsigned __int64 v5; // x4

  v2 = 0;
  v3 = 0;
  do
  {
    v4 = *result++;
    v5 = (unsigned __int64)(v4 & 0x7F) << v3;
    v3 += 7;
    v2 |= v5;
  }
  while ( v4 < 0 );
  *a2 = v2;
  return result;
}

