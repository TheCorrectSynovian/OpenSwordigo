/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0052ec10
 * Function: Caver::PortalView::InitWithGameState
 * Signature: undefined __thiscall InitWithGameState(PortalView * this, shared_ptr * param_1, bool param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PortalView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&, bool) */

void __thiscall
Caver::PortalView::InitWithGameState(PortalView *this,shared_ptr *param_1,bool param_2)

{
  undefined8 uVar1;
  long lVar2;
  MapView *this_00;
  GUISwitch *this_01;
  long lVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  long local_68;
  long *local_60;
  undefined8 local_58;
  long *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar1 = *(undefined8 *)param_1;
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 != 0) {
    *(long *)(lVar3 + 8) = *(long *)(lVar3 + 8) + 1;
  }
  plVar5 = *(long **)(this + 0xf8);
  *(undefined8 *)(this + 0xf0) = uVar1;
  *(long *)(this + 0xf8) = lVar3;
  if ((plVar5 != (long *)0x0) && (lVar3 = plVar5[1], plVar5[1] = lVar3 + -1, lVar3 + -1 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    lVar3 = plVar5[2];
    plVar5[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  local_58 = *(undefined8 *)(**(long **)param_1 + 0x48);
  local_50 = *(long **)(**(long **)param_1 + 0x50);
  if (local_50 != (long *)0x0) {
    local_50[1] = local_50[1] + 1;
  }
  MapView::Init(*(MapView **)(this + 0x110),(shared_ptr *)&local_58,param_1,param_2,true);
  plVar5 = *(long **)(this + 0x110);
  pcVar6 = *(code **)(*plVar5 + 0xf8);
  Rectangle::RectangleByOutsetting((Rectangle *)((long)plVar5 + 0x84),DAT_00684320);
  (*pcVar6)(plVar5,&local_68);
  (**(code **)(**(long **)(this + 0x100) + 0x130))
            (*(long **)(this + 0x100),*(long *)(this + 0x110) + 0x74);
  lVar3 = *(long *)(*(long *)param_1 + 0x170);
  plVar5 = *(long **)(*(long *)param_1 + 0x178);
  if (plVar5 == (long *)0x0) {
    if (lVar3 == 0) goto LAB_0052ede0;
    local_60 = (long *)0x0;
  }
  else {
    if (plVar5[1] == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      lVar4 = plVar5[2];
      plVar5[2] = lVar4 + -1;
      if (lVar4 + -1 == 0) {
                    /* catch() { ... } // from try @ 0052ed8c with catch @ 0052ed5c */
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
    }
    if (lVar3 == 0) goto LAB_0052ede0;
    lVar3 = *(long *)(*(long *)param_1 + 0x170);
    local_60 = *(long **)(*(long *)param_1 + 0x178);
  }
                    /* try { // try from 0052ed78 to 0062ed8b has its CatchHandler @ 0052edb0 */
  this_00 = *(MapView **)(this + 0x110);
  if (local_60 != (long *)0x0) {
                    /* try { // try from 0052ed8c to 0062edb3 has its CatchHandler @ 0052ed5c */
    local_60[1] = local_60[1] + 1;
  }
  local_68 = lVar3;
  MapView::SelectNode(this_00,(shared_ptr *)&local_68);
  plVar5 = local_60;
  if ((local_60 != (long *)0x0) && (lVar3 = local_60[1], local_60[1] = lVar3 + -1, lVar3 + -1 == 0))
  {
                    /* catch() { ... } // from try @ 0052ed78 with catch @ 0052edb0 */
    (**(code **)(*local_60 + 0x10))(local_60);
    lVar3 = plVar5[2];
    plVar5[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
                    /* catch() { ... } // from try @ 0052ee20 with catch @ 0052eddc */
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
LAB_0052ede0:
  this_01 = *(GUISwitch **)(*(long *)(this + 0x170) + 0x108);
  this_01[0x148] = *(GUISwitch *)(*(long *)param_1 + 0x1c8);
  GUISwitch::UpdateFrameTexture(this_01);
                    /* try { // try from 0052ee04 to 0062ee07 has its CatchHandler @ 0052ee14 */
  if (DAT_00683944 < *(float *)(this + 0x8c)) {
                    /* catch() { ... } // from try @ 0052ee04 with catch @ 0052ee14 */
                    /* try { // try from 0052ee18 to 0062ee1f has its CatchHandler @ 0052ee28 */
    (**(code **)(*(long *)this + 0x58))(this);
  }
  plVar5 = local_50;
                    /* try { // try from 0052ee20 to 0062ee2b has its CatchHandler @ 0052eddc */
                    /* catch() { ... } // from try @ 0052ee18 with catch @ 0052ee28 */
                    /* try { // try from 0052ee2c to 0062eea3 has its CatchHandler @ 0052ee2c
                       catch() { ... } // from try @ 0052ee2c with catch @ 0052ee2c
                       catch() { ... } // from try @ 0052eea8 with catch @ 0052ee2c
                       catch() { ... } // from try @ 0052ef08 with catch @ 0052ee2c
                       catch() { ... } // from try @ 0052ef60 with catch @ 0052ee2c */
  if ((local_50 != (long *)0x0) && (lVar3 = local_50[1], local_50[1] = lVar3 + -1, lVar3 + -1 == 0))
  {
    (**(code **)(*local_50 + 0x10))(local_50);
    lVar3 = plVar5[2];
    plVar5[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


