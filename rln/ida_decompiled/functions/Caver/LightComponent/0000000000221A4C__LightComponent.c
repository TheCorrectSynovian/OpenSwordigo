/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000221A4C
 * Mangled: _ZN5Caver14LightComponentC2Ev
 * Demangled: Caver::LightComponent::LightComponent(void)
 *
 * Callers: 1
 *   0x00000000002008B0  Caver::LightComponent::LightComponent(void)
 *
 * Callees: 0
 *
 * Referenced strings: 18
 *   insn=0x0000000000221A54 string=0x0000000000221A58 "(&"
 *   insn=0x0000000000221A58 string=0x0000000000221A5C "\n"
 *   insn=0x0000000000221A5C string=0x0000000000221A60 ""
 *   insn=0x0000000000221A60 string=0x0000000000221A64 "@uG"
 *   insn=0x0000000000221A64 string=0x0000000000221A68 "*&"
 *   insn=0x0000000000221A68 string=0x0000000000221A6C "JiG"
 *   insn=0x0000000000221A6C string=0x0000000000221A70 "a"
 *   insn=0x0000000000221A78 string=0x0000000000221A7C ""
 *   insn=0x0000000000221A7C string=0x0000000000221A80 "H"
 *   insn=0x0000000000221A80 string=0x0000000000221A84 "?"
 *   insn=0x0000000000221A8C string=0x0000000000221A90 "H"
 *   insn=0x0000000000221A94 string=0x0000000000221A98 ""
 *   insn=0x0000000000221AA0 string=0x0000000000221AA4 "HA"
 *   insn=0x0000000000221AA4 string=0x0000000000221AA8 ""
 *   insn=0x0000000000221AAC string=0x0000000000221AB0 ""
 *   insn=0x0000000000221AB0 string=0x0000000000221AB4 ""
 *   insn=0x0000000000221ABC string=0x0000000000221AC0 "\t|"
 *   insn=0x0000000000221ACC string=0x0000000000221AD0 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::LightComponent::LightComponent(Caver::LightComponent *this)
{
  long double result; // q0

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = 0;
  *((_BYTE *)this + 48) = 0;
  __asm { FMOV            V1.4S, #1.0 }
  *((_QWORD *)this + 7) = &byte_6FD2F8;
  *((_QWORD *)this + 9) = 0;
  *(_OWORD *)((char *)this + 116) = _Q1;
  *(_QWORD *)&_Q1 = &off_6BA178;
  *((_QWORD *)&_Q1 + 1) = &off_6BA1B8;
  *(_QWORD *)((char *)this + 148) = 0x3951B71700000000LL;
  result = *(long double *)&xmmword_583F00;
  *(_QWORD *)this = off_6BA060;
  *((_DWORD *)this + 33) = 1065353216;
  *((_OWORD *)this + 1) = _Q1;
  *((_QWORD *)this + 10) = 0;
  *((_QWORD *)this + 11) = (char *)this + 72;
  *((_QWORD *)this + 12) = (char *)this + 72;
  *((_QWORD *)this + 13) = 0;
  *((_DWORD *)this + 28) = 0;
  *((_BYTE *)this + 144) = 0;
  *(_OWORD *)((char *)this + 156) = xmmword_583F00;
  *((_DWORD *)this + 43) = -1;
  return result;
}

