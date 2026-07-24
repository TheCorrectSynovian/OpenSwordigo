/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004f7ad0
 * Function: Caver::AttributePointsView::ButtonPressed
 * Signature: undefined __cdecl ButtonPressed(void * param_1, GUIEvent * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AttributePointsView::ButtonPressed(void*, Caver::GUIEvent*) */

void Caver::AttributePointsView::ButtonPressed(void *param_1,GUIEvent *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  GUIView *this;
  undefined8 *puVar6;
  long lVar7;
  GUIView *this_00;
  long lVar8;
  GUIBubbleView *local_48;
  long *local_40;
  
  lVar5 = tpidr_el0;
  lVar7 = *(long *)(lVar5 + 0x28);
  this = *(GUIView **)((long)param_1 + 0x128);
  if (this == (GUIView *)param_2) {
    iVar2 = *(int *)((long)param_1 + 0x104);
    iVar4 = *(int *)((long)param_1 + 0x100);
    if (iVar2 < iVar4) {
      iVar3 = iVar2 + 1;
      *(int *)((long)param_1 + 0x104) = iVar3;
      if (*(int *)((long)param_1 + 0x180) != iVar3) {
        *(int *)((long)param_1 + 0x180) = iVar3;
        *(undefined1 *)((long)param_1 + 0x540) = 1;
      }
      iVar1 = *(int *)((long)param_1 + 0xfc);
      if (((iVar4 == iVar3) != (this[0xe4] != (GUIView)0x0)) &&
         (this[0xe4] = (GUIView)(iVar4 == iVar3), iVar4 != iVar3)) {
        GUIView::AddPopupAnimation(this);
      }
      this_00 = *(GUIView **)((long)param_1 + 0x138);
      if ((iVar2 < iVar1 != (this_00[0xe4] != (GUIView)0x0)) &&
         (this_00[0xe4] = (GUIView)(iVar2 < iVar1), iVar1 <= iVar2)) {
LAB_004f7cb8:
        GUIView::AddPopupAnimation(this_00);
      }
    }
  }
  else {
    this_00 = *(GUIView **)((long)param_1 + 0x138);
    if (this_00 != (GUIView *)param_2) {
      if (*(GUIEvent **)((long)param_1 + 0x158) == param_2) {
        GameInterfaceBuilder::InfoBubble
                  ((GameInterfaceBuilder *)((long)param_1 + 0x168),(string *)param_2,DAT_006937d8);
        GUIBubbleView::PresentFromRectInView
                  (local_48,(Rectangle *)(*(GUIView **)((long)param_1 + 0x158) + 0x84),
                   *(GUIView **)((long)param_1 + 0x158));
        if ((local_40 != (long *)0x0) &&
           (lVar8 = local_40[1], local_40[1] = lVar8 + -1, lVar8 + -1 == 0)) {
          (**(code **)(*local_40 + 0x10))(local_40);
          lVar8 = local_40[2];
          local_40[2] = lVar8 + -1;
          if (lVar8 + -1 == 0) {
            (**(code **)(*local_40 + 0x18))(local_40);
          }
        }
      }
      goto LAB_004f7cd4;
    }
    iVar2 = *(int *)((long)param_1 + 0xfc);
    if (iVar2 < *(int *)((long)param_1 + 0x104)) {
      iVar4 = *(int *)((long)param_1 + 0x104) + -1;
      *(int *)((long)param_1 + 0x104) = iVar4;
      if (*(int *)((long)param_1 + 0x180) != iVar4) {
        *(int *)((long)param_1 + 0x180) = iVar4;
        *(undefined1 *)((long)param_1 + 0x540) = 1;
      }
      iVar3 = *(int *)((long)param_1 + 0x100);
      if (((iVar3 == iVar4) != (this[0xe4] != (GUIView)0x0)) &&
         (this[0xe4] = (GUIView)(iVar3 == iVar4), iVar3 != iVar4)) {
        GUIView::AddPopupAnimation(this);
        this_00 = *(GUIView **)((long)param_1 + 0x138);
      }
      if ((iVar4 <= iVar2 != (this_00[0xe4] != (GUIView)0x0)) &&
         (this_00[0xe4] = (GUIView)(iVar4 <= iVar2), iVar2 < iVar4)) goto LAB_004f7cb8;
    }
  }
  puVar6 = *(undefined8 **)((long)param_1 + 0xf0);
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)(puVar6,param_1);
  }
LAB_004f7cd4:
  if (*(long *)(lVar5 + 0x28) != lVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


