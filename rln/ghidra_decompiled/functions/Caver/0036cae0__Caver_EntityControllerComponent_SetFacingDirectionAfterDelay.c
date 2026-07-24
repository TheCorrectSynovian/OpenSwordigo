/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0036cae0
 * Function: Caver::EntityControllerComponent::SetFacingDirectionAfterDelay
 * Signature: undefined __thiscall SetFacingDirectionAfterDelay(EntityControllerComponent * this, int param_1, float param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::EntityControllerComponent::SetFacingDirectionAfterDelay(int, float) */

void __thiscall
Caver::EntityControllerComponent::SetFacingDirectionAfterDelay
          (EntityControllerComponent *this,int param_1,float param_2)

{
  float fVar1;
  
  if (*(int *)(this + 0x128) == param_1) {
    fVar1 = *(float *)(this + 0x130);
    if (param_2 <= *(float *)(this + 0x130)) {
      fVar1 = param_2;
    }
    *(float *)(this + 0x130) = fVar1;
    return;
  }
  *(int *)(this + 0x128) = param_1;
  *(float *)(this + 0x130) = param_2;
  return;
}


