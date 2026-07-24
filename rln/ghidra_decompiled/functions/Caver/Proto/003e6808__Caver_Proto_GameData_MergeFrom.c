/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e6808
 * Function: Caver::Proto::GameData::MergeFrom
 * Signature: undefined __thiscall MergeFrom(GameData * this, GameData * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GameData::MergeFrom(Caver::Proto::GameData const&) */

void __thiscall Caver::Proto::GameData::MergeFrom(GameData *this,GameData *param_1)

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
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/GameData.pb.cc",0x10ce);
    pLVar2 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar2);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
  }
  google::protobuf::RepeatedPtrField<Caver::Proto::Item>::MergeFrom
            ((RepeatedPtrField<Caver::Proto::Item> *)(this + 0x10),
             (RepeatedPtrField *)(param_1 + 0x10));
  google::protobuf::RepeatedPtrField<Caver::Proto::Skill>::MergeFrom
            ((RepeatedPtrField<Caver::Proto::Skill> *)(this + 0x48),
             (RepeatedPtrField *)(param_1 + 0x48));
  google::protobuf::RepeatedPtrField<Caver::Proto::Quest>::MergeFrom
            ((RepeatedPtrField<Caver::Proto::Quest> *)(this + 0x80),
             (RepeatedPtrField *)(param_1 + 0x80));
  google::protobuf::internal::RepeatedPtrFieldBase::
  MergeFrom<google::protobuf::RepeatedPtrField<Caver::Proto::EntityClass>::TypeHandler>
            ((RepeatedPtrFieldBase *)(this + 0xb8),(RepeatedPtrFieldBase *)(param_1 + 0xb8));
  google::protobuf::internal::RepeatedPtrFieldBase::
  MergeFrom<google::protobuf::RepeatedPtrField<Caver::Proto::GuideTarget>::TypeHandler>
            ((RepeatedPtrFieldBase *)(this + 0xf0),(RepeatedPtrFieldBase *)(param_1 + 0xf0));
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


