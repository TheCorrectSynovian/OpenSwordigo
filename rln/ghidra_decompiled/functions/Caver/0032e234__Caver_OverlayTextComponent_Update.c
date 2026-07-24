/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0032e234
 * Function: Caver::OverlayTextComponent::Update
 * Signature: undefined __thiscall Update(OverlayTextComponent * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OverlayTextComponent::Update(float) */

void __thiscall Caver::OverlayTextComponent::Update(OverlayTextComponent *this,float param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = DAT_006837a4;
  if (this[0xb0] != (OverlayTextComponent)0x0) {
    fVar1 = *(float *)(this + 0xb4) + param_1;
    *(float *)(this + 0xb4) = fVar1;
    if (*(float *)(this + 0xb8) + *(float *)(this + 0xbc) + fVar2 < fVar1) {
      this[0xb0] = (OverlayTextComponent)0x0;
      *(undefined1 *)(*(long *)(this + 0x28) + 0xe8) = 1;
      return;
    }
    fVar2 = 1.0 - (fVar1 - *(float *)(this + 0xb8)) / *(float *)(this + 0xbc);
    if (1.0 < fVar2) {
      fVar2 = 1.0;
    }
    *(float *)(this + 0xac) = fVar2;
    if (fVar2 < 0.0) {
      *(undefined4 *)(this + 0xac) = 0;
    }
  }
  return;
}


