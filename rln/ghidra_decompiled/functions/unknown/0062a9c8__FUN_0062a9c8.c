/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062a9c8
 * Function: FUN_0062a9c8
 * Signature: undefined FUN_0062a9c8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0062a9c8(long *param_1)

{
  long lVar1;
  long *plVar2;
  
                    /* try { // try from 0062a9c8 to 0072aa17 has its CatchHandler @ 0062a9c8
                       catch() { ... } // from try @ 0062a9c8 with catch @ 0062a9c8
                       catch() { ... } // from try @ 0062ad9c with catch @ 0062a9c8
                       catch() { ... } // from try @ 0062b2a0 with catch @ 0062a9c8 */
  plVar2 = (long *)param_1[1];
  lVar1 = *param_1;
  *plVar2 = lVar1;
  *(long **)(lVar1 + 8) = plVar2;
  return;
}


