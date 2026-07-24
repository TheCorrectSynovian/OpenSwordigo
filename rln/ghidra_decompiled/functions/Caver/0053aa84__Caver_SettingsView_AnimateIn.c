/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0053aa84
 * Function: Caver::SettingsView::AnimateIn
 * Signature: undefined __thiscall AnimateIn(SettingsView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::SettingsView::AnimateIn() */

void __thiscall Caver::SettingsView::AnimateIn(SettingsView *this)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  GUIAnimation *this_00;
  long lVar8;
  long lVar9;
  GUIView *pGVar10;
  ulong uVar11;
  undefined8 local_c0;
  undefined8 uStack_b8;
  long local_b0;
  long *plStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_88;
  long *local_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  this_00 = (GUIAnimation *)this;
  if (*(long *)(this + 0x120) == 0) {
LAB_0053ab68:
    lVar8 = *(long *)(this + 0x110);
  }
  else {
    GUIAnimation::ScaleAnimation((GUIAnimation *)this,0.0,1.0,DAT_00683f68);
    lVar8 = local_88;
    local_c0 = DAT_00692060;
    uStack_b8 = DAT_00692290;
    GUIAnimationCurve::GUIAnimationCurve
              ((GUIAnimationCurve *)&local_b0,(Vector2 *)&uStack_b8,(Vector2 *)&local_c0);
    *(long **)(lVar8 + 0x3c) = plStack_a8;
    *(long *)(lVar8 + 0x34) = local_b0;
    *(undefined8 *)(lVar8 + 0x4c) = uStack_98;
    *(undefined8 *)(lVar8 + 0x44) = local_a0;
    *(undefined4 *)(local_88 + 0x58) = 0;
    pGVar10 = *(GUIView **)(this + 0x120);
    GUIView::RemoveAllAnimations(pGVar10);
    this_00 = (GUIAnimation *)GUIView::AddAnimation(pGVar10,(shared_ptr *)&local_88);
    plVar7 = local_80;
    if ((local_80 == (long *)0x0) ||
       (lVar8 = local_80[1], local_80[1] = lVar8 + -1, lVar8 + -1 != 0)) goto LAB_0053ab68;
    this_00 = (GUIAnimation *)(**(code **)(*local_80 + 0x10))(local_80);
    lVar8 = plVar7[2];
    plVar7[2] = lVar8 + -1;
    if (lVar8 + -1 != 0) goto LAB_0053ab68;
    this_00 = (GUIAnimation *)(**(code **)(*plVar7 + 0x18))(plVar7);
    lVar8 = *(long *)(this + 0x110);
  }
  if (lVar8 != 0) {
    GUIAnimation::ScaleAnimation(this_00,0.0,1.0,DAT_00683f68);
    lVar8 = local_88;
    local_c0 = DAT_00692060;
    uStack_b8 = DAT_00692290;
    GUIAnimationCurve::GUIAnimationCurve
              ((GUIAnimationCurve *)&local_b0,(Vector2 *)&uStack_b8,(Vector2 *)&local_c0);
    *(long **)(lVar8 + 0x3c) = plStack_a8;
    *(long *)(lVar8 + 0x34) = local_b0;
    *(undefined8 *)(lVar8 + 0x4c) = uStack_98;
    *(undefined8 *)(lVar8 + 0x44) = local_a0;
    *(undefined4 *)(local_88 + 0x58) = 0x3d4ccccd;
    pGVar10 = *(GUIView **)(this + 0x110);
    GUIView::RemoveAllAnimations(pGVar10);
    this_00 = (GUIAnimation *)GUIView::AddAnimation(pGVar10,(shared_ptr *)&local_88);
    plVar7 = local_80;
    if ((local_80 != (long *)0x0) &&
       (lVar8 = local_80[1], local_80[1] = lVar8 + -1, lVar8 + -1 == 0)) {
      this_00 = (GUIAnimation *)(**(code **)(*local_80 + 0x10))(local_80);
      lVar8 = plVar7[2];
      plVar7[2] = lVar8 + -1;
      if (lVar8 + -1 == 0) {
        this_00 = (GUIAnimation *)(**(code **)(*plVar7 + 0x18))(plVar7);
        lVar8 = *(long *)(this + 0x130);
        goto joined_r0x0053ac34;
      }
    }
  }
  lVar8 = *(long *)(this + 0x130);
joined_r0x0053ac34:
  if (lVar8 != 0) {
    GUIAnimation::AlphaAnimation(this_00,0.0,1.0,0.5);
    *(undefined4 *)(local_b0 + 0x58) = 0x3dcccccd;
    pGVar10 = *(GUIView **)(this + 0x130);
    GUIView::RemoveAllAnimations(pGVar10);
    this_00 = (GUIAnimation *)GUIView::AddAnimation(pGVar10,(shared_ptr *)&local_b0);
    plVar7 = plStack_a8;
    if ((plStack_a8 != (long *)0x0) &&
       (lVar8 = plStack_a8[1], plStack_a8[1] = lVar8 + -1, lVar8 + -1 == 0)) {
      this_00 = (GUIAnimation *)(**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      lVar8 = plVar7[2];
      plVar7[2] = lVar8 + -1;
      if (lVar8 + -1 == 0) {
        this_00 = (GUIAnimation *)(**(code **)(*plVar7 + 0x18))(plVar7);
      }
    }
  }
  uVar6 = DAT_00692290;
  uVar5 = DAT_00692060;
  fVar4 = DAT_0068798c;
  fVar3 = _DAT_00684434;
  fVar2 = DAT_00683f68;
  if (*(long *)(this + 0x168) != *(long *)(this + 0x160)) {
    lVar8 = 0;
    uVar11 = 0;
    do {
      GUIAnimation::ScaleAnimation(this_00,0.0,1.0,fVar2);
      lVar9 = local_88;
      local_c0 = uVar5;
      uStack_b8 = uVar6;
      GUIAnimationCurve::GUIAnimationCurve
                ((GUIAnimationCurve *)&local_b0,(Vector2 *)&uStack_b8,(Vector2 *)&local_c0);
      *(long **)(lVar9 + 0x3c) = plStack_a8;
      *(long *)(lVar9 + 0x34) = local_b0;
      *(undefined8 *)(lVar9 + 0x4c) = uStack_98;
      *(undefined8 *)(lVar9 + 0x44) = local_a0;
      *(float *)(local_88 + 0x58) = (float)(int)uVar11 * fVar4 + fVar3;
      pGVar10 = *(GUIView **)(*(long *)(this + 0x160) + lVar8);
      GUIView::RemoveAllAnimations(pGVar10);
      this_00 = (GUIAnimation *)GUIView::AddAnimation(pGVar10,(shared_ptr *)&local_88);
      plVar7 = local_80;
      if ((local_80 != (long *)0x0) &&
         (lVar9 = local_80[1], local_80[1] = lVar9 + -1, lVar9 + -1 == 0)) {
        this_00 = (GUIAnimation *)(**(code **)(*local_80 + 0x10))(local_80);
        lVar9 = plVar7[2];
        plVar7[2] = lVar9 + -1;
        if (lVar9 + -1 == 0) {
          this_00 = (GUIAnimation *)(**(code **)(*plVar7 + 0x18))(plVar7);
        }
      }
      uVar11 = uVar11 + 1;
      lVar8 = lVar8 + 0x10;
    } while (uVar11 < (ulong)(*(long *)(this + 0x168) - *(long *)(this + 0x160) >> 4));
  }
  if (*(long *)(lVar1 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


