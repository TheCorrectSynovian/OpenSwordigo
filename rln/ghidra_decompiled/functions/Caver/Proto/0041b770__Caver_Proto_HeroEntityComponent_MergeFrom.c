/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041b770
 * Function: Caver::Proto::HeroEntityComponent::MergeFrom
 * Signature: undefined __thiscall MergeFrom(HeroEntityComponent * this, HeroEntityComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::HeroEntityComponent::MergeFrom(Caver::Proto::HeroEntityComponent const&) */

void __thiscall
Caver::Proto::HeroEntityComponent::MergeFrom(HeroEntityComponent *this,HeroEntityComponent *param_1)

{
  HeroEntityComponent *pHVar1;
  HeroEntityComponent HVar2;
  long lVar3;
  LogMessage *pLVar4;
  Program *this_00;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x3666);
    pLVar4 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar4);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
    HVar2 = param_1[0x18];
  }
  else {
    HVar2 = param_1[0x18];
  }
  if (((byte)HVar2 & 1) != 0) {
    this_00 = *(Program **)(this + 0x10);
    *(uint *)(this + 0x18) = *(uint *)(this + 0x18) | 1;
    if (this_00 == (Program *)0x0) {
      this_00 = operator_new(0x30);
      Program::Program(this_00);
      *(Program **)(this + 0x10) = this_00;
    }
    pHVar1 = *(HeroEntityComponent **)PTR_default_instance__007e4d60;
    if (*(long *)(param_1 + 0x10) != 0) {
      pHVar1 = param_1;
    }
    Program::MergeFrom(this_00,*(Program **)(pHVar1 + 0x10));
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


