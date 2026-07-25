/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000581BAC
 * Mangled: sub_581BAC
 * Demangled: sub_581BAC
 *
 * Callers: 2
 *   0x0000000000581EC4  sub_581EC4
 *   0x0000000000582044  sub_582044
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x0000000000581BBC string=0x0000000000581BC0 "c"
 *   insn=0x0000000000581BC0 string=0x0000000000581BC4 "B"
 *   insn=0x0000000000581BC4 string=0x0000000000581BC8 "e"
 *   insn=0x0000000000581BC8 string=0x0000000000581BCC """
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

char *__fastcall sub_581BAC(char *result, _QWORD *a2)
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

