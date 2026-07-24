/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062a988
 * Function: FUN_0062a988
 * Signature: undefined FUN_0062a988(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0062a988(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = param_1;
  do {
                    /* catch() { ... } // from try @ 0062a8b0 with catch @ 0062a98c */
    plVar2 = (long *)*plVar1;
                    /* catch() { ... } // from try @ 0062a9a4 with catch @ 0062a990 */
    *plVar1 = plVar1[1];
    plVar1[1] = (long)plVar2;
    plVar1 = plVar2;
                    /* try { // try from 0062a9a0 to 0072a9a3 has its CatchHandler @ 0062a9b4 */
                    /* try { // try from 0062a9a4 to 0072a9c7 has its CatchHandler @ 0062a990 */
  } while (param_1 != plVar2);
  return;
}


