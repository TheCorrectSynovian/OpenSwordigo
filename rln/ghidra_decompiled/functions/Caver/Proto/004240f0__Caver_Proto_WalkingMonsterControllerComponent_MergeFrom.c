/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004240f0
 * Function: Caver::Proto::WalkingMonsterControllerComponent::MergeFrom
 * Signature: undefined __thiscall MergeFrom(WalkingMonsterControllerComponent * this, WalkingMonsterControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::WalkingMonsterControllerComponent::MergeFrom(Caver::Proto::WalkingMonsterControllerComponent
   const&) */

void __thiscall
Caver::Proto::WalkingMonsterControllerComponent::MergeFrom
          (WalkingMonsterControllerComponent *this,WalkingMonsterControllerComponent *param_1)

{
  WalkingMonsterControllerComponent WVar1;
  long lVar2;
  LogMessage *pLVar3;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x42a4);
                    /* try { // try from 00424180 to 005241d3 has its CatchHandler @ 004240e4 */
    pLVar3 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar3);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
    WVar1 = param_1[0x10];
  }
  else {
    WVar1 = param_1[0x10];
  }
  if (((byte)WVar1 & 1) != 0) {
    *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(uint *)(this + 0x10) = *(uint *)(this + 0x10) | 1;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* try { // try from 00424158 to 0052417f has its CatchHandler @ 0042420c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


