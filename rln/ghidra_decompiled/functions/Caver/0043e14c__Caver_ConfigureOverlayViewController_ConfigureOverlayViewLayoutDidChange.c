/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043e14c
 * Function: Caver::ConfigureOverlayViewController::ConfigureOverlayViewLayoutDidChange
 * Signature: undefined __thiscall ConfigureOverlayViewLayoutDidChange(ConfigureOverlayViewController * this, ConfigureOverlayView * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ConfigureOverlayViewController::ConfigureOverlayViewLayoutDidChange(Caver::ConfigureOverlayView*)
    */

void __thiscall
Caver::ConfigureOverlayViewController::ConfigureOverlayViewLayoutDidChange
          (ConfigureOverlayViewController *this,ConfigureOverlayView *param_1)

{
  long lVar1;
  long *plVar2;
  GameEvent *pGVar3;
  long lVar4;
  GameEvent *pGVar5;
  undefined8 local_48;
  long *local_40;
  GameOptions *local_38;
  long *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 0043e050 with catch @ 0043e170 */
  GameOptions::sharedOptions((GameOptions *)this);
  local_48 = *(undefined8 *)(param_1 + 0x138);
  local_40 = *(long **)(param_1 + 0x140);
  if (local_40 != (long *)0x0) {
    local_40[1] = local_40[1] + 1;
  }
  GameOptions::SetControlsLayout(local_38,(shared_ptr *)&local_48);
  plVar2 = local_40;
  if ((local_40 != (long *)0x0) && (lVar4 = local_40[1], local_40[1] = lVar4 + -1, lVar4 + -1 == 0))
  {
    (**(code **)(*local_40 + 0x10))(local_40);
    lVar4 = plVar2[2];
    plVar2[2] = lVar4 + -1;
    if (lVar4 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  if ((local_30 != (long *)0x0) && (lVar4 = local_30[1], local_30[1] = lVar4 + -1, lVar4 + -1 == 0))
  {
    (**(code **)(*local_30 + 0x10))(local_30);
    lVar4 = local_30[2];
    local_30[2] = lVar4 + -1;
    if (lVar4 + -1 == 0) {
      (**(code **)(*local_30 + 0x18))(local_30);
    }
  }
  pGVar3 = operator_new(0x68);
  *(undefined4 *)pGVar3 = 0x10;
  pGVar5 = pGVar3 + 0x10;
  *(undefined8 *)pGVar5 = 0;
  *(undefined8 *)(pGVar3 + 0x18) = 0;
  *(GameEvent **)(pGVar3 + 0x20) = pGVar5;
  *(GameEvent **)(pGVar3 + 0x28) = pGVar5;
  *(undefined8 *)(pGVar3 + 0x30) = 0;
  pGVar5 = pGVar3 + 0x40;
  *(undefined8 *)pGVar5 = 0;
  *(undefined8 *)(pGVar3 + 0x48) = 0;
  *(GameEvent **)(pGVar3 + 0x50) = pGVar5;
  *(GameEvent **)(pGVar3 + 0x58) = pGVar5;
  *(undefined8 *)(pGVar3 + 0x60) = 0;
  GameEvent::SendEvent(pGVar3);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


