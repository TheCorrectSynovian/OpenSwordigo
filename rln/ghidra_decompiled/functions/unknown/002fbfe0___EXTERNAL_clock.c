/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 002fbfe0
 * Function: <EXTERNAL>::clock
 * Signature: clock_t clock(void)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

clock_t clock(void)

{
  clock_t cVar1;
  
  cVar1 = (*(code *)PTR_clock_007e0820)();
  return cVar1;
}


