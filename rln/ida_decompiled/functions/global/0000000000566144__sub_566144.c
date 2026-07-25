/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000566144
 * Mangled: sub_566144
 * Demangled: sub_566144
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000054A024  sub_54A024
 *
 * Referenced strings: 3
 *   insn=0x0000000000566150 string=0x0000000000566154 "!"
 *   insn=0x000000000056616C string=0x0000000000566170 "PD"
 *   insn=0x0000000000566170 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_566144(std::exception *a1)
{
  *(_QWORD *)a1 = off_6DB980;
  sub_54A024(a1);
  operator delete(a1);
}

