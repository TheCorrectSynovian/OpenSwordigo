/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00680100
 * Function: FUN_00680100
 * Signature: undefined FUN_00680100(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_00680100(long param_1)

{
  long lVar1;
  undefined1 auStack_18 [16];
  undefined8 local_8;
  
  lVar1 = FUN_00683248(param_1 + -1,auStack_18);
                    /* catch() { ... } // from try @ 00680138 with catch @ 00680118
                       catch() { ... } // from try @ 0068019c with catch @ 00680118 */
  if (lVar1 == 0) {
    local_8 = 0;
  }
  return local_8;
}


