/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ed9a0
 * Function: FUN_005ed9a0
 * Signature: undefined FUN_005ed9a0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005ed9a0(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  lVar5 = *(long *)(param_1 + 0x20);
  puVar3 = *(undefined8 **)(lVar5 + 0x50);
  puVar6 = (undefined8 *)*puVar3;
  if (puVar6 == puVar3) {
    *(undefined8 *)(lVar5 + 0x50) = 0;
  }
  else {
                    /* try { // try from 005ed9d0 to 006ed9f7 has its CatchHandler @ 005eda0c */
    *puVar3 = *puVar6;
  }
  *puVar6 = **(undefined8 **)(lVar5 + 0xb0);
  **(undefined8 **)(lVar5 + 0xb0) = puVar6;
                    /* try { // try from 005ed9f8 to 006eda77 has its CatchHandler @ 005ed824 */
  lVar2 = puVar6[2];
  *(byte *)((long)puVar6 + 9) = *(byte *)((long)puVar6 + 9) & 0xf8 | *(byte *)(lVar5 + 0x20) & 3;
                    /* catch() { ... } // from try @ 005ed9d0 with catch @ 005eda0c */
                    /* catch() { ... } // from try @ 005ed988 with catch @ 005eda14 */
                    /* catch() { ... } // from try @ 005ed940 with catch @ 005eda24 */
  if (((lVar2 != 0) && ((*(byte *)(lVar2 + 10) >> 2 & 1) == 0)) &&
     (puVar3 = (undefined8 *)
               FUN_005f4e8c(lVar2,2,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x138)),
     puVar3 != (undefined8 *)0x0)) {
    uVar1 = *(undefined1 *)(param_1 + 0x65);
    uVar7 = *(undefined8 *)(lVar5 + 0x70);
    *(undefined1 *)(param_1 + 0x65) = 0;
                    /* catch() { ... } // from try @ 005ed8f8 with catch @ 005eda34 */
    *(long *)(lVar5 + 0x70) = *(long *)(lVar5 + 0x78) << 1;
                    /* catch() { ... } // from try @ 005ed8b0 with catch @ 005eda44 */
    puVar4 = *(undefined8 **)(param_1 + 0x10);
    *puVar4 = *puVar3;
                    /* catch() { ... } // from try @ 005ed868 with catch @ 005eda54 */
    *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar3 + 1);
    lVar2 = *(long *)(param_1 + 0x10);
    *(undefined8 **)(lVar2 + 0x10) = puVar6;
    *(undefined4 *)(lVar2 + 0x18) = 7;
    lVar2 = *(long *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar2 + 0x20;
                    /* try { // try from 005eda78 to 006edbc7 has its CatchHandler @ 005edbd0 */
    FUN_005ec63c(param_1,lVar2,0);
    *(undefined1 *)(param_1 + 0x65) = uVar1;
    *(undefined8 *)(lVar5 + 0x70) = uVar7;
  }
  return;
}


