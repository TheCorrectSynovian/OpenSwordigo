/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031aa04
 * Function: Caver::CollisionShapeComponent::WorldMaxDepth
 * Signature: undefined __thiscall WorldMaxDepth(CollisionShapeComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CollisionShapeComponent::WorldMaxDepth() const */

float __thiscall Caver::CollisionShapeComponent::WorldMaxDepth(CollisionShapeComponent *this)

{
  return *(float *)(*(long *)(this + 0x28) + 0x78) +
         *(float *)(this + 0x154) * *(float *)(*(long *)(this + 0x28) + 0x8c);
}


