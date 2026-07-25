/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C18F8
 * Mangled: _ZN5Caver12ProgramState4WaitEf
 * Demangled: Caver::ProgramState::Wait(float)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x00000000004C18F8 string=0x00000000004C18FC "H"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ProgramState::Wait(__int64 this, float a2)
{
  *(_DWORD *)(this + 72) = 1;
  *(float *)(this + 76) = a2;
  return this;
}

