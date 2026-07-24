/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066219c
 * Function: FUN_0066219c
 * Signature: undefined FUN_0066219c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0066219c(long param_1)

{
  ulong uVar1;
  void *pvVar2;
  
  if ((*(char *)(param_1 + 0xa8) == '\0') && (*(long *)(param_1 + 0x98) == 0)) {
                    /* try { // try from 006621c4 to 00762323 has its CatchHandler @ 006621c4
                       catch() { ... } // from try @ 006621c4 with catch @ 006621c4
                       catch() { ... } // from try @ 006624c4 with catch @ 006621c4 */
    uVar1 = *(ulong *)(param_1 + 0xa0) << 2;
    if (0x1fc0000000000000 < *(ulong *)(param_1 + 0xa0)) {
      uVar1 = 0xffffffffffffffff;
    }
    pvVar2 = operator_new__(uVar1);
    *(void **)(param_1 + 0x98) = pvVar2;
    *(undefined1 *)(param_1 + 0xa8) = 1;
    return;
  }
  return;
}


