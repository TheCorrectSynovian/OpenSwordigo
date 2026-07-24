/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005118e0
 * Function: Caver::InventoryView::LayoutSubviews
 * Signature: undefined __thiscall LayoutSubviews(InventoryView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::InventoryView::LayoutSubviews() */

void __thiscall Caver::InventoryView::LayoutSubviews(InventoryView *this)

{
  Rectangle *pRVar1;
  float fVar2;
  float fVar3;
  long lVar4;
  float fVar5;
  GUIView *this_00;
  long *plVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  undefined8 local_90;
  float local_88;
  float local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_68;
  
  fVar5 = DAT_00694118;
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00511858 with catch @ 00511908
                        */
                    /* try { // try from 0051190c to 00611913 has its CatchHandler @ 0051191c */
                    /* try { // try from 00511914 to 0061191f has its CatchHandler @ 00511810 */
  fVar2 = *(float *)(this + 0x84);
  local_80 = *(undefined8 *)(this + 0x84);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0051190c with catch @ 0051191c
                        */
  fVar10 = *(float *)(this + 0x90);
                    /* catch() { ... } // from try @ 0051195c with catch @ 00511938 */
  uStack_78 = CONCAT44(fVar10,(float)(int)(*(float *)(this + 0x8c) * 0.5 + fVar2) - fVar2);
  if (0 < *(int *)(this + 0x128)) {
    plVar6 = *(long **)(this + 0x130);
                    /* try { // try from 00511958 to 0061195b has its CatchHandler @ 0051196c */
                    /* try { // try from 0051195c to 0061197f has its CatchHandler @ 00511938 */
                    /* catch() { ... } // from try @ 00511958 with catch @ 0051196c */
    fVar2 = *(float *)(*plVar6 + 0x7c);
    fVar3 = *(float *)(*plVar6 + 0x80);
    lVar7 = 0;
    fVar9 = 25.0;
    lVar8 = 1;
    fVar10 = (float)(int)((*(float *)(this + 0x88) + fVar10 + 20.0 +
                          (fVar10 - ((float)(*(int *)(this + 0x128) + -1) * DAT_00690d18 + fVar3)) *
                          -0.5) - fVar3);
    while( true ) {
      local_90 = CONCAT44(fVar10,fVar9);
      local_88 = fVar2;
      local_84 = fVar3;
      GUIView::SetFrame(*(GUIView **)((long)plVar6 + lVar7),(Rectangle *)&local_90);
      pRVar1 = (Rectangle *)(*(long *)(*(long *)(this + 0x130) + lVar7) + 0x74);
      if (lVar7 == 0) {
        uStack_78 = *(undefined8 *)(*(long *)(*(long *)(this + 0x130) + lVar7) + 0x7c);
        local_80 = *(undefined8 *)pRVar1;
      }
      else {
        Rectangle::ExpandToincludeRectangle((Rectangle *)&local_80,pRVar1);
      }
      if (*(int *)(this + 0x128) <= lVar8) break;
      plVar6 = *(long **)(this + 0x130);
      fVar10 = fVar10 + fVar5;
      fVar9 = fVar9 + 10.0;
      lVar7 = lVar7 + 0x10;
      lVar8 = lVar8 + 1;
    }
  }
  this_00 = *(GUIView **)(this + 0x138);
  if (this_00 != (GUIView *)0x0) {
    local_84 = *(float *)(this_00 + 0x80);
    local_88 = *(float *)(this + 0x8c) + DAT_00688634;
    local_90 = DAT_00693998;
    GUIView::SetFrame(this_00,(Rectangle *)&local_90);
  }
  AnimateIn();
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


