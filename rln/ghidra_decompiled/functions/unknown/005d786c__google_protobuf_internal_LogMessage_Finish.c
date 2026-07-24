/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d786c
 * Function: google::protobuf::internal::LogMessage::Finish
 * Signature: undefined __thiscall Finish(LogMessage * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::LogMessage::Finish() */

void __thiscall google::protobuf::internal::LogMessage::Finish(LogMessage *this)

{
  Mutex *this_00;
  int iVar1;
  undefined4 uVar2;
  
                    /* try { // try from 005d786c to 006d78eb has its CatchHandler @ 005d78f4 */
  if (*(int *)this == 3) {
    uVar2 = 3;
  }
  else {
                    /* catch() { ... } // from try @ 005d77a4 with catch @ 005d78a0
                       catch() { ... } // from try @ 005d77dc with catch @ 005d78a0 */
    pthread_once((pthread_once_t *)PTR_log_silencer_count_init__007e6800,
                 (__init_routine *)PTR_InitLogSilencerCount_007e5938);
    this_00 = DAT_007ea058;
    Mutex::Lock(DAT_007ea058);
    iVar1 = DAT_007ea060;
    Mutex::Unlock(this_00);
    if (0 < iVar1) goto LAB_005d78ec;
    uVar2 = *(undefined4 *)this;
  }
  (*(code *)PTR_DefaultLogHandler_007e8900)
            (uVar2,*(undefined8 *)(this + 8),*(undefined4 *)(this + 0x10),this + 0x18);
LAB_005d78ec:
                    /* try { // try from 005d78ec to 006d78f7 has its CatchHandler @ 005d7714 */
                    /* catch() { ... } // from try @ 005d786c with catch @ 005d78f4 */
  if (*(int *)this != 3) {
                    /* try { // try from 005d78f8 to 006d794b has its CatchHandler @ 005d78f8
                       catch() { ... } // from try @ 005d78f8 with catch @ 005d78f8
                       catch() { ... } // from try @ 005d79d8 with catch @ 005d78f8
                       catch() { ... } // from try @ 005d7ab4 with catch @ 005d78f8 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


