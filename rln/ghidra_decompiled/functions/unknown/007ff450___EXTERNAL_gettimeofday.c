/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 007ff450
 * Function: <EXTERNAL>::gettimeofday
 * Signature: int gettimeofday(timeval * __tv, __timezone_ptr_t __tz)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


