/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061ce50
 * Function: FUN_0061ce50
 * Signature: undefined FUN_0061ce50(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0061ce50(void)

{
  undefined8 *puVar1;
  
                    /* catch() { ... } // from try @ 0061ce48 with catch @ 0061ce5c */
  puVar1 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar1 = &PTR_FUN_007b6a90;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar1,&PTR_PTR_007d8f20,FUN_0061cdd0);
}


