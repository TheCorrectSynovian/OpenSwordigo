/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0038db84
 * Function: Caver::SkillComponent::InitWithComponent
 * Signature: undefined __thiscall InitWithComponent(SkillComponent * this, SkillComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SkillComponent::InitWithComponent(Caver::SkillComponent const*) */

void __thiscall
Caver::SkillComponent::InitWithComponent(SkillComponent *this,SkillComponent *param_1)

{
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  FUN_0066a6a8(this + 0x38,param_1 + 0x38);
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  FUN_0066a6a8(this + 0xa0,param_1 + 0xa0);
  *(undefined8 *)(this + 0x88) = *(undefined8 *)(param_1 + 0x88);
  return;
}


