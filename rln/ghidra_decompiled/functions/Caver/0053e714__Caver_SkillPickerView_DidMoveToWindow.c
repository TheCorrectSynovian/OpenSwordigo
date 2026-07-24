/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0053e714
 * Function: Caver::SkillPickerView::DidMoveToWindow
 * Signature: undefined __thiscall DidMoveToWindow(SkillPickerView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SkillPickerView::DidMoveToWindow() */

void __thiscall Caver::SkillPickerView::DidMoveToWindow(SkillPickerView *this)

{
  long lVar1;
  
  lVar1 = (**(code **)(*(long *)this + 0xf0))();
  if (lVar1 != 0) {
                    /* try { // try from 0053e744 to 0063e747 has its CatchHandler @ 0053e7a4 */
                    /* WARNING: Could not recover jumptable at 0x0053e748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 0053e748 to 0063e7c3 has its CatchHandler @ 0053e6d8 */
    (**(code **)(*(long *)this + 200))(this);
    return;
  }
  return;
}


