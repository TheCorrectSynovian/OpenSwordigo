/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005822A0
 * Mangled: sub_5822A0
 * Demangled: sub_5822A0
 *
 * Callers: 4
 *   0x00000000005822B0  sub_5822B0
 *   0x00000000005826CC  sub_5826CC
 *   0x00000000005829FC  sub_5829FC
 *   0x0000000000583248  sub_583248
 *
 * Callees: 1
 *   0x0000000000582044  sub_582044
 *
 * Referenced strings: 2
 *   insn=0x00000000005822A4 string=0x00000000005822A8 " "
 *   insn=0x00000000005822A8 string=0x00000000005822AC "f"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_5822A0(__int64 a1)
{
  return sub_582044(a1 + 4 - *(int *)(a1 + 4));
}

