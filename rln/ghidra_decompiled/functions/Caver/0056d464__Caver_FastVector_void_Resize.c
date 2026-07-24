/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0056d464
 * Function: Caver::FastVector<void*>::Resize
 * Signature: undefined __thiscall Resize(FastVector<void*> * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FastVector<void*>::Resize(int) */

void __thiscall Caver::FastVector<void*>::Resize(FastVector<void*> *this,int param_1)

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
  
                    /* catch() { ... } // from try @ 0056cc18 with catch @ 0056d47c */
                    /* catch() { ... } // from try @ 0056cc04 with catch @ 0056d484 */
  uVar11 = *(uint *)this;
  if (param_1 < (int)*(uint *)this) {
                    /* catch() { ... } // from try @ 0056cf20 with catch @ 0056d488
                       catch() { ... } // from try @ 0056cfa0 with catch @ 0056d488 */
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
                    /* try { // try from 0056d4ac to 0066d5f3 has its CatchHandler @ 0056d65c */
  uVar5 = -(ulong)((uint)param_1 >> 0x1f) & 0xfffffff800000000 | (ulong)(uint)param_1 << 3;
  if (SUB168(auVar1 * ZEXT816(8),8) != 0) {
    uVar5 = 0xffffffffffffffff;
  }
  pvVar3 = operator_new__(uVar5);
  pvVar4 = *(void **)(this + 8);
  if (pvVar4 == (void *)0x0) goto LAB_0056d570;
  if (0 < (int)uVar11) {
    uVar5 = (ulong)(int)uVar11;
                    /* catch() { ... } // from try @ 0056cdac with catch @ 0056d4d8
                       catch() { ... } // from try @ 0056cdf0 with catch @ 0056d4d8 */
    if (uVar11 < 4) {
      uVar6 = 0;
    }
    else {
                    /* catch() { ... } // from try @ 0056cd2c with catch @ 0056d510
                       catch() { ... } // from try @ 0056cd70 with catch @ 0056d510 */
      if ((pvVar3 < (void *)((long)pvVar4 + uVar5 * 8)) &&
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
          puVar9 = puVar9 + 4;
        } while (uVar10 != 0);
                    /* catch() { ... } // from try @ 0056ccac with catch @ 0056d548
                       catch() { ... } // from try @ 0056ccf0 with catch @ 0056d548 */
        if (uVar6 == uVar5) goto LAB_0056d568;
      }
    }
    do {
      lVar8 = uVar6 * 8;
      uVar6 = uVar6 + 1;
      *(undefined8 *)((long)pvVar3 + lVar8) = *(undefined8 *)((long)pvVar4 + lVar8);
    } while ((long)uVar6 < (long)uVar5);
  }
LAB_0056d568:
  operator_delete__(pvVar4);
LAB_0056d570:
  *(int *)(this + 4) = param_1;
  *(void **)(this + 8) = pvVar3;
  return;
}


