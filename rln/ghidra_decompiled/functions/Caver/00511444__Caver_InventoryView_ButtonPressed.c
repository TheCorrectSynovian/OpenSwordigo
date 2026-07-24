/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00511444
 * Function: Caver::InventoryView::ButtonPressed
 * Signature: undefined __cdecl ButtonPressed(void * param_1, GUIEvent * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::InventoryView::ButtonPressed(void*, Caver::GUIEvent*) */

void Caver::InventoryView::ButtonPressed(void *param_1,GUIEvent *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  string *extraout_x1;
  long lVar4;
  int *piVar5;
  int iVar6;
  undefined1 auStack_50 [8];
  long local_48;
  GUIBubbleView *local_40;
  long *local_38;
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  if (*(GUIEvent **)((long)param_1 + 0x168) == param_2) {
    FUN_00666bb8(&local_48,
                 "Enchant your weapon, armor and spells by dragging trinkets to the respective trinket slots."
                 ,auStack_50);
    GameInterfaceBuilder::InfoBubble((GameInterfaceBuilder *)&local_48,extraout_x1,DAT_0068ff78);
    if ((undefined *)(local_48 + -0x18) != PTR_DAT_007e5de8) {
      piVar5 = (int *)(local_48 + -8);
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
        operator_delete((undefined *)(local_48 + -0x18));
      }
    }
    GUIBubbleView::PresentFromRectInView
              (local_40,(Rectangle *)(*(GUIView **)((long)param_1 + 0x168) + 0x84),
               *(GUIView **)((long)param_1 + 0x168));
    if ((local_38 != (long *)0x0) &&
       (lVar4 = local_38[1], local_38[1] = lVar4 + -1, lVar4 + -1 == 0)) {
      (**(code **)(*local_38 + 0x10))(local_38);
      lVar4 = local_38[2];
      local_38[2] = lVar4 + -1;
      if (lVar4 + -1 == 0) {
        (**(code **)(*local_38 + 0x18))(local_38);
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


