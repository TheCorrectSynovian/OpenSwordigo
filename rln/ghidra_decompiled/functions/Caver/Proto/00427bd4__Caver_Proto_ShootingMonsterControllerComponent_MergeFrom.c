/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00427bd4
 * Function: Caver::Proto::ShootingMonsterControllerComponent::MergeFrom
 * Signature: undefined __thiscall MergeFrom(ShootingMonsterControllerComponent * this, ShootingMonsterControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ShootingMonsterControllerComponent::MergeFrom(Caver::Proto::ShootingMonsterControllerComponent
   const&) */

void __thiscall
Caver::Proto::ShootingMonsterControllerComponent::MergeFrom
          (ShootingMonsterControllerComponent *this,ShootingMonsterControllerComponent *param_1)

{
  undefined4 uVar1;
  ShootingMonsterControllerComponent SVar2;
  long lVar3;
  LogMessage *pLVar4;
  uint uVar5;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
                    /* catch() { ... } // from try @ 00427194 with catch @ 00427c00 */
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x4a60);
    pLVar4 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar4);
                    /* catch() { ... } // from try @ 00427170 with catch @ 00427c38 */
                    /* catch() { ... } // from try @ 00427114 with catch @ 00427c3c */
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
  }
  SVar2 = param_1[0x14];
  uVar5 = (uint)(byte)SVar2;
  if (SVar2 != (ShootingMonsterControllerComponent)0x0) {
    if (((byte)SVar2 & 1) != 0) {
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
                    /* catch() { ... } // from try @ 004270e4 with catch @ 00427c98 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


