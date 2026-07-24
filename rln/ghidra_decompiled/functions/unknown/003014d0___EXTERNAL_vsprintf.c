/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003014d0
 * Function: <EXTERNAL>::vsprintf
 * Signature: int vsprintf(char * __s, char * __format, __gnuc_va_list __arg)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsprintf(char *__s,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vsprintf_007e3298)((int)__s);
  return iVar1;
}


