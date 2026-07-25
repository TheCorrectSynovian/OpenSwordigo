/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052AEDC
 * Mangled: sub_52AEDC
 * Demangled: sub_52AEDC
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000053EAD4  sub_53EAD4
 *
 * Referenced strings: 3
 *   insn=0x000000000052AEDC string=0x000000000052AEE0 "a"
 *   insn=0x000000000052AEE8 string=0x000000000052AEEC "!"
 *   insn=0x000000000052AF08 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_52AEDC(_QWORD *a1)
{
  *a1 = off_6B6E40;
  sub_53EAD4();
  operator delete(a1);
}

