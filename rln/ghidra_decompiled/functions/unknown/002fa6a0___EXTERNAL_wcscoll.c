/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 002fa6a0
 * Function: <EXTERNAL>::wcscoll
 * Signature: int wcscoll(wchar_t * __s1, wchar_t * __s2)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int wcscoll(wchar_t *__s1,wchar_t *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_wcscoll_007dfb80)((int)__s1);
  return iVar1;
}


