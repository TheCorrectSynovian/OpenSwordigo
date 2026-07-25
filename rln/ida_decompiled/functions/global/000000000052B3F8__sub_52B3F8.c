/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052B3F8
 * Mangled: sub_52B3F8
 * Demangled: sub_52B3F8
 *
 * Callers: 1
 *   0x000000000052B380  sub_52B380
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000052B380  sub_52B380
 *
 * Referenced strings: 1
 *   insn=0x000000000052B418 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_52B3F8(_QWORD *a1)
{
  sub_52B380(a1);
  operator delete(a1);
}

