/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059bd08
 * Function: Caver::GUIScrollView::AdjustedDragOffset
 * Signature: undefined __cdecl AdjustedDragOffset(Vector2 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIScrollView::AdjustedDragOffset(Caver::Vector2 const&) */

void Caver::GUIScrollView::AdjustedDragOffset(Vector2 *param_1)

{
  float *in_x1;
  float *in_x8;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = *in_x1;
  fVar1 = in_x1[1];
  *in_x8 = fVar2;
  in_x8[1] = fVar1;
                    /* try { // try from 0059bd10 to 0069bd37 has its CatchHandler @ 0059c8a8 */
  if (*(float *)(param_1 + 0x90) < *(float *)(param_1 + 0xf8)) {
    fVar4 = (*(float *)(param_1 + 0x90) + *(float *)(param_1 + 0x88)) -
            (*(float *)(param_1 + 0xf8) + *(float *)(param_1 + 0xf0));
                    /* try { // try from 0059bd38 to 0069becf has its CatchHandler @ 0059ac98 */
    fVar3 = *(float *)(param_1 + 0x88) - *(float *)(param_1 + 0xf0);
    if (fVar1 < fVar4) {
      fVar1 = fVar4 + (fVar4 - fVar1) * DAT_00689df0;
      in_x8[1] = fVar1;
    }
    if (fVar3 < fVar1) {
      in_x8[1] = fVar3 + (fVar1 - fVar3) * DAT_00683484;
    }
  }
  if (*(float *)(param_1 + 0x8c) < *(float *)(param_1 + 0xf4)) {
    fVar3 = (*(float *)(param_1 + 0x8c) + *(float *)(param_1 + 0x84)) -
            (*(float *)(param_1 + 0xf4) + *(float *)(param_1 + 0xec));
    fVar1 = *(float *)(param_1 + 0x84) - *(float *)(param_1 + 0xec);
    if (fVar2 < fVar3) {
      fVar2 = fVar3 + (fVar3 - fVar2) * DAT_00689df0;
      *in_x8 = fVar2;
    }
    if (fVar1 < fVar2) {
      *in_x8 = fVar1 + (fVar2 - fVar1) * DAT_00683484;
    }
  }
  return;
}


