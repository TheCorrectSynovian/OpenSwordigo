/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003fa31c
 * Function: Caver::Proto::PropertiesComponent::InitAsDefaultInstance
 * Signature: undefined __thiscall InitAsDefaultInstance(PropertiesComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PropertiesComponent::InitAsDefaultInstance() */

void __thiscall Caver::Proto::PropertiesComponent::InitAsDefaultInstance(PropertiesComponent *this)

{
  undefined8 uVar1;
  
  uVar1 = Program::default_instance();
  *(undefined8 *)(this + 0x10) = uVar1;
  return;
}


