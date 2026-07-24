/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005620dc
 * Function: Caver::FastVector<Caver::PointLight>::Resize
 * Signature: undefined __thiscall Resize(FastVector<Caver::PointLight> * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FastVector<Caver::PointLight>::Resize(int) */

void __thiscall
Caver::FastVector<Caver::PointLight>::Resize(FastVector<Caver::PointLight> *this,int param_1)

{
  undefined1 auVar1 [16];
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
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
                    /* try { // try from 0056211c to 00662123 has its CatchHandler @ 005624a4 */
                    /* try { // try from 00562124 to 00662133 has its CatchHandler @ 005624b0 */
    uVar5 = (long)param_1 * 0x3c;
    if (SUB168(auVar1 * ZEXT816(0x3c),8) != 0) {
      uVar5 = 0xffffffffffffffff;
    }
    pvVar2 = operator_new__(uVar5);
                    /* try { // try from 00562134 to 006621f3 has its CatchHandler @ 00562074 */
    pvVar3 = *(void **)(this + 8);
    if (pvVar3 != (void *)0x0) {
      if (0 < iVar8) {
        lVar4 = 0;
        puVar6 = (undefined8 *)((long)pvVar3 + 0xc);
        puVar7 = (undefined8 *)((long)pvVar2 + 0xc);
        do {
          lVar4 = lVar4 + 1;
          *(undefined8 *)((long)puVar7 + -0xc) = *(undefined8 *)((long)puVar6 + -0xc);
          *(undefined4 *)((long)puVar7 + -4) = *(undefined4 *)((long)puVar6 + -4);
          uVar9 = puVar6[4];
          puVar7[5] = puVar6[5];
          puVar7[4] = uVar9;
          uVar9 = puVar6[2];
          puVar7[3] = puVar6[3];
          puVar7[2] = uVar9;
          uVar9 = *puVar6;
          puVar7[1] = puVar6[1];
          *puVar7 = uVar9;
          puVar6 = (undefined8 *)((long)puVar6 + 0x3c);
          puVar7 = (undefined8 *)((long)puVar7 + 0x3c);
        } while (lVar4 < iVar8);
      }
      operator_delete__(pvVar3);
    }
    *(int *)(this + 4) = param_1;
    *(void **)(this + 8) = pvVar2;
  }
  return;
}


