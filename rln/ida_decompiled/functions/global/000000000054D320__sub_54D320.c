/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054D320
 * Mangled: sub_54D320
 * Demangled: sub_54D320
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000054D240  sub_54D240
 *
 * Referenced strings: 1
 *   insn=0x000000000054D340 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_54D320(void *a1)
{
  sub_54D240((__int64)a1);
  operator delete(a1);
}

