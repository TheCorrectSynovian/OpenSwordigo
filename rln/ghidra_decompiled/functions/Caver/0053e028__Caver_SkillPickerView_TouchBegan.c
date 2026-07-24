/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0053e028
 * Function: Caver::SkillPickerView::TouchBegan
 * Signature: undefined __cdecl TouchBegan(FWTouch * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SkillPickerView::TouchBegan(Caver::FWTouch const&) */

void Caver::SkillPickerView::TouchBegan(FWTouch *param_1)

{
  long *plVar1;
  
  AddAnimations(SUB81(param_1,0));
  plVar1 = *(long **)(param_1 + 0xf8);
  param_1[0xe5] = (FWTouch)0x0;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0053e060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))(plVar1,param_1);
    return;
  }
  return;
}


