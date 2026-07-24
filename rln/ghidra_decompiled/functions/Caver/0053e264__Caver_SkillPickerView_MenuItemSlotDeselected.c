/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0053e264
 * Function: Caver::SkillPickerView::MenuItemSlotDeselected
 * Signature: undefined __thiscall MenuItemSlotDeselected(SkillPickerView * this, MenuItemSlot * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::SkillPickerView::MenuItemSlotDeselected(Caver::MenuItemSlot*) */

void __thiscall
Caver::SkillPickerView::MenuItemSlotDeselected(SkillPickerView *this,MenuItemSlot *param_1)

{
  MenuItemSlot::SetSelected(param_1,true);
                    /* catch() { ... } // from try @ 0053e1c0 with catch @ 0053e288 */
                    /* catch() { ... } // from try @ 0053e198 with catch @ 0053e298 */
                    /* WARNING: Could not recover jumptable at 0x0053e29c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(this + -0xf0) + 0x130))(this + -0xf0,param_1);
  return;
}


