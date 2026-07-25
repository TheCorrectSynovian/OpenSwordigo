/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000520688
 * Mangled: sub_520688
 * Demangled: sub_520688
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F46E0  .towlower
 *
 * Referenced strings: 1
 *   insn=0x000000000052068C string=0x00000000001F46E0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_520688(int a1, wint_t wc)
{
  return towlower(wc);
}

