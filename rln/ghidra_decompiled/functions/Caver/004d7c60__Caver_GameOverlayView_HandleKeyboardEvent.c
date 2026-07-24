/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004d7c60
 * Function: Caver::GameOverlayView::HandleKeyboardEvent
 * Signature: undefined __thiscall HandleKeyboardEvent(GameOverlayView * this, GUIKeyboardEvent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameOverlayView::HandleKeyboardEvent(Caver::GUIKeyboardEvent const&) */

void __thiscall
Caver::GameOverlayView::HandleKeyboardEvent(GameOverlayView *this,GUIKeyboardEvent *param_1)

{
  GameOverlayView *pGVar1;
  GUIEvent *pGVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  code *UNRECOVERED_JUMPTABLE;
  long lVar9;
  
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 == 0x13) {
    puVar6 = *(undefined8 **)(this + 0xf0);
    if (puVar6 != (undefined8 *)0x0) {
      if (*(int *)(param_1 + 0xc) == 1) {
        UNRECOVERED_JUMPTABLE = *(code **)*puVar6;
      }
      else {
        UNRECOVERED_JUMPTABLE = (code *)((undefined8 *)*puVar6)[1];
      }
                    /* WARNING: Could not recover jumptable at 0x004d7cf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(puVar6,0xc);
      return;
    }
    goto LAB_004d7d08;
  }
  if ((this[0x1a0] != (GameOverlayView)0x0) || (this[0xe4] != (GameOverlayView)0x0)) {
    if (((iVar3 == 0x26) || (iVar3 == 0x11)) &&
       (plVar7 = *(long **)(this + 0xf0), plVar7 != (long *)0x0)) {
      if (*(int *)(param_1 + 0xc) == 1) {
        UNRECOVERED_JUMPTABLE = *(code **)*plVar7;
      }
      else {
        UNRECOVERED_JUMPTABLE = (code *)((undefined8 *)*plVar7)[1];
      }
      (*UNRECOVERED_JUMPTABLE)(plVar7,0xb);
    }
    goto LAB_004d7d08;
  }
  plVar7 = (long *)0x0;
  switch(iVar3) {
  case 0x11:
    pGVar1 = this + 0x170;
    if (this[0x1a1] != (GameOverlayView)0x0) {
      pGVar1 = this + 0x180;
    }
    pGVar2 = *(GUIEvent **)pGVar1;
    plVar7 = *(long **)(pGVar1 + 8);
    break;
  default:
    goto switchD_004d7d40_caseD_12;
  case 0x1b:
  case 0x21:
  case 0x5d:
    pGVar2 = *(GUIEvent **)(this + 0x1c8);
    plVar7 = *(long **)(this + 0x1d0);
    break;
  case 0x25:
    pGVar2 = *(GUIEvent **)(this + 0x140);
    plVar7 = *(long **)(this + 0x148);
    break;
  case 0x26:
    pGVar2 = *(GUIEvent **)(this + 0x160);
    plVar7 = *(long **)(this + 0x168);
    break;
  case 0x27:
    pGVar2 = *(GUIEvent **)(this + 0x150);
    plVar7 = *(long **)(this + 0x158);
    break;
  case 0x31:
    pGVar2 = *(GUIEvent **)(this + 0x1d8);
    plVar7 = *(long **)(this + 0x1e0);
    break;
  case 0x41:
    pGVar2 = *(GUIEvent **)(this + 400);
    plVar7 = *(long **)(this + 0x198);
    break;
  case 0x48:
    pGVar2 = *(GUIEvent **)(this + 0x1b8);
    plVar7 = *(long **)(this + 0x1c0);
  }
  if (plVar7 != (long *)0x0) {
    plVar7[1] = plVar7[1] + 1;
  }
  if (pGVar2 == (GUIEvent *)0x0) {
switchD_004d7d40_caseD_12:
    if (((iVar3 == 0xbb) || (iVar3 == 0xd)) &&
       (plVar8 = *(long **)(this + 0xf0), plVar8 != (long *)0x0)) {
      if (*(int *)(param_1 + 0xc) == 1) {
        (**(code **)*plVar8)(plVar8,10);
      }
      else {
        (*(code *)((undefined8 *)*plVar8)[1])(plVar8,10);
      }
      if (plVar7 == (long *)0x0) {
        return;
      }
      lVar9 = plVar7[1];
      plVar7[1] = lVar9 + -1;
      if (lVar9 + -1 != 0) {
        return;
      }
      (**(code **)(*plVar7 + 0x10))(plVar7);
      lVar9 = plVar7[2];
      plVar7[2] = lVar9 + -1;
      if (lVar9 + -1 != 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x004d7fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x18))(plVar7);
      return;
    }
    if ((plVar7 != (long *)0x0) && (lVar9 = plVar7[1], plVar7[1] = lVar9 + -1, lVar9 + -1 == 0)) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      lVar9 = plVar7[2];
      plVar7[2] = lVar9 + -1;
      if (lVar9 + -1 == 0) {
        (**(code **)(*plVar7 + 0x18))(plVar7);
      }
    }
    goto LAB_004d7d08;
  }
  if (*(int *)(param_1 + 0xc) == 2) {
    uVar4 = *(uint *)(pGVar2 + 0x120);
    if ((uVar4 & 1) == 0) goto LAB_004d7e30;
    *(uint *)(pGVar2 + 0x120) = uVar4 & 0xfffffffe;
    if ((uVar4 & 0xfffffffe) != uVar4) {
      (**(code **)(*(long *)pGVar2 + 0x130))(pGVar2);
    }
    ButtonHighlightChanged(this,pGVar2);
LAB_004d7e64:
    bVar5 = true;
  }
  else {
    if ((*(int *)(param_1 + 0xc) == 1) && (uVar4 = *(uint *)(pGVar2 + 0x120), (uVar4 & 1) == 0)) {
      *(uint *)(pGVar2 + 0x120) = uVar4 | 1;
      if ((uVar4 | 1) != uVar4) {
        (**(code **)(*(long *)pGVar2 + 0x130))(pGVar2);
      }
      ButtonHighlightChanged(this,pGVar2);
      goto LAB_004d7e64;
    }
LAB_004d7e30:
    bVar5 = false;
  }
  if (this[0x13c] != (GameOverlayView)0x1) {
    this[0x13c] = (GameOverlayView)0x1;
    *(undefined1 *)(*(long *)(this + 0x140) + 0x124) = 1;
    *(undefined1 *)(*(long *)(this + 0x150) + 0x124) = 1;
    *(undefined1 *)(*(long *)(this + 0x170) + 0x124) = 1;
    *(undefined1 *)(*(long *)(this + 0x160) + 0x124) = 1;
    *(undefined1 *)(*(long *)(this + 400) + 0x124) = 1;
    *(undefined1 *)(*(long *)(this + 0x180) + 0x124) = 1;
  }
  if ((plVar7 != (long *)0x0) && (lVar9 = plVar7[1], plVar7[1] = lVar9 + -1, lVar9 + -1 == 0)) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    lVar9 = plVar7[2];
    plVar7[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
  }
  if (bVar5) {
    return;
  }
LAB_004d7d08:
  GUIResponder::HandleKeyboardEvent((GUIResponder *)this,param_1);
  return;
}


