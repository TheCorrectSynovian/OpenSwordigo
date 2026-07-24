/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005eba24
 * Function: FUN_005eba24
 * Signature: undefined FUN_005eba24(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005eba24(long param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005eb918 with catch @ 005eba24
                        */
  lVar5 = *(long *)(param_1 + 0x40);
  uVar1 = param_2 + 6;
  if (param_2 < -7) {
    lVar2 = FUN_005eede0(param_1);
  }
  else {
    lVar2 = FUN_005eed74(param_1,lVar5,(long)*(int *)(param_1 + 0x58) << 4,
                         -(ulong)(uVar1 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar1 << 4);
  }
  plVar4 = *(long **)(param_1 + 0x98);
  *(long *)(param_1 + 0x38) = lVar2 + (long)param_2 * 0x10;
  *(long *)(param_1 + 0x40) = lVar2;
  *(uint *)(param_1 + 0x58) = uVar1;
  *(long *)(param_1 + 0x10) = lVar2 + (*(long *)(param_1 + 0x10) - lVar5);
  if (plVar4 != (long *)0x0) {
                    /* try { // try from 005eba94 to 006ebac3 has its CatchHandler @ 005ebae4 */
    plVar3 = (long *)*plVar4;
    plVar4[2] = lVar2 + (plVar4[2] - lVar5);
    for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      plVar3[2] = *(long *)(param_1 + 0x40) + (plVar3[2] - lVar5);
                    /* try { // try from 005ebac4 to 006ebae7 has its CatchHandler @ 005eb8c4 */
    }
  }
  plVar3 = *(long **)(param_1 + 0x28);
  lVar2 = *(long *)(param_1 + 0x40);
  for (plVar4 = *(long **)(param_1 + 0x50); plVar4 <= plVar3; plVar4 = plVar4 + 5) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005eba94 with catch @ 005ebae4
                        */
                    /* catch() { ... } // from try @ 005ebafc with catch @ 005ebae8 */
                    /* try { // try from 005ebaf8 to 006ebafb has its CatchHandler @ 005ebb0c */
                    /* try { // try from 005ebafc to 006ebb1f has its CatchHandler @ 005ebae8 */
    plVar4[1] = lVar2 + (plVar4[1] - lVar5);
    plVar4[2] = lVar2 + (plVar4[2] - lVar5);
    *plVar4 = lVar2 + (*plVar4 - lVar5);
  }
                    /* catch() { ... } // from try @ 005ebaf8 with catch @ 005ebb0c */
  *(long *)(param_1 + 0x18) = lVar2 + (*(long *)(param_1 + 0x18) - lVar5);
                    /* catch() { ... } // from try @ 005ebbd0 with catch @ 005ebb20 */
  return;
}


