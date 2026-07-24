/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00312acc
 * Function: Caver::AnimBlendNode::Evaluate
 * Signature: undefined __thiscall Evaluate(AnimBlendNode * this, int param_1, FloatDataTrack * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AnimBlendNode::Evaluate(int, Caver::FloatDataTrack const*) */

void __thiscall
Caver::AnimBlendNode::Evaluate(AnimBlendNode *this,int param_1,FloatDataTrack *param_2)

{
  long *plVar1;
  FloatDataBuffer *this_00;
  FloatDataBuffer *pFVar2;
  ulong uVar3;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar4;
  
  uVar3 = (ulong)(uint)param_1;
  plVar1 = *(long **)(this + 0x10);
  if ((plVar1 == (long *)0x0) || (plVar4 = *(long **)(this + 0x18), plVar4 == (long *)0x0)) {
    return;
  }
  if (DAT_00683734 <= *(float *)(this + 0x20)) {
    if (*(float *)(this + 0x20) <= DAT_00683730) {
      (**(code **)(*plVar1 + 0x18))();
      (**(code **)(**(long **)(this + 0x18) + 0x18))();
      this_00 = (FloatDataBuffer *)(**(code **)(**(long **)(this + 0x10) + 0x28))();
      if (this_00 == (FloatDataBuffer *)0x0) {
        return;
      }
      FloatDataBuffer::Multiply(this_00,1.0 - *(float *)(this + 0x20));
      if (param_1 < 1) {
        return;
      }
      do {
        pFVar2 = (FloatDataBuffer *)(**(code **)(**(long **)(this + 0x18) + 0x28))();
        FloatDataBuffer::Accumulate(this_00,pFVar2,*(float *)(this + 0x20),param_2);
        uVar3 = uVar3 - 1;
        param_2 = param_2 + 0xc;
      } while (uVar3 != 0);
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x20);
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x20);
    plVar4 = plVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00312b48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar4,uVar3,param_2);
  return;
}


