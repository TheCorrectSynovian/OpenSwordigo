/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005408D8
 * Mangled: sub_5408D8
 * Demangled: sub_5408D8
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000540490  sub_540490
 *
 * Referenced strings: 2
 *   insn=0x00000000005408D8 string=0x00000000005408DC """
 *   insn=0x00000000005408E4 string=0x00000000005408E8 "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_5408D8(__int64 *a1, char a2)
{
  char v3; // [xsp+1Fh] [xbp+1Fh] BYREF

  v3 = a2;
  return sub_540490(a1, (__int64)&v3, 1);
}

