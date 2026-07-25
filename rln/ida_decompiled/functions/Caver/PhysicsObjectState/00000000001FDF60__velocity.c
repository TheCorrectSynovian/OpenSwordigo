/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDF60
 * Mangled: ._ZNK5Caver18PhysicsObjectState8velocityEv
 * Demangled: Caver::PhysicsObjectState::velocity(void)
 *
 * Callers: 2
 *   0x0000000000293550  Caver::BatMonsterControllerComponent::Update(float)
 *   0x0000000000294B58  Caver::BouncingMonsterControllerComponent::Update(float)
 *
 * Callees: 1
 *   0x0000000000280000  Caver::PhysicsObjectState::velocity(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FDF64 string=0x0000000000280000 "\t"
 *   insn=0x00000000001FDF68 string=0x00000000001FDF6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::PhysicsObjectState::velocity(Caver::PhysicsObjectState *this)
{
  return _ZNK5Caver18PhysicsObjectState8velocityEv(this);
}

