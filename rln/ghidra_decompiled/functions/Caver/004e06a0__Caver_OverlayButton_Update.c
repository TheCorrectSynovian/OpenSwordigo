/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004e06a0
 * Function: Caver::OverlayButton::Update
 * Signature: undefined __thiscall Update(OverlayButton * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OverlayButton::Update(float) */

void __thiscall Caver::OverlayButton::Update(OverlayButton *this,float param_1)

{
  double dVar1;
  double dVar2;
  float fVar3;
  
  GUIView::Update((GUIView *)this,param_1);
  if ((0.0 < *(float *)(this + 0x1dc)) &&
     (fVar3 = *(float *)(this + 0x1dc) - param_1, *(float *)(this + 0x1dc) = fVar3, fVar3 < 0.0)) {
    *(undefined4 *)(this + 0x1dc) = 0;
  }
  dVar2 = DAT_00688608;
  dVar1 = DAT_00684790;
  fVar3 = *(float *)(this + 0x1d0);
  *(float *)(this + 0x1d0) = fVar3 + param_1;
  fVar3 = sinf((float)((double)(fVar3 + param_1) * dVar1 * 1.25 + dVar2));
  *(float *)(this + 0x1d4) = fVar3 * 0.5 + 0.5;
  return;
}


