/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00574b24
 * Function: Caver::FastVector<Caver::SceneObjectGroup*>::Resize
 * Signature: undefined __thiscall Resize(FastVector<Caver::SceneObjectGroup*> * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FastVector<Caver::SceneObjectGroup*>::Resize(int) */

void __thiscall
Caver::FastVector<Caver::SceneObjectGroup*>::Resize
          (FastVector<Caver::SceneObjectGroup*> *this,int param_1)

{
  undefined1 auVar1 [16];
  undefined8 *puVar2;
  void *pvVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar11 = *(uint *)this;
  if (param_1 < (int)*(uint *)this) {
    *(int *)this = param_1;
    uVar11 = param_1;
  }
  if (param_1 == 0) {
    if (*(void **)(this + 8) != (void *)0x0) {
      operator_delete__(*(void **)(this + 8));
      *(undefined8 *)(this + 8) = 0;
    }
    *(undefined4 *)(this + 4) = 0;
    return;
  }
  if (*(int *)(this + 4) == param_1) {
    return;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (long)param_1;
  uVar5 = -(ulong)((uint)param_1 >> 0x1f) & 0xfffffff800000000 | (ulong)(uint)param_1 << 3;
  if (SUB168(auVar1 * ZEXT816(8),8) != 0) {
    uVar5 = 0xffffffffffffffff;
  }
  pvVar3 = operator_new__(uVar5);
  pvVar4 = *(void **)(this + 8);
  if (pvVar4 == (void *)0x0) goto LAB_00574c30;
  if (0 < (int)uVar11) {
    uVar5 = (ulong)(int)uVar11;
    if (uVar11 < 4) {
      uVar6 = 0;
    }
    else if ((pvVar3 < (void *)((long)pvVar4 + uVar5 * 8)) &&
            (pvVar4 < (void *)((long)pvVar3 + uVar5 * 8))) {
      uVar6 = 0;
    }
    else {
      uVar6 = uVar5 & 0xfffffffffffffffc;
      puVar7 = (undefined8 *)((long)pvVar4 + 0x10);
      puVar9 = (undefined8 *)((long)pvVar3 + 0x10);
      uVar10 = uVar6;
      do {
        puVar2 = puVar7 + -1;
        uVar12 = puVar7[-2];
        uVar14 = puVar7[1];
        uVar13 = *puVar7;
        puVar7 = puVar7 + 4;
        uVar10 = uVar10 - 4;
        puVar9[-1] = *puVar2;
        puVar9[-2] = uVar12;
        puVar9[1] = uVar14;
        *puVar9 = uVar13;
                    /* try { // try from 00574c00 to 00674c0b has its CatchHandler @ 00574cb4 */
        puVar9 = puVar9 + 4;
      } while (uVar10 != 0);
                    /* try { // try from 00574c0c to 00674c93 has its CatchHandler @ 00574b20 */
      if (uVar6 == uVar5) goto LAB_00574c28;
    }
    do {
      lVar8 = uVar6 * 8;
      uVar6 = uVar6 + 1;
      *(undefined8 *)((long)pvVar3 + lVar8) = *(undefined8 *)((long)pvVar4 + lVar8);
    } while ((long)uVar6 < (long)uVar5);
  }
LAB_00574c28:
  operator_delete__(pvVar4);
LAB_00574c30:
  *(int *)(this + 4) = param_1;
  *(void **)(this + 8) = pvVar3;
  return;
}


