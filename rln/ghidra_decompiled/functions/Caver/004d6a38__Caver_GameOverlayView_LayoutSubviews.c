/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004d6a38
 * Function: Caver::GameOverlayView::LayoutSubviews
 * Signature: undefined __thiscall LayoutSubviews(GameOverlayView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::GameOverlayView::LayoutSubviews() */

void __thiscall Caver::GameOverlayView::LayoutSubviews(GameOverlayView *this)

{
  long lVar1;
  float fVar2;
  GUIView *pGVar3;
  string *psVar4;
  long lVar5;
  long *plVar6;
  GameOverlayView *pGVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  undefined8 local_f8;
  undefined8 uStack_f0;
  long local_e8;
  long lStack_e0;
  long local_d8;
  long lStack_d0;
  long local_c8;
  long lStack_c0;
  long local_b8;
  long lStack_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80 [2];
  
  lVar1 = tpidr_el0;
  local_80[1] = *(long *)(lVar1 + 0x28);
  GUIView::safeBounds();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004d6894 with catch @ 004d6a7c
                        */
                    /* try { // try from 004d6a80 to 005d6a87 has its CatchHandler @ 004d6a90 */
  *(long **)(this + 0x260) = uStack_f0;
  *(long *)(this + 600) = local_f8;
                    /* try { // try from 004d6a88 to 005d6a93 has its CatchHandler @ 004d6840 */
  GUIView::controlBounds();
  fVar11 = _DAT_00690d1c;
  fVar2 = _DAT_00688c9c;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004d6a80 with catch @ 004d6a90
                        */
                    /* catch() { ... } // from try @ 004d6b54 with catch @ 004d6a94
                       catch() { ... } // from try @ 004d6c5c with catch @ 004d6a94 */
  *(long **)(this + 0x270) = uStack_f0;
  *(long *)(this + 0x268) = local_f8;
  fVar11 = *(float *)(this + 0x138) * fVar11;
  fVar12 = *(float *)(this + 0x138) * fVar2;
  local_f8 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0x268) >> 0x20) +
                      (float)((ulong)DAT_00692400 >> 0x20),
                      (float)*(undefined8 *)(this + 0x268) + (float)DAT_00692400);
  uStack_f0 = (long *)CONCAT44(fVar11,fVar12);
  GUIView::SetFrame(*(GUIView **)(this + 0x140),(Rectangle *)&local_f8);
  uStack_f0 = (long *)CONCAT44(fVar11,fVar12);
  local_f8 = CONCAT44(*(float *)(this + 0x26c) + 10.0,
                      *(float *)(*(long *)(this + 0x140) + 0x74) +
                      *(float *)(*(long *)(this + 0x140) + 0x7c) + 10.0);
  GUIView::SetFrame(*(GUIView **)(this + 0x150),(Rectangle *)&local_f8);
                    /* try { // try from 004d6b24 to 005d6b27 has its CatchHandler @ 004d6bf0 */
  local_f8 = CONCAT44(*(float *)(this + 0x26c) + 20.0,
                      (*(float *)(this + 0x268) + *(float *)(this + 0x270) + -20.0) - fVar12);
  uStack_f0 = (long *)CONCAT44(fVar11,fVar12);
  GUIView::SetFrame(*(GUIView **)(this + 0x160),(Rectangle *)&local_f8);
                    /* try { // try from 004d6b4c to 005d6b53 has its CatchHandler @ 004d6c50 */
                    /* try { // try from 004d6b54 to 005d6c17 has its CatchHandler @ 004d6a94 */
  uStack_f0 = (long *)CONCAT44(fVar11,fVar12);
  local_f8 = CONCAT44(*(float *)(this + 0x26c) + 10.0,
                      (*(float *)(*(long *)(this + 0x160) + 0x74) + -10.0) - fVar12);
  GUIView::SetFrame(*(GUIView **)(this + 0x170),(Rectangle *)&local_f8);
  local_f8 = CONCAT44(*(float *)(this + 0x26c) + DAT_00692418,
                      ((*(float *)(this + 0x268) + *(float *)(this + 0x270)) - fVar12) + 10.0);
  uStack_f0 = (long *)CONCAT44(fVar11,fVar12);
  GUIView::SetFrame(*(GUIView **)(this + 400),(Rectangle *)&local_f8);
  pGVar3 = *(GUIView **)(this + 0x1c8);
  if (pGVar3 != (GUIView *)0x0) {
    uStack_f0 = *(long **)(pGVar3 + 0x7c);
    local_f8 = CONCAT44(((float)((ulong)*(undefined8 *)(this + 600) >> 0x20) +
                         (float)((ulong)*(undefined8 *)(this + 0x260) >> 0x20) +
                        (float)((ulong)DAT_00692408 >> 0x20)) - (float)((ulong)uStack_f0 >> 0x20),
                        ((float)*(undefined8 *)(this + 600) + (float)*(undefined8 *)(this + 0x260) +
                        (float)DAT_00692408) - SUB84(uStack_f0,0));
    GUIView::SetFrame(pGVar3,(Rectangle *)&local_f8);
  }
  pGVar3 = *(GUIView **)(this + 0x1b8);
  if (pGVar3 != (GUIView *)0x0) {
                    /* catch() { ... } // from try @ 004d6b24 with catch @ 004d6bf0 */
    uStack_f0 = *(long **)(pGVar3 + 0x7c);
    local_f8 = CONCAT44((*(float *)(this + 0x25c) + *(float *)(this + 0x264) + -17.0) -
                        *(float *)(pGVar3 + 0x80),0x41600000);
                    /* try { // try from 004d6c18 to 005d6c1b has its CatchHandler @ 004d6c4c */
    GUIView::SetFrame(pGVar3,(Rectangle *)&local_f8);
  }
  pGVar3 = *(GUIView **)(this + 0x1d8);
  if (pGVar3 != (GUIView *)0x0) {
    uStack_f0 = *(long **)(pGVar3 + 0x7c);
                    /* catch() { ... } // from try @ 004d6c18 with catch @ 004d6c4c */
                    /* catch() { ... } // from try @ 004d6b4c with catch @ 004d6c50 */
                    /* try { // try from 004d6c54 to 005d6c5b has its CatchHandler @ 004d6c64 */
    local_f8 = CONCAT44(*(float *)(this + 0x26c) + 10.0,
                        (int)((*(float *)(this + 0x268) + *(float *)(this + 0x270) * 0.5) -
                             SUB84(uStack_f0,0) * 0.5));
                    /* try { // try from 004d6c5c to 005d6c67 has its CatchHandler @ 004d6a94 */
    GUIView::SetFrame(pGVar3,(Rectangle *)&local_f8);
  }
                    /* catch() { ... } // from try @ 004d6c54 with catch @ 004d6c64 */
  pGVar3 = *(GUIView **)(this + 0x1e8);
  uStack_f0 = *(long **)(pGVar3 + 0x7c);
  local_f8 = CONCAT44((*(float *)(this + 0x25c) + *(float *)(this + 0x264) + -5.0) -
                      *(float *)(pGVar3 + 0x80),
                      (int)((*(float *)(this + 600) + *(float *)(this + 0x260) * 0.5) -
                           *(float *)(pGVar3 + 0x7c) * 0.5));
  GUIView::SetFrame(pGVar3,(Rectangle *)&local_f8);
  pGVar3 = *(GUIView **)(this + 0x208);
  uStack_f0 = *(long **)(pGVar3 + 0x7c);
  local_f8 = CONCAT44((*(float *)(this + 0x25c) + *(float *)(this + 0x264) + DAT_00689378) -
                      *(float *)(pGVar3 + 0x80),
                      (int)((*(float *)(this + 600) + *(float *)(this + 0x260) * 0.5) -
                           *(float *)(pGVar3 + 0x7c) * 0.5));
  GUIView::SetFrame(pGVar3,(Rectangle *)&local_f8);
  local_f8 = CONCAT44(*(float *)(this + 0x25c) + fVar2,
                      (int)(*(float *)(this + 600) + *(float *)(this + 0x260) * 0.5 + DAT_0069241c))
  ;
  uStack_f0 = (long *)DAT_00692410;
  GUIView::SetFrame(*(GUIView **)(this + 0x218),(Rectangle *)&local_f8);
                    /* catch() { ... } // from try @ 004d6d6c with catch @ 004d6d58 */
  pGVar3 = *(GUIView **)(this + 0x248);
                    /* try { // try from 004d6d68 to 005d6d6b has its CatchHandler @ 004d6d7c */
                    /* try { // try from 004d6d6c to 005d6d8f has its CatchHandler @ 004d6d58 */
                    /* catch() { ... } // from try @ 004d6d68 with catch @ 004d6d7c */
  uStack_f0 = *(long **)(pGVar3 + 0x7c);
  local_f8 = CONCAT44((*(float *)(this + 0x25c) + *(float *)(this + 0x264) + DAT_00692420) -
                      *(float *)(pGVar3 + 0x80),*(float *)(this + 600) + 5.0);
  GUIView::SetFrame(pGVar3,(Rectangle *)&local_f8);
  if (*(GUIView **)(this + 0x288) != (GUIView *)0x0) {
    GUIView::SetFrame(*(GUIView **)(this + 0x288),(Rectangle *)(this + 0x84));
  }
  psVar4 = *(string **)(this + 0x278);
  if (psVar4 != (string *)0x0) {
    pGVar7 = *(GameOverlayView **)(this + 0x120);
    if (this + 0x110 != pGVar7) {
      while( true ) {
        pGVar3 = *(GUIView **)(pGVar7 + 0x28);
        GUIViewLayout::SubviewWithIdentifier(psVar4);
        SetSubviewLayout(this,pGVar3,(shared_ptr *)&local_f8);
        plVar6 = uStack_f0;
        if ((uStack_f0 != (long *)0x0) &&
           (lVar5 = uStack_f0[1], uStack_f0[1] = lVar5 + -1, lVar5 + -1 == 0)) {
          (**(code **)(*uStack_f0 + 0x10))(uStack_f0);
          lVar5 = plVar6[2];
          plVar6[2] = lVar5 + -1;
          if (lVar5 + -1 == 0) {
            (**(code **)(*plVar6 + 0x18))(plVar6);
          }
        }
        pGVar7 = (GameOverlayView *)FUN_0064c640(pGVar7);
        if (this + 0x110 == pGVar7) break;
        psVar4 = *(string **)(this + 0x278);
      }
    }
  }
  pGVar3 = *(GUIView **)(this + 0x1e8);
  uStack_f0 = *(long **)(pGVar3 + 0x7c);
  local_f8 = CONCAT44(*(undefined4 *)(pGVar3 + 0x78),
                      (int)((*(float *)(this + 600) + *(float *)(this + 0x260) * 0.5) -
                           *(float *)(pGVar3 + 0x7c) * 0.5));
  GUIView::SetFrame(pGVar3,(Rectangle *)&local_f8);
  pGVar3 = *(GUIView **)(this + 0x208);
  uStack_f0 = *(long **)(pGVar3 + 0x7c);
  local_f8 = CONCAT44(*(undefined4 *)(pGVar3 + 0x78),
                      (int)((*(float *)(this + 600) + *(float *)(this + 0x260) * 0.5) -
                           *(float *)(pGVar3 + 0x7c) * 0.5));
  GUIView::SetFrame(pGVar3,(Rectangle *)&local_f8);
  pGVar3 = *(GUIView **)(this + 0x218);
  uStack_f0 = *(long **)(pGVar3 + 0x7c);
  local_f8 = CONCAT44(*(undefined4 *)(pGVar3 + 0x78),
                      (int)((*(float *)(this + 600) + *(float *)(this + 0x260) * 0.5) -
                           *(float *)(pGVar3 + 0x7c) * 0.5));
  GUIView::SetFrame(pGVar3,(Rectangle *)&local_f8);
  GUIView::SetFrame(*(GUIView **)(this + 0x180),(Rectangle *)(*(long *)(this + 0x170) + 0x74));
  local_f8 = *(long *)(this + 0x140);
  uStack_f0 = *(long **)(this + 0x148);
  if (uStack_f0 != (long *)0x0) {
    *(long *)((long)uStack_f0 + 8) = *(long *)((long)uStack_f0 + 8) + 1;
  }
  local_e8 = *(long *)(this + 0x150);
  lStack_e0 = *(long *)(this + 0x158);
  if (lStack_e0 != 0) {
    *(long *)(lStack_e0 + 8) = *(long *)(lStack_e0 + 8) + 1;
  }
  local_d8 = *(long *)(this + 0x160);
  lStack_d0 = *(long *)(this + 0x168);
  if (lStack_d0 != 0) {
    *(long *)(lStack_d0 + 8) = *(long *)(lStack_d0 + 8) + 1;
  }
  local_c8 = *(long *)(this + 0x170);
  lStack_c0 = *(long *)(this + 0x178);
  if (lStack_c0 != 0) {
    *(long *)(lStack_c0 + 8) = *(long *)(lStack_c0 + 8) + 1;
  }
  local_b8 = *(long *)(this + 0x180);
  lStack_b0 = *(long *)(this + 0x188);
  if (lStack_b0 != 0) {
    *(long *)(lStack_b0 + 8) = *(long *)(lStack_b0 + 8) + 1;
  }
  local_a8 = *(long *)(this + 400);
  local_a0 = *(long *)(this + 0x198);
  if (local_a0 != 0) {
    *(long *)(local_a0 + 8) = *(long *)(local_a0 + 8) + 1;
  }
  local_98 = *(long *)(this + 0x1b8);
  local_90 = *(long *)(this + 0x1c0);
  if (local_90 != 0) {
    *(long *)(local_90 + 8) = *(long *)(local_90 + 8) + 1;
  }
  local_88 = *(long *)(this + 0x1c8);
  local_80[0] = *(long *)(this + 0x1d0);
  if (local_80[0] != 0) {
    *(long *)(local_80[0] + 8) = *(long *)(local_80[0] + 8) + 1;
  }
  uVar9 = NEON_fmov(0xc1a00000,4);
  *(undefined8 *)(local_f8 + 0x94) = uVar9;
  *(ulong *)(local_f8 + 0x9c) =
       CONCAT44((float)((ulong)*(undefined8 *)(local_f8 + 0x8c) >> 0x20) + 40.0,
                (float)*(undefined8 *)(local_f8 + 0x8c) + 40.0);
  *(undefined8 *)(local_e8 + 0x94) = uVar9;
  lVar8 = 0;
  *(ulong *)(local_e8 + 0x9c) =
       CONCAT44((float)((ulong)*(undefined8 *)(local_e8 + 0x8c) >> 0x20) + 40.0,
                (float)*(undefined8 *)(local_e8 + 0x8c) + 40.0);
  *(undefined8 *)(local_d8 + 0x94) = uVar9;
  *(ulong *)(local_d8 + 0x9c) =
       CONCAT44((float)((ulong)*(undefined8 *)(local_d8 + 0x8c) >> 0x20) + 40.0,
                (float)*(undefined8 *)(local_d8 + 0x8c) + 40.0);
  *(undefined8 *)(local_c8 + 0x94) = uVar9;
  *(ulong *)(local_c8 + 0x9c) =
       CONCAT44((float)((ulong)*(undefined8 *)(local_c8 + 0x8c) >> 0x20) + 40.0,
                (float)*(undefined8 *)(local_c8 + 0x8c) + 40.0);
  *(undefined8 *)(local_b8 + 0x94) = uVar9;
  *(ulong *)(local_b8 + 0x9c) =
       CONCAT44((float)((ulong)*(undefined8 *)(local_b8 + 0x8c) >> 0x20) + 40.0,
                (float)*(undefined8 *)(local_b8 + 0x8c) + 40.0);
  *(undefined8 *)(local_a8 + 0x94) = uVar9;
  *(ulong *)(local_a8 + 0x9c) =
       CONCAT44((float)((ulong)*(undefined8 *)(local_a8 + 0x8c) >> 0x20) + 40.0,
                (float)*(undefined8 *)(local_a8 + 0x8c) + 40.0);
  *(undefined8 *)(local_98 + 0x94) = uVar9;
  *(ulong *)(local_98 + 0x9c) =
       CONCAT44((float)((ulong)*(undefined8 *)(local_98 + 0x8c) >> 0x20) + 40.0,
                (float)*(undefined8 *)(local_98 + 0x8c) + 40.0);
  *(undefined8 *)(local_88 + 0x94) = uVar9;
  uVar10 = NEON_fmov(0xc1200000,4);
  *(ulong *)(local_88 + 0x9c) =
       CONCAT44((float)((ulong)*(undefined8 *)(local_88 + 0x8c) >> 0x20) + 40.0,
                (float)*(undefined8 *)(local_88 + 0x8c) + 40.0);
  lVar5 = *(long *)(this + 0x1d8);
  uVar9 = NEON_fmov(0x41a00000,4);
  *(undefined8 *)(lVar5 + 0x94) = uVar10;
  *(ulong *)(lVar5 + 0x9c) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar5 + 0x7c) >> 0x20) +
                (float)((ulong)uVar9 >> 0x20),(float)*(undefined8 *)(lVar5 + 0x7c) + (float)uVar9);
  do {
    plVar6 = *(long **)((long)local_80 + lVar8);
    if ((plVar6 != (long *)0x0) && (lVar5 = plVar6[1], plVar6[1] = lVar5 + -1, lVar5 + -1 == 0)) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      lVar5 = plVar6[2];
      plVar6[2] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
        (**(code **)(*plVar6 + 0x18))(plVar6);
      }
    }
    lVar8 = lVar8 + -0x10;
  } while (lVar8 != -0x80);
  if (*(long *)(lVar1 + 0x28) != local_80[1]) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


