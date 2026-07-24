/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059b9b8
 * Function: Caver::GUIScrollView::AdjustContentOffset
 * Signature: undefined __thiscall AdjustContentOffset(GUIScrollView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIScrollView::AdjustContentOffset() */

void __thiscall Caver::GUIScrollView::AdjustContentOffset(GUIScrollView *this)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(this + 0xf8);
  fVar2 = *(float *)(this + 0x90);
  if (fVar1 <= fVar2) {
    if (this[0x161] == (GUIScrollView)0x0) {
      fVar1 = (float)(int)((fVar2 + *(float *)(this + 0x88)) - (fVar1 + *(float *)(this + 0xf0)));
      fVar2 = fVar1 - *(float *)(this + 0x134);
    }
    else {
      fVar1 = (float)(int)((fVar2 * 0.5 + *(float *)(this + 0x88)) -
                          (fVar1 * 0.5 + *(float *)(this + 0xf0)));
      fVar2 = fVar1 - *(float *)(this + 0x134);
    }
    if (DAT_00683944 < ABS(fVar2)) {
LAB_0059bab0:
      *(undefined4 *)(this + 0x150) = 0;
    }
LAB_0059bab4:
    this[0x130] = (GUIScrollView)0x1;
    *(float *)(this + 0x134) = fVar1;
  }
  else {
    fVar2 = (fVar2 + *(float *)(this + 0x88)) - (fVar1 + *(float *)(this + 0xf0));
    fVar1 = *(float *)(this + 0x88) - *(float *)(this + 0xf0);
    if (*(float *)(this + 300) < fVar2) {
      if (DAT_00683944 < ABS(fVar2 - *(float *)(this + 0x134))) {
        *(undefined4 *)(this + 0x150) = 0;
      }
      this[0x130] = (GUIScrollView)0x1;
      *(float *)(this + 0x134) = fVar2;
    }
    if (fVar1 < *(float *)(this + 300)) {
      if (DAT_00683944 < ABS(fVar1 - *(float *)(this + 0x134))) goto LAB_0059bab0;
      goto LAB_0059bab4;
    }
  }
  fVar1 = *(float *)(this + 0xf4);
  fVar2 = *(float *)(this + 0x8c);
  if (fVar1 <= fVar2) {
    if (this[0x161] == (GUIScrollView)0x0) {
                    /* try { // try from 0059bb94 to 0069bb9b has its CatchHandler @ 0059c5f8 */
      fVar2 = *(float *)(this + 0x108);
      fVar1 = (float)(int)(*(float *)(this + 0x84) - *(float *)(this + 0xec));
      goto LAB_0059bba8;
    }
                    /* try { // try from 0059bb28 to 0069bb4f has its CatchHandler @ 0059bea4 */
    fVar1 = (float)(int)((fVar2 * 0.5 + *(float *)(this + 0x84)) -
                        (fVar1 * 0.5 + *(float *)(this + 0xec)));
    if (ABS(fVar1 - *(float *)(this + 0x108)) <= DAT_00683944) goto LAB_0059bbbc;
  }
  else {
    fVar2 = (fVar2 + *(float *)(this + 0x84)) - (fVar1 + *(float *)(this + 0xec));
    fVar1 = *(float *)(this + 0x84) - *(float *)(this + 0xec);
    if (*(float *)(this + 0x100) < fVar2) {
                    /* try { // try from 0059bb54 to 0069bb5b has its CatchHandler @ 0059c8b8 */
      if (DAT_00683944 < ABS(fVar2 - *(float *)(this + 0x108))) {
        *(undefined4 *)(this + 0x124) = 0;
      }
      this[0x104] = (GUIScrollView)0x1;
                    /* try { // try from 0059bb74 to 0069bb7f has its CatchHandler @ 0059c5f8 */
      *(float *)(this + 0x108) = fVar2;
    }
    if (*(float *)(this + 0x100) <= fVar1) {
                    /* try { // try from 0059bafc to 0069bb07 has its CatchHandler @ 0059bf30 */
      return;
    }
                    /* try { // try from 0059bb80 to 0069bb87 has its CatchHandler @ 0059c0ac */
    fVar2 = *(float *)(this + 0x108);
LAB_0059bba8:
                    /* try { // try from 0059bbb4 to 0069bbbb has its CatchHandler @ 0059c05c */
    if (ABS(fVar1 - fVar2) <= DAT_00683944) goto LAB_0059bbbc;
  }
  *(undefined4 *)(this + 0x124) = 0;
LAB_0059bbbc:
                    /* try { // try from 0059bbc0 to 0069bbc7 has its CatchHandler @ 0059bff0 */
  this[0x104] = (GUIScrollView)0x1;
  *(float *)(this + 0x108) = fVar1;
  return;
}


