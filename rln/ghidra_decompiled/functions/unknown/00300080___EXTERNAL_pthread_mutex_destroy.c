/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00300080
 * Function: <EXTERNAL>::pthread_mutex_destroy
 * Signature: int pthread_mutex_destroy(pthread_mutex_t * __mutex)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_destroy_007e2870)((int)__mutex);
  return iVar1;
}


