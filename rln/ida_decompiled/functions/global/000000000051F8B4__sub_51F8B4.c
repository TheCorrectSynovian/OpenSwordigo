/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051F8B4
 * Mangled: sub_51F8B4
 * Demangled: sub_51F8B4
 *
 * Callers: 4
 *   0x000000000055FA7C  sub_55FA7C
 *   0x000000000055FDB4  sub_55FDB4
 *   0x00000000005625D4  sub_5625D4
 *   0x00000000005628F0  sub_5628F0
 *
 * Callees: 2
 *   0x00000000001F4200  .lseek
 *   0x0000000000202CF0  .fileno
 *
 * Referenced strings: 3
 *   insn=0x000000000051F8C8 string=0x000000000051F8CC "\t"
 *   insn=0x000000000051F8D4 string=0x000000000051F8D8 "JR"
 *   insn=0x000000000051F8D8 string=0x00000000001F4200 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__off_t __fastcall sub_51F8B4(FILE **a1, __off_t a2, int a3)
{
  int v5; // w0

  v5 = fileno(*a1);
  return lseek(v5, a2, a3);
}

