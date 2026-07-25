/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026F9B4
 * Mangled: _ZN5Caver15HealthComponentC2Ev
 * Demangled: Caver::HealthComponent::HealthComponent(void)
 *
 * Callers: 1
 *   0x00000000001FBD70  Caver::HealthComponent::HealthComponent(void)
 *
 * Callees: 0
 *
 * Referenced strings: 13
 *   insn=0x000000000026F9C4 string=0x000000000026F9C8 ""
 *   insn=0x000000000026F9C8 string=0x000000000026F9CC ")5E"
 *   insn=0x000000000026F9CC string=0x000000000026F9D0 "a"
 *   insn=0x000000000026F9D0 string=0x000000000026F9D4 "*"
 *   insn=0x000000000026F9D4 string=0x000000000026F9D8 "@"
 *   insn=0x000000000026F9D8 string=0x000000000026F9DC "*"
 *   insn=0x000000000026F9DC string=0x000000000026F9E0 ""
 *   insn=0x000000000026F9E4 string=0x000000000026F9E8 "@"
 *   insn=0x000000000026F9F4 string=0x000000000026F9F8 "@9A"
 *   insn=0x000000000026F9F8 string=0x000000000026F9FC ")A"
 *   insn=0x000000000026F9FC string=0x000000000026FA00 "\t"
 *   insn=0x000000000026FA1C string=0x000000000026FA20 "\t"
 *   insn=0x000000000026FA30 string=0x000000000026FA34 "0"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

double __fastcall Caver::HealthComponent::HealthComponent(Caver::HealthComponent *this)
{
  __int128 v1; // q0
  double result; // d0

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = 0;
  *((_BYTE *)this + 48) = 0;
  *(_QWORD *)&v1 = &off_6BF158;
  *((_QWORD *)this + 7) = &byte_6FD2F8;
  *((_QWORD *)&v1 + 1) = &off_6BF198;
  *((_QWORD *)this + 9) = 0;
  *((_OWORD *)this + 1) = v1;
  *(_QWORD *)&result = 1112014848;
  *(_QWORD *)this = off_6BF040;
  *((_QWORD *)this + 10) = 0;
  *((_QWORD *)this + 11) = (char *)this + 72;
  *((_QWORD *)this + 13) = 0;
  *((_QWORD *)this + 14) = 0;
  *((_BYTE *)this + 120) = 0;
  *(_QWORD *)((char *)this + 124) = 0;
  *(_QWORD *)((char *)this + 132) = 0;
  *((_DWORD *)this + 35) = 0;
  *((_DWORD *)this + 38) = 1065353216;
  *((_QWORD *)this + 23) = 0;
  *((_BYTE *)this + 192) = 0;
  *(_QWORD *)((char *)this + 172) = 0;
  *(_QWORD *)((char *)this + 156) = 0;
  *((_QWORD *)this + 12) = (char *)this + 72;
  *((_QWORD *)this + 18) = 1112014848;
  *(_QWORD *)((char *)this + 164) = 0;
  return result;
}

