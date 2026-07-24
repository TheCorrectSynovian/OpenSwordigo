/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00470ddc
 * Function: Caver::PortalViewController::ButtonPressed
 * Signature: undefined __cdecl ButtonPressed(void * param_1, GUIEvent * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PortalViewController::ButtonPressed(void*, Caver::GUIEvent*) */

void Caver::PortalViewController::ButtonPressed(void *param_1,GUIEvent *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  PortalView *this;
  string *extraout_x1;
  GUIView *pGVar4;
  long lVar5;
  GUIBubbleView *pGVar6;
  int *piVar7;
  int iVar8;
  undefined8 *puVar9;
  code *pcVar10;
  undefined1 auStack_60 [8];
  long local_58;
  GUIBubbleView *local_50;
  long *local_48;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  this = *(PortalView **)((long)param_1 + 0x80);
  if (*(GUIEvent **)(this + 0x120) == param_2) {
    PortalView::AnimateOut(this);
    GUIViewController::DismissModalViewController(*(GUIViewController **)((long)param_1 + 0x28));
  }
  else if (*(GUIEvent **)(this + 0x140) == param_2) {
    FUN_00666bb8(&local_58,&DAT_0068ff7c,auStack_60);
    GameInterfaceBuilder::InfoBubble((GameInterfaceBuilder *)&local_58,extraout_x1,DAT_0068ff78);
    if ((undefined *)(local_58 + -0x18) != PTR_DAT_007e5de8) {
                    /* catch() { ... } // from try @ 004711f4 with catch @ 00470f8c
                       catch() { ... } // from try @ 0047129c with catch @ 00470f8c
                       catch() { ... } // from try @ 00471364 with catch @ 00470f8c */
      piVar7 = (int *)(local_58 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar8 = *piVar7;
        *piVar7 = iVar8 + -1;
      }
      else {
        do {
          iVar8 = *piVar7;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar2) {
            *piVar7 = iVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar8 < 1) {
        operator_delete((undefined *)(local_58 + -0x18));
      }
    }
    pGVar4 = *(GUIView **)(*(long *)((long)param_1 + 0x80) + 0x140);
    GUIBubbleView::PresentFromRectInView(local_50,(Rectangle *)(pGVar4 + 0x84),pGVar4);
    if ((local_48 != (long *)0x0) &&
       (lVar5 = local_48[1], local_48[1] = lVar5 + -1, lVar5 + -1 == 0)) {
      (**(code **)(*local_48 + 0x10))(local_48);
                    /* catch() { ... } // from try @ 00470cfc with catch @ 00470f68 */
      lVar5 = local_48[2];
                    /* catch() { ... } // from try @ 00470e40 with catch @ 00470f6c */
      local_48[2] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
                    /* catch() { ... } // from try @ 00470ca4 with catch @ 00470f78 */
        (**(code **)(*local_48 + 0x18))(local_48);
      }
    }
  }
  else if ((*(GUIEvent **)(this + 0x130) == param_2) &&
          (*(char *)(*(long *)(this + 0x110) + 0x3f8) != '\0')) {
    PortalView::AnimateOut(this);
    puVar9 = *(undefined8 **)((long)param_1 + 0x68);
    if (puVar9 != (undefined8 *)0x0) {
                    /* try { // try from 00470e40 to 00570e43 has its CatchHandler @ 00470f6c */
                    /* try { // try from 00470e44 to 00570f8b has its CatchHandler @ 00470bd4 */
      lVar5 = *(long *)(*(long *)((long)param_1 + 0x80) + 0x110);
      pcVar10 = *(code **)*puVar9;
      FUN_0066a528(&local_50,
                   **(long **)(*(long *)(lVar5 + 0x118) + *(long *)(lVar5 + 0x400) * 0x10) + 0x10);
      (*pcVar10)(puVar9,param_1,&local_50);
      if (local_50 + -0x18 != (GUIBubbleView *)PTR_DAT_007e5de8) {
        pGVar6 = local_50 + -8;
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar8 = *(int *)pGVar6;
          *(int *)pGVar6 = iVar8 + -1;
        }
        else {
          do {
            iVar8 = *(int *)pGVar6;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(pGVar6,0x10);
            if (bVar2) {
              *(int *)pGVar6 = iVar8 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        if (iVar8 < 1) {
          operator_delete(local_50 + -0x18);
        }
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


