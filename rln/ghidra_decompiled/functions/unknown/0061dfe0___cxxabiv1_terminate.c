/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061dfe0
 * Function: __cxxabiv1::__terminate
 * Signature: noreturn undefined __cdecl __terminate(_func_void * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* __cxxabiv1::__terminate(void (*)()) */

void __cxxabiv1::__terminate(_func_void *param_1)

{
  (*param_1)();
                    /* WARNING: Subroutine does not return */
  abort();
}


