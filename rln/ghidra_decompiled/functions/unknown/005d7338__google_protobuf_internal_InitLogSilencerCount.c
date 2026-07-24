/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d7338
 * Function: google::protobuf::internal::InitLogSilencerCount
 * Signature: undefined __cdecl InitLogSilencerCount(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::InitLogSilencerCount() */

void google::protobuf::internal::InitLogSilencerCount(void)

{
  undefined8 *puVar1;
  pthread_mutex_t *__mutex;
  
  puVar1 = operator_new(8);
  __mutex = operator_new(0x28);
  *puVar1 = __mutex;
                    /* try { // try from 005d7360 to 006d7443 has its CatchHandler @ 005d72e4 */
  pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
  DAT_007ea058 = puVar1;
  OnShutdown((_func_void *)PTR_DeleteLogSilencerCount_007e4ca8);
  return;
}


