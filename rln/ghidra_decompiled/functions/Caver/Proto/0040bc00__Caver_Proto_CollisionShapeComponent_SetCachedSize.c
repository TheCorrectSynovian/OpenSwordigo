/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040bc00
 * Function: Caver::Proto::CollisionShapeComponent::SetCachedSize
 * Signature: undefined __thiscall SetCachedSize(CollisionShapeComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::CollisionShapeComponent::SetCachedSize(int) const */

void __thiscall
Caver::Proto::CollisionShapeComponent::SetCachedSize(CollisionShapeComponent *this,int param_1)

{
  *(int *)(this + 8) = param_1;
  return;
}


