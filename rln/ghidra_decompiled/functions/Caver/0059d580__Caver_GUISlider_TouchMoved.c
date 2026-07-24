/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059d580
 * Function: Caver::GUISlider::TouchMoved
 * Signature: undefined __thiscall TouchMoved(GUISlider * this, FWTouch * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUISlider::TouchMoved(Caver::FWTouch const&) */

void __thiscall Caver::GUISlider::TouchMoved(GUISlider *this,FWTouch *param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_30;
  
                    /* try { // try from 0059d580 to 0069d6df has its CatchHandler @ 0059d474 */
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if (this[0x161] != (GUISlider)0x0) {
    FWTouch::LocationInView(param_1,(GUIView *)this);
    fVar6 = *(float *)(this + 0x84);
    fVar3 = *(float *)(this + 0x134);
    fVar4 = *(float *)(this + 0x138);
    fVar5 = fVar3 + (((local_30 - *(float *)(this + 0x164)) - fVar6) /
                    ((fVar6 + *(float *)(this + 0x8c)) - fVar6)) * (fVar4 - fVar3);
    fVar6 = fVar3;
    if (fVar3 <= fVar5) {
      fVar6 = fVar5;
    }
    fVar5 = fVar4;
    if (fVar6 <= fVar4) {
      fVar5 = fVar6;
    }
    if (this[0x16c] != (GUISlider)0x0) {
      fVar5 = (float)(int)fVar5;
    }
    if (fVar5 <= fVar4) {
      fVar4 = fVar5;
    }
    if (fVar4 <= fVar3) {
      fVar4 = fVar3;
    }
    *(undefined4 *)(this + 300) = 0;
    *(float *)(this + 0x124) = fVar4;
    *(float *)(this + 0x128) = fVar4;
    this[0x160] = (GUISlider)0x1;
    GUIControl::SendActionsForControlEvent((GUIControl *)this,0x1000,0);
  }
                    /* catch() { ... } // from try @ 0059d558 with catch @ 0059d644 */
                    /* catch() { ... } // from try @ 0059d4f0 with catch @ 0059d648 */
  if (*(long *)(lVar1 + 0x28) == lVar2) {
                    /* catch() { ... } // from try @ 0059d4d4 with catch @ 0059d654 */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0059d510 with catch @ 0059d660 */
  __stack_chk_fail();
}


