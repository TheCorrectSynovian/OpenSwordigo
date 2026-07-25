/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC2B0
 * Mangled: ._ZN5Caver15EntityComponent21HandleGroundCollisionERKNS_20CollisionMessageDataE
 * Demangled: Caver::EntityComponent::HandleGroundCollision(Caver::CollisionMessageData const&)
 *
 * Callers: 1
 *   0x0000000000269460  Caver::EntityComponent::HandleMessage(int,void *)
 *
 * Callees: 1
 *   0x0000000000268FF0  Caver::EntityComponent::HandleGroundCollision(Caver::CollisionMessageData const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC2B8 string=0x00000000001FC2BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::EntityComponent::HandleGroundCollision()
{
  return _ZN5Caver15EntityComponent21HandleGroundCollisionERKNS_20CollisionMessageDataE();
}

