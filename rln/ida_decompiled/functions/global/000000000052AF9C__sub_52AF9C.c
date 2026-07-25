/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052AF9C
 * Mangled: sub_52AF9C
 * Demangled: sub_52AF9C
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000052AE3C  sub_52AE3C
 *
 * Referenced strings: 1
 *   insn=0x000000000052AFBC string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_52AF9C(void *a1)
{
  sub_52AE3C((__int64)a1);
  operator delete(a1);
}

