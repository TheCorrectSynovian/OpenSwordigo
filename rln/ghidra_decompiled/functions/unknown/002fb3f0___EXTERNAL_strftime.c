/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 002fb3f0
 * Function: <EXTERNAL>::strftime
 * Signature: size_t strftime(char * __s, size_t __maxsize, char * __format, tm * __tp)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strftime(char *__s,size_t __maxsize,char *__format,tm *__tp)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strftime_007e0228)();
  return sVar1;
}


