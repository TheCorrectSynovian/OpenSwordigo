/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066fc2c
 * Function: __cxa_bad_cast
 * Signature: noreturn undefined __cxa_bad_cast(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void __cxa_bad_cast(void)

{
  long *plVar1;
  
  plVar1 = (long *)__cxa_allocate_exception(8);
  *plVar1 = (long)(PTR_vtable_007e6e70 + 0x10);
                    /* catch() { ... } // from try @ 0066fbdc with catch @ 0066fc58 */
                    /* WARNING: Subroutine does not return */
  __cxa_throw(plVar1,PTR_typeinfo_007e4858,PTR__bad_cast_007e6318);
}


