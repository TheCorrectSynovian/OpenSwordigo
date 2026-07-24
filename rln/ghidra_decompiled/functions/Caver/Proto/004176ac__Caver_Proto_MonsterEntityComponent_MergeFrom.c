/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004176ac
 * Function: Caver::Proto::MonsterEntityComponent::MergeFrom
 * Signature: undefined __thiscall MergeFrom(MonsterEntityComponent * this, MonsterEntityComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MonsterEntityComponent::MergeFrom(Caver::Proto::MonsterEntityComponent const&) */

void __thiscall
Caver::Proto::MonsterEntityComponent::MergeFrom
          (MonsterEntityComponent *this,MonsterEntityComponent *param_1)

{
  MonsterEntityComponent *pMVar1;
  MonsterEntityComponent MVar2;
  long lVar3;
  LogMessage *pLVar4;
  uint uVar5;
  Program *pPVar6;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x2f12);
    pLVar4 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar4);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
    MVar2 = param_1[0x24];
  }
  else {
    MVar2 = param_1[0x24];
  }
  if (MVar2 != (MonsterEntityComponent)0x0) {
    uVar5 = (uint)(byte)MVar2;
    if (((byte)MVar2 & 1) != 0) {
      pPVar6 = *(Program **)(this + 0x10);
      *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 1;
      if (pPVar6 == (Program *)0x0) {
        pPVar6 = operator_new(0x30);
        Program::Program(pPVar6);
        *(Program **)(this + 0x10) = pPVar6;
      }
      pMVar1 = *(MonsterEntityComponent **)PTR_default_instance__007e4960;
      if (*(long *)(param_1 + 0x10) != 0) {
        pMVar1 = param_1;
      }
      Program::MergeFrom(pPVar6,*(Program **)(pMVar1 + 0x10));
      uVar5 = *(uint *)(param_1 + 0x24);
    }
    if ((uVar5 >> 1 & 1) != 0) {
      pPVar6 = *(Program **)(this + 0x18);
      *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 2;
      if (pPVar6 == (Program *)0x0) {
        pPVar6 = operator_new(0x30);
        Program::Program(pPVar6);
        *(Program **)(this + 0x18) = pPVar6;
      }
      pMVar1 = *(MonsterEntityComponent **)PTR_default_instance__007e4960;
      if (*(long *)(param_1 + 0x18) != 0) {
        pMVar1 = param_1;
      }
      Program::MergeFrom(pPVar6,*(Program **)(pMVar1 + 0x18));
      uVar5 = *(uint *)(param_1 + 0x24);
    }
    if ((uVar5 >> 2 & 1) != 0) {
      MVar2 = param_1[0x20];
      *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 4;
      this[0x20] = MVar2;
      uVar5 = *(uint *)(param_1 + 0x24);
    }
    if ((uVar5 >> 3 & 1) != 0) {
      MVar2 = param_1[0x21];
      *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 8;
      this[0x21] = MVar2;
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


