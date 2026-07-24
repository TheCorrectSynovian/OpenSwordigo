/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005416c0
 * Function: Caver::TabbedMenuView::LayoutSubviews
 * Signature: undefined __thiscall LayoutSubviews(TabbedMenuView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::TabbedMenuView::LayoutSubviews() */

void __thiscall Caver::TabbedMenuView::LayoutSubviews(TabbedMenuView *this)

{
  long lVar1;
  long *plVar2;
  GUIView *pGVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  undefined8 local_60;
  float local_58;
  float local_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  long local_38;
  
                    /* catch() { ... } // from try @ 00541180 with catch @ 005416c0
                       catch() { ... } // from try @ 0054141c with catch @ 005416c0 */
                    /* catch() { ... } // from try @ 00541200 with catch @ 005416d0
                       catch() { ... } // from try @ 00541214 with catch @ 005416d0 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00541224 with catch @ 005416e0 */
  pGVar3 = *(GUIView **)(this + 0x100);
  if (pGVar3 != (GUIView *)0x0) {
    plVar2 = *(long **)(pGVar3 + 0x100);
    local_40 = _DAT_00000054;
    if ((plVar2 != (long *)0x0) && (local_40 = *(float *)((long)plVar2 + 0x54), (int)plVar2[1] == 0)
       ) {
                    /* try { // try from 00541704 to 00641797 has its CatchHandler @ 005417a0 */
      (**(code **)(*plVar2 + 8))();
      pGVar3 = *(GUIView **)(this + 0x100);
    }
    GUIView::safeBounds();
    fStack_3c = *(float *)(this + 0x90);
    local_48 = local_58;
    fStack_44 = 0.0;
    GUIView::SetFrame(pGVar3,(Rectangle *)&local_48);
  }
  pGVar3 = *(GUIView **)(this + 0x110);
  if (pGVar3 != (GUIView *)0x0) {
    plVar2 = *(long **)(pGVar3 + 0x100);
    fVar7 = _DAT_00000054;
    if ((plVar2 != (long *)0x0) && (fVar7 = *(float *)((long)plVar2 + 0x54), (int)plVar2[1] == 0)) {
      (**(code **)(*plVar2 + 8))(plVar2);
      pGVar3 = *(GUIView **)(this + 0x110);
    }
    fStack_3c = *(float *)(this + 0x90);
                    /* try { // try from 00541798 to 006417a3 has its CatchHandler @ 00541108 */
    fStack_44 = 0.0;
                    /* catch() { ... } // from try @ 00541704 with catch @ 005417a0 */
    local_48 = *(float *)(*(long *)(this + 0x100) + 0x74) - fVar7;
    local_40 = fVar7;
                    /* catch() { ... } // from try @ 00541854 with catch @ 005417a4 */
    GUIView::SetFrame(pGVar3,(Rectangle *)&local_48);
  }
  pGVar3 = *(GUIView **)(this + 0x128);
  if (pGVar3 != (GUIView *)0x0) {
                    /* try { // try from 005417bc to 006417c3 has its CatchHandler @ 00541860 */
    fStack_3c = (float)((ulong)*(undefined8 *)(pGVar3 + 0x7c) >> 0x20);
    local_40 = (float)*(undefined8 *)(pGVar3 + 0x7c);
    if (this[0x120] == (TabbedMenuView)0x0) {
                    /* try { // try from 005417f0 to 006417fb has its CatchHandler @ 00541808 */
                    /* catch() { ... } // from try @ 005417f0 with catch @ 00541808 */
      fStack_44 = (float)(int)((*(float *)(this + 0x88) + *(float *)(this + 0x90) * 0.5) -
                              fStack_3c * 0.5);
      local_48 = 0.0;
    }
    else {
      uVar6 = NEON_fmov(0x40a00000,4);
      uVar4 = *(undefined8 *)(*(long *)(this + 0x100) + 0x84);
      uVar5 = *(undefined8 *)(*(long *)(this + 0x100) + 0x8c);
      local_48 = ((float)uVar4 + (float)uVar5 + (float)uVar6) - local_40;
      fStack_44 = ((float)((ulong)uVar4 >> 0x20) + (float)((ulong)uVar5 >> 0x20) +
                  (float)((ulong)uVar6 >> 0x20)) - fStack_3c;
    }
    GUIView::SetFrame(pGVar3,(Rectangle *)&local_48);
  }
  pGVar3 = *(GUIView **)(this + 0x148);
  if (pGVar3 != (GUIView *)0x0) {
                    /* try { // try from 0054182c to 00641853 has its CatchHandler @ 0054185c */
    local_40 = *(float *)(this + 0x8c);
    fStack_3c = *(float *)(pGVar3 + 0x80);
    local_48 = (float)*(undefined8 *)(pGVar3 + 0x74);
    fStack_44 = (float)((ulong)*(undefined8 *)(pGVar3 + 0x74) >> 0x20);
    GUIView::SetFrame(pGVar3,(Rectangle *)&local_48);
    pGVar3 = *(GUIView **)(this + 0x148);
                    /* try { // try from 00541854 to 0064186f has its CatchHandler @ 005417a4 */
                    /* catch() { ... } // from try @ 0054182c with catch @ 0054185c */
                    /* catch() { ... } // from try @ 005417bc with catch @ 00541860 */
                    /* try { // try from 00541870 to 0064187b has its CatchHandler @ 0054187c */
    Vector2::Rounded();
                    /* catch() { ... } // from try @ 00541870 with catch @ 0054187c */
    uVar4 = *(undefined8 *)(pGVar3 + 0x7c);
                    /* try { // try from 00541880 to 00641883 has its CatchHandler @ 00541888 */
                    /* catch() { ... } // from try @ 00541880 with catch @ 00541888 */
                    /* try { // try from 0054188c to 006418b7 has its CatchHandler @ 0054188c
                       catch() { ... } // from try @ 0054188c with catch @ 0054188c
                       catch() { ... } // from try @ 005419c8 with catch @ 0054188c
                       catch() { ... } // from try @ 00541d10 with catch @ 0054188c */
    local_48 = (float)local_60;
    fStack_44 = (float)((ulong)local_60 >> 0x20);
    local_40 = (float)uVar4;
    fStack_3c = (float)((ulong)uVar4 >> 0x20);
    GUIView::SetFrame(pGVar3,(Rectangle *)&local_48);
    pGVar3 = *(GUIView **)(this + 0x158);
    fStack_3c = *(float *)(pGVar3 + 0x80);
    local_48 = *(float *)(*(long *)(this + 0x100) + 0x74) +
               *(float *)(*(long *)(this + 0x100) + 0x7c);
                    /* try { // try from 005418b8 to 006418cb has its CatchHandler @ 00541c60 */
    fStack_44 = (float)*(undefined8 *)(pGVar3 + 0x78);
    local_40 = (float)((ulong)*(undefined8 *)(pGVar3 + 0x78) >> 0x20);
    GUIView::SetFrame(pGVar3,(Rectangle *)&local_48);
  }
  UpdateContentLayout(this);
                    /* try { // try from 005418cc to 006418df has its CatchHandler @ 00541bf0 */
  AddAnimations(SUB81(this,0));
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00541900 to 00641913 has its CatchHandler @ 00541bec */
    __stack_chk_fail();
  }
                    /* try { // try from 005418f8 to 006418ff has its CatchHandler @ 00541c64 */
  return;
}


