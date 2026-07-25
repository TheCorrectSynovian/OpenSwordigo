/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000542F94
 * Mangled: sub_542F94
 * Demangled: sub_542F94
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000542B74  sub_542B74
 *
 * Referenced strings: 2
 *   insn=0x0000000000542F94 string=0x0000000000542F98 """
 *   insn=0x0000000000542FA0 string=0x0000000000542FA4 "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_542F94(__int64 *a1, int a2)
{
  int v3; // [xsp+1Ch] [xbp+1Ch] BYREF

  v3 = a2;
  return sub_542B74(a1, (__int64)&v3, 1);
}

