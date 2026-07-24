/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e2050
 * Function: FUN_005e2050
 * Signature: undefined FUN_005e2050(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005e2050(int param_1,int param_2,int param_3)

{
  long lVar1;
  LogMessage *pLVar2;
  LogFinisher aLStack_b0 [8];
  LogMessage aLStack_a8 [32];
  LogFinisher aLStack_88 [8];
  LogMessage aLStack_80 [32];
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 != param_2) {
                    /* try { // try from 005e2088 to 006e20af has its CatchHandler @ 005e2618 */
    google::protobuf::internal::LogMessage::LogMessage(aLStack_58,3,&DAT_00698d03,0x3f);
    pLVar2 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,
                        "CHECK failed: (byte_size_before_serialization) == (byte_size_after_serialization): "
                       );
    pLVar2 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (pLVar2,"Protocol message was modified concurrently during serialization.");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar2);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
  }
  if (param_3 != param_1) {
    google::protobuf::internal::LogMessage::LogMessage(aLStack_80,3,&DAT_00698d03,0x41);
    pLVar2 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_80,
                        "CHECK failed: (bytes_produced_by_serialization) == (byte_size_before_serialization): "
                       );
    pLVar2 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (pLVar2,
                        "Byte size calculation and serialization were inconsistent.  This may indicate a bug in protocol buffers or it may be caused by concurrent modification of the message."
                       );
    google::protobuf::internal::LogFinisher::operator=(aLStack_88,pLVar2);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_80);
  }
  google::protobuf::internal::LogMessage::LogMessage(aLStack_a8,3,&DAT_00698d03,0x45);
  pLVar2 = (LogMessage *)
           google::protobuf::internal::LogMessage::operator<<
                     (aLStack_a8,"This shouldn\'t be called if all the sizes are equal.");
  google::protobuf::internal::LogFinisher::operator=(aLStack_b0,pLVar2);
  google::protobuf::internal::LogMessage::~LogMessage(aLStack_a8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 005e2168 to 006e216f has its CatchHandler @ 005e23e0 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


