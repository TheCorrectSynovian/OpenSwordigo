/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F88A0
 * Mangled: ._ZN5Caver12ProgramState6UpdateEf
 * Demangled: Caver::ProgramState::Update(float)
 *
 * Callers: 1
 *   0x0000000000465968  Caver::Scene::Update(float)
 *
 * Callees: 1
 *   0x00000000004C15FC  Caver::ProgramState::Update(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F88A8 string=0x00000000001F88AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ProgramState::Update(Caver::ProgramState *this, float a2)
{
  return _ZN5Caver12ProgramState6UpdateEf(this, a2);
}

