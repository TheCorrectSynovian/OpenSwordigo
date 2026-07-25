/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000027F734
 * Mangled: _ZN5Caver22PhysicsObjectComponent21HandleGroundCollisionERKNS_20CollisionMessageDataE
 * Demangled: Caver::PhysicsObjectComponent::HandleGroundCollision(Caver::CollisionMessageData const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FE040  Caver::PhysicsObjectState::HandleGroundCollision(Caver::CollisionMessageData const&)
 *
 * Referenced strings: 1
 *   insn=0x000000000027F734 string=0x000000000027F738 "B"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 Caver::PhysicsObjectComponent::HandleGroundCollision()
{
  return Caver::PhysicsObjectState::HandleGroundCollision();
}

