/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003130d4
 * Function: Caver::AnimKeysNode::Evaluate
 * Signature: undefined __thiscall Evaluate(AnimKeysNode * this, int param_1, FloatDataTrack * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AnimKeysNode::Evaluate(int, Caver::FloatDataTrack const*) */

void __thiscall
Caver::AnimKeysNode::Evaluate(AnimKeysNode *this,int param_1,FloatDataTrack *param_2)

{
  int iVar1;
  long lVar2;
  FloatDataBuffer *this_00;
  ulong uVar3;
  
  uVar3 = (ulong)(uint)param_1;
  if (*(long *)(this + 0x18) != 0) {
    this_00 = (FloatDataBuffer *)(this + 0x40);
    iVar1 = **(int **)(*(long *)(this + 0x18) + 0x10);
    if (*(int *)this_00 != iVar1) {
      FloatDataBuffer::Resize(this_00,iVar1);
    }
    FloatDataBuffer::FillZero(this_00);
    lVar2 = *(long *)(this + 0x18);
    if (*(int *)(lVar2 + 8) == 1) {
      if ((0 < param_1) &&
         (FloatDataBuffer::Accumulate(this_00,*(FloatDataBuffer **)(lVar2 + 0x10),1.0,param_2),
         param_1 != 1)) {
        lVar2 = uVar3 - 1;
        do {
          param_2 = param_2 + 0xc;
          FloatDataBuffer::Accumulate
                    (this_00,*(FloatDataBuffer **)(*(long *)(this + 0x18) + 0x10),1.0,param_2);
          lVar2 = lVar2 + -1;
        } while (lVar2 != 0);
      }
    }
    else {
      FloatDataBuffer::Accumulate
                (this_00,(FloatDataBuffer *)
                         (*(long *)(lVar2 + 0x10) + (long)*(int *)(this + 0x10) * 0x10),
                 1.0 - *(float *)(this + 0x14));
      if (0 < param_1) {
        do {
          FloatDataBuffer::Accumulate
                    (this_00,(FloatDataBuffer *)
                             (*(long *)(*(long *)(this + 0x18) + 0x10) +
                              (long)*(int *)(this + 0x10) * 0x10 + 0x10),*(float *)(this + 0x14),
                     param_2);
          uVar3 = uVar3 - 1;
          param_2 = param_2 + 0xc;
        } while (uVar3 != 0);
      }
    }
  }
  return;
}


