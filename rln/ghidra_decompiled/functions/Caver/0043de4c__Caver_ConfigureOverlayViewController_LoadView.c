/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043de4c
 * Function: Caver::ConfigureOverlayViewController::LoadView
 * Signature: undefined __thiscall LoadView(ConfigureOverlayViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ConfigureOverlayViewController::LoadView() */

void __thiscall
Caver::ConfigureOverlayViewController::LoadView(ConfigureOverlayViewController *this)

{
  undefined8 uVar1;
  long lVar2;
  ConfigureOverlayView *pCVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 local_48;
  long *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  pCVar3 = operator_new(0x170);
  ConfigureOverlayView::ConfigureOverlayView(pCVar3);
                    /* try { // try from 0043de80 to 0053dea7 has its CatchHandler @ 0043e02c */
  boost::shared_ptr<Caver::ConfigureOverlayView>::shared_ptr<Caver::ConfigureOverlayView>
            ((shared_ptr<Caver::ConfigureOverlayView> *)&local_48,pCVar3);
  uVar1 = *(undefined8 *)(this + 0x60);
  plVar6 = *(long **)(this + 0x68);
  *(undefined8 *)(this + 0x60) = local_48;
  *(long **)(this + 0x68) = local_40;
  local_48 = uVar1;
  local_40 = plVar6;
  if ((plVar6 != (long *)0x0) && (lVar5 = plVar6[1], plVar6[1] = lVar5 + -1, lVar5 + -1 == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
                    /* try { // try from 0043dec8 to 0053deef has its CatchHandler @ 0043e01c */
    lVar5 = plVar6[2];
    plVar6[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
  }
  pCVar3 = *(ConfigureOverlayView **)(this + 0x60);
  if (*(int *)(pCVar3 + 0x70) != 0x12) {
    plVar6 = *(long **)(pCVar3 + 0x58);
    *(undefined4 *)(pCVar3 + 0x70) = 0x12;
                    /* try { // try from 0043df10 to 0053df37 has its CatchHandler @ 0043e00c */
    if ((plVar6 != (long *)0x0) && (DAT_00683734 < *(float *)((long)plVar6 + 0x8c))) {
      (**(code **)(*plVar6 + 0x58))(plVar6);
      pCVar3 = *(ConfigureOverlayView **)(this + 0x60);
    }
  }
  *(ConfigureOverlayViewController **)(pCVar3 + 0x100) = this + 0x48;
  local_48 = *(undefined8 *)(*(long *)(this + 0x50) + 0x80);
  local_40 = *(long **)(*(long *)(this + 0x50) + 0x88);
  if (local_40 != (long *)0x0) {
    local_40[1] = local_40[1] + 1;
  }
                    /* try { // try from 0043df58 to 0053df7f has its CatchHandler @ 0043e004 */
  ConfigureOverlayView::InitWithGameState(pCVar3,(shared_ptr *)&local_48);
  plVar6 = local_40;
  if ((local_40 != (long *)0x0) && (lVar5 = local_40[1], local_40[1] = lVar5 + -1, lVar5 + -1 == 0))
  {
                    /* try { // try from 0043df80 to 0053e04f has its CatchHandler @ 0043de3c */
    (**(code **)(*local_40 + 0x10))(local_40);
    lVar5 = plVar6[2];
    plVar6[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
  }
  uVar1 = *(undefined8 *)(this + 0x60);
  plVar6 = *(long **)(this + 0x68);
  if (plVar6 != (long *)0x0) {
    plVar6[1] = plVar6[1] + 2;
  }
  plVar7 = *(long **)(this + 0x20);
  *(undefined8 *)(this + 0x18) = uVar1;
  *(long **)(this + 0x20) = plVar6;
  if ((plVar7 != (long *)0x0) && (lVar5 = plVar7[1], plVar7[1] = lVar5 + -1, lVar5 + -1 == 0)) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    lVar5 = plVar7[2];
    plVar7[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
  }
                    /* catch() { ... } // from try @ 0043df58 with catch @ 0043e004 */
  puVar4 = *(undefined8 **)(this + 0x40);
  if (puVar4 != (undefined8 *)0x0) {
                    /* catch() { ... } // from try @ 0043df10 with catch @ 0043e00c */
    (**(code **)*puVar4)(puVar4,this);
  }
                    /* catch() { ... } // from try @ 0043dec8 with catch @ 0043e01c */
                    /* catch() { ... } // from try @ 0043de80 with catch @ 0043e02c */
  if ((plVar6 != (long *)0x0) && (lVar5 = plVar6[1], plVar6[1] = lVar5 + -1, lVar5 + -1 == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    lVar5 = plVar6[2];
    plVar6[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
                    /* try { // try from 0043e050 to 0053e107 has its CatchHandler @ 0043e170 */
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


