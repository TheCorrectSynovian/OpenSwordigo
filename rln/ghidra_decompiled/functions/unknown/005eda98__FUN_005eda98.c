/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005eda98
 * Function: FUN_005eda98
 * Signature: undefined FUN_005eda98(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005eda98(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  plVar1 = *(long **)(param_1 + 0x20);
  *(undefined1 *)(plVar1 + 4) = 0x43;
  FUN_005edb10(param_1,plVar1 + 5,0xfffffffffffffffd);
  if (0 < *(int *)((long)plVar1 + 0xc)) {
    lVar2 = 0;
    lVar3 = 0;
    do {
      FUN_005edb10(param_1,*plVar1 + lVar2,0xfffffffffffffffd);
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 8;
    } while (lVar3 < *(int *)((long)plVar1 + 0xc));
  }
  return;
}


