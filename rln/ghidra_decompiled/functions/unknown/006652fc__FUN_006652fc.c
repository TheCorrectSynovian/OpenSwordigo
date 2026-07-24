/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006652fc
 * Function: FUN_006652fc
 * Signature: undefined FUN_006652fc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_006652fc(void)

{
  long *plVar1;
  
  plVar1 = (long *)__cxa_allocate_exception(8);
                    /* catch() { ... } // from try @ 0066529c with catch @ 00665310 */
  *plVar1 = (long)(PTR_vtable_007e55a0 + 0x10);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(plVar1,PTR_typeinfo_007e54c8,PTR__bad_typeid_007e6be8);
}


