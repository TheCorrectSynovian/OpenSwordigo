/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041bd9c
 * Function: Caver::Proto::BackgroundComponent::SharedCtor
 * Signature: undefined __thiscall SharedCtor(BackgroundComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::BackgroundComponent::SharedCtor() */

void __thiscall Caver::Proto::BackgroundComponent::SharedCtor(BackgroundComponent *this)

{
  undefined *puVar1;
  
  *(undefined4 *)(this + 8) = 0;
  puVar1 = PTR__default_texture_name__007e56a8;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined **)(this + 0x10) = puVar1;
  return;
}


