/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d02ac
 * Function: Caver::Proto::Polygon::MergeFrom
 * Signature: undefined __thiscall MergeFrom(Polygon * this, Polygon * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Polygon::MergeFrom(Caver::Proto::Polygon const&) */

void __thiscall Caver::Proto::Polygon::MergeFrom(Polygon *this,Polygon *param_1)

{
  Polygon PVar1;
  long lVar2;
  LogMessage *pLVar3;
  uint uVar4;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Common.pb.cc",0x66c);
    pLVar3 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar3);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
  }
  google::protobuf::RepeatedPtrField<Caver::Proto::Vector2>::MergeFrom
            ((RepeatedPtrField<Caver::Proto::Vector2> *)(this + 0x10),
             (RepeatedPtrField *)(param_1 + 0x10));
  uVar4 = *(uint *)(param_1 + 0x4c);
  if ((uVar4 & 0x1fe) != 0) {
    if ((uVar4 >> 1 & 1) != 0) {
      PVar1 = param_1[0x48];
      *(uint *)(this + 0x4c) = *(uint *)(this + 0x4c) | 2;
      this[0x48] = PVar1;
      uVar4 = *(uint *)(param_1 + 0x4c);
    }
    if ((uVar4 >> 2 & 1) != 0) {
      PVar1 = param_1[0x49];
      *(uint *)(this + 0x4c) = *(uint *)(this + 0x4c) | 4;
      this[0x49] = PVar1;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


