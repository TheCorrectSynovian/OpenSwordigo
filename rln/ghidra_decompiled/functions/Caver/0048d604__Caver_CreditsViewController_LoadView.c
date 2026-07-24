/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0048d604
 * Function: Caver::CreditsViewController::LoadView
 * Signature: undefined __thiscall LoadView(CreditsViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CreditsViewController::LoadView() */

void __thiscall Caver::CreditsViewController::LoadView(CreditsViewController *this)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  CreditsView *this_00;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  GUIControl *pGVar8;
  long *plVar9;
  undefined *local_70;
  long *local_68;
  undefined8 uStack_60;
  CreditsViewController *local_58;
  long *local_50;
  undefined8 uStack_48;
  CreditsViewController *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  this_00 = operator_new(0x110);
  CreditsView::CreditsView(this_00);
  boost::shared_ptr<Caver::CreditsView>::shared_ptr<Caver::CreditsView>
            ((shared_ptr<Caver::CreditsView> *)&local_70,this_00);
  puVar1 = *(undefined **)(this + 0x48);
  plVar4 = *(long **)(this + 0x50);
                    /* try { // try from 0048d64c to 0058d64f has its CatchHandler @ 0048d660 */
                    /* try { // try from 0048d650 to 0058d663 has its CatchHandler @ 0048d5f8 */
  *(undefined **)(this + 0x48) = local_70;
  *(long **)(this + 0x50) = local_68;
  local_70 = puVar1;
  local_68 = plVar4;
                    /* catch() { ... } // from try @ 0048d64c with catch @ 0048d660 */
                    /* try { // try from 0048d664 to 0058d66b has its CatchHandler @ 0048d674 */
                    /* try { // try from 0048d66c to 0058d677 has its CatchHandler @ 0048d5f8 */
  if ((plVar4 != (long *)0x0) && (lVar7 = plVar4[1], plVar4[1] = lVar7 + -1, lVar7 + -1 == 0)) {
                    /* catch() { ... } // from try @ 0048d664 with catch @ 0048d674 */
                    /* catch() { ... } // from try @ 0048d6f4 with catch @ 0048d678 */
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar7 = plVar4[2];
    plVar4[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  lVar7 = *(long *)(this + 0x48);
  if (*(int *)(lVar7 + 0x70) != 0x12) {
    plVar4 = *(long **)(lVar7 + 0x58);
    *(undefined4 *)(lVar7 + 0x70) = 0x12;
                    /* try { // try from 0048d6cc to 0058d6cf has its CatchHandler @ 0048d6e8 */
                    /* try { // try from 0048d6d0 to 0058d6d7 has its CatchHandler @ 0048d6fc */
    if ((plVar4 != (long *)0x0) && (DAT_00683734 < *(float *)((long)plVar4 + 0x8c))) {
      (**(code **)(*plVar4 + 0x58))();
      lVar7 = *(long *)(this + 0x48);
    }
  }
  pGVar8 = *(GUIControl **)(lVar7 + 0x100);
                    /* catch() { ... } // from try @ 0048d6cc with catch @ 0048d6e8 */
  local_70 = (undefined *)0x0;
                    /* try { // try from 0048d6ec to 0058d6f3 has its CatchHandler @ 0048d6f8 */
                    /* try { // try from 0048d6f4 to 0058d70f has its CatchHandler @ 0048d678 */
                    /* catch() { ... } // from try @ 0048d6ec with catch @ 0048d6f8 */
                    /* catch() { ... } // from try @ 0048d6d0 with catch @ 0048d6fc */
  uStack_48 = 0;
  local_50 = (long *)PTR_ButtonPressed_007e6028;
  local_40 = this;
  uVar5 = boost::detail::function::has_empty_target(&local_50);
  if ((uVar5 & 1) == 0) {
    local_58 = local_40;
    uStack_60 = uStack_48;
    local_68 = local_50;
    local_70 = PTR_stored_vtable_007e5610;
  }
  else {
    local_70 = (undefined *)0x0;
  }
  GUIControl::AddTargetActionForControlEvent(pGVar8,this,&local_70,0x40);
  if (local_70 != (undefined *)0x0) {
    if ((((ulong)local_70 & 1) == 0) &&
       (*(code **)((ulong)local_70 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)((ulong)local_70 & 0xfffffffffffffffe))(&local_68,&local_68,2);
    }
    local_70 = (undefined *)0x0;
  }
  uVar2 = *(undefined8 *)(this + 0x48);
  plVar4 = *(long **)(this + 0x50);
  if (plVar4 != (long *)0x0) {
    plVar4[1] = plVar4[1] + 2;
  }
  plVar9 = *(long **)(this + 0x20);
  *(undefined8 *)(this + 0x18) = uVar2;
  *(long **)(this + 0x20) = plVar4;
  if ((plVar9 != (long *)0x0) && (lVar7 = plVar9[1], plVar9[1] = lVar7 + -1, lVar7 + -1 == 0)) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    lVar7 = plVar9[2];
    plVar9[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  puVar6 = *(undefined8 **)(this + 0x40);
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)(puVar6,this);
  }
  if ((plVar4 != (long *)0x0) && (lVar7 = plVar4[1], plVar4[1] = lVar7 + -1, lVar7 + -1 == 0)) {
                    /* catch() { ... } // from try @ 0048d840 with catch @ 0048d810 */
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar7 = plVar4[2];
    plVar4[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
                    /* try { // try from 0048d82c to 0058d83f has its CatchHandler @ 0048d864 */
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
                    /* try { // try from 0048d840 to 0058d867 has its CatchHandler @ 0048d810 */
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


