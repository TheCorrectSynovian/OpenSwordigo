/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054D344
 * Mangled: sub_54D344
 * Demangled: sub_54D344
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000053EF0C  sub_53EF0C
 *
 * Referenced strings: 3
 *   insn=0x000000000054D344 string=0x000000000054D348 "A"
 *   insn=0x000000000054D350 string=0x000000000054D354 "!"
 *   insn=0x000000000054D370 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_54D344(_QWORD *a1)
{
  *a1 = off_6B7A00;
  sub_53EF0C(a1);
  operator delete(a1);
}

