/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0038ee04
 * Function: Caver::SkillComponent::CancelCasting
 * Signature: undefined __thiscall CancelCasting(SkillComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SkillComponent::CancelCasting() */

void __thiscall Caver::SkillComponent::CancelCasting(SkillComponent *this)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((*(long **)(this + 200) != (long *)0x0) &&
     (uVar2 = (**(code **)(**(long **)(this + 200) + 0x110))(), (uVar2 & 1) != 0)) {
    UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(this + 200) + 0x120);
LAB_0038ee74:
                    /* WARNING: Could not recover jumptable at 0x0038ee7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  plVar3 = *(long **)(this + 0xb0);
  if (plVar3 != (long *)0x0) {
    *(undefined1 *)(plVar3 + 0x1d) = 1;
    *(undefined8 *)(this + 0xb0) = 0;
    iVar1 = (int)plVar3[1] + -1;
    *(int *)(plVar3 + 1) = iVar1;
    if (iVar1 == 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar3 + 8);
      goto LAB_0038ee74;
    }
  }
  return;
}


