/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054D2FC
 * Mangled: sub_54D2FC
 * Demangled: sub_54D2FC
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000054D1DC  sub_54D1DC
 *
 * Referenced strings: 1
 *   insn=0x000000000054D31C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_54D2FC(void *a1)
{
  sub_54D1DC((__int64)a1);
  operator delete(a1);
}

