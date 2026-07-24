/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003129e8
 * Function: Caver::AnimBlendNode::Evaluate
 * Signature: undefined __thiscall Evaluate(AnimBlendNode * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AnimBlendNode::Evaluate() */

void __thiscall Caver::AnimBlendNode::Evaluate(AnimBlendNode *this)

{
  long *plVar1;
  FloatDataBuffer *this_00;
  FloatDataBuffer *pFVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar3;
  
  plVar1 = *(long **)(this + 0x10);
  if ((plVar1 != (long *)0x0) && (plVar3 = *(long **)(this + 0x18), plVar3 != (long *)0x0)) {
    if (DAT_00683734 <= *(float *)(this + 0x20)) {
      if (*(float *)(this + 0x20) <= DAT_00683730) {
        (**(code **)(*plVar1 + 0x18))();
        (**(code **)(**(long **)(this + 0x18) + 0x18))();
        this_00 = (FloatDataBuffer *)(**(code **)(**(long **)(this + 0x10) + 0x28))();
        if (this_00 == (FloatDataBuffer *)0x0) {
          return;
        }
        FloatDataBuffer::Multiply(this_00,1.0 - *(float *)(this + 0x20));
        pFVar2 = (FloatDataBuffer *)(**(code **)(**(long **)(this + 0x18) + 0x28))();
        FloatDataBuffer::Accumulate(this_00,pFVar2,*(float *)(this + 0x20));
        return;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar3 + 0x18);
    }
    else {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x18);
      plVar3 = plVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x00312a4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(plVar3);
    return;
  }
  return;
}


