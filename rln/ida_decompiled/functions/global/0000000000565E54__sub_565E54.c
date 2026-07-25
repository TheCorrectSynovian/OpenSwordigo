/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000565E54
 * Mangled: sub_565E54
 * Demangled: sub_565E54
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000549F98  sub_549F98
 *
 * Referenced strings: 3
 *   insn=0x0000000000565E60 string=0x0000000000565E64 "!"
 *   insn=0x0000000000565E6C string=0x0000000000565E70 "J"
 *   insn=0x0000000000565E80 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_565E54(std::exception *a1)
{
  *(_QWORD *)a1 = off_6B8030;
  sub_549F98(a1);
  operator delete(a1);
}

