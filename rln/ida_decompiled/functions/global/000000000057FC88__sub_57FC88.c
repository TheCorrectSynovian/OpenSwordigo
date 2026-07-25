/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000057FC88
 * Mangled: sub_57FC88
 * Demangled: sub_57FC88
 *
 * Callers: 4
 *   0x000000000057FCC8  sub_57FCC8
 *   0x00000000005801B0  sub_5801B0
 *   0x00000000005806A8  sub_5806A8
 *   0x0000000000580ACC  sub_580ACC
 *
 * Callees: 0
 *
 * Referenced strings: 5
 *   insn=0x000000000057FC98 string=0x000000000057FC9C "c"
 *   insn=0x000000000057FC9C string=0x000000000057FCA0 "B"
 *   insn=0x000000000057FCA0 string=0x000000000057FCA4 "d"
 *   insn=0x000000000057FCAC string=0x000000000057FCC0 """
 *   insn=0x000000000057FCB8 string=0x000000000057FCBC "b"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

char *__fastcall sub_57FC88(char *result, _QWORD *a2)
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

