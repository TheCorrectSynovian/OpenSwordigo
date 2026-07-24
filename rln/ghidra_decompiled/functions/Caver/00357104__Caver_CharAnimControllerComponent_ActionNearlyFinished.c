/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00357104
 * Function: Caver::CharAnimControllerComponent::ActionNearlyFinished
 * Signature: undefined __thiscall ActionNearlyFinished(CharAnimControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CharAnimControllerComponent::ActionNearlyFinished() */

bool __thiscall
Caver::CharAnimControllerComponent::ActionNearlyFinished(CharAnimControllerComponent *this)

{
  return *(float *)(*(long *)(this + 0x168) + 0x28) * DAT_00687828 <
         *(float *)(*(long *)(this + 0x168) + 0xc);
}


