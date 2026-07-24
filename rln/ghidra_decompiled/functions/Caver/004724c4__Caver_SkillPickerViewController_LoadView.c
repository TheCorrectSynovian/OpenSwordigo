/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004724c4
 * Function: Caver::SkillPickerViewController::LoadView
 * Signature: undefined __thiscall LoadView(SkillPickerViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SkillPickerViewController::LoadView() */

void __thiscall Caver::SkillPickerViewController::LoadView(SkillPickerViewController *this)

{
  long lVar1;
  SkillPickerView *this_00;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined8 local_58;
  long *local_50;
  SkillPickerView *local_48;
  long *local_40;
  long local_38;
  
                    /* catch() { ... } // from try @ 0047228c with catch @ 004724cc */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this_00 = operator_new(0x148);
  SkillPickerView::SkillPickerView(this_00);
  boost::shared_ptr<Caver::SkillPickerView>::shared_ptr<Caver::SkillPickerView>
            ((shared_ptr<Caver::SkillPickerView> *)&local_48,this_00);
                    /* try { // try from 00472510 to 0057254b has its CatchHandler @ 00472510
                       catch(type#1 @ 00000000) { ... } // from try @ 00472510 with catch @ 00472510
                       catch(type#1 @ 00000000) { ... } // from try @ 00472614 with catch @ 00472510
                       catch(type#1 @ 00000000) { ... } // from try @ 0047265c with catch @ 00472510
                        */
  if (*(int *)(local_48 + 0x70) != 0x12) {
    plVar3 = *(long **)(local_48 + 0x58);
    *(undefined4 *)(local_48 + 0x70) = 0x12;
    if ((plVar3 != (long *)0x0) && (DAT_00683734 < *(float *)((long)plVar3 + 0x8c))) {
      (**(code **)(*plVar3 + 0x58))(plVar3);
    }
  }
                    /* try { // try from 0047254c to 00572613 has its CatchHandler @ 00472650 */
  *(SkillPickerViewController **)(local_48 + 0xf8) = this + 0x48;
  local_58 = *(undefined8 *)(*(long *)(this + 0x50) + 0x80);
  local_50 = *(long **)(*(long *)(this + 0x50) + 0x88);
  if (local_50 != (long *)0x0) {
    local_50[1] = local_50[1] + 1;
  }
  SkillPickerView::InitWithGameState(local_48,(shared_ptr *)&local_58);
  plVar3 = local_50;
  if ((local_50 != (long *)0x0) && (lVar4 = local_50[1], local_50[1] = lVar4 + -1, lVar4 + -1 == 0))
  {
    (**(code **)(*local_50 + 0x10))(local_50);
    lVar4 = plVar3[2];
    plVar3[2] = lVar4 + -1;
    if (lVar4 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  plVar3 = local_40;
  if (local_40 != (long *)0x0) {
    local_40[1] = local_40[1] + 2;
  }
  plVar5 = *(long **)(this + 0x20);
  *(SkillPickerView **)(this + 0x18) = local_48;
  *(long **)(this + 0x20) = local_40;
  if ((plVar5 != (long *)0x0) && (lVar4 = plVar5[1], plVar5[1] = lVar4 + -1, lVar4 + -1 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    lVar4 = plVar5[2];
    plVar5[2] = lVar4 + -1;
    if (lVar4 + -1 == 0) {
                    /* try { // try from 00472614 to 00572653 has its CatchHandler @ 00472510 */
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  puVar2 = *(undefined8 **)(this + 0x40);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,this);
  }
  if ((plVar3 != (long *)0x0) && (lVar4 = plVar3[1], plVar3[1] = lVar4 + -1, lVar4 + -1 == 0)) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0047254c with catch @ 00472650
                        */
                    /* try { // try from 00472654 to 0057265b has its CatchHandler @ 00472664 */
    (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* try { // try from 0047265c to 00572667 has its CatchHandler @ 00472510 */
    lVar4 = plVar3[2];
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00472654 with catch @ 00472664
                        */
    plVar3[2] = lVar4 + -1;
    if (lVar4 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
                    /* try { // try from 0047267c to 00572747 has its CatchHandler @ 0047267c
                       catch() { ... } // from try @ 0047267c with catch @ 0047267c
                       catch() { ... } // from try @ 0047274c with catch @ 0047267c */
  if ((local_40 != (long *)0x0) && (lVar4 = local_40[1], local_40[1] = lVar4 + -1, lVar4 + -1 == 0))
  {
    (**(code **)(*local_40 + 0x10))(local_40);
    lVar4 = local_40[2];
    local_40[2] = lVar4 + -1;
    if (lVar4 + -1 == 0) {
      (**(code **)(*local_40 + 0x18))(local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


