/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003cdd10
 * Function: Caver::Proto::DateTime::MergeFrom
 * Signature: undefined __thiscall MergeFrom(DateTime * this, DateTime * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::DateTime::MergeFrom(Caver::Proto::DateTime const&) */

void __thiscall Caver::Proto::DateTime::MergeFrom(DateTime *this,DateTime *param_1)

{
  DateTime DVar1;
  long lVar2;
  LogMessage *pLVar3;
  undefined8 uVar4;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Common.pb.cc",0xf6);
    pLVar3 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar3);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
    DVar1 = param_1[0x18];
  }
  else {
    DVar1 = param_1[0x18];
  }
  if (((byte)DVar1 & 1) != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    *(uint *)(this + 0x18) = *(uint *)(this + 0x18) | 1;
    *(undefined8 *)(this + 0x10) = uVar4;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


