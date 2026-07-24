/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004f8230
 * Function: Caver::AttributePointsView::LayoutSubviews
 * Signature: undefined __thiscall LayoutSubviews(AttributePointsView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::AttributePointsView::LayoutSubviews() */

void __thiscall Caver::AttributePointsView::LayoutSubviews(AttributePointsView *this)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  long lVar7;
  float fVar8;
  GUIView *pGVar9;
  AttributePointsView *pAVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 local_a0;
  undefined8 uStack_98;
  float local_90;
  float fStack_8c;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  GUIView::LayoutSubviews((GUIView *)this);
  if (*(char *)(*(long *)(this + 0x158) + 0xe4) == '\0') {
    local_80 = 0;
    uStack_78 = CONCAT44(*(undefined4 *)(this + 0x90),
                         (*(float *)(this + 0x8c) + -15.0) -
                         *(float *)(*(long *)(this + 0x158) + 0x7c));
    pAVar10 = (AttributePointsView *)&local_80;
  }
  else {
    pAVar10 = this + 0x84;
  }
  GUIView::SetFrame(*(GUIView **)(this + 0x108),(Rectangle *)pAVar10);
  lVar11 = *(long *)(this + 0x108);
  fVar2 = *(float *)(lVar11 + 0x84);
  fVar4 = *(float *)(lVar11 + 0x88);
  fVar3 = *(float *)(lVar11 + 0x8c);
  fVar5 = *(float *)(lVar11 + 0x90);
  if (*(GUIView **)(this + 0x118) != (GUIView *)0x0) {
    uStack_78 = CONCAT44(fVar5,0x42c80000);
    local_80 = DAT_006937e0;
    GUIView::SetFrame(*(GUIView **)(this + 0x118),(Rectangle *)&local_80);
  }
  pGVar9 = *(GUIView **)(this + 0x128);
  if (pGVar9 != (GUIView *)0x0) {
    uStack_78 = *(undefined8 *)(pGVar9 + 0x7c);
    local_80 = CONCAT44((int)((fVar5 * 0.5 + fVar4) - *(float *)(pGVar9 + 0x80) * 0.5),
                        (fVar2 + fVar3 + -8.0) - *(float *)(pGVar9 + 0x7c));
    GUIView::SetFrame(pGVar9,(Rectangle *)&local_80);
    lVar11 = *(long *)(this + 0x128);
    Rectangle::RectangleByOutsetting((Rectangle *)(lVar11 + 0x84),10.0);
    fVar8 = DAT_00683734;
    *(undefined8 *)(lVar11 + 0x9c) = uStack_78;
    *(undefined8 *)(lVar11 + 0x94) = local_80;
    pAVar10 = this + 0x94;
    if (*(float *)(this + 0x9c) <= fVar8) {
      pAVar10 = this + 0x84;
    }
    uStack_78 = *(undefined8 *)(pAVar10 + 8);
    local_80 = *(undefined8 *)pAVar10;
    lVar11 = *(long *)(this + 0x128);
    puVar1 = (undefined8 *)(lVar11 + 0x94);
    if (*(float *)(lVar11 + 0x9c) <= fVar8) {
      puVar1 = (undefined8 *)(lVar11 + 0x84);
    }
    uStack_98 = puVar1[1];
    local_a0 = *puVar1;
    GUIView::ConvertRectFromView((Rectangle *)this,(GUIView *)&local_a0);
    Rectangle::ExpandToincludeRectangle((Rectangle *)&local_80,(Rectangle *)&local_90);
    *(undefined8 *)(this + 0x9c) = uStack_78;
    *(undefined8 *)(this + 0x94) = local_80;
  }
  if ((*(GUIView **)(this + 0x138) != (GUIView *)0x0) && (*(long *)(this + 0x128) != 0)) {
    GUIView::SetFrame(*(GUIView **)(this + 0x138),(Rectangle *)(*(long *)(this + 0x128) + 0x74));
    lVar11 = *(long *)(this + 0x138);
    Rectangle::RectangleByOutsetting((Rectangle *)(lVar11 + 0x84),10.0);
    *(undefined8 *)(lVar11 + 0x9c) = uStack_78;
    *(undefined8 *)(lVar11 + 0x94) = local_80;
  }
  if (*(long *)(this + 0x148) != 0) {
    GUILabel::TextSize();
    local_80 = CONCAT44((int)((fVar5 * 0.5 + fVar4) - fStack_8c * 0.5),
                        (fVar2 + fVar3 + -10.0) - local_90);
    uStack_78 = CONCAT44(fStack_8c,local_90);
    GUIView::SetFrame(*(GUIView **)(this + 0x148),(Rectangle *)&local_80);
  }
  pAVar10 = this + 0x188;
  uVar14 = 0xffffffffffffffff;
  do {
    plVar12 = *(long **)pAVar10;
    if (plVar12 != (long *)0x0) {
      if ((int)plVar12[1] == 0) {
        (**(code **)(*plVar12 + 8))(plVar12);
        plVar12 = *(long **)pAVar10;
        if (plVar12 != (long *)0x0) goto LAB_004f84d0;
      }
      else {
LAB_004f84d0:
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      }
      Vector2::Rounded();
      plVar13 = *(long **)pAVar10;
      if (plVar13 != (long *)0x0) {
        *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      }
      local_80 = CONCAT44(fStack_8c,local_90);
      uStack_78 = *(undefined8 *)((long)plVar13 + 0x54);
      GUIAnimatedSprite::SetFrame((GUIAnimatedSprite *)pAVar10,(Rectangle *)&local_80);
      iVar6 = (int)plVar13[1] + -1;
      *(int *)(plVar13 + 1) = iVar6;
      if (iVar6 == 0) {
        (**(code **)(*plVar13 + 8))(plVar13);
      }
      iVar6 = (int)plVar12[1] + -1;
      *(int *)(plVar12 + 1) = iVar6;
      if (iVar6 == 0) {
        (**(code **)(*plVar12 + 8))(plVar12);
      }
    }
    uVar14 = uVar14 + 1;
    pAVar10 = pAVar10 + 0x48;
    if (10 < uVar14) {
      pGVar9 = *(GUIView **)(this + 0x158);
      this[0x540] = (AttributePointsView)0x1;
      if (pGVar9 != (GUIView *)0x0) {
        uStack_78 = *(undefined8 *)(pGVar9 + 0x7c);
        local_80 = CONCAT44((int)((*(float *)(this + 0x88) + *(float *)(this + 0x90) * 0.5) -
                                 *(float *)(pGVar9 + 0x80) * 0.5),
                            *(float *)(*(long *)(this + 0x108) + 0x74) +
                            *(float *)(*(long *)(this + 0x108) + 0x7c) + 15.0);
        GUIView::SetFrame(pGVar9,(Rectangle *)&local_80);
        lVar11 = *(long *)(this + 0x158);
        Rectangle::RectangleByOutsetting((Rectangle *)(lVar11 + 0x84),4.0);
        *(undefined8 *)(lVar11 + 0x9c) = uStack_78;
        *(undefined8 *)(lVar11 + 0x94) = local_80;
      }
      GUIView::SetTouchBoundsToIncludeSubviewTouchBounds((GUIView *)this);
      if (*(long *)(lVar7 + 0x28) == local_68) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}


