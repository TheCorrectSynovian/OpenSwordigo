/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ed4b4
 * Function: FUN_005ed4b4
 * Signature: undefined FUN_005ed4b4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long FUN_005ed4b4(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_005eed74(param_1,0,0,0x28);
                    /* try { // try from 005ed4d8 to 006ed4e3 has its CatchHandler @ 005ec094 */
                    /* catch() { ... } // from try @ 005eccd4 with catch @ 005ed4e0 */
  FUN_005ee48c(param_1,lVar1,10);
  *(long *)(lVar1 + 0x10) = lVar1 + 0x18;
  *(undefined4 *)(lVar1 + 0x20) = 0;
  return lVar1;
}


