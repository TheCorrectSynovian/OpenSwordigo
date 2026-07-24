/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042ee2c
 * Function: Caver::Proto::TouchableComponent::MergeFrom
 * Signature: undefined __thiscall MergeFrom(TouchableComponent * this, TouchableComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::TouchableComponent::MergeFrom(Caver::Proto::TouchableComponent const&) */

void __thiscall
Caver::Proto::TouchableComponent::MergeFrom(TouchableComponent *this,TouchableComponent *param_1)

{
  TouchableComponent *pTVar1;
  undefined4 uVar2;
  TouchableComponent TVar3;
  long lVar4;
  LogMessage *pLVar5;
  uint uVar6;
  Program *this_00;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  if (param_1 == this) {
                    /* try { // try from 0042eed8 to 0052eeff has its CatchHandler @ 0042f05c */
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x57c2);
    pLVar5 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar5);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
    TVar3 = param_1[0x18];
  }
  else {
    TVar3 = param_1[0x18];
  }
  if (TVar3 != (TouchableComponent)0x0) {
    uVar6 = (uint)(byte)TVar3;
    if (((byte)TVar3 & 1) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0xc);
                    /* catch() { ... } // from try @ 0042ef74 with catch @ 0042ee70
                       catch() { ... } // from try @ 0042f198 with catch @ 0042ee70 */
      *(uint *)(this + 0x18) = *(uint *)(this + 0x18) | 1;
      *(undefined4 *)(this + 0xc) = uVar2;
      uVar6 = *(uint *)(param_1 + 0x18);
    }
    if ((uVar6 >> 1 & 1) != 0) {
      this_00 = *(Program **)(this + 0x10);
      *(uint *)(this + 0x18) = *(uint *)(this + 0x18) | 2;
      if (this_00 == (Program *)0x0) {
        this_00 = operator_new(0x30);
        Program::Program(this_00);
        *(Program **)(this + 0x10) = this_00;
      }
      pTVar1 = *(TouchableComponent **)PTR_default_instance__007e5f98;
      if (*(long *)(param_1 + 0x10) != 0) {
        pTVar1 = param_1;
      }
      Program::MergeFrom(this_00,*(Program **)(pTVar1 + 0x10));
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


