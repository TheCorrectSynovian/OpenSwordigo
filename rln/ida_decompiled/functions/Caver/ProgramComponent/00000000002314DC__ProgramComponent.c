/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002314DC
 * Mangled: _ZN5Caver16ProgramComponentC2Ev
 * Demangled: Caver::ProgramComponent::ProgramComponent(void)
 *
 * Callers: 1
 *   0x0000000000201D90  Caver::ProgramComponent::ProgramComponent(void)
 *
 * Callees: 0
 *
 * Referenced strings: 15
 *   insn=0x00000000002314E8 string=0x00000000002314EC ""
 *   insn=0x00000000002314EC string=0x00000000002314F0 "J"
 *   insn=0x00000000002314F8 string=0x00000000002314FC "a"
 *   insn=0x00000000002314FC string=0x0000000000231500 "L"
 *   insn=0x0000000000231500 string=0x0000000000231504 "KA"
 *   insn=0x0000000000231508 string=0x000000000023150C "J"
 *   insn=0x0000000000231510 string=0x0000000000231514 ""
 *   insn=0x0000000000231514 string=0x0000000000231518 " "
 *   insn=0x0000000000231518 string=0x000000000023151C ""
 *   insn=0x0000000000231520 string=0x0000000000231524 "A"
 *   insn=0x0000000000231524 string=0x0000000000231528 "t"
 *   insn=0x0000000000231528 string=0x000000000023152C ""
 *   insn=0x000000000023152C string=0x0000000000231530 "\t|"
 *   insn=0x0000000000231534 string=0x0000000000231538 "@"
 *   insn=0x0000000000231544 string=0x0000000000231548 "\t,"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::ProgramComponent::ProgramComponent(Caver::ProgramComponent *this)
{
  long double result; // q0
  __int128 v2; // q1

  *((_DWORD *)this + 2) = 0;
  *((_BYTE *)this + 48) = 0;
  *(_OWORD *)&result = 0u;
  *(_QWORD *)&v2 = &off_6BAFE8;
  *((_OWORD *)this + 2) = 0u;
  *((_QWORD *)this + 7) = &byte_6FD2F8;
  *(_OWORD *)((char *)this + 72) = 0u;
  *(_QWORD *)this = off_6BAED0;
  *((_QWORD *)&v2 + 1) = &off_6BB028;
  *((_DWORD *)this + 29) = 1;
  *((_BYTE *)this + 120) = 1;
  *((_QWORD *)this + 12) = (char *)this + 72;
  *((_QWORD *)this + 13) = 0;
  *((_BYTE *)this + 112) = 0;
  *((_QWORD *)this + 16) = &byte_6FD2F8;
  *((_OWORD *)this + 11) = 0u;
  *(_OWORD *)((char *)this + 152) = 0u;
  *(_OWORD *)((char *)this + 136) = 0u;
  *((_QWORD *)this + 11) = (char *)this + 72;
  *((_OWORD *)this + 1) = v2;
  *((_BYTE *)this + 168) = 0;
  return result;
}

