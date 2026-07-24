/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 002fbb50
 * Function: <EXTERNAL>::pthread_mutex_unlock
 * Signature: int pthread_mutex_unlock(pthread_mutex_t * __mutex)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_007e05d8)((int)__mutex);
  return iVar1;
}


