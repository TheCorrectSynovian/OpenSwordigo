/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061e058
 * Function: __cxxabiv1::__unexpected
 * Signature: undefined __cdecl __unexpected(_func_void * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* __cxxabiv1::__unexpected(void (*)()) */

void __cxxabiv1::__unexpected(_func_void *param_1)

{
  (*param_1)();
                    /* WARNING: Subroutine does not return */
  std::terminate();
}


