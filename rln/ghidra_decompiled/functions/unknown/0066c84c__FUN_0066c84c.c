/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066c84c
 * Function: FUN_0066c84c
 * Signature: undefined FUN_0066c84c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0066c84c(undefined8 *param_1)

{
  undefined *puVar1;
  
                    /* try { // try from 0066c84c to 0076c873 has its CatchHandler @ 0066c87c */
  puVar1 = (undefined *)*param_1;
  if (puVar1 != &DAT_007fd318) {
                    /* try { // try from 0066c874 to 0076c87f has its CatchHandler @ 0066c674 */
    if (0 < *(int *)(puVar1 + -8)) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0066c84c with catch @ 0066c87c
                        */
                    /* try { // try from 0066c880 to 0076c96f has its CatchHandler @ 0066c880
                       catch(type#1 @ 00000000) { ... } // from try @ 0066c880 with catch @ 0066c880
                       catch(type#1 @ 00000000) { ... } // from try @ 0066ca20 with catch @ 0066c880
                       catch(type#1 @ 00000000) { ... } // from try @ 0066caf0 with catch @ 0066c880
                        */
      FUN_0066c650(param_1,0,0,0);
      puVar1 = (undefined *)*param_1;
    }
    *(undefined4 *)(puVar1 + -8) = 0xffffffff;
  }
  return;
}


