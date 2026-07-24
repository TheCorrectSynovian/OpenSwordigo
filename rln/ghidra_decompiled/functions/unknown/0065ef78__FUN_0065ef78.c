/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0065ef78
 * Function: FUN_0065ef78
 * Signature: undefined FUN_0065ef78(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0065ef78(long param_1)

{
  void *pvVar1;
  
                    /* try { // try from 0065ef8c to 0075f1df has its CatchHandler @ 0065ee38 */
  if ((*(char *)(param_1 + 0xa8) == '\0') && (*(long *)(param_1 + 0x98) == 0)) {
    pvVar1 = operator_new__(*(ulong *)(param_1 + 0xa0));
    *(void **)(param_1 + 0x98) = pvVar1;
    *(undefined1 *)(param_1 + 0xa8) = 1;
  }
  return;
}


