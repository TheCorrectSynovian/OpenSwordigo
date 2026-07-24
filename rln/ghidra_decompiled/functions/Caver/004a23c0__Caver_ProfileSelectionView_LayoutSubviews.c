/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004a23c0
 * Function: Caver::ProfileSelectionView::LayoutSubviews
 * Signature: undefined __thiscall LayoutSubviews(ProfileSelectionView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProfileSelectionView::LayoutSubviews() */

void __thiscall Caver::ProfileSelectionView::LayoutSubviews(ProfileSelectionView *this)

{
  long lVar1;
  float fVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  undefined8 local_40;
  undefined8 uStack_38;
  long local_28;
  
                    /* try { // try from 004a23cc to 005a2407 has its CatchHandler @ 004a2844 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_38 = *(undefined8 *)(this + 0x8c);
  local_40 = *(undefined8 *)(this + 0x84);
  GUIView::SetFrame(*(GUIView **)(this + 0x100),(Rectangle *)&local_40);
  fVar2 = DAT_00683944;
  lVar3 = *(long *)(this + 0x100);
  fVar4 = -*(float *)(lVar3 + 0xec);
                    /* try { // try from 004a2428 to 005a243b has its CatchHandler @ 004a2840 */
  fVar5 = -((*(float *)(lVar3 + 0xf0) + *(float *)(lVar3 + 0xf8)) - *(float *)(lVar3 + 0x90));
  if (DAT_00683944 < ABS(fVar4 - *(float *)(lVar3 + 0x108))) {
    *(undefined4 *)(lVar3 + 0x124) = 0;
  }
  *(undefined1 *)(lVar3 + 0x104) = 1;
  *(float *)(lVar3 + 0x108) = fVar4;
                    /* try { // try from 004a244c to 005a2457 has its CatchHandler @ 004a2808 */
  if (fVar2 < ABS(fVar5 - *(float *)(lVar3 + 0x134))) {
    *(undefined4 *)(lVar3 + 0x150) = 0;
  }
  *(undefined1 *)(lVar3 + 0x130) = 1;
  *(float *)(lVar3 + 0x134) = fVar5;
  *(float *)(lVar3 + 0x100) = fVar4;
  *(float *)(lVar3 + 300) = fVar5;
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 004a2478 to 005a24b3 has its CatchHandler @ 004a27ac */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


