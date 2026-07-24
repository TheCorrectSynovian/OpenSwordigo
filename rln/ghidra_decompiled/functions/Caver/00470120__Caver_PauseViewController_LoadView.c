/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00470120
 * Function: Caver::PauseViewController::LoadView
 * Signature: undefined __thiscall LoadView(PauseViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PauseViewController::LoadView() */

void __thiscall Caver::PauseViewController::LoadView(PauseViewController *this)

{
  undefined8 uVar1;
  long lVar2;
  PauseView *this_00;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 local_48;
  long *local_40;
  long local_38;
  
                    /* catch() { ... } // from try @ 0046fe88 with catch @ 00470134 */
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  this_00 = operator_new(0x108);
  PauseView::PauseView(this_00);
  boost::shared_ptr<Caver::PauseView>::shared_ptr<Caver::PauseView>
            ((shared_ptr<Caver::PauseView> *)&local_48,this_00);
  uVar1 = *(undefined8 *)(this + 0x50);
  plVar3 = *(long **)(this + 0x58);
  *(undefined8 *)(this + 0x50) = local_48;
  *(long **)(this + 0x58) = local_40;
  local_48 = uVar1;
  local_40 = plVar3;
  if ((plVar3 != (long *)0x0) && (lVar5 = plVar3[1], plVar3[1] = lVar5 + -1, lVar5 + -1 == 0)) {
                    /* catch() { ... } // from try @ 0046fe5c with catch @ 00470190 */
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar5 = plVar3[2];
    plVar3[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  lVar5 = *(long *)(this + 0x50);
                    /* catch() { ... } // from try @ 0046fe38 with catch @ 004701c8 */
  if (*(int *)(lVar5 + 0x70) != 0x12) {
                    /* catch() { ... } // from try @ 0046fddc with catch @ 004701cc */
    plVar3 = *(long **)(lVar5 + 0x58);
    *(undefined4 *)(lVar5 + 0x70) = 0x12;
    if ((plVar3 != (long *)0x0) && (DAT_00683734 < *(float *)((long)plVar3 + 0x8c))) {
      (**(code **)(*plVar3 + 0x58))();
      lVar5 = *(long *)(this + 0x50);
    }
  }
  *(PauseViewController **)(lVar5 + 0xf0) = this + 0x48;
  plVar3 = *(long **)(this + 0x58);
  if (plVar3 != (long *)0x0) {
    plVar3[1] = plVar3[1] + 2;
  }
  plVar6 = *(long **)(this + 0x20);
  *(long *)(this + 0x18) = lVar5;
  *(long **)(this + 0x20) = plVar3;
                    /* catch() { ... } // from try @ 0046fda8 with catch @ 00470228 */
  if ((plVar6 != (long *)0x0) && (lVar5 = plVar6[1], plVar6[1] = lVar5 + -1, lVar5 + -1 == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    lVar5 = plVar6[2];
    plVar6[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
                    /* catch() { ... } // from try @ 0046fd84 with catch @ 00470260 */
                    /* catch() { ... } // from try @ 0046fd28 with catch @ 00470264 */
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
  }
  puVar4 = *(undefined8 **)(this + 0x40);
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,this);
  }
  if ((plVar3 != (long *)0x0) && (lVar5 = plVar3[1], plVar3[1] = lVar5 + -1, lVar5 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar5 = plVar3[2];
    plVar3[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
                    /* catch() { ... } // from try @ 0046fcfc with catch @ 004702c0 */
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


