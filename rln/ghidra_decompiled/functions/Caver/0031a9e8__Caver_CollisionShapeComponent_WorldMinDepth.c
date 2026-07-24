/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031a9e8
 * Function: Caver::CollisionShapeComponent::WorldMinDepth
 * Signature: undefined __thiscall WorldMinDepth(CollisionShapeComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CollisionShapeComponent::WorldMinDepth() const */

float __thiscall Caver::CollisionShapeComponent::WorldMinDepth(CollisionShapeComponent *this)

{
  return *(float *)(*(long *)(this + 0x28) + 0x78) +
         *(float *)(this + 0x150) * *(float *)(*(long *)(this + 0x28) + 0x8c);
}


