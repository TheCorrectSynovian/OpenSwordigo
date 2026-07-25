/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FAE60
 * Mangled: ._ZN5Caver18PhysicsObjectState17UpdateObjectStateEf
 * Demangled: Caver::PhysicsObjectState::UpdateObjectState(float)
 *
 * Callers: 1
 *   0x0000000000280098  Caver::PhysicsObjectState::Update(float)
 *
 * Callees: 1
 *   0x0000000000280348  Caver::PhysicsObjectState::UpdateObjectState(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FAE68 string=0x00000000001FAE6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::PhysicsObjectState::UpdateObjectState(Caver::PhysicsObjectState *this, float a2)
{
  return _ZN5Caver18PhysicsObjectState17UpdateObjectStateEf(this, a2);
}

