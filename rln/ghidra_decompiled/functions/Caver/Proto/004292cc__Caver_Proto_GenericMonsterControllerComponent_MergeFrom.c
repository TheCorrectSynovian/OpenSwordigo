/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004292cc
 * Function: Caver::Proto::GenericMonsterControllerComponent::MergeFrom
 * Signature: undefined __thiscall MergeFrom(GenericMonsterControllerComponent * this, GenericMonsterControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GenericMonsterControllerComponent::MergeFrom(Caver::Proto::GenericMonsterControllerComponent
   const&) */

void __thiscall
Caver::Proto::GenericMonsterControllerComponent::MergeFrom
          (GenericMonsterControllerComponent *this,GenericMonsterControllerComponent *param_1)

{
  GenericMonsterControllerComponent GVar1;
  long lVar2;
  LogMessage *pLVar3;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
                    /* try { // try from 004292d0 to 005298fb has its CatchHandler @ 00428f54 */
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x4d7c);
    pLVar3 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar3);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
    GVar1 = param_1[0x10];
  }
  else {
    GVar1 = param_1[0x10];
  }
  if (((byte)GVar1 & 1) != 0) {
    *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(uint *)(this + 0x10) = *(uint *)(this + 0x10) | 1;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


