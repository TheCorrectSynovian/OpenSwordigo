/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0055a2dc
 * Function: Caver::LightOverlay::SetPointLights
 * Signature: undefined __thiscall SetPointLights(LightOverlay * this, PointLight * param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::LightOverlay::SetPointLights(Caver::PointLight const*, int) */

void __thiscall
Caver::LightOverlay::SetPointLights(LightOverlay *this,PointLight *param_1,int param_2)

{
  PointLight *pPVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  void *pvVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  
                    /* catch() { ... } // from try @ 00559ef4 with catch @ 0055a2e4 */
  auVar3._8_8_ = 0;
  auVar3._0_8_ = (long)param_2;
  uVar7 = (long)param_2 * 0x3c;
  if (SUB168(auVar3 * ZEXT816(0x3c),8) != 0) {
    uVar7 = 0xffffffffffffffff;
  }
  *(int *)(this + 0x94) = param_2;
  pvVar4 = operator_new__(uVar7);
  pvVar5 = *(void **)(this + 0x98);
  *(void **)(this + 0x98) = pvVar4;
  if (pvVar5 != (void *)0x0) {
    operator_delete__(pvVar5);
  }
  if (0 < param_2) {
    lVar6 = 0;
    uVar7 = (ulong)(uint)param_2;
    do {
      pPVar1 = param_1 + lVar6;
                    /* catch() { ... } // from try @ 00559ee0 with catch @ 0055a348 */
      uVar7 = uVar7 - 1;
      puVar2 = (undefined8 *)(*(long *)(this + 0x98) + lVar6);
      lVar6 = lVar6 + 0x3c;
      *puVar2 = *(undefined8 *)pPVar1;
      *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(pPVar1 + 8);
      uVar8 = *(undefined8 *)(pPVar1 + 0x2c);
      *(undefined8 *)((long)puVar2 + 0x34) = *(undefined8 *)(pPVar1 + 0x34);
      *(undefined8 *)((long)puVar2 + 0x2c) = uVar8;
      uVar8 = *(undefined8 *)(pPVar1 + 0x1c);
      *(undefined8 *)((long)puVar2 + 0x24) = *(undefined8 *)(pPVar1 + 0x24);
      *(undefined8 *)((long)puVar2 + 0x1c) = uVar8;
      uVar8 = *(undefined8 *)(pPVar1 + 0xc);
      *(undefined8 *)((long)puVar2 + 0x14) = *(undefined8 *)(pPVar1 + 0x14);
      *(undefined8 *)((long)puVar2 + 0xc) = uVar8;
    } while (uVar7 != 0);
  }
  return;
}


