/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00435758
 * Function: Caver::Proto::ProjectileControllerComponent::MergeFrom
 * Signature: undefined __thiscall MergeFrom(ProjectileControllerComponent * this, ProjectileControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ProjectileControllerComponent::MergeFrom(Caver::Proto::ProjectileControllerComponent
   const&) */

void __thiscall
Caver::Proto::ProjectileControllerComponent::MergeFrom
          (ProjectileControllerComponent *this,ProjectileControllerComponent *param_1)

{
  ProjectileControllerComponent PVar1;
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
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x622f);
    pLVar3 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar3);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
  }
  PVar1 = param_1[0x10];
  uVar4 = (uint)(byte)PVar1;
  if (PVar1 != (ProjectileControllerComponent)0x0) {
    if (((byte)PVar1 & 1) != 0) {
      PVar1 = param_1[0xc];
      *(uint *)(this + 0x10) = *(uint *)(this + 0x10) | 1;
      this[0xc] = PVar1;
      uVar4 = *(uint *)(param_1 + 0x10);
    }
    if ((uVar4 >> 1 & 1) != 0) {
      PVar1 = param_1[0xd];
      *(uint *)(this + 0x10) = *(uint *)(this + 0x10) | 2;
      this[0xd] = PVar1;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


