/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000581BD4
 * Mangled: sub_581BD4
 * Demangled: sub_581BD4
 *
 * Callers: 2
 *   0x0000000000581EC4  sub_581EC4
 *   0x0000000000582044  sub_582044
 *
 * Callees: 0
 *
 * Referenced strings: 5
 *   insn=0x0000000000581BE4 string=0x0000000000581BE8 "c"
 *   insn=0x0000000000581BE8 string=0x0000000000581BEC "B"
 *   insn=0x0000000000581BEC string=0x0000000000581BF0 "d"
 *   insn=0x0000000000581BF8 string=0x0000000000581C0C """
 *   insn=0x0000000000581C04 string=0x0000000000581C08 "b"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

char *__fastcall sub_581BD4(char *result, _QWORD *a2)
{
  __int64 v2; // x2
  unsigned int v3; // w3
  char v4; // w4
  char v5; // t1
  unsigned __int64 v6; // x5

  v2 = 0;
  v3 = 0;
  do
  {
    v5 = *result++;
    v4 = v5;
    v6 = (unsigned __int64)(v5 & 0x7F) << v3;
    v3 += 7;
    v2 |= v6;
  }
  while ( v5 < 0 );
  if ( v3 <= 0x3F && (v4 & 0x40) != 0 )
    v2 |= -1LL << v3;
  *a2 = v2;
  return result;
}

