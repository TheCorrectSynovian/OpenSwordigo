/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051D59C
 * Mangled: sub_51D59C
 * Demangled: sub_51D59C
 *
 * Callers: 2
 *   0x000000000051D5DC  sub_51D5DC
 *   0x000000000051D9B4  __gxx_personality_v0
 *
 * Callees: 0
 *
 * Referenced strings: 6
 *   insn=0x000000000051D5A8 string=0x000000000051D5AC "B "
 *   insn=0x000000000051D5AC string=0x000000000051D5B0 "c"
 *   insn=0x000000000051D5B4 string=0x000000000051D5B8 "d"
 *   insn=0x000000000051D5C0 string=0x000000000051D5D4 "%"
 *   insn=0x000000000051D5C8 string=0x000000000051D5CC "C "
 *   insn=0x000000000051D5CC string=0x000000000051D5D0 "e"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

char *__fastcall sub_51D59C(char *result, _QWORD *a2)
{
  __int64 v2; // x5
  unsigned int v3; // w3
  char v4; // w4
  char v5; // t1
  unsigned __int64 v6; // x2

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

