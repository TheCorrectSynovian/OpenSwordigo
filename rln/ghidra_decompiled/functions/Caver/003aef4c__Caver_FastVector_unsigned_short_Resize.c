/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003aef4c
 * Function: Caver::FastVector<unsigned_short>::Resize
 * Signature: undefined __thiscall Resize(FastVector<unsigned_short> * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FastVector<unsigned short>::Resize(int) */

void __thiscall
Caver::FastVector<unsigned_short>::Resize(FastVector<unsigned_short> *this,int param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  ulong uVar3;
  void *pvVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar10 = *(uint *)this;
  if (param_1 < (int)*(uint *)this) {
    *(int *)this = param_1;
    uVar10 = param_1;
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
  uVar3 = (ulong)param_1;
  uVar5 = uVar3 * 2;
  if (CARRY8(uVar3,uVar3)) {
    uVar5 = 0xffffffffffffffff;
  }
  pvVar2 = operator_new__(uVar5);
  pvVar4 = *(void **)(this + 8);
  if (pvVar4 == (void *)0x0) goto LAB_003af04c;
  if (0 < (int)uVar10) {
    uVar5 = (ulong)(int)uVar10;
    if (uVar10 < 0x10) {
      uVar3 = 0;
    }
    else if ((pvVar2 < (void *)((long)pvVar4 + uVar5 * 2)) &&
            (pvVar4 < (void *)((long)pvVar2 + uVar5 * 2))) {
      uVar3 = 0;
    }
    else {
      uVar3 = uVar5 & 0xfffffffffffffff0;
      puVar6 = (undefined8 *)((long)pvVar4 + 0x10);
      puVar8 = (undefined8 *)((long)pvVar2 + 0x10);
      uVar9 = uVar3;
      do {
        puVar1 = puVar6 + -1;
        uVar11 = puVar6[-2];
        uVar13 = puVar6[1];
        uVar12 = *puVar6;
        puVar6 = puVar6 + 4;
        uVar9 = uVar9 - 0x10;
        puVar8[-1] = *puVar1;
        puVar8[-2] = uVar11;
        puVar8[1] = uVar13;
        *puVar8 = uVar12;
        puVar8 = puVar8 + 4;
      } while (uVar9 != 0);
      if (uVar3 == uVar5) goto LAB_003af044;
    }
    do {
      lVar7 = uVar3 * 2;
      uVar3 = uVar3 + 1;
      *(undefined2 *)((long)pvVar2 + lVar7) = *(undefined2 *)((long)pvVar4 + lVar7);
    } while ((long)uVar3 < (long)uVar5);
  }
LAB_003af044:
  operator_delete__(pvVar4);
LAB_003af04c:
  *(int *)(this + 4) = param_1;
  *(void **)(this + 8) = pvVar2;
  return;
}


