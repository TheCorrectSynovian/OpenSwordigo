/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00414c20
 * Function: Caver::Proto::BushControllerComponent::MergeFrom
 * Signature: undefined __thiscall MergeFrom(BushControllerComponent * this, BushControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::BushControllerComponent::MergeFrom(Caver::Proto::BushControllerComponent const&) */

void __thiscall
Caver::Proto::BushControllerComponent::MergeFrom
          (BushControllerComponent *this,BushControllerComponent *param_1)

{
  undefined4 uVar1;
  BushControllerComponent BVar2;
  long lVar3;
  LogMessage *pLVar4;
  uint uVar5;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x29bb);
    pLVar4 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar4);
                    /* try { // try from 00414c88 to 00514dbf has its CatchHandler @ 00414c88
                       catch(type#1 @ 00000000) { ... } // from try @ 00414c88 with catch @ 00414c88
                       catch(type#1 @ 00000000) { ... } // from try @ 00414dcc with catch @ 00414c88
                       catch(type#1 @ 00000000) { ... } // from try @ 00414ec8 with catch @ 00414c88
                        */
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
  }
  BVar2 = param_1[0x18];
  uVar5 = (uint)(byte)BVar2;
  if (BVar2 == (BushControllerComponent)0x0) goto LAB_00414cb0;
  if (((byte)BVar2 & 1) == 0) {
    if (((byte)BVar2 >> 1 & 1) != 0) {
LAB_00414cf0:
      uVar1 = *(undefined4 *)(param_1 + 0x10);
      *(uint *)(this + 0x18) = *(uint *)(this + 0x18) | 2;
      *(undefined4 *)(this + 0x10) = uVar1;
      uVar5 = *(uint *)(param_1 + 0x18);
    }
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0xc);
    *(uint *)(this + 0x18) = *(uint *)(this + 0x18) | 1;
    *(undefined4 *)(this + 0xc) = uVar1;
    uVar5 = *(uint *)(param_1 + 0x18);
    if ((uVar5 >> 1 & 1) != 0) goto LAB_00414cf0;
  }
  if ((uVar5 >> 2 & 1) != 0) {
    *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(uint *)(this + 0x18) = *(uint *)(this + 0x18) | 4;
  }
LAB_00414cb0:
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


