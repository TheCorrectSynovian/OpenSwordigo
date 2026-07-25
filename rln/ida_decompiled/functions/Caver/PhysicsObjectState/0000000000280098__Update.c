/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000280098
 * Mangled: _ZN5Caver18PhysicsObjectState6UpdateEf
 * Demangled: Caver::PhysicsObjectState::Update(float)
 *
 * Callers: 1
 *   0x00000000001FBEE0  Caver::PhysicsObjectState::Update(float)
 *
 * Callees: 2
 *   0x00000000001FAE60  Caver::PhysicsObjectState::UpdateObjectState(float)
 *   0x00000000001FFC50  Caver::PhysicsObjectState::UpdateSpeedComponents(float)
 *
 * Referenced strings: 3
 *   insn=0x00000000002800A4 string=0x00000000002800A8 ""
 *   insn=0x00000000002800C4 string=0x00000000002800C8 "f"
 *   insn=0x00000000002800C8 string=0x00000000001FAE60 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::PhysicsObjectState::Update(Caver::PhysicsObjectState *this, float a2)
{
  Caver::PhysicsObjectState::UpdateSpeedComponents(this, a2);
  return Caver::PhysicsObjectState::UpdateObjectState(this, a2);
}

