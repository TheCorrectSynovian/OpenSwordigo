/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003fa498
 * Function: Caver::Proto::SimpleGlowComponent::InitAsDefaultInstance
 * Signature: undefined __thiscall InitAsDefaultInstance(SimpleGlowComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SimpleGlowComponent::InitAsDefaultInstance() */

void __thiscall Caver::Proto::SimpleGlowComponent::InitAsDefaultInstance(SimpleGlowComponent *this)

{
  undefined8 uVar1;
  
  uVar1 = FloatColor::default_instance();
  *(undefined8 *)(this + 0x10) = uVar1;
  uVar1 = Vector2::default_instance();
  *(undefined8 *)(this + 0x28) = uVar1;
  return;
}


