/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d79e8
 * Function: google::protobuf::internal::Mutex::Mutex
 * Signature: undefined __thiscall Mutex(Mutex * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::Mutex::Mutex() */

int __thiscall google::protobuf::internal::Mutex::Mutex(Mutex *this)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  
  __mutex = operator_new(0x28);
  *(pthread_mutex_t **)this = __mutex;
  iVar1 = pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
  return iVar1;
}


