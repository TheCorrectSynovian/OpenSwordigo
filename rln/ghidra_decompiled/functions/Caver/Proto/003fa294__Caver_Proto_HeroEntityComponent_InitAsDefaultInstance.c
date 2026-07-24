/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003fa294
 * Function: Caver::Proto::HeroEntityComponent::InitAsDefaultInstance
 * Signature: undefined __thiscall InitAsDefaultInstance(HeroEntityComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::HeroEntityComponent::InitAsDefaultInstance() */

void __thiscall Caver::Proto::HeroEntityComponent::InitAsDefaultInstance(HeroEntityComponent *this)

{
  undefined8 uVar1;
  
  uVar1 = Program::default_instance();
  *(undefined8 *)(this + 0x10) = uVar1;
  return;
}


