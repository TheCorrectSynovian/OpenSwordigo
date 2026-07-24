/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061d380
 * Function: std::uncaught_exception
 * Signature: undefined uncaught_exception(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::uncaught_exception() */

bool std::uncaught_exception(void)

{
  long lVar1;
  
  lVar1 = __cxa_get_globals();
                    /* try { // try from 0061d398 to 0071d39f has its CatchHandler @ 0061daf0 */
  return *(int *)(lVar1 + 8) != 0;
}


