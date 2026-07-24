/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00433dbc
 * Function: Caver::Proto::SkillComponent::SkillComponent
 * Signature: undefined __thiscall SkillComponent(SkillComponent * this, SkillComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SkillComponent::SkillComponent(Caver::Proto::SkillComponent const&) */

void __thiscall
Caver::Proto::SkillComponent::SkillComponent(SkillComponent *this,SkillComponent *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_vtable_007e48c8;
  *(undefined8 *)(this + 8) = 0;
  puVar2 = PTR__default_cast_object_template_name__007e65a8;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined **)(this + 0x10) = puVar2;
  *(undefined8 *)(this + 0x18) = 0;
  MergeFrom(this,param_1);
  return;
}


