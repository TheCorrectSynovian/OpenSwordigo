/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d77b0
 * Function: google::protobuf::internal::LogMessage::LogMessage
 * Signature: undefined __thiscall LogMessage(LogMessage * this, LogLevel param_1, char * param_2, int param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel, char const*, int)
    */

void __thiscall
google::protobuf::internal::LogMessage::LogMessage
          (LogMessage *this,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
                    /* try { // try from 005d77b0 to 006d77bb has its CatchHandler @ 005d7848 */
  *(undefined4 *)this = param_2;
  *(undefined8 *)(this + 8) = param_3;
  *(undefined4 *)(this + 0x10) = param_4;
  *(undefined **)(this + 0x18) = PTR_DAT_007e5de8 + 0x18;
  return;
}


