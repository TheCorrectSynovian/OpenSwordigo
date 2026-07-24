/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 002f4800
 * Function: <EXTERNAL>::strpbrk
 * Signature: char * strpbrk(char * __s, char * __accept)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strpbrk(char *__s,char *__accept)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strpbrk_007dcc30)();
  return pcVar1;
}


