/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061d4d0
 * Function: __cxa_get_globals_fast
 * Signature: undefined __cxa_get_globals_fast(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined * __cxa_get_globals_fast(void)

{
  undefined *puVar1;
  
  if (DAT_007fbd0c == '\0') {
    return &DAT_007fbd10;
  }
                    /* try { // try from 0061d4fc to 0071d523 has its CatchHandler @ 0061db70 */
  puVar1 = pthread_getspecific(DAT_007fbd08);
  return puVar1;
}


