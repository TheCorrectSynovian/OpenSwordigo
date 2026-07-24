/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059bf58
 * Function: Caver::GUIScrollView::EndDragWithTouch
 * Signature: undefined __cdecl EndDragWithTouch(FWTouch * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::GUIScrollView::EndDragWithTouch(Caver::FWTouch const&) */

void Caver::GUIScrollView::EndDragWithTouch(FWTouch *param_1)

{
  bool bVar1;
  
  bVar1 = *(float *)(param_1 + 0x10c) * *(float *)(param_1 + 0x10c) +
          *(float *)(param_1 + 0x138) * *(float *)(param_1 + 0x138) < DAT_0069705c;
  param_1[0x163] = (FWTouch)0x0;
                    /* catch() { ... } // from try @ 0059b1e0 with catch @ 0059bf80 */
  if ((bVar1) || (_DAT_00683c38 < *(float *)(param_1 + 0x16c))) {
    param_1[0xfc] = (FWTouch)0x0;
    *(undefined4 *)(param_1 + 0x10c) = 0;
    param_1[0x128] = (FWTouch)0x0;
    *(undefined4 *)(param_1 + 0x138) = 0;
  }
  return;
}


