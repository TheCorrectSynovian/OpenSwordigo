/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00504520
 * Function: Caver::GuidePurchaseView::LayoutSubviews
 * Signature: undefined __thiscall LayoutSubviews(GuidePurchaseView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GuidePurchaseView::LayoutSubviews() */

void __thiscall Caver::GuidePurchaseView::LayoutSubviews(GuidePurchaseView *this)

{
  long *plVar1;
  long lVar2;
  GUIView *pGVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 local_9c;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  GUIView::LayoutSubviews((GUIView *)this);
  fVar8 = *(float *)(this + 0x8c);
  fVar7 = *(float *)(this + 0x84);
  pGVar3 = *(GUIView **)(this + 0x120);
  Vector2::Rounded();
  uStack_80 = *(undefined8 *)(pGVar3 + 0x7c);
  GUIView::SetFrame(pGVar3,(Rectangle *)&local_88);
  pGVar3 = *(GUIView **)(this + 0xf8);
  local_88 = *(undefined8 *)(pGVar3 + 0x74);
  fVar8 = (float)(int)((float)(int)(fVar7 + fVar8 * 0.5 + 30.0) + 5.0);
  fVar9 = (*(float *)(this + 0x84) + *(float *)(this + 0x8c) + -20.0) - fVar8;
  fVar7 = *(float *)(this + 0x88) + *(float *)(this + 0x90) * 0.5 + DAT_00687980;
  uStack_80 = CONCAT44(*(undefined4 *)(*(long *)(pGVar3 + 0xf0) + 0x48),fVar9);
  GUIView::SetFrame(pGVar3,(Rectangle *)&local_88);
  pGVar3 = *(GUIView **)(this + 0xf8);
  uStack_80 = *(undefined8 *)(pGVar3 + 0x7c);
  fVar7 = (float)(int)fVar7 - *(float *)(pGVar3 + 0x80);
  local_88 = CONCAT44(fVar7,fVar8);
  GUIView::SetFrame(pGVar3,(Rectangle *)&local_88);
  lVar4 = *(long *)(this + 0x108);
  if (*(long *)(this + 0x110) != lVar4) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      pGVar3 = *(GUIView **)(lVar4 + lVar5);
      plVar1 = (long *)((undefined8 *)(lVar4 + lVar5))[1];
      if (plVar1 != (long *)0x0) {
        plVar1[1] = plVar1[1] + 1;
      }
      local_88 = *(undefined8 *)(pGVar3 + 0x74);
      uStack_80 = CONCAT44(0x43480000,fVar9);
      GUIView::SetFrame(pGVar3,(Rectangle *)&local_88);
      GUILabel::TextSize();
      local_88 = *(undefined8 *)(pGVar3 + 0x74);
      uStack_80 = CONCAT44(local_9c,fVar9);
      GUIView::SetFrame(pGVar3,(Rectangle *)&local_88);
      uStack_80 = *(undefined8 *)(pGVar3 + 0x7c);
      fVar7 = fVar7 - (*(float *)(pGVar3 + 0x80) + 10.0);
      local_88 = CONCAT44(fVar7,fVar8);
      GUIView::SetFrame(pGVar3,(Rectangle *)&local_88);
      if ((plVar1 != (long *)0x0) && (lVar4 = plVar1[1], plVar1[1] = lVar4 + -1, lVar4 + -1 == 0)) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
        lVar4 = plVar1[2];
        plVar1[2] = lVar4 + -1;
        if (lVar4 + -1 == 0) {
          (**(code **)(*plVar1 + 0x18))(plVar1);
        }
      }
      lVar4 = *(long *)(this + 0x108);
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x10;
    } while (uVar6 < (ulong)(*(long *)(this + 0x110) - lVar4 >> 4));
  }
  UpdateBuyButtonSize(this);
  pGVar3 = *(GUIView **)(this + 0x130);
  Vector2::Rounded();
  uStack_80 = *(undefined8 *)(pGVar3 + 0x7c);
  local_88 = local_90;
  GUIView::SetFrame(pGVar3,(Rectangle *)&local_88);
  lVar4 = *(long *)(this + 0x130);
  Rectangle::RectangleByOutsetting((Rectangle *)(lVar4 + 0x84),10.0);
  *(undefined8 *)(lVar4 + 0x9c) = uStack_80;
  *(undefined8 *)(lVar4 + 0x94) = local_88;
  pGVar3 = *(GUIView **)(this + 0x140);
  NEON_fmov(0xc1200000,4);
  Vector2::Rounded();
  uStack_80 = *(undefined8 *)(pGVar3 + 0x7c);
  local_88 = local_90;
  GUIView::SetFrame(pGVar3,(Rectangle *)&local_88);
  lVar4 = *(long *)(this + 0x140);
  Rectangle::RectangleByOutsetting((Rectangle *)(lVar4 + 0x84),10.0);
  *(undefined8 *)(lVar4 + 0x9c) = uStack_80;
  *(undefined8 *)(lVar4 + 0x94) = local_88;
  pGVar3 = *(GUIView **)(this + 0x150) + 0x7c;
  uStack_80 = *(undefined8 *)pGVar3;
  local_88 = CONCAT44(0x41a00000,
                      (int)((*(float *)(this + 0x84) + *(float *)(this + 0x8c) * 0.5) -
                           *(float *)pGVar3 * 0.5));
  GUIView::SetFrame(*(GUIView **)(this + 0x150),(Rectangle *)&local_88);
  lVar4 = *(long *)(this + 0x150);
  Rectangle::RectangleByOutsetting((Rectangle *)(lVar4 + 0x84),10.0);
  *(undefined8 *)(lVar4 + 0x9c) = uStack_80;
  *(undefined8 *)(lVar4 + 0x94) = local_88;
  pGVar3 = *(GUIView **)(this + 0x160);
  GUILabel::TextSize();
  local_88 = *(undefined8 *)(pGVar3 + 0x74);
  GUIView::SetFrame(pGVar3,(Rectangle *)&local_88);
  lVar4 = *(long *)(this + 0x150);
  pGVar3 = *(GUIView **)(this + 0x160);
  uStack_80 = *(undefined8 *)(pGVar3 + 0x7c);
  local_88 = CONCAT44((*(float *)(lVar4 + 0x78) + -6.0) - *(float *)(pGVar3 + 0x80),
                      (int)((*(float *)(lVar4 + 0x74) + *(float *)(lVar4 + 0x7c) * 0.5) -
                           *(float *)(pGVar3 + 0x7c) * 0.5));
  GUIView::SetFrame(pGVar3,(Rectangle *)&local_88);
  AnimateIn();
  if (*(long *)(lVar2 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


