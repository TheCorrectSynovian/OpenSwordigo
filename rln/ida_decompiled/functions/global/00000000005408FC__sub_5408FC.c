/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005408FC
 * Mangled: sub_5408FC
 * Demangled: sub_5408FC
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000540490  sub_540490
 *
 * Referenced strings: 2
 *   insn=0x00000000005408FC string=0x0000000000540900 """
 *   insn=0x0000000000540908 string=0x000000000054090C "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_5408FC(__int64 *a1, char a2)
{
  char v3; // [xsp+1Fh] [xbp+1Fh] BYREF

  v3 = a2;
  return sub_540490(a1, (__int64)&v3, 1);
}

