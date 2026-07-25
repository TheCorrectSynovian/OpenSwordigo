/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052AEB8
 * Mangled: sub_52AEB8
 * Demangled: sub_52AEB8
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000052ADD8  sub_52ADD8
 *
 * Referenced strings: 1
 *   insn=0x000000000052AED8 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_52AEB8(void *a1)
{
  sub_52ADD8((__int64)a1);
  operator delete(a1);
}

