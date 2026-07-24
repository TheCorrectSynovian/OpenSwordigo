/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d71e4
 * Function: google::protobuf::internal::LogFinisher::operator=
 * Signature: undefined __thiscall operator=(LogFinisher * this, LogMessage * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::LogFinisher::TEMPNAMEPLACEHOLDERVALUE(google::protobuf::internal::LogMessage&)
    */

void __thiscall
google::protobuf::internal::LogFinisher::operator=(LogFinisher *this,LogMessage *param_1)

{
  Mutex *this_00;
  int iVar1;
  undefined4 uVar2;
  
                    /* try { // try from 005d71f8 to 006d721f has its CatchHandler @ 005d7228 */
  if (*(int *)param_1 == 3) {
    uVar2 = 3;
  }
  else {
    pthread_once((pthread_once_t *)PTR_log_silencer_count_init__007e6800,
                 (__init_routine *)PTR_InitLogSilencerCount_007e5938);
    this_00 = DAT_007ea058;
                    /* try { // try from 005d7220 to 006d722b has its CatchHandler @ 005d6a38 */
                    /* catch() { ... } // from try @ 005d71f8 with catch @ 005d7228 */
    Mutex::Lock(DAT_007ea058);
    iVar1 = DAT_007ea060;
    Mutex::Unlock(this_00);
    if (0 < iVar1) goto LAB_005d7264;
    uVar2 = *(undefined4 *)param_1;
  }
  (*(code *)PTR_DefaultLogHandler_007e8900)
            (uVar2,*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10),param_1 + 0x18);
LAB_005d7264:
  if (*(int *)param_1 != 3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


