/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059ccd8
 * Function: Caver::GUISlider::Update
 * Signature: undefined __thiscall Update(GUISlider * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUISlider::Update(float) */

void __thiscall Caver::GUISlider::Update(GUISlider *this,float param_1)

{
  float fVar1;
  
  if (DAT_00683734 < ABS(*(float *)(this + 300))) {
    fVar1 = *(float *)(this + 300) * param_1;
    this[0x130] = (GUISlider)0x1;
    if (ABS(fVar1) <= ABS(*(float *)(this + 0x128) - *(float *)(this + 0x124))) {
                    /* catch() { ... } // from try @ 0059cbd8 with catch @ 0059cd30 */
      *(float *)(this + 0x128) = fVar1 + *(float *)(this + 0x128);
    }
    else {
      *(float *)(this + 0x128) = *(float *)(this + 0x124);
      *(undefined4 *)(this + 300) = 0;
    }
                    /* catch() { ... } // from try @ 0059cbbc with catch @ 0059cd34 */
    this[0x160] = (GUISlider)0x1;
    GUIView::Update((GUIView *)this,param_1);
    return;
  }
  this[0x130] = (GUISlider)0x0;
  GUIView::Update((GUIView *)this,param_1);
  return;
}


