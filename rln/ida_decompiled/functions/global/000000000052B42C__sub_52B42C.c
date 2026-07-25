/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052B42C
 * Mangled: sub_52B42C
 * Demangled: sub_52B42C
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000005707C4  sub_5707C4
 *
 * Referenced strings: 3
 *   insn=0x000000000052B42C string=0x000000000052B430 "a"
 *   insn=0x000000000052B438 string=0x000000000052B43C "!"
 *   insn=0x000000000052B458 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_52B42C(_QWORD *a1)
{
  *a1 = off_6DA300;
  sub_5707C4();
  operator delete(a1);
}

