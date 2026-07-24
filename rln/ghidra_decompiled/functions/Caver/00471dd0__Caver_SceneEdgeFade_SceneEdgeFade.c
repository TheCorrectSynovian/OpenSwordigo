/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00471dd0
 * Function: Caver::SceneEdgeFade::SceneEdgeFade
 * Signature: undefined __thiscall SceneEdgeFade(SceneEdgeFade * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::SceneEdgeFade::SceneEdgeFade() */

void __thiscall Caver::SceneEdgeFade::SceneEdgeFade(SceneEdgeFade *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  void *pvVar9;
  
                    /* catch() { ... } // from try @ 00471e14 with catch @ 00471de4 */
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)this = 6;
  puVar7 = operator_new__(0x60);
  uVar6 = _UNK_00690108;
  uVar5 = _DAT_00690100;
  uVar4 = _UNK_006900f8;
  uVar3 = _DAT_006900f0;
  uVar2 = _UNK_006900e8;
  uVar1 = _DAT_006900e0;
                    /* try { // try from 00471e00 to 00571e13 has its CatchHandler @ 00471e38 */
                    /* try { // try from 00471e14 to 00571e3b has its CatchHandler @ 00471de4 */
  *(undefined8 **)(this + 8) = puVar7;
  puVar7[1] = uVar2;
  *puVar7 = uVar1;
  puVar7[3] = uVar4;
  puVar7[2] = uVar3;
  uVar2 = _UNK_00690118;
  uVar1 = _DAT_00690110;
  puVar7[5] = uVar6;
  puVar7[4] = uVar5;
  puVar7[7] = uVar2;
  puVar7[6] = uVar1;
  uVar1 = _DAT_00690120;
  lVar8 = *(long *)(this + 8);
                    /* catch() { ... } // from try @ 00471e00 with catch @ 00471e38 */
  *(undefined8 *)(lVar8 + 0x48) = _UNK_00690128;
  *(undefined8 *)(lVar8 + 0x40) = uVar1;
  uVar1 = _DAT_00690130;
  lVar8 = *(long *)(this + 8);
  *(undefined8 *)(lVar8 + 0x58) = _UNK_00690138;
  *(undefined8 *)(lVar8 + 0x50) = uVar1;
  *(undefined4 *)(this + 0x10) = 4;
  puVar7 = operator_new__(0x18);
  pvVar9 = *(void **)(this + 0x18);
                    /* try { // try from 00471e60 to 00571edb has its CatchHandler @ 00471e60
                       catch() { ... } // from try @ 00471e60 with catch @ 00471e60
                       catch() { ... } // from try @ 00471ff0 with catch @ 00471e60 */
  *(undefined8 **)(this + 0x18) = puVar7;
  if (pvVar9 != (void *)0x0) {
    operator_delete__(pvVar9);
    puVar7 = *(undefined8 **)(this + 0x18);
  }
  uVar1 = _DAT_00690140;
  puVar7[1] = _UNK_00690148;
  *puVar7 = uVar1;
  puVar7[2] = 0x4000500030004;
  return;
}


