/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00350978
 * Function: Caver::SkillComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SkillComponent::Create() */

SkillComponent * Caver::SkillComponent::Create(void)

{
  SkillComponent *this;
  
  this = operator_new(0xd0);
  SkillComponent(this);
  return this;
}


