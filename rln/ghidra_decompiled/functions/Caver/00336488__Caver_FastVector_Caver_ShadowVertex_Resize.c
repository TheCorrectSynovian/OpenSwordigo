/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00336488
 * Function: Caver::FastVector<Caver::ShadowVertex>::Resize
 * Signature: undefined __thiscall Resize(FastVector<Caver::ShadowVertex> * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FastVector<Caver::ShadowVertex>::Resize(int) */

void __thiscall
Caver::FastVector<Caver::ShadowVertex>::Resize(FastVector<Caver::ShadowVertex> *this,int param_1)

{
  undefined1 auVar1 [16];
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined8 uVar9;
  
  iVar8 = *(int *)this;
  if (param_1 < *(int *)this) {
    *(int *)this = param_1;
    iVar8 = param_1;
  }
  if (param_1 == 0) {
    if (*(void **)(this + 8) != (void *)0x0) {
      operator_delete__(*(void **)(this + 8));
      *(undefined8 *)(this + 8) = 0;
    }
    *(undefined4 *)(this + 4) = 0;
  }
  else if (*(int *)(this + 4) != param_1) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = (long)param_1;
    uVar4 = ((long)param_1 + (long)param_1 * 2) * 8;
    if (SUB168(auVar1 * ZEXT816(0x18),8) != 0) {
      uVar4 = 0xffffffffffffffff;
    }
    pvVar2 = operator_new__(uVar4);
    pvVar3 = *(void **)(this + 8);
    if (pvVar3 != (void *)0x0) {
      if (0 < iVar8) {
        lVar5 = 0;
        puVar6 = (undefined4 *)((long)pvVar3 + 0x14);
        puVar7 = (undefined4 *)((long)pvVar2 + 0x14);
        do {
          uVar9 = *(undefined8 *)(puVar6 + -5);
          lVar5 = lVar5 + 1;
          *(undefined8 *)(puVar7 + -3) = *(undefined8 *)(puVar6 + -3);
          *(undefined8 *)(puVar7 + -5) = uVar9;
          puVar7[-1] = puVar6[-1];
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 6;
          puVar7 = puVar7 + 6;
        } while (lVar5 < iVar8);
      }
      operator_delete__(pvVar3);
    }
    *(int *)(this + 4) = param_1;
    *(void **)(this + 8) = pvVar2;
  }
  return;
}


