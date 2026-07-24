/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004e04b4
 * Function: Caver::OverlayButton::OverlayButton
 * Signature: undefined __thiscall OverlayButton(OverlayButton * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OverlayButton::OverlayButton() */

void __thiscall Caver::OverlayButton::OverlayButton(OverlayButton *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  int *piVar5;
  int iVar6;
  undefined1 auStack_50 [8];
  long local_48 [2];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  GUIButton::GUIButton((GUIButton *)this,0);
  puVar4 = PTR_vtable_007e65b0;
  this[0x1d8] = (OverlayButton)0x0;
  *(undefined8 *)(this + 0x1d0) = 0;
  *(undefined **)this = puVar4 + 0x10;
  *(undefined8 *)(this + 0x1e4) = 0;
  *(undefined8 *)(this + 0x1dc) = 0;
  *(undefined4 *)(this + 0x1ec) = 0;
  FUN_00666bb8(local_48,"click",auStack_50);
  FUN_0066a6a8(this + 0x1c0,local_48);
  if ((undefined *)(local_48[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar5 = (int *)(local_48[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar6 = *piVar5;
      *piVar5 = iVar6 + -1;
    }
    else {
      do {
        iVar6 = *piVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = iVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar6 < 1) {
      operator_delete((undefined *)(local_48[0] + -0x18));
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


