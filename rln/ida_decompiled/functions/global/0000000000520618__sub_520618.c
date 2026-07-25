/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000520618
 * Mangled: sub_520618
 * Demangled: sub_520618
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FDA90  .towupper
 *
 * Referenced strings: 1
 *   insn=0x000000000052061C string=0x00000000001FDA90 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_520618(int a1, wint_t wc)
{
  return towupper(wc);
}

