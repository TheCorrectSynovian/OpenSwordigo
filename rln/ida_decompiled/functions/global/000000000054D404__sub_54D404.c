/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054D404
 * Mangled: sub_54D404
 * Demangled: sub_54D404
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000054D2A4  sub_54D2A4
 *
 * Referenced strings: 1
 *   insn=0x000000000054D424 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_54D404(void *a1)
{
  sub_54D2A4((__int64)a1);
  operator delete(a1);
}

