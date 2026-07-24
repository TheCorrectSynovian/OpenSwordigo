/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0065edb0
 * Function: FUN_0065edb0
 * Signature: undefined FUN_0065edb0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0065edb0(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0xc0) != '\0') {
                    /* try { // try from 0065edb8 to 0075edbb has its CatchHandler @ 0065edcc */
                    /* catch() { ... } // from try @ 0065eda8 with catch @ 0065edbc */
    lVar1 = *(long *)(param_1 + 0xb0);
                    /* catch() { ... } // from try @ 0065edb8 with catch @ 0065edcc */
                    /* try { // try from 0065edd0 to 0075edd3 has its CatchHandler @ 0065eddc */
    if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
      lVar1 = lVar1 + 1;
    }
                    /* try { // try from 0065edd4 to 0075eddf has its CatchHandler @ 0065ed50 */
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x98);
    *(long *)(param_1 + 0xb0) = lVar1;
                    /* catch() { ... } // from try @ 0065edd0 with catch @ 0065eddc */
    *(long *)(param_1 + 0x10) = lVar1;
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0xb8);
                    /* catch() { ... } // from try @ 0065ee00 with catch @ 0065ede4 */
    *(undefined1 *)(param_1 + 0xc0) = 0;
  }
  return;
}


