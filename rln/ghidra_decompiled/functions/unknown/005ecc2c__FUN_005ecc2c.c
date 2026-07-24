/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ecc2c
 * Function: FUN_005ecc2c
 * Signature: undefined FUN_005ecc2c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005ecc2c(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  
  iVar2 = FUN_005f86c8(*param_2);
  if (*(ulong *)(*(long *)(param_1 + 0x20) + 0x70) <= *(ulong *)(*(long *)(param_1 + 0x20) + 0x78))
  {
    FUN_005edcb0(param_1);
  }
  pcVar1 = FUN_005f4f30;
  if (iVar2 != 0x1b) {
    pcVar1 = FUN_005ef598;
  }
                    /* catch() { ... } // from try @ 005ec3dc with catch @ 005ecc98 */
  lVar3 = (*pcVar1)(param_1,*param_2,param_2 + 1,param_2[4]);
                    /* catch() { ... } // from try @ 005ec3b8 with catch @ 005ecc9c */
                    /* catch() { ... } // from try @ 005eca64 with catch @ 005eccac */
  lVar4 = FUN_005ed424(param_1,*(undefined1 *)(lVar3 + 0x70),*(undefined8 *)(param_1 + 0x78));
                    /* catch() { ... } // from try @ 005ec830 with catch @ 005eccb0 */
  *(long *)(lVar4 + 0x20) = lVar3;
  if (*(char *)(lVar3 + 0x70) != '\0') {
    uVar7 = 0;
    do {
      uVar5 = FUN_005ed4b4(param_1);
      *(undefined8 *)(lVar4 + 0x28 + uVar7 * 8) = uVar5;
                    /* try { // try from 005eccd4 to 006ed4d7 has its CatchHandler @ 005ed4e0 */
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(byte *)(lVar3 + 0x70));
  }
  plVar6 = *(long **)(param_1 + 0x10);
  *plVar6 = lVar4;
  *(undefined4 *)(plVar6 + 1) = 6;
                    /* catch() { ... } // from try @ 005ec79c with catch @ 005ecd00 */
                    /* catch() { ... } // from try @ 005ec6c8 with catch @ 005ecd04 */
  if (*(long *)(param_1 + 0x38) - *(long *)(param_1 + 0x10) < 0x11) {
    iVar2 = *(int *)(param_1 + 0x58);
    if (iVar2 < 1) {
      iVar2 = iVar2 + 1;
    }
    else {
      iVar2 = iVar2 << 1;
    }
    FUN_005eba24(param_1,iVar2);
  }
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  return;
}


