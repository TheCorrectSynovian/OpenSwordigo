/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040953c
 * Function: Caver::Proto::TextureMappingComponent::SharedCtor
 * Signature: undefined __thiscall SharedCtor(TextureMappingComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::TextureMappingComponent::SharedCtor() */

void __thiscall Caver::Proto::TextureMappingComponent::SharedCtor(TextureMappingComponent *this)

{
  undefined *puVar1;
  
  *(undefined4 *)(this + 8) = 0;
  puVar1 = PTR__default_texture_name__007e7c58;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined **)(this + 0x10) = puVar1;
  return;
}


