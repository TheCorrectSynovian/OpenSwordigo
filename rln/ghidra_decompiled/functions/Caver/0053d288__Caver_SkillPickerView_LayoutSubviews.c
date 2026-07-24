/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0053d288
 * Function: Caver::SkillPickerView::LayoutSubviews
 * Signature: undefined __thiscall LayoutSubviews(SkillPickerView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SkillPickerView::LayoutSubviews() */

void __thiscall Caver::SkillPickerView::LayoutSubviews(SkillPickerView *this)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  float fVar4;
  GUIView *this_00;
  long lVar5;
  Rectangle *pRVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float local_98;
  undefined8 local_90;
  long local_88;
  undefined8 local_80;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  this_00 = *(GUIView **)(this + 0x110);
  if (this_00 != (GUIView *)0x0) {
    local_88 = (ulong)(uint)((*(float *)(this + 0x88) + *(float *)(this + 0x90) + -20.0) -
                            *(float *)(this_00 + 0x80)) << 0x20;
    local_80 = CONCAT44(*(float *)(this_00 + 0x80),*(undefined4 *)(this + 0x8c));
    GUIView::SetFrame(this_00,(Rectangle *)&local_88);
  }
  fVar4 = DAT_00683734;
  iVar2 = *(int *)(this + 0x120);
  if (0 < iVar2) {
    fVar10 = *(float *)(**(long **)(this + 0x128) + 0x80);
    uVar11 = *(undefined8 *)(**(long **)(this + 0x138) + 0x7c);
    lVar7 = 0;
    lVar8 = 0;
    iVar9 = -1;
    do {
      GUIView::safeBounds();
      fStack_a4 = (*(float *)(this + 0x88) + *(float *)(this + 0x90) * 0.5) -
                  ((float)(iVar2 + -1) * 8.0 + fVar10 * (float)iVar2) * 0.5;
      local_a8 = (local_a0 + local_98 + -10.0) - (float)uVar11;
      Vector2::Rounded();
      local_88 = CONCAT44((fVar10 + 8.0) * (float)(iVar9 + *(int *)(this + 0x120)) +
                          (float)((ulong)local_90 >> 0x20),(float)local_90 + 0.0);
      local_80 = uVar11;
      GUIView::SetFrame(*(GUIView **)(*(long *)(this + 0x138) + lVar7),(Rectangle *)&local_88);
      lVar5 = *(long *)(*(long *)(this + 0x138) + lVar7);
      Rectangle::RectangleByOutsetting((Rectangle *)(lVar5 + 0x84),5.0);
      *(undefined8 *)(lVar5 + 0x9c) = uStack_b0;
      *(undefined8 *)(lVar5 + 0x94) = local_b8;
      lVar5 = *(long *)(*(long *)(this + 0x138) + lVar7);
      pRVar6 = *(Rectangle **)(*(long *)(this + 0x128) + lVar7);
      puVar1 = (undefined8 *)(lVar5 + 0x94);
      if (*(float *)(lVar5 + 0x9c) <= fVar4) {
        puVar1 = (undefined8 *)(lVar5 + 0x84);
      }
      uStack_c8 = puVar1[1];
      local_d0 = *puVar1;
      GUIView::ConvertRectFromView(pRVar6,(GUIView *)&local_d0);
      lVar8 = lVar8 + 1;
      iVar9 = iVar9 + -1;
      lVar7 = lVar7 + 0x10;
      *(undefined8 *)(pRVar6 + 0x9c) = uStack_b0;
      *(undefined8 *)(pRVar6 + 0x94) = local_b8;
    } while (lVar8 < *(int *)(this + 0x120));
  }
  AddAnimations(SUB81(this,0));
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


