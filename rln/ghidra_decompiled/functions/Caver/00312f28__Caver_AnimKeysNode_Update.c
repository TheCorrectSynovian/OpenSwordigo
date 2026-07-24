/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00312f28
 * Function: Caver::AnimKeysNode::Update
 * Signature: undefined __thiscall Update(AnimKeysNode * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AnimKeysNode::Update(float) */

undefined8 __thiscall Caver::AnimKeysNode::Update(AnimKeysNode *this,float param_1)

{
  int iVar1;
  AnimKeysNode *pAVar2;
  float fVar3;
  float fVar4;
  
  if (*(long *)(this + 0x18) == 0) {
    return 0;
  }
  if (this[0x38] == (AnimKeysNode)0x0) {
    fVar3 = *(float *)(this + 0xc);
  }
  else {
    pAVar2 = this + 0xc;
    fVar3 = *(float *)(this + 0x30) * param_1 * *(float *)(this + 0x34);
    if (this[0x39] == (AnimKeysNode)0x0) {
      fVar3 = fVar3 + *(float *)pAVar2;
      *(float *)(this + 0xc) = fVar3;
      if (*(float *)(this + 0x28) < fVar3) {
        fVar3 = *(float *)(this + 0x28);
        if (this[0x2c] != (AnimKeysNode)0x0) {
          fVar3 = 0.0;
        }
        *(float *)(this + 0xc) = fVar3;
      }
    }
    else {
      fVar3 = *(float *)pAVar2 - fVar3;
      *(float *)pAVar2 = fVar3;
      if (fVar3 < 0.0) {
        if (this[0x2c] == (AnimKeysNode)0x0) {
          fVar3 = 0.0;
        }
        else {
          fVar3 = *(float *)(this + 0x28);
        }
        *(float *)pAVar2 = fVar3;
      }
    }
  }
  fVar4 = *(float *)(this + 0x28);
  if (fVar4 < fVar3) {
    *(float *)(this + 0xc) = fVar4;
    fVar3 = fVar4;
  }
  fVar3 = fVar3 * *(float *)(*(long *)(this + 0x18) + 0xc);
  iVar1 = (int)fVar3;
  fVar3 = fVar3 - (float)iVar1;
  if ((*(int *)(this + 0x10) == iVar1) && (ABS(fVar3 - *(float *)(this + 0x14)) <= DAT_00683734)) {
    return 0;
  }
  *(int *)(this + 0x10) = iVar1;
  *(float *)(this + 0x14) = fVar3;
  return 1;
}


