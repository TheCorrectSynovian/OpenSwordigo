/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB050
 * Mangled: ._ZN5Caver24PhysicsPlatformComponent21HandleObjectCollisionERKNS_20CollisionMessageDataE
 * Demangled: Caver::PhysicsPlatformComponent::HandleObjectCollision(Caver::CollisionMessageData const&)
 *
 * Callers: 1
 *   0x0000000000281720  Caver::PhysicsPlatformComponent::HandleMessage(int,void *)
 *
 * Callees: 1
 *   0x00000000002815E0  Caver::PhysicsPlatformComponent::HandleObjectCollision(Caver::CollisionMessageData const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FB054 string=0x00000000002815E0 "("
 *   insn=0x00000000001FB058 string=0x00000000001FB05C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::PhysicsPlatformComponent::HandleObjectCollision()
{
  return _ZN5Caver24PhysicsPlatformComponent21HandleObjectCollisionERKNS_20CollisionMessageDataE();
}

