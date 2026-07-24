/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0035e9ac
 * Function: Caver::CharControllerComponent::StopMovingToDirection
 * Signature: undefined __thiscall StopMovingToDirection(CharControllerComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CharControllerComponent::StopMovingToDirection(int) */

void __thiscall
Caver::CharControllerComponent::StopMovingToDirection(CharControllerComponent *this,int param_1)

{
  if (*(int *)(this + 0x230) == param_1) {
    this[0x234] = (CharControllerComponent)0x0;
    *(undefined4 *)(this + 0x240) = 0;
    *(undefined4 *)(this + 0x230) = 0;
  }
  return;
}


