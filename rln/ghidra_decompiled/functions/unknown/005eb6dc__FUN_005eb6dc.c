/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005eb6dc
 * Function: FUN_005eb6dc
 * Signature: undefined FUN_005eb6dc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005eb6dc(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
                    /* catch() { ... } // from try @ 005eb3b4 with catch @ 005eb6ec */
  if (*(long *)(param_1 + 0xb0) != 0) {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x40) + *(long *)(param_1 + 0xb0));
    if (*(int *)(puVar1 + 1) != 6) {
                    /* WARNING: Subroutine does not return */
      FUN_005eb814(param_1,5);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = puVar2[-2];
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar2 + -1);
    lVar3 = *(long *)(param_1 + 0x10);
    *(undefined8 *)(lVar3 + -0x10) = *puVar1;
    *(undefined4 *)(lVar3 + -8) = *(undefined4 *)(puVar1 + 1);
    lVar3 = *(long *)(param_1 + 0x10);
    if (*(long *)(param_1 + 0x38) - lVar3 < 0x11) {
                    /* catch() { ... } // from try @ 005eb3a0 with catch @ 005eb750 */
      FUN_005ebbb8(param_1,1);
                    /* try { // try from 005eb75c to 006eb793 has its CatchHandler @ 005eb75c
                       catch() { ... } // from try @ 005eb75c with catch @ 005eb75c
                       catch() { ... } // from try @ 005eb7a0 with catch @ 005eb75c */
      lVar3 = *(long *)(param_1 + 0x10);
    }
    *(long *)(param_1 + 0x10) = lVar3 + 0x10;
    FUN_005ec63c(param_1,lVar3 + -0x10,1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_005eb814(param_1,2);
}


