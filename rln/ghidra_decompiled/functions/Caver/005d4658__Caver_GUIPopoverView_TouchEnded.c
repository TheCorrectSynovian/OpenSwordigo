/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d4658
 * Function: Caver::GUIPopoverView::TouchEnded
 * Signature: undefined __thiscall TouchEnded(GUIPopoverView * this, FWTouch * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIPopoverView::TouchEnded(Caver::FWTouch const&) */

void __thiscall Caver::GUIPopoverView::TouchEnded(GUIPopoverView *this,FWTouch *param_1)

{
  long lVar1;
  ulong uVar2;
  GUIView *pGVar3;
  code *pcVar4;
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 005d4418 with catch @ 005d467c */
  if (0 < *(int *)(param_1 + 0x20)) {
    pGVar3 = *(GUIView **)(this + 0x100);
                    /* try { // try from 005d469c to 006d47e7 has its CatchHandler @ 005d47f0 */
    pcVar4 = *(code **)(*(long *)pGVar3 + 0xe0);
    FWTouch::LocationInView(param_1,pGVar3);
    uVar2 = (*pcVar4)(pGVar3,auStack_50);
    if ((uVar2 & 1) == 0) {
      (**(code **)(*(long *)this + 0x90))(this);
      goto LAB_005d46dc;
    }
  }
  GUIResponder::TouchEnded((GUIResponder *)this,param_1);
                    /* catch() { ... } // from try @ 005d42b8 with catch @ 005d46c8 */
LAB_005d46dc:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


