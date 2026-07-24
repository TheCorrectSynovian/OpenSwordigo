/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040e9a4
 * Function: Caver::Proto::ObjectLinkControllerComponent::SharedCtor
 * Signature: undefined __thiscall SharedCtor(ObjectLinkControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ObjectLinkControllerComponent::SharedCtor() */

void __thiscall
Caver::Proto::ObjectLinkControllerComponent::SharedCtor(ObjectLinkControllerComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  
  *(undefined4 *)(this + 8) = 0;
  puVar2 = PTR__default_target_bone_identifier__007e7b50;
  puVar1 = PTR__default_target_object_identifier__007e4c30;
                    /* try { // try from 0040e9b0 to 0050e9bf has its CatchHandler @ 00410554 */
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
                    /* try { // try from 0040e9c0 to 0050e9cb has its CatchHandler @ 004104f8 */
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  *(undefined4 *)(this + 0x38) = 0;
  return;
}


