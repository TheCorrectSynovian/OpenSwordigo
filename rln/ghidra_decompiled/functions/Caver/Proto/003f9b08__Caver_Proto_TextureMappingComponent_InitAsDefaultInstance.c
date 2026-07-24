/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003f9b08
 * Function: Caver::Proto::TextureMappingComponent::InitAsDefaultInstance
 * Signature: undefined __thiscall InitAsDefaultInstance(TextureMappingComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::TextureMappingComponent::InitAsDefaultInstance() */

void __thiscall
Caver::Proto::TextureMappingComponent::InitAsDefaultInstance(TextureMappingComponent *this)

{
  undefined8 uVar1;
  
  uVar1 = Vector2::default_instance();
  *(undefined8 *)(this + 0x20) = uVar1;
  return;
}


