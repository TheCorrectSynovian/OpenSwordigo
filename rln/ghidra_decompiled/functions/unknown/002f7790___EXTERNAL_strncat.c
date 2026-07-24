/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 002f7790
 * Function: <EXTERNAL>::strncat
 * Signature: char * strncat(char * __dest, char * __src, size_t __n)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncat(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncat_007de3f8)();
  return pcVar1;
}


