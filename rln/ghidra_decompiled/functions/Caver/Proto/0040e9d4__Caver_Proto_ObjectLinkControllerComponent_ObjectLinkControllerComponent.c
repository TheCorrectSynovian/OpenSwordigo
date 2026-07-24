/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040e9d4
 * Function: Caver::Proto::ObjectLinkControllerComponent::ObjectLinkControllerComponent
 * Signature: undefined __thiscall ObjectLinkControllerComponent(ObjectLinkControllerComponent * this, ObjectLinkControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ObjectLinkControllerComponent::ObjectLinkControllerComponent(Caver::Proto::ObjectLinkControllerComponent
   const&) */

void __thiscall
Caver::Proto::ObjectLinkControllerComponent::ObjectLinkControllerComponent
          (ObjectLinkControllerComponent *this,ObjectLinkControllerComponent *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_vtable_007e6098;
  *(undefined4 *)(this + 8) = 0;
  puVar3 = PTR__default_target_bone_identifier__007e7b50;
  puVar1 = PTR__default_target_object_identifier__007e4c30;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined **)this = puVar2 + 0x10;
  *(undefined **)(this + 0x18) = puVar3;
  *(undefined **)(this + 0x10) = puVar1;
                    /* try { // try from 0040ea1c to 0050ea43 has its CatchHandler @ 0041085c */
  *(undefined4 *)(this + 0x38) = 0;
  MergeFrom(this,param_1);
  return;
}


