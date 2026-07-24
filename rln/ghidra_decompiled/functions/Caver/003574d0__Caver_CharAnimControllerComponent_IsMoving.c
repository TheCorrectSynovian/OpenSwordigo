/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003574d0
 * Function: Caver::CharAnimControllerComponent::IsMoving
 * Signature: undefined __thiscall IsMoving(CharAnimControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CharAnimControllerComponent::IsMoving() */

bool __thiscall Caver::CharAnimControllerComponent::IsMoving(CharAnimControllerComponent *this)

{
  if (*(long *)(this + 0x148) != 0) {
    return *(char *)(*(long *)(this + 0x148) + 0x2c) == '\0';
  }
  return false;
}


