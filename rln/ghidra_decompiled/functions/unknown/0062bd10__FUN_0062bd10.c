/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062bd10
 * Function: FUN_0062bd10
 * Signature: undefined FUN_0062bd10(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0062bd10(undefined8 param_1,long *param_2)

{
                    /* try { // try from 0062bd20 to 0072bd47 has its CatchHandler @ 0062bd20
                       catch() { ... } // from try @ 0062bd20 with catch @ 0062bd20
                       catch() { ... } // from try @ 0062bd7c with catch @ 0062bd20 */
  (**(code **)(*param_2 + 0x30))();
  return param_1;
}


