/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 002f6bb0
 * Function: <EXTERNAL>::strxfrm
 * Signature: size_t strxfrm(char * __dest, char * __src, size_t __n)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strxfrm(char *__dest,char *__src,size_t __n)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strxfrm_007dde08)();
  return sVar1;
}


