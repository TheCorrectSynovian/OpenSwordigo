/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d72e0
 * Function: google::protobuf::internal::DeleteLogSilencerCount
 * Signature: undefined __cdecl DeleteLogSilencerCount(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::DeleteLogSilencerCount() */

void google::protobuf::internal::DeleteLogSilencerCount(void)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  puVar1 = DAT_007ea058;
                    /* try { // try from 005d72e4 to 006d732b has its CatchHandler @ 005d72e4
                       catch() { ... } // from try @ 005d72e4 with catch @ 005d72e4
                       catch() { ... } // from try @ 005d7360 with catch @ 005d72e4
                       catch() { ... } // from try @ 005d744c with catch @ 005d72e4 */
  if (DAT_007ea058 != (undefined8 *)0x0) {
    pthread_mutex_destroy((pthread_mutex_t *)*DAT_007ea058);
    pvVar2 = (void *)*puVar1;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
    operator_delete(puVar1);
  }
  DAT_007ea058 = (undefined8 *)0x0;
  return;
}


