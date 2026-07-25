/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000580138
 * Mangled: sub_580138
 * Demangled: sub_580138
 *
 * Callers: 3
 *   0x00000000005801B0  sub_5801B0
 *   0x00000000005806A8  sub_5806A8
 *   0x0000000000580ACC  sub_580ACC
 *
 * Callees: 3
 *   0x00000000001FE620  .abort
 *   0x000000000051D6EC  sub_51D6EC
 *   0x00000000005800F8  sub_5800F8
 *
 * Referenced strings: 11
 *   insn=0x0000000000580140 string=0x0000000000580144 "_"
 *   insn=0x000000000058014C string=0x0000000000580150 "B"
 *   insn=0x0000000000580150 string=0x0000000000580154 "_"
 *   insn=0x000000000058015C string=0x0000000000580160 """
 *   insn=0x000000000058015C string=0x0000000000580170 "_"
 *   insn=0x0000000000580160 string=0x0000000000580164 "_@"
 *   insn=0x0000000000580168 string=0x00000000005801A0 " "
 *   insn=0x0000000000580170 string=0x0000000000580174 " "
 *   insn=0x0000000000580174 string=0x0000000000580178 "_@"
 *   insn=0x0000000000580178 string=0x000000000058017C "@"
 *   insn=0x000000000058017C string=0x0000000000580180 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_580138(unsigned __int8 a1, __int64 a2)
{
  unsigned int v3; // w2

  if ( a1 == 255 )
    return 0;
  v3 = a1 & 0x70;
  if ( v3 == 32 )
    return *(_QWORD *)(a2 + 808);
  if ( v3 <= 0x20 )
  {
    if ( (a1 & 0x70) == 0 || v3 == 16 )
      return 0;
LABEL_13:
    abort();
  }
  if ( v3 == 64 )
    return sub_5800F8(a2);
  if ( v3 != 80 )
  {
    if ( v3 == 48 )
      return *(_QWORD *)(a2 + 816);
    goto LABEL_13;
  }
  return 0;
}

