/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000050037C
 * Mangled: sub_50037C
 * Demangled: sub_50037C
 *
 * Callers: 1
 *   0x00000000004FDEDC  sub_4FDEDC
 *
 * Callees: 0
 *
 * Referenced strings: 21
 *   insn=0x000000000050037C string=0x0000000000500380 "?"
 *   insn=0x0000000000500380 string=0x0000000000500384 "@"
 *   insn=0x0000000000500384 string=0x0000000000500388 ""
 *   insn=0x0000000000500388 string=0x000000000050038C ""
 *   insn=0x000000000050038C string=0x00000000005003AC "\t"
 *   insn=0x0000000000500390 string=0x0000000000500394 "I"
 *   insn=0x0000000000500398 string=0x00000000005003A0 "+"
 *   insn=0x0000000000500398 string=0x0000000000599DD1 "`qT`Pql1"
 *   insn=0x00000000005003A4 string=0x00000000005003A8 "k"
 *   insn=0x00000000005003B0 string=0x00000000005003B8 "*"
 *   insn=0x00000000005003B8 string=0x00000000005003BC "_m"
 *   insn=0x00000000005003C0 string=0x00000000005003C4 "_"
 *   insn=0x00000000005003C4 string=0x00000000005003C8 "*}"
 *   insn=0x00000000005003CC string=0x00000000005003D0 "_"
 *   insn=0x00000000005003CC string=0x00000000005003E8 ")!"
 *   insn=0x00000000005003D4 string=0x00000000005003D8 "I"
 *   insn=0x00000000005003D8 string=0x00000000005003DC ""
 *   insn=0x00000000005003E8 string=0x00000000005003EC ")"
 *   insn=0x00000000005003EC string=0x00000000005003F0 "J"
 *   insn=0x00000000005003F0 string=0x00000000005003F4 ")"
 *   insn=0x00000000005003F8 string=0x00000000005003FC "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_50037C(__int64 a1, int a2, int a3)
{
  unsigned int *v3; // x8
  unsigned int v4; // w9
  unsigned int v5; // w10
  unsigned int v6; // w9
  __int64 result; // x0

  v3 = (unsigned int *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 4LL * a2);
  if ( a2 >= 1 && (v4 = *(v3 - 1), (char)byte_599DD1[v4 & 0x3F] < 0) )
    --v3;
  else
    v4 = *v3;
  if ( (v4 & 0x3F) != 0x1B )
    return 0;
  v5 = v4 >> 23;
  if ( a3 == 255 || v5 == a3 )
    v6 = v4 & 0x7FC000 | (v5 << 6) | 0x1A;
  else
    v6 = v4 & 0xFFFFC03F | ((unsigned __int8)a3 << 6);
  result = 1;
  *v3 = v6;
  return result;
}

