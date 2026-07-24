/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00640cbc
 * Function: FUN_00640cbc
 * Signature: undefined FUN_00640cbc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00640cbc(long *param_1,short param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x18) & 0x4a;
  if ((uVar1 != 8) && (uVar1 != 0x40)) {
                    /* try { // try from 00640cec to 00740d13 has its CatchHandler @ 0064161c */
    FUN_00640a88(param_1,(long)param_2);
    return;
  }
  FUN_00640a88(param_1,param_2);
  return;
}


