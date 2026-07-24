/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040955c
 * Function: Caver::Proto::TextureMappingComponent::TextureMappingComponent
 * Signature: undefined __thiscall TextureMappingComponent(TextureMappingComponent * this, TextureMappingComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::TextureMappingComponent::TextureMappingComponent(Caver::Proto::TextureMappingComponent
   const&) */

void __thiscall
Caver::Proto::TextureMappingComponent::TextureMappingComponent
          (TextureMappingComponent *this,TextureMappingComponent *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_vtable_007e60e0;
  *(undefined4 *)(this + 8) = 0;
  puVar2 = PTR__default_texture_name__007e7c58;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined **)(this + 0x10) = puVar2;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined4 *)(this + 0x28) = 0;
  MergeFrom(this,param_1);
  return;
}


