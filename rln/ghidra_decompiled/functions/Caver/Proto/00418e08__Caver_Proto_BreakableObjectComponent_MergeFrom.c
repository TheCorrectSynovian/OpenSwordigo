/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00418e08
 * Function: Caver::Proto::BreakableObjectComponent::MergeFrom
 * Signature: undefined __thiscall MergeFrom(BreakableObjectComponent * this, BreakableObjectComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::BreakableObjectComponent::MergeFrom(Caver::Proto::BreakableObjectComponent const&)
    */

void __thiscall
Caver::Proto::BreakableObjectComponent::MergeFrom
          (BreakableObjectComponent *this,BreakableObjectComponent *param_1)

{
  BreakableObjectComponent *pBVar1;
  undefined4 uVar2;
  BreakableObjectComponent BVar3;
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
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x31b1);
    pLVar5 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar5);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
    BVar3 = param_1[0x20];
  }
  else {
    BVar3 = param_1[0x20];
  }
  if (BVar3 == (BreakableObjectComponent)0x0) goto LAB_00418f3c;
  uVar6 = (uint)(byte)BVar3;
  if (((byte)BVar3 & 1) == 0) {
    if (((byte)BVar3 >> 1 & 1) != 0) {
LAB_00418eb8:
      uVar2 = *(undefined4 *)(param_1 + 0x10);
      *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 2;
      *(undefined4 *)(this + 0x10) = uVar2;
      uVar6 = *(uint *)(param_1 + 0x20);
    }
  }
  else {
    BVar3 = param_1[0xc];
    *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 1;
    this[0xc] = BVar3;
    uVar6 = *(uint *)(param_1 + 0x20);
    if ((uVar6 >> 1 & 1) != 0) goto LAB_00418eb8;
  }
  if ((uVar6 >> 2 & 1) != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x14);
    *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 4;
    *(undefined4 *)(this + 0x14) = uVar2;
    uVar6 = *(uint *)(param_1 + 0x20);
  }
  if ((uVar6 >> 3 & 1) != 0) {
    this_00 = *(Program **)(this + 0x18);
    *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 8;
    if (this_00 == (Program *)0x0) {
      this_00 = operator_new(0x30);
      Program::Program(this_00);
      *(Program **)(this + 0x18) = this_00;
    }
    pBVar1 = *(BreakableObjectComponent **)PTR_default_instance__007e6f48;
    if (*(long *)(param_1 + 0x18) != 0) {
      pBVar1 = param_1;
    }
    Program::MergeFrom(this_00,*(Program **)(pBVar1 + 0x18));
  }
LAB_00418f3c:
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


