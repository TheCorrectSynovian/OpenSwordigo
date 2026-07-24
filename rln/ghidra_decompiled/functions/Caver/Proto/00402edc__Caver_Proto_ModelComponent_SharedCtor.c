/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00402edc
 * Function: Caver::Proto::ModelComponent::SharedCtor
 * Signature: undefined __thiscall SharedCtor(ModelComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ModelComponent::SharedCtor() */

void __thiscall Caver::Proto::ModelComponent::SharedCtor(ModelComponent *this)

{
  undefined *puVar1;
  
  *(undefined4 *)(this + 8) = 0;
  puVar1 = PTR__default_name__007e7d30;
  *(undefined8 *)(this + 0x30) = 0;
  this[0x38] = (ModelComponent)0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined **)(this + 0x10) = puVar1;
  *(undefined4 *)(this + 0x28) = 0;
  return;
}


