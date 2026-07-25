/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054D860
 * Mangled: sub_54D860
 * Demangled: sub_54D860
 *
 * Callers: 1
 *   0x000000000054D7E8  sub_54D7E8
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000054D7E8  sub_54D7E8
 *
 * Referenced strings: 1
 *   insn=0x000000000054D880 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_54D860(_QWORD *a1)
{
  sub_54D7E8(a1);
  operator delete(a1);
}

