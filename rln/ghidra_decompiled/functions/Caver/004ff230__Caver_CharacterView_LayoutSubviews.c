/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004ff230
 * Function: Caver::CharacterView::LayoutSubviews
 * Signature: undefined __thiscall LayoutSubviews(CharacterView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::CharacterView::LayoutSubviews() */

void __thiscall Caver::CharacterView::LayoutSubviews(CharacterView *this)

{
  long lVar1;
  GUIView *pGVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  float local_78;
  float local_70;
  float local_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  fVar8 = *(float *)(this + 0x88);
  fVar9 = *(float *)(this + 0x90);
  GUIView::safeBounds();
  GUIView::safeBounds();
  fVar11 = (local_78 + local_70) - local_68;
  if (*(GUIView **)(this + 0x118) != (GUIView *)0x0) {
    local_88 = CONCAT44(fVar8 + 15.0,local_68 + fVar11 + DAT_00693290);
    uStack_80 = DAT_00693988;
    GUIView::SetFrame(*(GUIView **)(this + 0x118),(Rectangle *)&local_88);
    lVar4 = *(long *)(this + 0x118);
    Rectangle::RectangleByOutsetting((Rectangle *)(lVar4 + 0x84),6.0);
    *(undefined8 *)(lVar4 + 0x9c) = uStack_80;
    *(undefined8 *)(lVar4 + 0x94) = local_88;
  }
  if (*(GUIView **)(this + 0x128) != (GUIView *)0x0) {
    uStack_80 = *(undefined8 *)(*(long *)(this + 0x118) + 0x7c);
    uVar10 = *(undefined8 *)(*(long *)(this + 0x118) + 0x74);
    local_88 = CONCAT44((float)((ulong)uVar10 >> 0x20) + 0.0,
                        (-15.0 - (float)uStack_80) + (float)uVar10);
    GUIView::SetFrame(*(GUIView **)(this + 0x128),(Rectangle *)&local_88);
  }
  pGVar2 = *(GUIView **)(this + 0x1a8);
  if (pGVar2 != (GUIView *)0x0) {
    local_88 = CONCAT44((fVar8 + fVar9 + -15.0) - *(float *)(*(long *)(pGVar2 + 0xf0) + 0x48),
                        0x41700000);
    uStack_80 = CONCAT44(*(float *)(*(long *)(pGVar2 + 0xf0) + 0x48),0x43480000);
    GUIView::SetFrame(pGVar2,(Rectangle *)&local_88);
  }
  lVar4 = GUIWindow::mainWindow();
  pGVar2 = *(GUIView **)(this + 0x138);
  fVar5 = 25.0;
  if (*(float *)(lVar4 + 0x90) < _DAT_006884d0) {
    fVar5 = 0.0;
  }
  if (pGVar2 != (GUIView *)0x0) {
    fVar7 = *(float *)(pGVar2 + 0x7c);
    fVar6 = (float)(int)((local_68 + fVar11 * 0.5) - fVar7 * 0.5);
    if (this[0x198] == (CharacterView)0x0) {
      fVar6 = local_68 + 10.0;
      fVar7 = (local_68 + fVar11 + -10.0) - fVar6;
    }
    uStack_80 = CONCAT44(*(float *)(pGVar2 + 0x80),fVar7);
    local_88 = CONCAT44((((fVar8 + fVar9) - fVar5) + DAT_006939a0) - *(float *)(pGVar2 + 0x80),fVar6
                       );
    GUIView::SetFrame(pGVar2,(Rectangle *)&local_88);
  }
  if (0 < (int)*(uint *)(this + 0x188)) {
    lVar4 = 0;
    do {
      lVar4 = lVar4 + -1;
    } while (-lVar4 != (ulong)*(uint *)(this + 0x188));
    Vector2::Rounded();
    uVar10 = DAT_00693990;
    if (0 < *(int *)(this + 0x188)) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        fVar9 = (float)local_90 + 0.0;
        pGVar2 = *(GUIView **)(*(long *)(this + 400) + lVar3);
        uStack_80 = *(undefined8 *)(pGVar2 + 0x7c);
        fVar8 = (float)((ulong)local_90 >> 0x20) - *(float *)(pGVar2 + 0x80);
        local_88 = CONCAT44(fVar8,fVar9);
        GUIView::SetFrame(pGVar2,(Rectangle *)&local_88);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 0x10;
        local_90 = CONCAT44(fVar8 + (float)((ulong)uVar10 >> 0x20),fVar9 + (float)uVar10);
      } while (lVar4 < *(int *)(this + 0x188));
    }
  }
  pGVar2 = *(GUIView **)(this + 0x1d8);
  if (pGVar2 != (GUIView *)0x0) {
    local_88 = DAT_00693998;
    uStack_80 = CONCAT44(*(undefined4 *)(pGVar2 + 0x80),fVar11 + DAT_00688634);
    GUIView::SetFrame(pGVar2,(Rectangle *)&local_88);
  }
  AddAnimations(this,false);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


