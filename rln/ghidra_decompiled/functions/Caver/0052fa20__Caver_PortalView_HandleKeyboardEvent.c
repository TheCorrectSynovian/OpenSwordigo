/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0052fa20
 * Function: Caver::PortalView::HandleKeyboardEvent
 * Signature: undefined __thiscall HandleKeyboardEvent(PortalView * this, GUIKeyboardEvent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Removing unreachable block (ram,0x0052fb60) */
/* WARNING: Removing unreachable block (ram,0x0052fb78) */
/* WARNING: Removing unreachable block (ram,0x0052fbec) */
/* Caver::PortalView::HandleKeyboardEvent(Caver::GUIKeyboardEvent const&) */

void __thiscall Caver::PortalView::HandleKeyboardEvent(PortalView *this,GUIKeyboardEvent *param_1)

{
  byte bVar1;
  long lVar2;
  bool bVar3;
  GUIControl *pGVar4;
  MapView *this_00;
  undefined8 *puVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  float local_40;
  float fStack_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (*(int *)(param_1 + 0xc) != 1) goto LAB_0052fb94;
  iVar8 = *(int *)(param_1 + 0x10);
  uVar6 = 0;
  bVar3 = false;
  switch(iVar8) {
  case 0xd:
  case 0x11:
  case 0x26:
  case 0x41:
    pGVar4 = *(GUIControl **)(this + 0x130);
    if (pGVar4[0xe4] == (GUIControl)0x0) goto LAB_0052fab8;
    lVar7 = *(long *)(this + 0x110);
    if (*(char *)(lVar7 + 0x3f8) != '\0') {
      bVar1 = *(byte *)(*(long *)(*(long *)(lVar7 + 0x118) + *(long *)(lVar7 + 0x400) * 0x10) + 0x29
                       );
      uVar6 = (uint)bVar1;
      if (bVar1 != 0) goto switchD_0052fa80_caseD_1b;
      goto LAB_0052fac8;
    }
    bVar3 = true;
    goto LAB_0052fb90;
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
    goto switchD_0052fa80_caseD_e;
  case 0x1b:
  case 0x21:
switchD_0052fa80_caseD_1b:
    pGVar4 = *(GUIControl **)(this + 0x120);
LAB_0052fab8:
    GUIControl::SendActionsForControlEvent(pGVar4,0x40,0);
    uVar6 = 0;
LAB_0052fac8:
    bVar3 = true;
switchD_0052fa80_caseD_e:
    iVar8 = 0;
    if (uVar6 == 0) {
LAB_0052fb90:
      if (!bVar3) {
LAB_0052fb94:
        GUIResponder::HandleKeyboardEvent((GUIResponder *)this,param_1);
      }
      goto LAB_0052fba0;
    }
    break;
  case 0x25:
    iVar8 = -1;
    uVar6 = 0;
    break;
  case 0x27:
    iVar8 = 1;
    uVar6 = 0;
    break;
  default:
    if (iVar8 == 0xbb) {
      iVar8 = 0;
      uVar6 = 1;
    }
    else {
      bVar3 = false;
      if (iVar8 != 0xbd) goto switchD_0052fa80_caseD_e;
      iVar8 = 0;
      uVar6 = 0xffffffff;
    }
  }
  this_00 = *(MapView **)(this + 0x110);
  if (this_00[0x3f8] != (MapView)0x0) {
    local_40 = (float)iVar8;
    fStack_3c = (float)(int)uVar6;
    puVar5 = (undefined8 *)
             MapView::NearestNodeInDirection
                       (this_00,*(MapViewNode **)
                                 (*(long *)(this_00 + 0x118) + *(long *)(this_00 + 0x400) * 0x10),
                        (Vector2 *)&local_40);
    if (puVar5 != (undefined8 *)0x0) {
      MapView::SelectNodeAtIndex(*(MapView **)(this + 0x110),*(ulong *)*puVar5);
      (**(code **)**(undefined8 **)(*(long *)(this + 0x110) + 0xf0))();
    }
  }
LAB_0052fba0:
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


