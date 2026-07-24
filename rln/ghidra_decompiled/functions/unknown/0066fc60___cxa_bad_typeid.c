/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066fc60
 * Function: __cxa_bad_typeid
 * Signature: undefined __cxa_bad_typeid(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void __cxa_bad_typeid(void)

{
  long *plVar1;
  
                    /* catch() { ... } // from try @ 0066fb6c with catch @ 0066fc60 */
                    /* catch() { ... } // from try @ 0066fb3c with catch @ 0066fc64 */
  plVar1 = (long *)__cxa_allocate_exception(8);
  *plVar1 = (long)(PTR_vtable_007e55a0 + 0x10);
                    /* try { // try from 0066fc88 to 0076fcc3 has its CatchHandler @ 0066fd68 */
                    /* WARNING: Subroutine does not return */
  __cxa_throw(plVar1,PTR_typeinfo_007e54c8,PTR__bad_typeid_007e6be8);
}


