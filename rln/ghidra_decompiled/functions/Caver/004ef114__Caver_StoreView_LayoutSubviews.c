/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004ef114
 * Function: Caver::StoreView::LayoutSubviews
 * Signature: undefined __thiscall LayoutSubviews(StoreView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Removing unreachable block (ram,0x004ef328) */
/* Caver::StoreView::LayoutSubviews() */

void __thiscall Caver::StoreView::LayoutSubviews(StoreView *this)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  GUIView *pGVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_a0;
  float local_98;
  float local_88;
  float local_80;
  float local_78;
  float local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  GUIView::LayoutSubviews((GUIView *)this);
  fVar10 = *(float *)(*(GUIView **)(this + 0x100) + 0x80);
  local_68 = (ulong)(uint)((*(float *)(this + 0x88) + *(float *)(this + 0x90) + -10.0) - fVar10) <<
             0x20;
  uStack_60 = CONCAT44(fVar10,*(undefined4 *)(this + 0x8c));
  GUIView::SetFrame(*(GUIView **)(this + 0x100),(Rectangle *)&local_68);
  local_68 = DAT_00693288;
  uStack_60 = CONCAT44(*(undefined4 *)(*(long *)(this + 0x100) + 0x80),*(undefined4 *)(this + 0x8c))
  ;
  GUIView::SetFrame(*(GUIView **)(this + 0x110),(Rectangle *)&local_68);
  pGVar4 = *(GUIView **)(this + 0xf0);
  GUIView::safeBounds();
  uStack_60 = *(undefined8 *)(pGVar4 + 0x7c);
  local_68 = CONCAT44((int)((*(float *)(*(long *)(this + 0x100) + 0x78) +
                            *(float *)(*(long *)(this + 0x100) + 0x80) * 0.5) -
                           *(float *)(*(long *)(this + 0xf0) + 0x80) * 0.5),
                      (int)((local_78 + local_70 + -15.0) -
                           *(float *)(*(long *)(this + 0xf0) + 0x7c)));
  GUIView::SetFrame(pGVar4,(Rectangle *)&local_68);
  lVar5 = *(long *)(this + 0xf0);
  Rectangle::RectangleByOutsetting((Rectangle *)(lVar5 + 0x84),10.0);
  *(undefined8 *)(lVar5 + 0x9c) = uStack_60;
  *(ulong *)(lVar5 + 0x94) = local_68;
  pGVar4 = *(GUIView **)(this + 0x120);
  GUIView::safeBounds();
  uStack_60 = *(undefined8 *)(pGVar4 + 0x7c);
  local_68 = CONCAT44((int)((*(float *)(*(long *)(this + 0x110) + 0x78) +
                            *(float *)(*(long *)(this + 0x110) + 0x80) * 0.5) -
                           *(float *)(*(long *)(this + 0x120) + 0x80) * 0.5),
                      (int)((local_88 + local_80 + -15.0) -
                           *(float *)(*(long *)(this + 0x120) + 0x7c)));
  GUIView::SetFrame(pGVar4,(Rectangle *)&local_68);
  lVar5 = *(long *)(this + 0x120);
  Rectangle::RectangleByOutsetting((Rectangle *)(lVar5 + 0x84),10.0);
  *(undefined8 *)(lVar5 + 0x9c) = uStack_60;
  *(ulong *)(lVar5 + 0x94) = local_68;
  GUIView::safeBounds();
  GUIView::safeBounds();
  local_68 = (ulong)(uint)(local_98 + 10.0);
  uStack_60 = CONCAT44(*(undefined4 *)(this + 0x90),local_a0 + -20.0);
  GUIView::SetFrame(*(GUIView **)(this + 0x130),(Rectangle *)&local_68);
  fVar10 = DAT_00693290;
  lVar5 = *(long *)(this + 0x140);
  if (*(long *)(this + 0x148) == lVar5) {
    fVar8 = 0.0;
    iVar3 = 0;
  }
  else {
    lVar6 = 0;
    uVar7 = 0;
    fVar8 = 0.0;
    do {
      fVar8 = fVar8 + fVar10;
                    /* catch() { ... } // from try @ 004ef370 with catch @ 004ef35c */
      local_68 = (ulong)(uint)fVar8 << 0x20;
      uStack_60 = CONCAT44(0x42880000,*(undefined4 *)(*(long *)(this + 0x130) + 0x8c));
      GUIView::SetFrame(*(GUIView **)(lVar5 + lVar6),(Rectangle *)&local_68);
      lVar5 = *(long *)(this + 0x140);
                    /* try { // try from 004ef36c to 005ef36f has its CatchHandler @ 004ef380 */
      uVar7 = uVar7 + 1;
                    /* try { // try from 004ef370 to 005ef393 has its CatchHandler @ 004ef35c */
      lVar6 = lVar6 + 0x10;
                    /* catch() { ... } // from try @ 004ef36c with catch @ 004ef380 */
    } while (uVar7 < (ulong)(*(long *)(this + 0x148) - lVar5 >> 4));
    iVar3 = (int)((ulong)(*(long *)(this + 0x148) - lVar5) >> 4);
    if (2 < iVar3) goto LAB_004ef3ac;
  }
  iVar3 = iVar3 + -1;
  do {
    iVar3 = iVar3 + 1;
    fVar8 = fVar8 + DAT_00693294;
  } while (iVar3 < 2);
LAB_004ef3ac:
  plVar2 = *(long **)(this + 0x130);
  local_68 = (ulong)(uint)(fVar8 + -9.0) << 0x20;
  uStack_60 = CONCAT44(-(fVar8 + -9.0),*(undefined4 *)((long)plVar2 + 0x8c));
  (**(code **)(*plVar2 + 0x130))(plVar2,&local_68);
  fVar10 = DAT_00683944;
  lVar5 = *(long *)(this + 0x130);
  fVar8 = -*(float *)(lVar5 + 0xec);
  fVar9 = -((*(float *)(lVar5 + 0xf0) + *(float *)(lVar5 + 0xf8)) - *(float *)(lVar5 + 0x90));
  if (DAT_00683944 < ABS(fVar8 - *(float *)(lVar5 + 0x108))) {
    *(undefined4 *)(lVar5 + 0x124) = 0;
  }
  *(undefined1 *)(lVar5 + 0x104) = 1;
  *(float *)(lVar5 + 0x108) = fVar8;
  if (fVar10 < ABS(fVar9 - *(float *)(lVar5 + 0x134))) {
    *(undefined4 *)(lVar5 + 0x150) = 0;
  }
  *(undefined1 *)(lVar5 + 0x130) = 1;
  *(float *)(lVar5 + 0x134) = fVar9;
  *(float *)(lVar5 + 0x100) = fVar8;
  *(float *)(lVar5 + 300) = fVar9;
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


