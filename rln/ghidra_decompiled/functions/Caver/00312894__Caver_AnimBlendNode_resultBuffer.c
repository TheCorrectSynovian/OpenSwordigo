/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00312894
 * Function: Caver::AnimBlendNode::resultBuffer
 * Signature: undefined __thiscall resultBuffer(AnimBlendNode * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AnimBlendNode::resultBuffer() */

undefined8 __thiscall Caver::AnimBlendNode::resultBuffer(AnimBlendNode *this)

{
  long *plVar1;
  undefined8 uVar2;
  
  if (*(float *)(this + 0x20) <= DAT_00683730) {
    plVar1 = *(long **)(this + 0x10);
  }
  else {
    plVar1 = *(long **)(this + 0x18);
  }
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003128b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x28))();
    return uVar2;
  }
  return 0;
}


