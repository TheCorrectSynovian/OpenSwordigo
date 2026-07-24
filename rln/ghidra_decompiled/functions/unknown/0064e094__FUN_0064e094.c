/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064e094
 * Function: FUN_0064e094
 * Signature: undefined FUN_0064e094(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0064e094(undefined8 param_1,long *param_2)

{
                    /* try { // try from 0064e094 to 0074e15f has its CatchHandler @ 0064e094
                       catch() { ... } // from try @ 0064e094 with catch @ 0064e094
                       catch() { ... } // from try @ 0064e33c with catch @ 0064e094
                       catch() { ... } // from try @ 0064e47c with catch @ 0064e094 */
  (**(code **)(*param_2 + 0x38))();
  return param_1;
}


