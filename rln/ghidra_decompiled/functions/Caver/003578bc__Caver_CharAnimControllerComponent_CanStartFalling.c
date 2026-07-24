/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003578bc
 * Function: Caver::CharAnimControllerComponent::CanStartFalling
 * Signature: undefined __thiscall CanStartFalling(CharAnimControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::CharAnimControllerComponent::CanStartFalling() */

bool __thiscall
Caver::CharAnimControllerComponent::CanStartFalling(CharAnimControllerComponent *this)

{
  float fVar1;
  
  if (*(float *)(*(long *)(this + 0x158) + 0x20) < DAT_00683734) {
    return true;
  }
  if (DAT_00683730 < *(float *)(*(long *)(this + 0x150) + 0x20)) {
    return true;
  }
  fVar1 = (float)(**(code **)(**(long **)(*(long *)(this + 0x150) + 0x10) + 0x38))();
  return fVar1 < _DAT_00684434;
}


