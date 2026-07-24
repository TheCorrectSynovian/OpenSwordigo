/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d7e58
 * Function: google::protobuf::internal::InitShutdownFunctions
 * Signature: undefined __cdecl InitShutdownFunctions(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::InitShutdownFunctions() */

int google::protobuf::internal::InitShutdownFunctions(void)

{
  int iVar1;
  undefined8 *puVar2;
  pthread_mutex_t *__mutex;
  
                    /* try { // try from 005d7e64 to 006d7f6f has its CatchHandler @ 005d7c60 */
  puVar2 = operator_new(0x18);
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  *(undefined8 **)PTR_shutdown_functions_007e7ad8 = puVar2;
  puVar2 = operator_new(8);
  __mutex = operator_new(0x28);
  *puVar2 = __mutex;
  iVar1 = pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
  *(undefined8 **)PTR_shutdown_functions_mutex_007e6de8 = puVar2;
  return iVar1;
}


