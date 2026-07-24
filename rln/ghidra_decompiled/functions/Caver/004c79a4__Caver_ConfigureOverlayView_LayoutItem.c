/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004c79a4
 * Function: Caver::ConfigureOverlayView::LayoutItem
 * Signature: undefined __thiscall LayoutItem(ConfigureOverlayView * this, DraggableOverlayItem * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ConfigureOverlayView::LayoutItem(Caver::DraggableOverlayItem*) */

void __thiscall
Caver::ConfigureOverlayView::LayoutItem(ConfigureOverlayView *this,DraggableOverlayItem *param_1)

{
  DraggableOverlayItem *pDVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  int *piVar8;
  int iVar9;
  string *psVar10;
  GameOverlayView *this_00;
  undefined8 uVar11;
  long local_98;
  long local_90;
  long *local_88;
  long local_80 [2];
  Rectangle *local_70;
  long *local_68;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  pDVar1 = param_1 + 600;
  psVar10 = *(string **)(this + 0x138);
                    /* try { // try from 004c79dc to 005c79e3 has its CatchHandler @ 004c7b2c */
  FUN_0066a528(local_80,pDVar1);
  GUIViewLayout::SubviewWithIdentifier(psVar10);
  puVar6 = PTR_DAT_007e5de8;
                    /* try { // try from 004c7a04 to 005c7a07 has its CatchHandler @ 004c7b1c */
  if ((undefined *)(local_80[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar8 = (int *)(local_80[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar4) {
          *piVar8 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
                    /* try { // try from 004c7bec to 005c7c53 has its CatchHandler @ 004c798c */
    if (iVar9 < 1) {
      operator_delete((undefined *)(local_80[0] + -0x18));
    }
  }
  this_00 = *(GameOverlayView **)(this + 0x128);
  FUN_0066a528(&local_98,pDVar1);
  GameOverlayView::LayoutBoundsForSubview(this_00,(string *)&local_98);
  GUIViewLayout::FrameForViewInBounds(local_70);
  if ((undefined *)(local_98 + -0x18) != puVar6) {
    piVar8 = (int *)(local_98 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar4) {
          *piVar8 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete((undefined *)(local_98 + -0x18));
    }
  }
  GUIView::SetFrame((GUIView *)param_1,(Rectangle *)local_80);
                    /* try { // try from 004c7a60 to 005c7a63 has its CatchHandler @ 004c7b24 */
  psVar10 = *(string **)(this + 0x128);
                    /* try { // try from 004c7a64 to 005c7b4f has its CatchHandler @ 004c798c */
  FUN_0066a528(&local_98,pDVar1);
  GameOverlayView::SubviewForIdentifier(psVar10);
  if ((undefined *)(local_98 + -0x18) != puVar6) {
    piVar8 = (int *)(local_98 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar4) {
          *piVar8 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete((undefined *)(local_98 + -0x18));
    }
  }
  puVar2 = (undefined8 *)(local_90 + 0x94);
  if (*(float *)(local_90 + 0x9c) <= DAT_00683734) {
    puVar2 = (undefined8 *)(local_90 + 0x84);
  }
  uVar11 = *puVar2;
  *(undefined8 *)(param_1 + 0x9c) = puVar2[1];
  *(undefined8 *)(param_1 + 0x94) = uVar11;
  if ((local_88 != (long *)0x0) && (lVar7 = local_88[1], local_88[1] = lVar7 + -1, lVar7 + -1 == 0))
  {
    (**(code **)(*local_88 + 0x10))(local_88);
    lVar7 = local_88[2];
    local_88[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*local_88 + 0x18))(local_88);
    }
  }
  if ((local_68 != (long *)0x0) && (lVar7 = local_68[1], local_68[1] = lVar7 + -1, lVar7 + -1 == 0))
  {
                    /* catch() { ... } // from try @ 004c7a04 with catch @ 004c7b1c */
                    /* catch() { ... } // from try @ 004c7a60 with catch @ 004c7b24 */
    (**(code **)(*local_68 + 0x10))(local_68);
    lVar7 = local_68[2];
                    /* catch() { ... } // from try @ 004c79dc with catch @ 004c7b2c */
    local_68[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*local_68 + 0x18))(local_68);
    }
  }
                    /* try { // try from 004c7b50 to 005c7beb has its CatchHandler @ 004c7c50 */
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


