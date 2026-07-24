/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003135b8
 * Function: Caver::FloatDataBuffer::Accumulate
 * Signature: undefined __thiscall Accumulate(FloatDataBuffer * this, FloatDataBuffer * param_1, float param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FloatDataBuffer::Accumulate(Caver::FloatDataBuffer const&, float) */

void __thiscall
Caver::FloatDataBuffer::Accumulate(FloatDataBuffer *this,FloatDataBuffer *param_1,float param_2)

{
  uint uVar1;
  uint uVar2;
  float *pfVar3;
  ulong uVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar2 = *(uint *)this;
  if (uVar2 != 0) {
    pfVar7 = *(float **)(param_1 + 8);
    pfVar6 = *(float **)(this + 8);
    uVar4 = (ulong)(uVar2 - 1);
    if ((uVar4 + 1 < 8) || ((pfVar6 < pfVar7 + uVar4 + 1 && (pfVar7 < pfVar6 + uVar4 + 1)))) {
      uVar4 = 0;
      pfVar5 = pfVar7;
    }
    else {
      uVar4 = (uVar4 + 1) - (ulong)(uVar2 & 7);
      pfVar8 = pfVar6 + 4;
      pfVar5 = pfVar7 + uVar4;
      pfVar6 = pfVar6 + uVar4;
      pfVar7 = pfVar7 + 4;
      uVar9 = uVar4;
      do {
        pfVar3 = pfVar7 + -2;
        uVar10 = *(undefined8 *)(pfVar7 + -4);
        uVar12 = *(undefined8 *)(pfVar7 + 2);
        uVar11 = *(undefined8 *)pfVar7;
        uVar9 = uVar9 - 8;
        pfVar7 = pfVar7 + 8;
        *(ulong *)(pfVar8 + -2) =
             CONCAT44((float)((ulong)*(undefined8 *)(pfVar8 + -2) >> 0x20) +
                      (float)((ulong)*(undefined8 *)pfVar3 >> 0x20) * param_2,
                      (float)*(undefined8 *)(pfVar8 + -2) + (float)*(undefined8 *)pfVar3 * param_2);
        *(ulong *)(pfVar8 + -4) =
             CONCAT44((float)((ulong)*(undefined8 *)(pfVar8 + -4) >> 0x20) +
                      (float)((ulong)uVar10 >> 0x20) * param_2,
                      (float)*(undefined8 *)(pfVar8 + -4) + (float)uVar10 * param_2);
        *(ulong *)(pfVar8 + 2) =
             CONCAT44((float)((ulong)*(undefined8 *)(pfVar8 + 2) >> 0x20) +
                      (float)((ulong)uVar12 >> 0x20) * param_2,
                      (float)*(undefined8 *)(pfVar8 + 2) + (float)uVar12 * param_2);
        *(ulong *)pfVar8 =
             CONCAT44((float)((ulong)*(undefined8 *)pfVar8 >> 0x20) +
                      (float)((ulong)uVar11 >> 0x20) * param_2,
                      (float)*(undefined8 *)pfVar8 + (float)uVar11 * param_2);
        pfVar8 = pfVar8 + 8;
      } while (uVar9 != 0);
      if ((uVar2 & 7) == 0) {
        return;
      }
    }
    do {
      uVar1 = (int)uVar4 + 1;
      uVar4 = (ulong)uVar1;
      *pfVar6 = *pfVar6 + *pfVar5 * param_2;
      pfVar5 = pfVar5 + 1;
      pfVar6 = pfVar6 + 1;
    } while (uVar1 < uVar2);
  }
  return;
}


