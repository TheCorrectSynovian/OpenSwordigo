/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003137e8
 * Function: Caver::FloatDataBuffer::AccumulateVector3
 * Signature: undefined __thiscall AccumulateVector3(FloatDataBuffer * this, FloatDataBuffer * param_1, float param_2, uint param_3, uint param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FloatDataBuffer::AccumulateVector3(Caver::FloatDataBuffer const&, float, unsigned int,
   unsigned int) */

void __thiscall
Caver::FloatDataBuffer::AccumulateVector3
          (FloatDataBuffer *this,FloatDataBuffer *param_1,float param_2,uint param_3,uint param_4)

{
  ulong uVar1;
  float *pfVar2;
  float *pfVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  uVar1 = *(long *)(this + 8) + (ulong)param_3 * 4;
  uVar4 = (*(long *)(this + 8) + (ulong)*(uint *)this * 4) - 0xc;
  if (uVar1 <= uVar4) {
    lVar6 = *(long *)(param_1 + 8);
    lVar5 = 0;
    do {
      pfVar2 = (float *)(lVar6 + (ulong)param_3 * 4 + 4 + lVar5);
      pfVar3 = (float *)(uVar1 + lVar5);
      lVar5 = lVar5 + (ulong)param_4 * 4;
      *pfVar3 = *pfVar3 + pfVar2[-1] * param_2;
      pfVar3[1] = pfVar3[1] + *pfVar2 * param_2;
      pfVar3[2] = pfVar3[2] + pfVar2[1] * param_2;
    } while (uVar1 + lVar5 <= uVar4);
  }
  return;
}


