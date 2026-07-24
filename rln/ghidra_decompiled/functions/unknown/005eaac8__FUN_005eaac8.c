/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005eaac8
 * Function: FUN_005eaac8
 * Signature: undefined FUN_005eaac8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


bool FUN_005eaac8(uint param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (((param_1 & 0x3f) < 0x23) && ((1L << (param_1 & 0x3f) & 0x470000000U) != 0)) {
    bVar1 = param_1 < 0x800000;
  }
  return bVar1;
}


