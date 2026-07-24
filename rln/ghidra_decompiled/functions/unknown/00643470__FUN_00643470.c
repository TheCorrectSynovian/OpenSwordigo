/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00643470
 * Function: FUN_00643470
 * Signature: undefined FUN_00643470(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00643470(long *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x18) & 0x4a;
  if ((uVar1 != 8) && (uVar1 != 0x40)) {
    FUN_00643214(param_1,(long)param_2);
    return;
  }
                    /* catch() { ... } // from try @ 006433f0 with catch @ 006434a4 */
                    /* catch() { ... } // from try @ 006433d0 with catch @ 006434a8 */
  FUN_00643214(param_1,param_2);
  return;
}


