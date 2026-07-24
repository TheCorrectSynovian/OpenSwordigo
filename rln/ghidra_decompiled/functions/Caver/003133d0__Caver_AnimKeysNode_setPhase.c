/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003133d0
 * Function: Caver::AnimKeysNode::setPhase
 * Signature: undefined __thiscall setPhase(AnimKeysNode * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AnimKeysNode::setPhase(float) */

void __thiscall Caver::AnimKeysNode::setPhase(AnimKeysNode *this,float param_1)

{
  *(float *)(this + 0xc) = *(float *)(this + 0x28) * param_1;
  return;
}


