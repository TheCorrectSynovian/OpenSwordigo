/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0037f734
 * Function: Caver::PhysicsObjectComponent::HandleGroundCollision
 * Signature: undefined __thiscall HandleGroundCollision(PhysicsObjectComponent * this, CollisionMessageData * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PhysicsObjectComponent::HandleGroundCollision(Caver::CollisionMessageData const&) */

void __thiscall
Caver::PhysicsObjectComponent::HandleGroundCollision
          (PhysicsObjectComponent *this,CollisionMessageData *param_1)

{
  PhysicsObjectState::HandleGroundCollision((PhysicsObjectState *)(this + 0x78),param_1);
  return;
}


