/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003128cc
 * Function: Caver::AnimBlendNode::Update
 * Signature: undefined __thiscall Update(AnimBlendNode * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AnimBlendNode::Update(float) */

byte __thiscall Caver::AnimBlendNode::Update(AnimBlendNode *this,float param_1)

{
  AnimBlendNode AVar1;
  byte bVar2;
  uint uVar3;
  float fVar4;
  undefined4 in_register_00005004;
  
  if (*(long **)(this + 0x10) == (long *)0x0) {
    return 0;
  }
  if (*(long *)(this + 0x18) == 0) {
    return 0;
  }
  AVar1 = this[0x2d];
  if (AVar1 != (AnimBlendNode)0x0) {
    if (this[0x2c] == (AnimBlendNode)0x0) {
      fVar4 = *(float *)(this + 0x20) + param_1 / *(float *)(this + 0x24);
      *(float *)(this + 0x20) = fVar4;
      if (fVar4 <= 1.0) goto LAB_00312960;
      *(undefined4 *)(this + 0x20) = 0x3f800000;
    }
    else {
      fVar4 = *(float *)(this + 0x28);
      if (fVar4 <= 0.0) {
        fVar4 = *(float *)(this + 0x24);
      }
      fVar4 = *(float *)(this + 0x20) - param_1 / fVar4;
      *(float *)(this + 0x20) = fVar4;
      if (0.0 <= fVar4) goto LAB_00312960;
      *(undefined4 *)(this + 0x20) = 0;
    }
    this[0x2d] = (AnimBlendNode)0x0;
  }
LAB_00312960:
  uVar3 = (**(code **)(**(long **)(this + 0x10) + 0x10))(CONCAT44(in_register_00005004,param_1));
  bVar2 = (**(code **)(**(long **)(this + 0x18) + 0x10))
                    (CONCAT44(in_register_00005004,param_1),*(long **)(this + 0x18));
  if (AVar1 != (AnimBlendNode)0x0) {
    return 1;
  }
  if ((uVar3 & 1) == 0 && *(float *)(this + 0x20) < DAT_00683734) {
    return 0;
  }
  return bVar2 & 1 | *(float *)(this + 0x20) <= DAT_00683730;
}


