/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031367c
 * Function: Caver::FloatDataBuffer::Accumulate
 * Signature: undefined __thiscall Accumulate(FloatDataBuffer * this, FloatDataBuffer * param_1, float param_2, FloatDataTrack * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FloatDataBuffer::Accumulate(Caver::FloatDataBuffer const&, float, Caver::FloatDataTrack
   const&) */

void __thiscall
Caver::FloatDataBuffer::Accumulate
          (FloatDataBuffer *this,FloatDataBuffer *param_1,float param_2,FloatDataTrack *param_3)

{
  float *pfVar1;
  float *pfVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  uVar3 = (ulong)*(uint *)(param_3 + 4);
  uVar4 = *(uint *)(param_3 + 8);
  if (*(int *)param_3 == 4) {
    lVar7 = *(long *)(this + 8);
    uVar6 = (lVar7 + (ulong)*(uint *)this * 4) - 0x10;
    if (lVar7 + uVar3 * 4 <= uVar6) {
      lVar8 = *(long *)(param_1 + 8);
      lVar9 = uVar3 << 2;
      do {
        pfVar1 = (float *)(lVar8 + lVar9);
        pfVar2 = (float *)(lVar7 + lVar9);
        fVar13 = *pfVar2;
        fVar11 = pfVar2[1];
        fVar14 = *pfVar1;
        fVar12 = pfVar2[2];
        fVar10 = pfVar2[3];
        if (fVar13 * fVar14 + fVar11 * pfVar1[1] + fVar12 * pfVar1[2] + fVar10 * pfVar1[3] < 0.0) {
          fVar13 = -fVar13;
          fVar11 = -fVar11;
          fVar12 = -fVar12;
          fVar10 = -fVar10;
          *pfVar2 = fVar13;
          pfVar2[1] = fVar11;
          pfVar2[2] = fVar12;
          pfVar2[3] = fVar10;
          fVar14 = *(float *)(lVar8 + lVar9);
        }
        *pfVar2 = fVar13 + fVar14 * param_2;
        lVar9 = lVar9 + (ulong)uVar4 * 4;
        pfVar2[1] = fVar11 + pfVar1[1] * param_2;
        pfVar2[2] = fVar12 + pfVar1[2] * param_2;
        pfVar2[3] = fVar10 + pfVar1[3] * param_2;
      } while ((ulong)(lVar7 + lVar9) <= uVar6);
    }
  }
  else if (*(int *)param_3 == 2) {
    uVar6 = *(long *)(this + 8) + uVar3 * 4;
    uVar5 = (*(long *)(this + 8) + (ulong)*(uint *)this * 4) - 0xc;
    if (uVar6 <= uVar5) {
      lVar9 = *(long *)(param_1 + 8);
      lVar7 = 0;
      do {
        pfVar1 = (float *)(lVar9 + uVar3 * 4 + 8 + lVar7);
        pfVar2 = (float *)(uVar6 + lVar7);
        lVar7 = lVar7 + (ulong)uVar4 * 4;
        *pfVar2 = *pfVar2 + pfVar1[-2] * param_2;
        pfVar2[1] = pfVar2[1] + pfVar1[-1] * param_2;
        pfVar2[2] = pfVar2[2] + *pfVar1 * param_2;
      } while (uVar6 + lVar7 <= uVar5);
    }
  }
  return;
}


