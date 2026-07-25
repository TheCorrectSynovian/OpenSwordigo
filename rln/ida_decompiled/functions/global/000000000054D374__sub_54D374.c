/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054D374
 * Mangled: sub_54D374
 * Demangled: sub_54D374
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000053EE54  sub_53EE54
 *
 * Referenced strings: 3
 *   insn=0x000000000054D374 string=0x000000000054D378 "A"
 *   insn=0x000000000054D380 string=0x000000000054D384 "!"
 *   insn=0x000000000054D3A0 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_54D374(_QWORD *a1)
{
  *a1 = off_6B7A70;
  sub_53EE54(a1);
  operator delete(a1);
}

