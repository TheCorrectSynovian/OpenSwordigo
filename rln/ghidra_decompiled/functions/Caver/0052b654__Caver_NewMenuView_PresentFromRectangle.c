/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0052b654
 * Function: Caver::NewMenuView::PresentFromRectangle
 * Signature: undefined __thiscall PresentFromRectangle(NewMenuView * this, Rectangle * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::NewMenuView::PresentFromRectangle(Caver::Rectangle const&) */

void __thiscall Caver::NewMenuView::PresentFromRectangle(NewMenuView *this,Rectangle *param_1)

{
  long lVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  GUIView *this_00;
  GUIAnimation *pGVar5;
  Vector2 *extraout_x1;
  Vector2 *extraout_x1_00;
  Vector2 *extraout_x1_01;
  Vector2 *extraout_x1_02;
  Vector2 *extraout_x1_03;
  Vector2 *extraout_x1_04;
  Vector2 *pVVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 local_e8;
  float local_e0;
  float fStack_dc;
  undefined4 uStack_d8;
  float fStack_d4;
  long *local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  GUIAnimation *local_b8;
  long *local_b0;
  long local_a8;
  
  uVar4 = DAT_00692290;
  uVar3 = DAT_00692060;
  fVar2 = _DAT_00684434;
  lVar1 = tpidr_el0;
  local_a8 = *(long *)(lVar1 + 0x28);
  lVar7 = *(long *)(this + 0xf8);
  if (*(long *)(this + 0x100) != lVar7) {
    lVar9 = 0;
    uVar10 = 0;
    uVar11 = NEON_fmov(0x3f800000,4);
    do {
      this_00 = *(GUIView **)(lVar7 + lVar9);
      uVar10 = uVar10 + 1;
      uStack_d8 = *(undefined4 *)(this_00 + 0x7c);
      fStack_d4 = *(float *)(this_00 + 0x80);
      local_e0 = *(float *)param_1 + 12.0;
      fStack_dc = *(float *)(param_1 + 4) - (fStack_d4 + 6.0) * (float)uVar10;
      GUIView::SetFrame(this_00,(Rectangle *)&local_e0);
      pGVar5 = operator_new(0xc0);
      GUIAnimation::GUIAnimation(pGVar5);
      local_b8 = pGVar5;
      boost::detail::shared_count::shared_count<Caver::GUIAnimation>
                ((shared_count *)&local_b0,pGVar5);
      boost::detail::sp_enable_shared_from_this(&local_b8,pGVar5,pGVar5);
      pGVar5 = local_b8;
      *(undefined4 *)(local_b8 + 0x30) = 1;
      local_c0 = 0;
      GUIPropertyValue::ValueWithVector2((GUIPropertyValue *)&local_c0,extraout_x1);
      *(float *)(pGVar5 + 0x70) = local_e0;
      if (local_d0 != (long *)0x0) {
        local_d0[1] = local_d0[1] + 1;
      }
      plVar8 = *(long **)(pGVar5 + 0x80);
      *(ulong *)(pGVar5 + 0x78) = CONCAT44(fStack_d4,uStack_d8);
      *(long **)(pGVar5 + 0x80) = local_d0;
      pVVar6 = extraout_x1_00;
      if ((plVar8 != (long *)0x0) && (lVar7 = plVar8[1], plVar8[1] = lVar7 + -1, lVar7 + -1 == 0)) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        lVar7 = plVar8[2];
        plVar8[2] = lVar7 + -1;
        pVVar6 = extraout_x1_01;
        if (lVar7 + -1 == 0) {
          (**(code **)(*plVar8 + 0x18))(plVar8);
          pVVar6 = extraout_x1_02;
        }
      }
      plVar8 = local_d0;
      if ((local_d0 != (long *)0x0) &&
         (lVar7 = local_d0[1], local_d0[1] = lVar7 + -1, lVar7 + -1 == 0)) {
        (**(code **)(*local_d0 + 0x10))(local_d0);
        lVar7 = plVar8[2];
        plVar8[2] = lVar7 + -1;
        pVVar6 = extraout_x1_03;
        if (lVar7 + -1 == 0) {
          (**(code **)(*plVar8 + 0x18))(plVar8);
          pVVar6 = extraout_x1_04;
        }
      }
      pGVar5 = local_b8;
      local_c0 = uVar11;
      GUIPropertyValue::ValueWithVector2((GUIPropertyValue *)&local_c0,pVVar6);
      *(float *)(pGVar5 + 0x88) = local_e0;
      if (local_d0 != (long *)0x0) {
        local_d0[1] = local_d0[1] + 1;
      }
      plVar8 = *(long **)(pGVar5 + 0x98);
      *(ulong *)(pGVar5 + 0x90) = CONCAT44(fStack_d4,uStack_d8);
      *(long **)(pGVar5 + 0x98) = local_d0;
      if ((plVar8 != (long *)0x0) && (lVar7 = plVar8[1], plVar8[1] = lVar7 + -1, lVar7 + -1 == 0)) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        lVar7 = plVar8[2];
        plVar8[2] = lVar7 + -1;
        if (lVar7 + -1 == 0) {
          (**(code **)(*plVar8 + 0x18))(plVar8);
        }
      }
      plVar8 = local_d0;
      if ((local_d0 != (long *)0x0) &&
         (lVar7 = local_d0[1], local_d0[1] = lVar7 + -1, lVar7 + -1 == 0)) {
        (**(code **)(*local_d0 + 0x10))(local_d0);
        lVar7 = plVar8[2];
        plVar8[2] = lVar7 + -1;
        if (lVar7 + -1 == 0) {
          (**(code **)(*plVar8 + 0x18))(plVar8);
        }
      }
      pGVar5 = local_b8;
      local_c0 = uVar4;
      local_e8 = uVar3;
      GUIAnimationCurve::GUIAnimationCurve
                ((GUIAnimationCurve *)&local_e0,(Vector2 *)&local_c0,(Vector2 *)&local_e8);
      *(ulong *)(pGVar5 + 0x3c) = CONCAT44(fStack_d4,uStack_d8);
      *(ulong *)(pGVar5 + 0x34) = CONCAT44(fStack_dc,local_e0);
      *(undefined8 *)(pGVar5 + 0x4c) = uStack_c8;
      *(long **)(pGVar5 + 0x44) = local_d0;
      *(undefined4 *)(local_b8 + 0x5c) = 0x3e800000;
      *(float *)(local_b8 + 0x58) = (float)uVar10 * fVar2;
      GUIView::AddAnimation(*(GUIView **)(*(long *)(this + 0xf8) + lVar9),(shared_ptr *)&local_b8);
      plVar8 = local_b0;
      if ((local_b0 != (long *)0x0) &&
         (lVar7 = local_b0[1], local_b0[1] = lVar7 + -1, lVar7 + -1 == 0)) {
        (**(code **)(*local_b0 + 0x10))(local_b0);
        lVar7 = plVar8[2];
        plVar8[2] = lVar7 + -1;
        if (lVar7 + -1 == 0) {
          (**(code **)(*plVar8 + 0x18))(plVar8);
        }
      }
      lVar7 = *(long *)(this + 0xf8);
      lVar9 = lVar9 + 0x10;
    } while (uVar10 < (ulong)(*(long *)(this + 0x100) - lVar7 >> 4));
  }
  if (*(long *)(lVar1 + 0x28) != local_a8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


