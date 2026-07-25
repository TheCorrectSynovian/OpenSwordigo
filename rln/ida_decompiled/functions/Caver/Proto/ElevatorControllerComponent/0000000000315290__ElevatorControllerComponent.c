/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000315290
 * Mangled: _ZN5Caver5Proto27ElevatorControllerComponentC2Ev
 * Demangled: Caver::Proto::ElevatorControllerComponent::ElevatorControllerComponent(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x0000000000315294 string=0x0000000000315298 "h"
 *   insn=0x0000000000315298 string=0x000000000031529C ")E"
 *   insn=0x00000000003152A0 string=0x00000000003152A4 "A"
 *   insn=0x00000000003152A4 string=0x00000000003152A8 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::Proto::ElevatorControllerComponent::ElevatorControllerComponent(
        Caver::Proto::ElevatorControllerComponent *this)
{
  long double result; // q0

  result = *(long double *)&xmmword_58B480;
  *(_OWORD *)((char *)this + 8) = xmmword_58B480;
  *(_QWORD *)this = off_6C80A0;
  return result;
}

