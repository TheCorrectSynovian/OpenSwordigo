/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBEE0
 * Mangled: ._ZN5Caver18PhysicsObjectState6UpdateEf
 * Demangled: Caver::PhysicsObjectState::Update(float)
 *
 * Callers: 4
 *   0x0000000000268EB4  Caver::EntityComponent::Update(float)
 *   0x000000000027F4C8  Caver::PhysicsObjectComponent::RegisterLibrary(void)
 *   0x00000000002ACD5C  Caver::ParticleObjectComponent::Update(float)
 *   0x00000000002ACE24  `non-virtual thunk to'Caver::ParticleObjectComponent::Update(float)
 *
 * Callees: 1
 *   0x0000000000280098  Caver::PhysicsObjectState::Update(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBEE8 string=0x00000000001FBEEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::PhysicsObjectState::Update(Caver::PhysicsObjectState *this, float a2)
{
  return _ZN5Caver18PhysicsObjectState6UpdateEf(this, a2);
}

