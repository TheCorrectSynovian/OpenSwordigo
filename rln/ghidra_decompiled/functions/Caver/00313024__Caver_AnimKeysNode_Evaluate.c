/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00313024
 * Function: Caver::AnimKeysNode::Evaluate
 * Signature: undefined __thiscall Evaluate(AnimKeysNode * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AnimKeysNode::Evaluate() */

void __thiscall Caver::AnimKeysNode::Evaluate(AnimKeysNode *this)

{
  int iVar1;
  FloatDataBuffer *pFVar2;
  long lVar3;
  FloatDataBuffer *this_00;
  float fVar4;
  
  if (*(long *)(this + 0x18) != 0) {
    this_00 = (FloatDataBuffer *)(this + 0x40);
    iVar1 = **(int **)(*(long *)(this + 0x18) + 0x10);
    if (*(int *)this_00 != iVar1) {
      FloatDataBuffer::Resize(this_00,iVar1);
    }
    FloatDataBuffer::FillZero(this_00);
    lVar3 = *(long *)(this + 0x18);
    if (*(int *)(lVar3 + 8) == 1) {
      pFVar2 = *(FloatDataBuffer **)(lVar3 + 0x10);
      fVar4 = 1.0;
    }
    else {
      FloatDataBuffer::Accumulate
                (this_00,(FloatDataBuffer *)
                         (*(long *)(lVar3 + 0x10) + (long)*(int *)(this + 0x10) * 0x10),
                 1.0 - *(float *)(this + 0x14));
      fVar4 = *(float *)(this + 0x14);
      pFVar2 = (FloatDataBuffer *)
               (*(long *)(*(long *)(this + 0x18) + 0x10) + (long)*(int *)(this + 0x10) * 0x10 + 0x10
               );
    }
    FloatDataBuffer::Accumulate(this_00,pFVar2,fVar4);
    return;
  }
  return;
}


