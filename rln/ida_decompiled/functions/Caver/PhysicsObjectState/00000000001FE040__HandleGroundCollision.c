/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE040
 * Mangled: ._ZN5Caver18PhysicsObjectState21HandleGroundCollisionERKNS_20CollisionMessageDataE
 * Demangled: Caver::PhysicsObjectState::HandleGroundCollision(Caver::CollisionMessageData const&)
 *
 * Callers: 5
 *   0x0000000000268FF0  Caver::EntityComponent::HandleGroundCollision(Caver::CollisionMessageData const&)
 *   0x000000000027F734  Caver::PhysicsObjectComponent::HandleGroundCollision(Caver::CollisionMessageData const&)
 *   0x000000000027F73C  Caver::PhysicsObjectComponent::HandleMessage(int,void *)
 *   0x00000000002ACEE8  Caver::ParticleObjectComponent::HandleGroundCollision(Caver::CollisionMessageData const&)
 *   0x00000000002ACF18  Caver::ParticleObjectComponent::HandleMessage(int,void *)
 *
 * Callees: 1
 *   0x0000000000280658  Caver::PhysicsObjectState::HandleGroundCollision(Caver::CollisionMessageData const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE048 string=0x00000000001FE04C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::PhysicsObjectState::HandleGroundCollision()
{
  return _ZN5Caver18PhysicsObjectState21HandleGroundCollisionERKNS_20CollisionMessageDataE();
}

