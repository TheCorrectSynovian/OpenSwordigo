/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003faca8
 * Function: Caver::Proto::SkillComponent::InitAsDefaultInstance
 * Signature: undefined __thiscall InitAsDefaultInstance(SkillComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SkillComponent::InitAsDefaultInstance() */

void __thiscall Caver::Proto::SkillComponent::InitAsDefaultInstance(SkillComponent *this)

{
  undefined8 uVar1;
  
  uVar1 = Vector2::default_instance();
  *(undefined8 *)(this + 0x18) = uVar1;
  return;
}


