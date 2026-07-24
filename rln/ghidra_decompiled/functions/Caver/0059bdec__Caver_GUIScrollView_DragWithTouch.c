/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059bdec
 * Function: Caver::GUIScrollView::DragWithTouch
 * Signature: undefined __thiscall DragWithTouch(GUIScrollView * this, FWTouch * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIScrollView::DragWithTouch(Caver::FWTouch const&) */

void __thiscall Caver::GUIScrollView::DragWithTouch(GUIScrollView *this,FWTouch *param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_30;
  float fStack_2c;
  
  lVar2 = tpidr_el0;
  lVar3 = *(long *)(lVar2 + 0x28);
  FWTouch::LocationInView(param_1,(GUIView *)this);
  uVar4 = *(undefined8 *)(this + 0x188);
  *(undefined8 *)(this + 0x180) = uVar4;
  fVar5 = (fStack_2c - *(float *)(this + 0x17c)) + *(float *)(this + 0x174);
  if (*(float *)(this + 0x90) < *(float *)(this + 0xf8)) {
    fVar9 = (*(float *)(this + 0x90) + *(float *)(this + 0x88)) -
            (*(float *)(this + 0xf8) + *(float *)(this + 0xf0));
    fVar7 = *(float *)(this + 0x88) - *(float *)(this + 0xf0);
    if (fVar5 < fVar9) {
      fVar5 = fVar9 + (fVar9 - fVar5) * DAT_00689df0;
    }
    if (fVar7 < fVar5) {
                    /* catch() { ... } // from try @ 0059bcc8 with catch @ 0059bea0 */
      fVar5 = fVar7 + (fVar5 - fVar7) * DAT_00683484;
    }
  }
                    /* catch() { ... } // from try @ 0059bb28 with catch @ 0059bea4 */
                    /* catch() { ... } // from try @ 0059b20c with catch @ 0059bea8 */
                    /* catch() { ... } // from try @ 0059b370 with catch @ 0059beac */
  fVar7 = (local_30 - *(float *)(this + 0x178)) + *(float *)(this + 0x170);
  if (*(float *)(this + 0x8c) < *(float *)(this + 0xf4)) {
    fVar8 = (*(float *)(this + 0x8c) + *(float *)(this + 0x84)) -
            (*(float *)(this + 0xf4) + *(float *)(this + 0xec));
                    /* try { // try from 0059bed0 to 0069bfcb has its CatchHandler @ 0059c954 */
    fVar9 = *(float *)(this + 0x84) - *(float *)(this + 0xec);
    if (fVar7 < fVar8) {
                    /* catch() { ... } // from try @ 0059b3c8 with catch @ 0059bedc */
                    /* catch() { ... } // from try @ 0059bc9c with catch @ 0059bee0 */
      fVar7 = fVar8 + (fVar8 - fVar7) * DAT_00689df0;
    }
    if (fVar9 < fVar7) {
      fVar7 = fVar9 + (fVar7 - fVar9) * DAT_00683484;
    }
  }
  uVar1 = *(undefined4 *)(this + 0x194);
  *(float *)(this + 0x188) = fVar7;
  *(float *)(this + 0x18c) = fVar5;
  *(undefined4 *)(this + 0x194) = 0;
  *(undefined4 *)(this + 400) = uVar1;
  uVar6 = *(undefined8 *)(this + 0x164);
                    /* catch() { ... } // from try @ 0059bafc with catch @ 0059bf30 */
  *(ulong *)(this + 0x164) =
       CONCAT44((fVar5 - (float)((ulong)uVar4 >> 0x20)) + (float)((ulong)uVar6 >> 0x20),
                (fVar7 - (float)uVar4) + (float)uVar6);
  if (*(long *)(lVar2 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


