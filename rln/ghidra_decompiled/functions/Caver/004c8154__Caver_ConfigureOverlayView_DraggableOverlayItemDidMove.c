/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004c8154
 * Function: Caver::ConfigureOverlayView::DraggableOverlayItemDidMove
 * Signature: undefined __thiscall DraggableOverlayItemDidMove(ConfigureOverlayView * this, DraggableOverlayItem * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::ConfigureOverlayView::DraggableOverlayItemDidMove(Caver::DraggableOverlayItem*) */

void __thiscall
Caver::ConfigureOverlayView::DraggableOverlayItemDidMove
          (ConfigureOverlayView *this,DraggableOverlayItem *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  Rectangle *pRVar8;
  int *piVar9;
  int iVar10;
  long *plVar11;
  GameOverlayView *this_00;
  string *psVar12;
  float local_b0;
  float fStack_ac;
  long *local_a8;
  Rectangle local_98 [8];
  undefined8 local_90;
  undefined8 local_80;
  float local_78;
  float fStack_74;
  undefined8 local_70;
  Rectangle *local_68;
  long *local_60;
  Rectangle aRStack_58 [16];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
                    /* catch() { ... } // from try @ 004c7fe0 with catch @ 004c817c */
  this_00 = *(GameOverlayView **)(this + 0x128);
  FUN_0066a528(&local_68,param_1 + 600);
  GameOverlayView::LayoutBoundsForSubview(this_00,(string *)&local_68);
  puVar4 = PTR_DAT_007e5de8;
  if (local_68 + -0x18 != (Rectangle *)PTR_DAT_007e5de8) {
    pRVar8 = local_68 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *(int *)pRVar8;
      *(int *)pRVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *(int *)pRVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pRVar8,0x10);
        if (bVar2) {
          *(int *)pRVar8 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete(local_68 + -0x18);
    }
  }
  psVar12 = *(string **)(this + 0x138);
  FUN_0066a528(&local_78,param_1 + 600);
                    /* catch() { ... } // from try @ 004c7fb4 with catch @ 004c81d8 */
  GUIViewLayout::SubviewWithIdentifier(psVar12);
  puVar5 = (undefined *)(CONCAT44(fStack_74,local_78) + -0x18);
  if (puVar5 != puVar4) {
    piVar9 = (int *)(CONCAT44(fStack_74,local_78) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar9;
      *piVar9 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar9;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar2) {
          *piVar9 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete(puVar5);
    }
  }
  GUIViewLayout::FrameForViewInBounds(local_68);
                    /* catch() { ... } // from try @ 004c7f90 with catch @ 004c8210 */
                    /* catch() { ... } // from try @ 004c7f2c with catch @ 004c8214 */
  local_80 = CONCAT44(((float)((ulong)*(undefined8 *)(param_1 + 0x74) >> 0x20) - fStack_74) *
                      0.14285715,((float)*(undefined8 *)(param_1 + 0x74) - local_78) * 0.14285715);
  Vector2::Rounded();
  NEON_fmov(0x40e00000,4);
  Vector2::Rounded();
  local_90 = local_70;
                    /* catch() { ... } // from try @ 004c7efc with catch @ 004c8278 */
  if ((_DAT_00684434 < ABS(local_b0 - local_78)) || (_DAT_00684434 < ABS(fStack_ac - fStack_74))) {
    GUIViewLayout::UpdateWithViewWithFrameinBounds((GUIViewLayout *)local_68,local_98,aRStack_58);
    GameOverlayView::SetLayout(*(GameOverlayView **)(this + 0x128),(shared_ptr *)(this + 0x138));
    GameOverlayView::Layout();
    if (local_a8 != (long *)0x0) {
      local_a8[1] = local_a8[1] + 1;
    }
    plVar11 = *(long **)(this + 0x140);
    *(ulong *)(this + 0x138) = CONCAT44(fStack_ac,local_b0);
    *(long **)(this + 0x140) = local_a8;
                    /* catch() { ... } // from try @ 004c7ed8 with catch @ 004c82e4 */
    if ((plVar11 != (long *)0x0) && (lVar7 = plVar11[1], plVar11[1] = lVar7 + -1, lVar7 + -1 == 0))
    {
                    /* try { // try from 004c82f0 to 005c84e7 has its CatchHandler @ 004c82f0
                       catch() { ... } // from try @ 004c82f0 with catch @ 004c82f0
                       catch() { ... } // from try @ 004c853c with catch @ 004c82f0
                       catch() { ... } // from try @ 004c8688 with catch @ 004c82f0 */
      (**(code **)(*plVar11 + 0x10))(plVar11);
      lVar7 = plVar11[2];
      plVar11[2] = lVar7 + -1;
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar11 + 0x18))(plVar11);
      }
    }
    if ((local_a8 != (long *)0x0) &&
       (lVar7 = local_a8[1], local_a8[1] = lVar7 + -1, lVar7 + -1 == 0)) {
      (**(code **)(*local_a8 + 0x10))(local_a8);
      lVar7 = local_a8[2];
      local_a8[2] = lVar7 + -1;
      if (lVar7 + -1 == 0) {
        (**(code **)(*local_a8 + 0x18))(local_a8);
      }
    }
    puVar6 = *(undefined8 **)(this + 0x100);
    if (puVar6 != (undefined8 *)0x0) {
      (**(code **)*puVar6)(puVar6,this);
    }
  }
  LayoutItem(this,param_1);
  if ((local_60 != (long *)0x0) && (lVar7 = local_60[1], local_60[1] = lVar7 + -1, lVar7 + -1 == 0))
  {
    (**(code **)(*local_60 + 0x10))(local_60);
    lVar7 = local_60[2];
    local_60[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*local_60 + 0x18))(local_60);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


