/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056B148
 * Mangled: sub_56B148
 * Demangled: sub_56B148
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000054A024  sub_54A024
 *
 * Referenced strings: 3
 *   insn=0x000000000056B154 string=0x000000000056B158 "!"
 *   insn=0x000000000056B170 string=0x000000000056B174 "O0"
 *   insn=0x000000000056B174 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_56B148(std::exception *a1)
{
  *(_QWORD *)a1 = off_6DBA30;
  sub_54A024(a1);
  operator delete(a1);
}

