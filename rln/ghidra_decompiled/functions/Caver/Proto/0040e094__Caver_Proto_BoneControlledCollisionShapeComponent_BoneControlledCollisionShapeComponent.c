/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040e094
 * Function: Caver::Proto::BoneControlledCollisionShapeComponent::BoneControlledCollisionShapeComponent
 * Signature: undefined __thiscall BoneControlledCollisionShapeComponent(BoneControlledCollisionShapeComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::BoneControlledCollisionShapeComponent::BoneControlledCollisionShapeComponent() */

void __thiscall
Caver::Proto::BoneControlledCollisionShapeComponent::BoneControlledCollisionShapeComponent
          (BoneControlledCollisionShapeComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_vtable_007e6798;
  *(undefined8 *)(this + 8) = 0;
  puVar2 = PTR__default_controlling_bone_name__007e79d8;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined **)(this + 0x10) = puVar2;
  return;
}


