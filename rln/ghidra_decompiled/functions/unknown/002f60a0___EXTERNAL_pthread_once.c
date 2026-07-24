/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 002f60a0
 * Function: <EXTERNAL>::pthread_once
 * Signature: int pthread_once(pthread_once_t * __once_control, __init_routine * __init_routine)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_once(pthread_once_t *__once_control,__init_routine *__init_routine)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_once_007dd880)((int)__once_control);
  return iVar1;
}


