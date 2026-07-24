/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061d484
 * Function: FUN_0061d484
 * Signature: undefined FUN_0061d484(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0061d484(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  lVar1 = *param_1;
  while (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x20);
    FUN_00681ab8(lVar1 + 0x50);
                    /* try { // try from 0061d4ac to 0071d4db has its CatchHandler @ 0061d7c4 */
    lVar1 = lVar2;
  }
  free(param_1);
  return;
}


