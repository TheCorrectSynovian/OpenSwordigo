/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00665d50
 * Function: FUN_00665d50
 * Signature: undefined FUN_00665d50(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00665d50(undefined4 param_1)

{
  undefined8 uVar1;
  
                    /* try { // try from 00665d50 to 00765dc7 has its CatchHandler @ 00665968 */
  uVar1 = __cxa_allocate_exception(0x18);
  FUN_00666174(uVar1,param_1);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(uVar1,PTR_PTR_007e6e40,PTR_FUN_007e5300);
}


