/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066fcfc
 * Function: FUN_0066fcfc
 * Signature: undefined FUN_0066fcfc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0066fcfc(long *param_1)

{
                    /* try { // try from 0066fd18 to 0076fd1b has its CatchHandler @ 0066fd68 */
  if ((param_1 != (long *)0x0) && (__cxa_begin_catch(), *param_1 + 0xb8b1aabcbcd4d500U < 2)) {
                    /* WARNING: Subroutine does not return */
    __cxxabiv1::__terminate((_func_void *)param_1[-7]);
  }
                    /* WARNING: Subroutine does not return */
  std::terminate();
}


