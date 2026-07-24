/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031353c
 * Function: Caver::FloatDataBuffer::Multiply
 * Signature: undefined __thiscall Multiply(FloatDataBuffer * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FloatDataBuffer::Multiply(float) */

void __thiscall Caver::FloatDataBuffer::Multiply(FloatDataBuffer *this,float param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  float *pfVar4;
  float *pfVar5;
  ulong uVar6;
  
  uVar2 = *(uint *)this;
  if (uVar2 != 0) {
    pfVar5 = *(float **)(this + 8);
    uVar3 = (ulong)(uVar2 - 1) + 1;
    if (uVar3 < 8) {
      uVar3 = 0;
      pfVar4 = pfVar5;
    }
    else {
      uVar3 = uVar3 - (uVar2 & 7);
      pfVar4 = pfVar5 + uVar3;
      pfVar5 = pfVar5 + 4;
      uVar6 = uVar3;
      do {
        uVar6 = uVar6 - 8;
        *(ulong *)(pfVar5 + -2) =
             CONCAT44((float)((ulong)*(undefined8 *)(pfVar5 + -2) >> 0x20) * param_1,
                      (float)*(undefined8 *)(pfVar5 + -2) * param_1);
        *(ulong *)(pfVar5 + -4) =
             CONCAT44((float)((ulong)*(undefined8 *)(pfVar5 + -4) >> 0x20) * param_1,
                      (float)*(undefined8 *)(pfVar5 + -4) * param_1);
        *(ulong *)(pfVar5 + 2) =
             CONCAT44((float)((ulong)*(undefined8 *)(pfVar5 + 2) >> 0x20) * param_1,
                      (float)*(undefined8 *)(pfVar5 + 2) * param_1);
        *(ulong *)pfVar5 =
             CONCAT44((float)((ulong)*(undefined8 *)pfVar5 >> 0x20) * param_1,
                      (float)*(undefined8 *)pfVar5 * param_1);
        pfVar5 = pfVar5 + 8;
      } while (uVar6 != 0);
      if ((uVar2 & 7) == 0) {
        return;
      }
    }
    do {
      uVar1 = (int)uVar3 + 1;
      uVar3 = (ulong)uVar1;
      *pfVar4 = *pfVar4 * param_1;
      pfVar4 = pfVar4 + 1;
    } while (uVar1 < uVar2);
  }
  return;
}


