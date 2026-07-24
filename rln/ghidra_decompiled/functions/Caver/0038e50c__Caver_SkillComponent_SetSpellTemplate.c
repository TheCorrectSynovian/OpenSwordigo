/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0038e50c
 * Function: Caver::SkillComponent::SetSpellTemplate
 * Signature: undefined __thiscall SetSpellTemplate(SkillComponent * this, intrusive_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SkillComponent::SetSpellTemplate(boost::intrusive_ptr<Caver::ObjectTemplate> const&) */

void __thiscall Caver::SkillComponent::SetSpellTemplate(SkillComponent *this,intrusive_ptr *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = *(long *)param_1;
  if (lVar3 != 0) {
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
  }
  plVar2 = *(long **)(this + 0xb8);
  *(long *)(this + 0xb8) = lVar3;
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*plVar2 + 8))();
    lVar3 = *(long *)(this + 0xb8);
  }
  if (lVar3 == 0) {
    return;
  }
  CreateSpellObject(this);
  return;
}


