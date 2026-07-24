/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0036cb14
 * Function: Caver::EntityControllerComponent::SetMoveDirectionAfterDelay
 * Signature: undefined __thiscall SetMoveDirectionAfterDelay(EntityControllerComponent * this, int param_1, float param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::EntityControllerComponent::SetMoveDirectionAfterDelay(int, float) */

void __thiscall
Caver::EntityControllerComponent::SetMoveDirectionAfterDelay
          (EntityControllerComponent *this,int param_1,float param_2)

{
  float fVar1;
  
  if (*(int *)(this + 300) == param_1) {
    fVar1 = *(float *)(this + 0x134);
    if (param_2 <= *(float *)(this + 0x134)) {
      fVar1 = param_2;
    }
    *(float *)(this + 0x134) = fVar1;
    return;
  }
  *(int *)(this + 300) = param_1;
  *(float *)(this + 0x134) = param_2;
  return;
}


