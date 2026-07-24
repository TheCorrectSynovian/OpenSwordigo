/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d7460
 * Function: google::protobuf::internal::InitLogSilencerCountOnce
 * Signature: undefined __cdecl InitLogSilencerCountOnce(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::InitLogSilencerCountOnce() */

int google::protobuf::internal::InitLogSilencerCountOnce(void)

{
  int iVar1;
  
                    /* catch() { ... } // from try @ 005d7444 with catch @ 005d746c */
  iVar1 = pthread_once((pthread_once_t *)PTR_log_silencer_count_init__007e6800,
                       (__init_routine *)PTR_InitLogSilencerCount_007e5938);
  return iVar1;
}


