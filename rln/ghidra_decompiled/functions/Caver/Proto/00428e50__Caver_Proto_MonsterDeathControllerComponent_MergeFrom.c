/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00428e50
 * Function: Caver::Proto::MonsterDeathControllerComponent::MergeFrom
 * Signature: undefined __thiscall MergeFrom(MonsterDeathControllerComponent * this, MonsterDeathControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MonsterDeathControllerComponent::MergeFrom(Caver::Proto::MonsterDeathControllerComponent
   const&) */

void __thiscall
Caver::Proto::MonsterDeathControllerComponent::MergeFrom
          (MonsterDeathControllerComponent *this,MonsterDeathControllerComponent *param_1)

{
  MonsterDeathControllerComponent MVar1;
  long lVar2;
  LogMessage *pLVar3;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (param_1 == this) {
                    /* catch() { ... } // from try @ 00428e34 with catch @ 00428ec8 */
                    /* catch() { ... } // from try @ 00428df4 with catch @ 00428ecc */
                    /* catch() { ... } // from try @ 00428db4 with catch @ 00428ed0 */
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x4cd8);
    pLVar3 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
                    /* catch() { ... } // from try @ 00428d18 with catch @ 00428ee4 */
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar3);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
    MVar1 = param_1[0x10];
  }
  else {
    MVar1 = param_1[0x10];
  }
  if (((byte)MVar1 & 1) != 0) {
    *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(uint *)(this + 0x10) = *(uint *)(this + 0x10) | 1;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


