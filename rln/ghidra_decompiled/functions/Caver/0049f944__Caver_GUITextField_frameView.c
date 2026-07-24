/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0049f944
 * Function: Caver::GUITextField::frameView
 * Signature: undefined __thiscall frameView(GUITextField * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUITextField::frameView() */

void __thiscall Caver::GUITextField::frameView(GUITextField *this)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  GUIFrameView *this_00;
  code *pcVar4;
  long *plVar5;
  undefined8 local_48;
  long *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar3 = *(long *)(this + 0x128);
  if (lVar3 == 0) {
    this_00 = operator_new(0x110);
    GUIFrameView::GUIFrameView(this_00);
    boost::shared_ptr<Caver::GUIFrameView>::shared_ptr<Caver::GUIFrameView>
              ((shared_ptr<Caver::GUIFrameView> *)&local_48,this_00);
    uVar1 = *(undefined8 *)(this + 0x128);
    plVar5 = *(long **)(this + 0x130);
    *(undefined8 *)(this + 0x128) = local_48;
    *(long **)(this + 0x130) = local_40;
    if ((plVar5 != (long *)0x0) && (lVar3 = plVar5[1], plVar5[1] = lVar3 + -1, lVar3 + -1 == 0)) {
      local_48 = uVar1;
      local_40 = plVar5;
      (**(code **)(*plVar5 + 0x10))(plVar5);
      lVar3 = plVar5[2];
      plVar5[2] = lVar3 + -1;
      if (lVar3 + -1 == 0) {
                    /* try { // try from 0049f9dc to 0059f9df has its CatchHandler @ 0049fb84 */
                    /* try { // try from 0049f9e0 to 0059fa8f has its CatchHandler @ 0049f8ec */
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
    }
    local_48 = *(undefined8 *)(this + 0x128);
    pcVar4 = *(code **)(*(long *)this + 0x70);
    local_40 = *(long **)(this + 0x130);
    if (local_40 != (long *)0x0) {
      local_40[1] = local_40[1] + 1;
    }
    (*pcVar4)(this,0,&local_48);
    plVar5 = local_40;
    if ((local_40 != (long *)0x0) &&
       (lVar3 = local_40[1], local_40[1] = lVar3 + -1, lVar3 + -1 == 0)) {
      (**(code **)(*local_40 + 0x10))(local_40);
      lVar3 = plVar5[2];
      plVar5[2] = lVar3 + -1;
      if (lVar3 + -1 == 0) {
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
    }
    GUIView::SetFrame(*(GUIView **)(this + 0x128),(Rectangle *)(this + 0x84));
    lVar3 = *(long *)(this + 0x128);
    if (*(int *)(lVar3 + 0x70) != 0x12) {
      plVar5 = *(long **)(lVar3 + 0x58);
      *(undefined4 *)(lVar3 + 0x70) = 0x12;
                    /* try { // try from 0049fa90 to 0059fab3 has its CatchHandler @ 0049fbb0 */
      if ((plVar5 != (long *)0x0) && (DAT_00683734 < *(float *)((long)plVar5 + 0x8c))) {
                    /* try { // try from 0049fab4 to 0059fba3 has its CatchHandler @ 0049f8ec */
        (**(code **)(*plVar5 + 0x58))(plVar5);
        lVar3 = *(long *)(this + 0x128);
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar3);
}


