/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00665294
 * Function: FUN_00665294
 * Signature: noreturn undefined FUN_00665294(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00665294(void)

{
  long *plVar1;
  
                    /* try { // try from 0066529c to 007652a3 has its CatchHandler @ 00665310 */
  plVar1 = (long *)__cxa_allocate_exception(8);
                    /* try { // try from 006652a4 to 0076537f has its CatchHandler @ 00664f84 */
  *plVar1 = (long)(PTR_vtable_007e6088 + 0x10);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(plVar1,PTR_typeinfo_007e5020,PTR__bad_alloc_007e7b90);
}


