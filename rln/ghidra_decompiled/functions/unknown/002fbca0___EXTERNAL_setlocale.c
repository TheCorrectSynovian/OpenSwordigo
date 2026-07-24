/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 002fbca0
 * Function: <EXTERNAL>::setlocale
 * Signature: char * setlocale(int __category, char * __locale)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * setlocale(int __category,char *__locale)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_setlocale_007e0680)(__category);
  return pcVar1;
}


