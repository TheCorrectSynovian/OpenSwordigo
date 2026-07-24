/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066fcc8
 * Function: __cxa_throw_bad_array_length
 * Signature: undefined __cxa_throw_bad_array_length(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void __cxa_throw_bad_array_length(void)

{
  long *plVar1;
  
                    /* catch() { ... } // from try @ 0066fc0c with catch @ 0066fcc8 */
  plVar1 = (long *)__cxa_allocate_exception(8);
                    /* catch() { ... } // from try @ 0066fa70 with catch @ 0066fce4
                       catch() { ... } // from try @ 0066fae8 with catch @ 0066fce4 */
  *plVar1 = (long)(PTR_vtable_007e65e0 + 0x10);
                    /* catch() { ... } // from try @ 0066fa5c with catch @ 0066fcec */
                    /* catch() { ... } // from try @ 0066fb84 with catch @ 0066fcf4 */
                    /* WARNING: Subroutine does not return */
  __cxa_throw(plVar1,PTR_typeinfo_007e6e30,PTR__bad_array_length_007e64c0);
}


