/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00312d5c
 * Function: Caver::AnimBlendNode::timeToFinish
 * Signature: undefined __thiscall timeToFinish(AnimBlendNode * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AnimBlendNode::timeToFinish() const */

float __thiscall Caver::AnimBlendNode::timeToFinish(AnimBlendNode *this)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)(**(code **)(**(long **)(this + 0x10) + 0x38))();
  fVar2 = (float)(**(code **)(**(long **)(this + 0x18) + 0x38))();
  if (fVar2 <= fVar1) {
    fVar1 = fVar2;
  }
  return fVar1;
}


