/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052AE94
 * Mangled: sub_52AE94
 * Demangled: sub_52AE94
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000052AD74  sub_52AD74
 *
 * Referenced strings: 1
 *   insn=0x000000000052AEB4 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_52AE94(void *a1)
{
  sub_52AD74((__int64)a1);
  operator delete(a1);
}

