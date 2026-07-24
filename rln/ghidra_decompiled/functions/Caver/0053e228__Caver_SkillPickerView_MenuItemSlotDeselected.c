/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0053e228
 * Function: Caver::SkillPickerView::MenuItemSlotDeselected
 * Signature: undefined __thiscall MenuItemSlotDeselected(SkillPickerView * this, MenuItemSlot * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SkillPickerView::MenuItemSlotDeselected(Caver::MenuItemSlot*) */

void __thiscall
Caver::SkillPickerView::MenuItemSlotDeselected(SkillPickerView *this,MenuItemSlot *param_1)

{
  MenuItemSlot::SetSelected(param_1,true);
                    /* WARNING: Could not recover jumptable at 0x0053e260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x130))(this,param_1);
  return;
}


