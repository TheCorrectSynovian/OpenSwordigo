/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059c6d8
 * Function: Caver::GUIScrollView::HandleMouseEvent
 * Signature: undefined __thiscall HandleMouseEvent(GUIScrollView * this, GUIMouseEvent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::GUIScrollView::HandleMouseEvent(Caver::GUIMouseEvent const&) */

void __thiscall Caver::GUIScrollView::HandleMouseEvent(GUIScrollView *this,GUIMouseEvent *param_1)

{
  float fVar1;
  
  if (*(int *)(param_1 + 0xc) != 4) {
    GUIResponder::HandleMouseEvent((GUIResponder *)this,param_1);
    return;
  }
  if (*(float *)(this + 0x90) < *(float *)(this + 0xf8)) {
    fVar1 = *(float *)(this + 0x134) - *(float *)(param_1 + 0x20) * _DAT_006846d0;
    if (DAT_00683944 < ABS(fVar1 - *(float *)(this + 0x134))) {
      *(undefined4 *)(this + 0x150) = 0;
    }
    this[0x130] = (GUIScrollView)0x1;
    *(float *)(this + 0x134) = fVar1;
    AdjustContentOffset(this);
    return;
  }
  if (*(float *)(this + 0x8c) < *(float *)(this + 0xf4)) {
    fVar1 = *(float *)(this + 0x108) - *(float *)(param_1 + 0x20) * _DAT_006846d0;
    if (DAT_00683944 < ABS(fVar1 - *(float *)(this + 0x108))) {
                    /* catch() { ... } // from try @ 0059aee0 with catch @ 0059c76c */
      *(undefined4 *)(this + 0x124) = 0;
    }
    this[0x104] = (GUIScrollView)0x1;
    *(float *)(this + 0x108) = fVar1;
  }
  AdjustContentOffset(this);
  return;
}


