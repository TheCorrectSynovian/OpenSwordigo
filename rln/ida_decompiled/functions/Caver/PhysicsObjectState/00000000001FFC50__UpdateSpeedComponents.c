/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFC50
 * Mangled: ._ZN5Caver18PhysicsObjectState21UpdateSpeedComponentsEf
 * Demangled: Caver::PhysicsObjectState::UpdateSpeedComponents(float)
 *
 * Callers: 1
 *   0x0000000000280098  Caver::PhysicsObjectState::Update(float)
 *
 * Callees: 1
 *   0x00000000002800CC  Caver::PhysicsObjectState::UpdateSpeedComponents(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FFC58 string=0x00000000001FFC5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::PhysicsObjectState::UpdateSpeedComponents(Caver::PhysicsObjectState *this, float a2)
{
  return _ZN5Caver18PhysicsObjectState21UpdateSpeedComponentsEf(this, a2);
}

