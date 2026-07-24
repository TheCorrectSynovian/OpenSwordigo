/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ec00c
 * Function: Caver::Proto::StateProperties::MergeFrom
 * Signature: undefined __thiscall MergeFrom(StateProperties * this, StateProperties * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::StateProperties::MergeFrom(Caver::Proto::StateProperties const&) */

void __thiscall
Caver::Proto::StateProperties::MergeFrom(StateProperties *this,StateProperties *param_1)

{
  long lVar1;
  LogMessage *pLVar2;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/GameState.pb.cc",0x419);
    pLVar2 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar2);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
  }
  google::protobuf::RepeatedPtrField<std::string>::MergeFrom
            ((RepeatedPtrField<std::string> *)(this + 0x10),(RepeatedPtrField *)(param_1 + 0x10));
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


