/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003150ac
 * Function: Caver::BoneControlledCollisionShapeComponent::UpdateCollisionShape
 * Signature: undefined __thiscall UpdateCollisionShape(BoneControlledCollisionShapeComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BoneControlledCollisionShapeComponent::UpdateCollisionShape() */

void __thiscall
Caver::BoneControlledCollisionShapeComponent::UpdateCollisionShape
          (BoneControlledCollisionShapeComponent *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  CollisionShapeComponent::UpdateCollisionShape((CollisionShapeComponent *)this);
  fVar2 = *(float *)(this + 0x1f8);
  fVar4 = *(float *)(*(long *)(this + 0x28) + 0x78);
  fVar1 = (float)(**(code **)(*(long *)this + 0xe8))(this);
  fVar3 = *(float *)(this + 0x1f8);
  *(float *)(this + 0x13c) = fVar4 + (fVar2 + fVar1) * *(float *)(*(long *)(this + 0x28) + 0x8c);
  fVar2 = *(float *)(*(long *)(this + 0x28) + 0x78);
  fVar1 = (float)(**(code **)(*(long *)this + 0xf0))(this);
  *(float *)(this + 0x140) = fVar2 + (fVar3 + fVar1) * *(float *)(*(long *)(this + 0x28) + 0x8c);
  return;
}


