/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042676c
 * Function: Caver::Proto::LeapingMonsterControllerComponent::MergeFrom
 * Signature: undefined __thiscall MergeFrom(LeapingMonsterControllerComponent * this, LeapingMonsterControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::LeapingMonsterControllerComponent::MergeFrom(Caver::Proto::LeapingMonsterControllerComponent
   const&) */

void __thiscall
Caver::Proto::LeapingMonsterControllerComponent::MergeFrom
          (LeapingMonsterControllerComponent *this,LeapingMonsterControllerComponent *param_1)

{
  undefined4 uVar1;
  LeapingMonsterControllerComponent LVar2;
  long lVar3;
  LogMessage *pLVar4;
  uint uVar5;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
                    /* try { // try from 00426774 to 00526777 has its CatchHandler @ 00426834 */
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 00426798 to 005267bf has its CatchHandler @ 00426824 */
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x4804);
                    /* try { // try from 004267c0 to 00526857 has its CatchHandler @ 0042675c */
    pLVar4 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar4);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
  }
  LVar2 = param_1[0x14];
  uVar5 = (uint)(byte)LVar2;
  if (LVar2 != (LeapingMonsterControllerComponent)0x0) {
    if (((byte)LVar2 & 1) != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0xc);
      *(uint *)(this + 0x14) = *(uint *)(this + 0x14) | 1;
      *(undefined4 *)(this + 0xc) = uVar1;
      uVar5 = *(uint *)(param_1 + 0x14);
    }
    if ((uVar5 >> 1 & 1) != 0) {
      *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
      *(uint *)(this + 0x14) = *(uint *)(this + 0x14) | 2;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00426798 with catch @ 00426824
                        */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00426774 with catch @ 00426834
                        */
  __stack_chk_fail();
}


