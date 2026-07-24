/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066fc94
 * Function: __cxa_throw_bad_array_new_length
 * Signature: undefined __cxa_throw_bad_array_new_length(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void __cxa_throw_bad_array_new_length(void)

{
  long *plVar1;
  
                    /* catch() { ... } // from try @ 0066fb9c with catch @ 0066fc94 */
                    /* catch() { ... } // from try @ 0066fabc with catch @ 0066fc98 */
  plVar1 = (long *)__cxa_allocate_exception(8);
  *plVar1 = (long)(PTR_vtable_007e5fd0 + 0x10);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0066fcc4 to 0076fd17 has its CatchHandler @ 0066fa00 */
  __cxa_throw(plVar1,PTR_typeinfo_007e7c38,PTR__bad_array_new_length_007e6140);
}


