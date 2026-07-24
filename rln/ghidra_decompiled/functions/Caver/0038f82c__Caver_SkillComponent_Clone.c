/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0038f82c
 * Function: Caver::SkillComponent::Clone
 * Signature: undefined __thiscall Clone(SkillComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SkillComponent::Clone() const */

SkillComponent * __thiscall Caver::SkillComponent::Clone(SkillComponent *this)

{
  SkillComponent *this_00;
  
  this_00 = operator_new(0xd0);
  SkillComponent(this_00);
  *(undefined4 *)(this_00 + 0x20) = *(undefined4 *)(this + 0x20);
  FUN_0066a6a8(this_00 + 0x38,this + 0x38);
  *(undefined4 *)(this_00 + 0x78) = *(undefined4 *)(this + 0x78);
  FUN_0066a6a8(this_00 + 0xa0,this + 0xa0);
  *(undefined8 *)(this_00 + 0x88) = *(undefined8 *)(this + 0x88);
  return this_00;
}


