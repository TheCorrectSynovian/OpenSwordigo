/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000053DD80
 * Mangled: sub_53DD80
 * Demangled: sub_53DD80
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000053C0C8  sub_53C0C8
 *
 * Referenced strings: 2
 *   insn=0x000000000053DD80 string=0x000000000053DD84 "!$E"
 *   insn=0x000000000053DD84 string=0x000000000053DD88 "!@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_53DD80(__int64 a1)
{
  *(_QWORD *)a1 = off_6B7710;
  sub_53C0C8((unsigned int **)(a1 + 56));
}

