/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003acee8
 * Function: Caver::ParticleObjectComponent::HandleGroundCollision
 * Signature: undefined __thiscall HandleGroundCollision(ParticleObjectComponent * this, CollisionMessageData * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ParticleObjectComponent::HandleGroundCollision(Caver::CollisionMessageData const&) */

void __thiscall
Caver::ParticleObjectComponent::HandleGroundCollision
          (ParticleObjectComponent *this,CollisionMessageData *param_1)

{
  PhysicsObjectState::HandleGroundCollision((PhysicsObjectState *)(this + 0x88),param_1);
  *(undefined1 *)(*(long *)(this + 0x28) + 0xe8) = 1;
  return;
}


