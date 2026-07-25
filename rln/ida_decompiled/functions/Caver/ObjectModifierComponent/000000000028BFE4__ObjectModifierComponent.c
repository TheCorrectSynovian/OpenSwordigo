/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028BFE4
 * Mangled: _ZN5Caver23ObjectModifierComponentC2Ev
 * Demangled: Caver::ObjectModifierComponent::ObjectModifierComponent(void)
 *
 * Callers: 1
 *   0x0000000000201350  Caver::ObjectModifierComponent::ObjectModifierComponent(void)
 *
 * Callees: 0
 *
 * Referenced strings: 14
 *   insn=0x000000000028BFF4 string=0x000000000028BFF8 ""
 *   insn=0x000000000028BFF8 string=0x000000000028BFFC ")"
 *   insn=0x000000000028BFFC string=0x000000000028C000 "a"
 *   insn=0x000000000028C000 string=0x000000000028C004 "*"
 *   insn=0x000000000028C004 string=0x000000000028C008 "@"
 *   insn=0x000000000028C008 string=0x000000000028C00C "*"
 *   insn=0x000000000028C00C string=0x000000000028C010 ""
 *   insn=0x000000000028C014 string=0x000000000028C018 "@"
 *   insn=0x000000000028C024 string=0x000000000028C028 "@q@"
 *   insn=0x000000000028C028 string=0x000000000028C02C ")A"
 *   insn=0x000000000028C02C string=0x000000000028C030 "\t"
 *   insn=0x000000000028C030 string=0x000000000028C034 "I3"
 *   insn=0x000000000028C03C string=0x000000000028C040 "|"
 *   insn=0x000000000028C044 string=0x000000000028C048 "\t|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

double __fastcall Caver::ObjectModifierComponent::ObjectModifierComponent(Caver::ObjectModifierComponent *this)
{
  __int128 v1; // q0
  double result; // d0

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = 0;
  *((_BYTE *)this + 48) = 0;
  *(_QWORD *)&v1 = &off_6C0E08;
  *((_QWORD *)this + 7) = &byte_6FD2F8;
  *((_QWORD *)&v1 + 1) = &off_6C0E48;
  *((_QWORD *)this + 9) = 0;
  *((_OWORD *)this + 1) = v1;
  result = 0.0078125;
  *(_QWORD *)this = off_6C0CF0;
  *((_QWORD *)this + 10) = 0;
  *((_QWORD *)this + 11) = (char *)this + 72;
  *((_QWORD *)this + 12) = (char *)this + 72;
  *((_QWORD *)this + 13) = 0;
  *((_DWORD *)this + 28) = 0;
  *((_DWORD *)this + 31) = 1050253722;
  *(_QWORD *)((char *)this + 116) = 0x3F80000000000000LL;
  *((_QWORD *)this + 16) = 0;
  return result;
}

