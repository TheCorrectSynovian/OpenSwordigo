/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00312eb8
 * Function: Caver::AnimKeysNode::UpdateFrameBlend
 * Signature: undefined __thiscall UpdateFrameBlend(AnimKeysNode * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AnimKeysNode::UpdateFrameBlend() */

undefined8 __thiscall Caver::AnimKeysNode::UpdateFrameBlend(AnimKeysNode *this)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = *(float *)(this + 0x28);
  fVar2 = *(float *)(this + 0xc);
  if (fVar3 < *(float *)(this + 0xc)) {
    *(float *)(this + 0xc) = fVar3;
    fVar2 = fVar3;
  }
  fVar2 = fVar2 * *(float *)(*(long *)(this + 0x18) + 0xc);
  iVar1 = (int)fVar2;
  fVar2 = fVar2 - (float)iVar1;
  if ((*(int *)(this + 0x10) == iVar1) && (ABS(fVar2 - *(float *)(this + 0x14)) <= DAT_00683734)) {
    return 0;
  }
  *(int *)(this + 0x10) = iVar1;
  *(float *)(this + 0x14) = fVar2;
  return 1;
}


