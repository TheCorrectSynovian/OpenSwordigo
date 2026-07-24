/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0053e070
 * Function: Caver::SkillPickerView::MenuItemSlotSelected
 * Signature: undefined __thiscall MenuItemSlotSelected(SkillPickerView * this, MenuItemSlot * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SkillPickerView::MenuItemSlotSelected(Caver::MenuItemSlot*) */

void __thiscall
Caver::SkillPickerView::MenuItemSlotSelected(SkillPickerView *this,MenuItemSlot *param_1)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 local_48;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
                    /* catch() { ... } // from try @ 0053dfdc with catch @ 0053e088 */
  local_38 = *(long *)(lVar1 + 0x28);
  if (-1 < *(int *)(this + 0x140)) {
                    /* try { // try from 0053e0a8 to 0063e11f has its CatchHandler @ 0053e128 */
    SetSlotSelected(this,*(int *)(this + 0x140),false);
  }
  if (0 < *(int *)(this + 0x120)) {
    puVar4 = *(undefined8 **)(this + 0x128);
    lVar5 = 0;
    do {
      if ((MenuItemSlot *)*puVar4 == param_1) {
        *(int *)(this + 0x140) = (int)lVar5;
      }
                    /* catch() { ... } // from try @ 0053df54 with catch @ 0053e0d4 */
      lVar5 = lVar5 + 1;
      puVar4 = puVar4 + 2;
    } while (lVar5 < *(int *)(this + 0x120));
  }
  SetSlotSelected(this,*(int *)(this + 0x140),true);
  puVar4 = *(undefined8 **)(this + 0xf8);
  if (puVar4 != (undefined8 *)0x0) {
    local_48 = *(undefined8 *)(param_1 + 0x110);
    pcVar3 = *(code **)*puVar4;
    local_40 = *(long **)(param_1 + 0x118);
    if (local_40 != (long *)0x0) {
                    /* try { // try from 0053e120 to 0063e13f has its CatchHandler @ 0053de4c */
      local_40[1] = local_40[1] + 1;
    }
                    /* catch() { ... } // from try @ 0053e0a8 with catch @ 0053e128 */
                    /* catch() { ... } // from try @ 0053de7c with catch @ 0053e12c */
    (*pcVar3)(puVar4,this,&local_48);
    plVar2 = local_40;
    if ((local_40 != (long *)0x0) &&
       (lVar5 = local_40[1], local_40[1] = lVar5 + -1, lVar5 + -1 == 0)) {
                    /* try { // try from 0053e14c to 0063e197 has its CatchHandler @ 0053e14c
                       catch() { ... } // from try @ 0053e14c with catch @ 0053e14c
                       catch() { ... } // from try @ 0053e1e8 with catch @ 0053e14c
                       catch() { ... } // from try @ 0053e32c with catch @ 0053e14c */
      (**(code **)(*local_40 + 0x10))(local_40);
      lVar5 = plVar2[2];
      plVar2[2] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
    }
  }
  AddAnimations(SUB81(this,0));
  plVar2 = *(long **)(this + 0xf8);
  this[0xe5] = (SkillPickerView)0x0;
  if (plVar2 != (long *)0x0) {
                    /* try { // try from 0053e198 to 0063e19f has its CatchHandler @ 0053e298 */
    (**(code **)(*plVar2 + 8))(plVar2,this);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 0053e1c0 to 0063e1e7 has its CatchHandler @ 0053e288 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


