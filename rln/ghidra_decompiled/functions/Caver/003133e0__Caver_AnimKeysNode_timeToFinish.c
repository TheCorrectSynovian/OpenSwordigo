/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003133e0
 * Function: Caver::AnimKeysNode::timeToFinish
 * Signature: undefined __thiscall timeToFinish(AnimKeysNode * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AnimKeysNode::timeToFinish() const */

float __thiscall Caver::AnimKeysNode::timeToFinish(AnimKeysNode *this)

{
  if (this[0x2c] != (AnimKeysNode)0x0) {
    return 0.0;
  }
  return (*(float *)(this + 0x28) - *(float *)(this + 0xc)) /
         (*(float *)(this + 0x30) * *(float *)(this + 0x34));
}


