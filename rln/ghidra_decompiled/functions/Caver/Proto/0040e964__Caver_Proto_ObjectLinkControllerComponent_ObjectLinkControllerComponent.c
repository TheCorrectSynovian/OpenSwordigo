/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040e964
 * Function: Caver::Proto::ObjectLinkControllerComponent::ObjectLinkControllerComponent
 * Signature: undefined __thiscall ObjectLinkControllerComponent(ObjectLinkControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ObjectLinkControllerComponent::ObjectLinkControllerComponent() */

void __thiscall
Caver::Proto::ObjectLinkControllerComponent::ObjectLinkControllerComponent
          (ObjectLinkControllerComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
                    /* try { // try from 0040e964 to 0050e983 has its CatchHandler @ 0041085c */
  puVar2 = PTR_vtable_007e6098;
  *(undefined4 *)(this + 8) = 0;
  puVar3 = PTR__default_target_bone_identifier__007e7b50;
  puVar1 = PTR__default_target_object_identifier__007e4c30;
                    /* try { // try from 0040e988 to 0050e99b has its CatchHandler @ 0041060c */
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined **)this = puVar2 + 0x10;
  *(undefined **)(this + 0x18) = puVar3;
  *(undefined **)(this + 0x10) = puVar1;
                    /* try { // try from 0040e99c to 0050e9af has its CatchHandler @ 004105ac */
  *(undefined4 *)(this + 0x38) = 0;
  return;
}


