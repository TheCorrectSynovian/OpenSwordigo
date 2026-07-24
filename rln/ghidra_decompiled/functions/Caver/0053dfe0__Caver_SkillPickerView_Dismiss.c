/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0053dfe0
 * Function: Caver::SkillPickerView::Dismiss
 * Signature: undefined __thiscall Dismiss(SkillPickerView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SkillPickerView::Dismiss() */

void __thiscall Caver::SkillPickerView::Dismiss(SkillPickerView *this)

{
  long *plVar1;
  
  AddAnimations(SUB81(this,0));
  plVar1 = *(long **)(this + 0xf8);
  this[0xe5] = (SkillPickerView)0x0;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0053e018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))(plVar1,this);
    return;
  }
                    /* try { // try from 0053e01c to 0063e0a7 has its CatchHandler @ 0053de4c */
  return;
}


