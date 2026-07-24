/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058acc0
 * Function: Caver::GradientColor::GradientColor
 * Signature: undefined __thiscall GradientColor(GradientColor * this, int param_1, float * param_2, Color * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GradientColor::GradientColor(int, float*, Caver::Color*) */

void __thiscall
Caver::GradientColor::GradientColor(GradientColor *this,int param_1,float *param_2,Color *param_3)

{
  long lVar1;
  undefined1 auVar2 [16];
  float *pfVar3;
  undefined4 *puVar4;
  ulong uVar5;
  long lVar6;
  
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (long)param_1;
  uVar5 = -(ulong)((uint)param_1 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uint)param_1 << 2;
  if (SUB168(auVar2 * ZEXT816(4),8) != 0) {
    uVar5 = 0xffffffffffffffff;
  }
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(int *)this = param_1;
  pfVar3 = operator_new__(uVar5);
  *(float **)(this + 8) = pfVar3;
  puVar4 = operator_new__(uVar5);
  *(undefined4 **)(this + 0x10) = puVar4;
  if (0 < param_1) {
    *pfVar3 = *param_2;
    *puVar4 = *(undefined4 *)param_3;
    if (param_1 != 1) {
      uVar5 = 1;
      do {
        lVar6 = uVar5 * 4;
        pfVar3 = param_2 + uVar5;
        lVar1 = *(long *)(this + 0x10);
        uVar5 = uVar5 + 1;
        *(float *)(*(long *)(this + 8) + lVar6) = *pfVar3;
        *(undefined4 *)(lVar1 + lVar6) = *(undefined4 *)(param_3 + lVar6);
      } while ((uint)param_1 != uVar5);
    }
  }
  return;
}


