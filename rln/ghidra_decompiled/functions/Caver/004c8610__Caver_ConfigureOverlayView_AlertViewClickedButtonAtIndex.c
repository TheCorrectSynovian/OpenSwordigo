/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004c8610
 * Function: Caver::ConfigureOverlayView::AlertViewClickedButtonAtIndex
 * Signature: undefined __thiscall AlertViewClickedButtonAtIndex(ConfigureOverlayView * this, GUIAlertView * param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ConfigureOverlayView::AlertViewClickedButtonAtIndex(Caver::GUIAlertView*, int) */

undefined8 __thiscall
Caver::ConfigureOverlayView::AlertViewClickedButtonAtIndex
          (ConfigureOverlayView *this,GUIAlertView *param_1,int param_2)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  GameOverlayView *this_00;
  long *plVar5;
  long local_58;
  long *local_50;
  undefined8 local_48;
  long *local_40;
  long local_38;
  
                    /* try { // try from 004c8618 to 005c863f has its CatchHandler @ 004c869c */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(GUIAlertView **)(this + 0x160) == param_1) {
    if (param_2 == 0) {
      this_00 = *(GameOverlayView **)(this + 0x128);
      GameOptions::defaultOptions((GameOptions *)this);
      iVar2 = CurrentDeviceType();
                    /* try { // try from 004c8688 to 005c86bf has its CatchHandler @ 004c82f0 */
      puVar3 = (undefined8 *)(local_58 + 0x40);
      if (iVar2 != 1) {
        puVar3 = (undefined8 *)(local_58 + 0x30);
      }
                    /* catch() { ... } // from try @ 004c8660 with catch @ 004c8690 */
      local_48 = *puVar3;
      local_40 = (long *)puVar3[1];
                    /* catch() { ... } // from try @ 004c8618 with catch @ 004c869c */
      if (local_40 != (long *)0x0) {
        local_40[1] = local_40[1] + 1;
      }
      GameOverlayView::SetLayout(this_00,(shared_ptr *)&local_48);
      plVar5 = local_40;
                    /* try { // try from 004c86c0 to 005c86e7 has its CatchHandler @ 004c86f0 */
      if ((local_40 != (long *)0x0) &&
         (lVar4 = local_40[1], local_40[1] = lVar4 + -1, lVar4 + -1 == 0)) {
        (**(code **)(*local_40 + 0x10))(local_40);
        lVar4 = plVar5[2];
        plVar5[2] = lVar4 + -1;
        if (lVar4 + -1 == 0) {
                    /* catch() { ... } // from try @ 004c86c0 with catch @ 004c86f0 */
          (**(code **)(*plVar5 + 0x18))(plVar5);
        }
      }
      if ((local_50 != (long *)0x0) &&
         (lVar4 = local_50[1], local_50[1] = lVar4 + -1, lVar4 + -1 == 0)) {
        (**(code **)(*local_50 + 0x10))(local_50);
        lVar4 = local_50[2];
        local_50[2] = lVar4 + -1;
        if (lVar4 + -1 == 0) {
          (**(code **)(*local_50 + 0x18))(local_50);
        }
      }
                    /* try { // try from 004c8748 to 005c87a3 has its CatchHandler @ 004c8748
                       catch() { ... } // from try @ 004c8748 with catch @ 004c8748
                       catch() { ... } // from try @ 004c87b0 with catch @ 004c8748
                       catch() { ... } // from try @ 004c87e4 with catch @ 004c8748
                       catch() { ... } // from try @ 004c8814 with catch @ 004c8748 */
      (**(code **)(*(long *)this + 0x58))(this);
      puVar3 = *(undefined8 **)(this + 0x100);
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,this);
      }
    }
    plVar5 = *(long **)(this + 0x168);
    *(undefined8 *)(this + 0x160) = 0;
    *(undefined8 *)(this + 0x168) = 0;
    if ((plVar5 != (long *)0x0) && (lVar4 = plVar5[1], plVar5[1] = lVar4 + -1, lVar4 + -1 == 0)) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      lVar4 = plVar5[2];
                    /* try { // try from 004c87a4 to 005c87af has its CatchHandler @ 004c89b0 */
      plVar5[2] = lVar4 + -1;
      if (lVar4 + -1 == 0) {
                    /* try { // try from 004c87b0 to 005c87db has its CatchHandler @ 004c8748 */
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 004c8660 to 005c8687 has its CatchHandler @ 004c8690 */
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


