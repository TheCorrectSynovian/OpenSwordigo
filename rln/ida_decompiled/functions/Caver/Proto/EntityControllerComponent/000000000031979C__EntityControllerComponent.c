/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031979C
 * Mangled: _ZN5Caver5Proto25EntityControllerComponentC2Ev
 * Demangled: Caver::Proto::EntityControllerComponent::EntityControllerComponent(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x000000000031979C string=0x00000000003197A0 "eG"
 *   insn=0x00000000003197A4 string=0x00000000003197A8 " "
 *   insn=0x00000000003197AC string=0x00000000003197B0 "A"
 *   insn=0x00000000003197B4 string=0x00000000003197B8 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

double __fastcall Caver::Proto::EntityControllerComponent::EntityControllerComponent(
        Caver::Proto::EntityControllerComponent *this)
{
  double result; // d0

  *(_QWORD *)&result = 1;
  *((_QWORD *)this + 3) = 0;
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 1) = 0;
  *((_QWORD *)this + 2) = 0;
  *(_QWORD *)this = off_6C83E8;
  *((_QWORD *)this + 5) = 1;
  return result;
}

