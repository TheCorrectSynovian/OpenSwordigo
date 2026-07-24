/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ebb2c
 * Function: FUN_005ebb2c
 * Signature: undefined FUN_005ebb2c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005ebb2c(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
                    /* try { // try from 005ebb38 to 006ebb3f has its CatchHandler @ 005ebbdc */
  lVar2 = *(long *)(param_1 + 0x50);
  if (param_2 < -1) {
    lVar1 = FUN_005eede0(param_1);
  }
  else {
                    /* try { // try from 005ebb6c to 006ebb77 has its CatchHandler @ 005ebb84 */
    lVar1 = FUN_005eed74(param_1,lVar2,(long)*(int *)(param_1 + 0x5c) * 0x28,
                         ((long)param_2 + (long)param_2 * 4) * 8);
  }
                    /* catch() { ... } // from try @ 005ebb6c with catch @ 005ebb84 */
  *(long *)(param_1 + 0x48) = lVar1 + (long)param_2 * 0x28 + -0x28;
  *(long *)(param_1 + 0x50) = lVar1;
  *(int *)(param_1 + 0x5c) = param_2;
  *(long *)(param_1 + 0x28) = lVar1 + (*(long *)(param_1 + 0x28) - lVar2);
                    /* try { // try from 005ebba8 to 006ebbcf has its CatchHandler @ 005ebbd8 */
  return;
}


