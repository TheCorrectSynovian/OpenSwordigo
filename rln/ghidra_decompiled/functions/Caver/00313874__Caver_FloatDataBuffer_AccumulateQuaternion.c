/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00313874
 * Function: Caver::FloatDataBuffer::AccumulateQuaternion
 * Signature: undefined __thiscall AccumulateQuaternion(FloatDataBuffer * this, FloatDataBuffer * param_1, float param_2, uint param_3, uint param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FloatDataBuffer::AccumulateQuaternion(Caver::FloatDataBuffer const&, float, unsigned int,
   unsigned int) */

void __thiscall
Caver::FloatDataBuffer::AccumulateQuaternion
          (FloatDataBuffer *this,FloatDataBuffer *param_1,float param_2,uint param_3,uint param_4)

{
  float *pfVar1;
  float *pfVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  lVar3 = *(long *)(this + 8);
  uVar4 = (lVar3 + (ulong)*(uint *)this * 4) - 0x10;
  if (lVar3 + (ulong)param_3 * 4 <= uVar4) {
    lVar5 = *(long *)(param_1 + 8);
    lVar6 = (ulong)param_3 << 2;
    do {
      pfVar1 = (float *)(lVar5 + lVar6);
      pfVar2 = (float *)(lVar3 + lVar6);
      fVar10 = *pfVar2;
      fVar8 = pfVar2[1];
      fVar11 = *pfVar1;
      fVar9 = pfVar2[2];
      fVar7 = pfVar2[3];
      if (fVar10 * fVar11 + fVar8 * pfVar1[1] + fVar9 * pfVar1[2] + fVar7 * pfVar1[3] < 0.0) {
        fVar10 = -fVar10;
        fVar8 = -fVar8;
        fVar9 = -fVar9;
        fVar7 = -fVar7;
        *pfVar2 = fVar10;
        pfVar2[1] = fVar8;
        pfVar2[2] = fVar9;
        pfVar2[3] = fVar7;
        fVar11 = *(float *)(lVar5 + lVar6);
      }
      *pfVar2 = fVar10 + fVar11 * param_2;
      lVar6 = lVar6 + (ulong)param_4 * 4;
      pfVar2[1] = fVar8 + pfVar1[1] * param_2;
      pfVar2[2] = fVar9 + pfVar1[2] * param_2;
      pfVar2[3] = fVar7 + pfVar1[3] * param_2;
    } while ((ulong)(lVar3 + lVar6) <= uVar4);
  }
  return;
}


