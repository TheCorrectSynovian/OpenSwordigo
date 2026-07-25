/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000053DD6C
 * Mangled: sub_53DD6C
 * Demangled: sub_53DD6C
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000053C0C8  sub_53C0C8
 *
 * Referenced strings: 2
 *   insn=0x000000000053DD6C string=0x000000000053DD70 "!"
 *   insn=0x000000000053DD70 string=0x000000000053DD74 "!@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_53DD6C(__int64 a1)
{
  *(_QWORD *)a1 = off_6B7790;
  sub_53C0C8((unsigned int **)(a1 + 56));
}

