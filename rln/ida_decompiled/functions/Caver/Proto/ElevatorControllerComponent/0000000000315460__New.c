/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000315460
 * Mangled: _ZNK5Caver5Proto27ElevatorControllerComponent3NewEv
 * Demangled: Caver::Proto::ElevatorControllerComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 6
 *   insn=0x0000000000315468 string=0x000000000031546C "]"
 *   insn=0x000000000031546C string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000315474 string=0x0000000000315478 "h"
 *   insn=0x0000000000315478 string=0x000000000031547C ")E"
 *   insn=0x0000000000315480 string=0x0000000000315484 "A"
 *   insn=0x0000000000315484 string=0x0000000000315488 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::Proto::ElevatorControllerComponent::New(Caver::Proto::ElevatorControllerComponent *this)
{
  __int64 v1; // x0
  long double result; // q0

  v1 = operator new(0x18u);
  result = *(long double *)&xmmword_58B480;
  *(_OWORD *)(v1 + 8) = xmmword_58B480;
  *(_QWORD *)v1 = off_6C80A0;
  return result;
}

