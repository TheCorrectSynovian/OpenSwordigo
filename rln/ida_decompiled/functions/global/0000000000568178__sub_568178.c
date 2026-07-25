/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000568178
 * Mangled: sub_568178
 * Demangled: sub_568178
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x0000000000203230  .strlen
 *   0x00000000005680E0  sub_5680E0
 *
 * Referenced strings: 1
 *   insn=0x0000000000568190 string=0x0000000000568194 "'l"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int64 __fastcall sub_568178(__int64 *a1, char *a2, unsigned __int64 a3)
{
  size_t v4; // x0

  v4 = strlen(a2);
  return sub_5680E0(a1, a2, a3, v4);
}

