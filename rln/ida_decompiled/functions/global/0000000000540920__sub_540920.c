/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000540920
 * Mangled: sub_540920
 * Demangled: sub_540920
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000540490  sub_540490
 *
 * Referenced strings: 2
 *   insn=0x0000000000540920 string=0x0000000000540924 """
 *   insn=0x000000000054092C string=0x0000000000540930 "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_540920(__int64 *a1, char a2)
{
  char v3; // [xsp+1Fh] [xbp+1Fh] BYREF

  v3 = a2;
  return sub_540490(a1, (__int64)&v3, 1);
}

