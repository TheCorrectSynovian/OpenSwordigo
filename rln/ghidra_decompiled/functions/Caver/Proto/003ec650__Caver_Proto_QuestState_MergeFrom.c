/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ec650
 * Function: Caver::Proto::QuestState::MergeFrom
 * Signature: undefined __thiscall MergeFrom(QuestState * this, QuestState * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::QuestState::MergeFrom(Caver::Proto::QuestState const&) */

void __thiscall Caver::Proto::QuestState::MergeFrom(QuestState *this,QuestState *param_1)

{
  QuestState QVar1;
  long lVar2;
  undefined *puVar3;
  LogMessage *pLVar4;
  long *plVar5;
  uint uVar6;
  undefined8 uVar7;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/GameState.pb.cc",0x4d7);
    pLVar4 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar4);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
  }
  puVar3 = PTR__default_quest_name__007e6f40;
  QVar1 = param_1[0x1c];
  uVar6 = (uint)(byte)QVar1;
  if (QVar1 != (QuestState)0x0) {
    if (((byte)QVar1 & 1) != 0) {
      plVar5 = *(long **)(this + 0x10);
      uVar7 = *(undefined8 *)(param_1 + 0x10);
      *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 1;
      if (plVar5 == (long *)puVar3) {
        plVar5 = operator_new(8);
        *plVar5 = (long)(PTR_DAT_007e5de8 + 0x18);
        *(long **)(this + 0x10) = plVar5;
      }
      FUN_0066a6a8(plVar5,uVar7);
      uVar6 = *(uint *)(param_1 + 0x1c);
    }
    if ((uVar6 >> 1 & 1) != 0) {
      QVar1 = param_1[0x18];
      *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 2;
      this[0x18] = QVar1;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


