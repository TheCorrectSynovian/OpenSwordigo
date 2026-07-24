/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042367c
 * Function: Caver::Proto::ParticleFieldComponent::MergeFrom
 * Signature: undefined __thiscall MergeFrom(ParticleFieldComponent * this, ParticleFieldComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ParticleFieldComponent::MergeFrom(Caver::Proto::ParticleFieldComponent const&) */

void __thiscall
Caver::Proto::ParticleFieldComponent::MergeFrom
          (ParticleFieldComponent *this,ParticleFieldComponent *param_1)

{
  long lVar1;
  LogMessage *pLVar2;
  LogFinisher aLStack_50 [8];
  LogMessage aLStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_48,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x40fc);
    pLVar2 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_48,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_50,pLVar2);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_48);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


