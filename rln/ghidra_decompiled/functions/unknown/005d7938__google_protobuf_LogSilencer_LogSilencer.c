/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d7938
 * Function: google::protobuf::LogSilencer::LogSilencer
 * Signature: undefined __thiscall LogSilencer(LogSilencer * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::LogSilencer::LogSilencer() */

void __thiscall google::protobuf::LogSilencer::LogSilencer(LogSilencer *this)

{
  Mutex *this_00;
  
                    /* try { // try from 005d794c to 006d794f has its CatchHandler @ 005d7af8 */
  pthread_once((pthread_once_t *)PTR_log_silencer_count_init__007e6800,
               (__init_routine *)PTR_InitLogSilencerCount_007e5938);
  this_00 = DAT_007ea058;
  internal::Mutex::Lock(DAT_007ea058);
  DAT_007ea060 = DAT_007ea060 + 1;
  internal::Mutex::Unlock(this_00);
  return;
}


