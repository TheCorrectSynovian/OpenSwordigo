/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066d26c
 * Function: FUN_0066d26c
 * Signature: undefined FUN_0066d26c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined * FUN_0066d26c(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = (undefined *)*param_1;
  lVar2 = *(long *)(puVar1 + -0x18);
  if ((-1 < *(int *)(puVar1 + -8)) && (puVar1 != &DAT_007fd318)) {
    if (*(int *)(puVar1 + -8) != 0) {
                    /* try { // try from 0066d2a4 to 0076d2cb has its CatchHandler @ 0066d37c */
      FUN_0066c650(param_1,0,0,0);
      puVar1 = (undefined *)*param_1;
    }
    *(undefined4 *)(puVar1 + -8) = 0xffffffff;
  }
  return puVar1 + (lVar2 + -1) * 4;
}


