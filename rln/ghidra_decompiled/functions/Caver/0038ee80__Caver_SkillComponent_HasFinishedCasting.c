/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0038ee80
 * Function: Caver::SkillComponent::HasFinishedCasting
 * Signature: undefined __thiscall HasFinishedCasting(SkillComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SkillComponent::HasFinishedCasting() */

undefined8 __thiscall Caver::SkillComponent::HasFinishedCasting(SkillComponent *this)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 200);
  if (plVar2 != (long *)0x0) {
    if ((char)plVar2[0x17] == '\0') {
      return 0;
    }
    *(undefined8 *)(this + 200) = 0;
    iVar1 = (int)plVar2[1] + -1;
    *(int *)(plVar2 + 1) = iVar1;
    if (iVar1 == 0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = *(long **)(this + 0xc0);
    *(undefined8 *)(this + 0xc0) = 0;
    if ((plVar2 != (long *)0x0) &&
       (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  return 1;
}


