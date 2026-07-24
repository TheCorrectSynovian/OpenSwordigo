/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00665d1c
 * Function: FUN_00665d1c
 * Signature: undefined FUN_00665d1c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00665d1c(void)

{
  long *plVar1;
  
  plVar1 = (long *)__cxa_allocate_exception(8);
  *plVar1 = (long)(PTR_DAT_007e47d8 + 0x10);
                    /* try { // try from 00665d44 to 00765d4f has its CatchHandler @ 006662fc */
                    /* WARNING: Subroutine does not return */
  __cxa_throw(plVar1,PTR_PTR_007e66f0,PTR_FUN_007e4b30);
}


