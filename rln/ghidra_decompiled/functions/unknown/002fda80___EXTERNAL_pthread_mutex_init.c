/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 002fda80
 * Function: <EXTERNAL>::pthread_mutex_init
 * Signature: int pthread_mutex_init(pthread_mutex_t * __mutex, pthread_mutexattr_t * __mutexattr)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_init_007e1570)((int)__mutex);
  return iVar1;
}


