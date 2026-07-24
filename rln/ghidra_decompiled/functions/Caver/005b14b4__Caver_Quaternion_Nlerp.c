/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b14b4
 * Function: Caver::Quaternion::Nlerp
 * Signature: undefined __thiscall Nlerp(Quaternion * this, Quaternion * param_1, Quaternion * param_2, float param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Quaternion::Nlerp(Caver::Quaternion const&, Caver::Quaternion const&, float) */

void __thiscall
Caver::Quaternion::Nlerp(Quaternion *this,Quaternion *param_1,Quaternion *param_2,float param_3)

{
  undefined8 *in_x8;
  float fVar1;
  float fVar2;
  float fVar3;
  ulong uVar4;
  float fVar5;
  ulong uVar6;
  float fVar7;
  int iVar8;
  float fVar9;
  ulong uVar10;
  float fVar11;
  
  uVar4 = *(ulong *)param_1;
  uVar6 = *(ulong *)(param_1 + 8);
  fVar1 = (float)*(undefined8 *)this;
  fVar2 = (float)((ulong)*(undefined8 *)this >> 0x20);
  fVar3 = (float)(uVar4 >> 0x20);
  fVar9 = (float)*(undefined8 *)(this + 8);
  fVar11 = (float)((ulong)*(undefined8 *)(this + 8) >> 0x20);
  fVar5 = (float)(uVar6 >> 0x20);
  iVar8 = -(uint)(fVar1 * (float)uVar4 + fVar2 * fVar3 + fVar9 * (float)uVar6 + fVar11 * fVar5 < 0.0
                 );
  uVar10 = CONCAT44(iVar8,iVar8);
  uVar4 = uVar4 ^ (uVar4 ^ CONCAT44(-fVar3,-(float)uVar4)) & uVar10;
  fVar3 = 1.0 - param_3;
                    /* catch() { ... } // from try @ 005b1428 with catch @ 005b150c */
  uVar6 = uVar6 ^ (uVar6 ^ CONCAT44(-fVar5,-(float)uVar6)) & uVar10;
  fVar5 = fVar1 * fVar3 + (float)uVar4 * param_3;
  fVar7 = fVar2 * fVar3 + (float)(uVar4 >> 0x20) * param_3;
  fVar9 = fVar9 * fVar3 + (float)uVar6 * param_3;
  fVar11 = fVar11 * fVar3 + (float)(uVar6 >> 0x20) * param_3;
  fVar2 = fVar5 * fVar5 + fVar7 * fVar7 + fVar9 * fVar9 + fVar11 * fVar11;
  fVar1 = SQRT(fVar2);
  if (NAN(fVar1)) {
    fVar1 = sqrtf(fVar2);
  }
  fVar1 = 1.0 / fVar1;
  *in_x8 = CONCAT44(fVar7 * fVar1,fVar5 * fVar1);
  in_x8[1] = CONCAT44(fVar11 * fVar1,fVar9 * fVar1);
                    /* catch() { ... } // from try @ 005b135c with catch @ 005b157c */
                    /* catch() { ... } // from try @ 005b136c with catch @ 005b1588 */
  return;
}


