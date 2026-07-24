/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 002fc310
 * Function: <EXTERNAL>::ftell
 * Signature: long ftell(FILE * __stream)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long ftell(FILE *__stream)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_ftell_007e09b8)();
  return lVar1;
}


