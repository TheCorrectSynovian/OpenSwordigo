/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004e6618
 * Function: Caver::PurchaseView::LayoutSubviews
 * Signature: undefined __thiscall LayoutSubviews(PurchaseView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PurchaseView::LayoutSubviews() */

void __thiscall Caver::PurchaseView::LayoutSubviews(PurchaseView *this)

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
  
                    /* try { // try from 004e6630 to 005e6633 has its CatchHandler @ 004e664c */
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
                    /* catch() { ... } // from try @ 004e6630 with catch @ 004e664c */
  GUIView::LayoutSubviews((GUIView *)this);
  fVar9 = *(float *)(this + 0x8c);
  fVar7 = *(float *)(this + 0x84);
  pGVar3 = *(GUIView **)(this + 0x118);
                    /* try { // try from 004e6674 to 005e6677 has its CatchHandler @ 004e6800 */
  Vector2::Rounded();
  uStack_80 = *(undefined8 *)(pGVar3 + 0x7c);
  GUIView::SetFrame(pGVar3,(Rectangle *)&local_88);
                    /* try { // try from 004e66c4 to 005e66cb has its CatchHandler @ 004e67fc */
  pGVar3 = *(GUIView **)(this + 0xf0);
  local_88 = *(undefined8 *)(pGVar3 + 0x74);
  fVar9 = (float)(int)((float)(int)(fVar7 + fVar9 * 0.5 + 30.0) + 5.0);
  fVar7 = (*(float *)(this + 0x84) + *(float *)(this + 0x8c) + -20.0) - fVar9;
  if (DAT_00692cd4 < fVar7) {
    fVar7 = DAT_00692cd4;
  }
                    /* try { // try from 004e6714 to 005e671b has its CatchHandler @ 004e67f8 */
  fVar8 = *(float *)(this + 0x88) + *(float *)(this + 0x90) * 0.5 + DAT_00687980;
  uStack_80 = CONCAT44(*(undefined4 *)(*(long *)(pGVar3 + 0xf0) + 0x48),fVar7);
  GUIView::SetFrame(pGVar3,(Rectangle *)&local_88);
  pGVar3 = *(GUIView **)(this + 0xf0);
  uStack_80 = *(undefined8 *)(pGVar3 + 0x7c);
  fVar8 = (float)(int)fVar8 - *(float *)(pGVar3 + 0x80);
  local_88 = CONCAT44(fVar8,fVar9);
  GUIView::SetFrame(pGVar3,(Rectangle *)&local_88);
  lVar4 = *(long *)(this + 0x100);
  if (*(long *)(this + 0x108) != lVar4) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      pGVar3 = *(GUIView **)(lVar4 + lVar5);
      plVar1 = (long *)((undefined8 *)(lVar4 + lVar5))[1];
      if (plVar1 != (long *)0x0) {
        plVar1[1] = plVar1[1] + 1;
      }
      local_88 = *(undefined8 *)(pGVar3 + 0x74);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004e6850 with catch @ 004e68d8
                        */
      uStack_80 = CONCAT44(0x43480000,fVar7);
                    /* try { // try from 004e68dc to 005e68e3 has its CatchHandler @ 004e68ec */
                    /* try { // try from 004e68e4 to 005e68ef has its CatchHandler @ 004e6808 */
      GUIView::SetFrame(pGVar3,(Rectangle *)&local_88);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004e68dc with catch @ 004e68ec
                        */
                    /* catch() { ... } // from try @ 004e6a90 with catch @ 004e68f0
                       catch() { ... } // from try @ 004e6ad8 with catch @ 004e68f0 */
      GUILabel::TextSize();
      local_88 = *(undefined8 *)(pGVar3 + 0x74);
      uStack_80 = CONCAT44(local_9c,fVar7);
      GUIView::SetFrame(pGVar3,(Rectangle *)&local_88);
      uStack_80 = *(undefined8 *)(pGVar3 + 0x7c);
      fVar8 = fVar8 - (*(float *)(pGVar3 + 0x80) + 10.0);
      local_88 = CONCAT44(fVar8,fVar9);
                    /* try { // try from 004e6938 to 005e693f has its CatchHandler @ 004e6afc */
      GUIView::SetFrame(pGVar3,(Rectangle *)&local_88);
      if ((plVar1 != (long *)0x0) && (lVar4 = plVar1[1], plVar1[1] = lVar4 + -1, lVar4 + -1 == 0)) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
        lVar4 = plVar1[2];
        plVar1[2] = lVar4 + -1;
        if (lVar4 + -1 == 0) {
          (**(code **)(*plVar1 + 0x18))(plVar1);
        }
      }
      lVar4 = *(long *)(this + 0x100);
      uVar6 = uVar6 + 1;
                    /* try { // try from 004e698c to 005e6993 has its CatchHandler @ 004e6af4 */
      lVar5 = lVar5 + 0x10;
    } while (uVar6 < (ulong)(*(long *)(this + 0x108) - lVar4 >> 4));
  }
                    /* try { // try from 004e6764 to 005e676b has its CatchHandler @ 004e67f4 */
  UpdateBuyButtonSize(this);
  pGVar3 = *(GUIView **)(this + 0x128);
  Vector2::Rounded();
  uStack_80 = *(undefined8 *)(pGVar3 + 0x7c);
  local_88 = local_90;
  GUIView::SetFrame(pGVar3,(Rectangle *)&local_88);
                    /* try { // try from 004e67b4 to 005e67bb has its CatchHandler @ 004e6804 */
  lVar4 = *(long *)(this + 0x128);
  Rectangle::RectangleByOutsetting((Rectangle *)(lVar4 + 0x84),10.0);
  *(undefined8 *)(lVar4 + 0x9c) = uStack_80;
  *(undefined8 *)(lVar4 + 0x94) = local_88;
  pGVar3 = *(GUIView **)(this + 0x138);
                    /* try { // try from 004e67e0 to 005e67e7 has its CatchHandler @ 004e67f0 */
  GUIView::safeBounds();
                    /* try { // try from 004e67e8 to 005e6807 has its CatchHandler @ 004e65a4 */
                    /* catch() { ... } // from try @ 004e67e0 with catch @ 004e67f0 */
                    /* catch() { ... } // from try @ 004e6764 with catch @ 004e67f4 */
                    /* catch() { ... } // from try @ 004e6714 with catch @ 004e67f8 */
                    /* catch() { ... } // from try @ 004e66c4 with catch @ 004e67fc */
                    /* catch() { ... } // from try @ 004e6674 with catch @ 004e6800 */
                    /* catch() { ... } // from try @ 004e67b4 with catch @ 004e6804 */
                    /* try { // try from 004e6808 to 005e684f has its CatchHandler @ 004e6808
                       catch(type#1 @ 00000000) { ... } // from try @ 004e6808 with catch @ 004e6808
                       catch(type#1 @ 00000000) { ... } // from try @ 004e686c with catch @ 004e6808
                       catch(type#1 @ 00000000) { ... } // from try @ 004e68e4 with catch @ 004e6808
                        */
  GUIView::safeBounds();
  Vector2::Rounded();
  uStack_80 = *(undefined8 *)(pGVar3 + 0x7c);
  local_88 = local_90;
                    /* try { // try from 004e6850 to 005e686b has its CatchHandler @ 004e68d8 */
  GUIView::SetFrame(pGVar3,(Rectangle *)&local_88);
  lVar4 = *(long *)(this + 0x138);
  Rectangle::RectangleByOutsetting((Rectangle *)(lVar4 + 0x84),10.0);
                    /* try { // try from 004e686c to 005e68db has its CatchHandler @ 004e6808 */
  *(undefined8 *)(lVar4 + 0x9c) = uStack_80;
  *(undefined8 *)(lVar4 + 0x94) = local_88;
  if (*(long *)(lVar2 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


