/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00665260
 * Function: FUN_00665260
 * Signature: undefined FUN_00665260(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00665260(void)

{
  long *plVar1;
  
                    /* catch() { ... } // from try @ 00665070 with catch @ 0066526c */
  plVar1 = (long *)__cxa_allocate_exception(8);
                    /* catch() { ... } // from try @ 00665080 with catch @ 00665278 */
  *plVar1 = (long)(PTR_vtable_007e6760 + 0x10);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(plVar1,PTR_typeinfo_007e7ee0,PTR__bad_exception_007e7cc0);
}


