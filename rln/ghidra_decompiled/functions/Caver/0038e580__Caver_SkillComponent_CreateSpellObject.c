/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0038e580
 * Function: Caver::SkillComponent::CreateSpellObject
 * Signature: undefined __thiscall CreateSpellObject(SkillComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SkillComponent::CreateSpellObject() */

void __thiscall Caver::SkillComponent::CreateSpellObject(SkillComponent *this)

{
  int iVar1;
  SceneObject *this_00;
  long *plVar2;
  long lVar3;
  
  this_00 = operator_new(0x128);
  SceneObject::SceneObject(this_00);
  *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
  plVar2 = *(long **)(this + 0xc0);
  *(SceneObject **)(this + 0xc0) = this_00;
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*plVar2 + 8))();
    this_00 = *(SceneObject **)(this + 0xc0);
  }
  SceneObject::InitWithTemplate(this_00,(intrusive_ptr *)(this + 0xb8));
  lVar3 = SceneObject::ComponentWithInterface
                    (*(SceneObject **)(this + 0xc0),(long)PTR_Interface_007e6868);
  if (lVar3 != 0) {
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
  }
  plVar2 = *(long **)(this + 200);
  *(long *)(this + 200) = lVar3;
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0038e640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))();
    return;
  }
  return;
}


