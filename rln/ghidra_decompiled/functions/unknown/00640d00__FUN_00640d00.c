/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00640d00
 * Function: FUN_00640d00
 * Signature: undefined FUN_00640d00(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00640d00(long *param_1,int param_2)

{
  uint uVar1;
  
                    /* try { // try from 00640d18 to 00740d23 has its CatchHandler @ 006413f4 */
  uVar1 = *(uint *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x18) & 0x4a;
  if ((uVar1 != 8) && (uVar1 != 0x40)) {
    FUN_00640a88(param_1,(long)param_2);
    return;
  }
  FUN_00640a88(param_1,param_2);
  return;
}


