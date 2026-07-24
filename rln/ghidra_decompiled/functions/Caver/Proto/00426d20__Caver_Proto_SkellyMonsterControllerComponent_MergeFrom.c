/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00426d20
 * Function: Caver::Proto::SkellyMonsterControllerComponent::MergeFrom
 * Signature: undefined __thiscall MergeFrom(SkellyMonsterControllerComponent * this, SkellyMonsterControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SkellyMonsterControllerComponent::MergeFrom(Caver::Proto::SkellyMonsterControllerComponent
   const&) */

void __thiscall
Caver::Proto::SkellyMonsterControllerComponent::MergeFrom
          (SkellyMonsterControllerComponent *this,SkellyMonsterControllerComponent *param_1)

{
  undefined4 uVar1;
  SkellyMonsterControllerComponent SVar2;
  long lVar3;
  LogMessage *pLVar4;
  uint uVar5;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (param_1 == this) {
                    /* try { // try from 00426d64 to 00526e17 has its CatchHandler @ 00426d64
                       catch() { ... } // from try @ 00426d64 with catch @ 00426d64
                       catch() { ... } // from try @ 00426e1c with catch @ 00426d64
                       catch() { ... } // from try @ 00426e80 with catch @ 00426d64 */
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x48cb);
    pLVar4 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar4);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
  }
  SVar2 = param_1[0x14];
  uVar5 = (uint)(byte)SVar2;
  if (SVar2 != (SkellyMonsterControllerComponent)0x0) {
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
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


