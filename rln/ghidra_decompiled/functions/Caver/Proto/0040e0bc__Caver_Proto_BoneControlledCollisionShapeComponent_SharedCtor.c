/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040e0bc
 * Function: Caver::Proto::BoneControlledCollisionShapeComponent::SharedCtor
 * Signature: undefined __thiscall SharedCtor(BoneControlledCollisionShapeComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::BoneControlledCollisionShapeComponent::SharedCtor() */

void __thiscall
Caver::Proto::BoneControlledCollisionShapeComponent::SharedCtor
          (BoneControlledCollisionShapeComponent *this)

{
  undefined *puVar1;
  
  *(undefined8 *)(this + 8) = 0;
  puVar1 = PTR__default_controlling_bone_name__007e79d8;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined **)(this + 0x10) = puVar1;
  return;
}


