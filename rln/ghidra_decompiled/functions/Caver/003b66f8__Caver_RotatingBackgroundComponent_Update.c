/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b66f8
 * Function: Caver::RotatingBackgroundComponent::Update
 * Signature: undefined __thiscall Update(RotatingBackgroundComponent * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::RotatingBackgroundComponent::Update(float) */

void __thiscall
Caver::RotatingBackgroundComponent::Update(RotatingBackgroundComponent *this,float param_1)

{
  *(float *)(this + 0x90) =
       (float)((double)(param_1 * DAT_006883d0) * DAT_00684790 + (double)*(float *)(this + 0x90));
  return;
}


