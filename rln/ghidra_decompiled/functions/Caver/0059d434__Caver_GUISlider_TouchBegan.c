/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059d434
 * Function: Caver::GUISlider::TouchBegan
 * Signature: undefined __thiscall TouchBegan(GUISlider * this, FWTouch * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUISlider::TouchBegan(Caver::FWTouch const&) */

void __thiscall Caver::GUISlider::TouchBegan(GUISlider *this,FWTouch *param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_30;
  float fStack_2c;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0059d450 to 0069d473 has its CatchHandler @ 0059d17c */
  FWTouch::LocationInView(param_1,(GUIView *)this);
  fVar4 = *(float *)(this + 0x84);
                    /* catch() { ... } // from try @ 0059d3e8 with catch @ 0059d470 */
  fVar3 = *(float *)(this + 0x134);
                    /* catch() { ... } // from try @ 0059d580 with catch @ 0059d474
                       catch() { ... } // from try @ 0059d748 with catch @ 0059d474 */
  fVar5 = *(float *)(this + 0x138);
  fVar8 = fVar5 - fVar3;
  fVar7 = (fVar4 + *(float *)(this + 0x8c)) - fVar4;
  fVar6 = fStack_2c - (*(float *)(this + 0x88) + *(float *)(this + 0x90) * 0.5);
  fVar10 = local_30 - (fVar4 + fVar7 * ((*(float *)(this + 0x128) - fVar3) / fVar8));
  *(float *)(this + 0x164) = fVar10;
  *(float *)(this + 0x168) = fVar6;
  if (*(long *)(this + 0x150) == 0) {
    fVar9 = 5.0;
  }
  else {
    fVar9 = *(float *)(*(long *)(this + 0x150) + 0x54) * 0.5;
  }
                    /* try { // try from 0059d4d4 to 0069d4db has its CatchHandler @ 0059d654 */
  this[0x161] = (GUISlider)0x1;
  if (fVar9 <= ABS(fVar10)) {
    fVar9 = fVar3 + fVar8 * ((local_30 - fVar4) / fVar7);
                    /* try { // try from 0059d4f0 to 0069d503 has its CatchHandler @ 0059d648 */
    fVar10 = fVar3;
    if (fVar3 <= fVar9) {
      fVar10 = fVar9;
    }
    fVar9 = fVar5;
    if (fVar10 <= fVar5) {
      fVar9 = fVar10;
    }
    if (this[0x16c] != (GUISlider)0x0) {
      fVar9 = (float)(int)fVar9;
    }
                    /* try { // try from 0059d510 to 0069d51b has its CatchHandler @ 0059d660 */
    if (fVar9 <= fVar5) {
      fVar5 = fVar9;
    }
    if (fVar5 <= fVar3) {
      fVar5 = fVar3;
    }
    *(undefined4 *)(this + 300) = 0;
    this[0x160] = (GUISlider)0x1;
    *(float *)(this + 0x124) = fVar5;
    *(float *)(this + 0x128) = fVar5;
    *(float *)(this + 0x164) = local_30 - (fVar4 + fVar7 * ((fVar5 - fVar3) / fVar8));
    *(float *)(this + 0x168) = fVar6;
                    /* try { // try from 0059d558 to 0069d57f has its CatchHandler @ 0059d644 */
    GUIControl::SendActionsForControlEvent((GUIControl *)this,0x1000,0);
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


