/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 002ffa70
 * Function: <EXTERNAL>::pthread_mutex_lock
 * Signature: int pthread_mutex_lock(pthread_mutex_t * __mutex)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_007e2568)((int)__mutex);
  return iVar1;
}


