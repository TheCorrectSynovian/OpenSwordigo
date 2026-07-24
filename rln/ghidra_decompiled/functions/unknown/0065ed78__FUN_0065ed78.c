/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0065ed78
 * Function: FUN_0065ed78
 * Signature: undefined FUN_0065ed78(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0065ed78(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0xc0) == '\0') {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(long *)(param_1 + 8) = param_1 + 0xab;
    *(long *)(param_1 + 0x10) = param_1 + 0xab;
    *(undefined8 *)(param_1 + 0xb0) = uVar1;
                    /* catch() { ... } // from try @ 0065ed68 with catch @ 0065eda0 */
    *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_1 + 0x18);
    *(long *)(param_1 + 0x18) = param_1 + 0xac;
                    /* try { // try from 0065eda8 to 0075edaf has its CatchHandler @ 0065edbc */
    *(undefined1 *)(param_1 + 0xc0) = 1;
  }
  return;
}


