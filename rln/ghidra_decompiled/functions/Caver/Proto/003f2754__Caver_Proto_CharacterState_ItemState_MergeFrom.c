/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003f2754
 * Function: Caver::Proto::CharacterState_ItemState::MergeFrom
 * Signature: undefined __thiscall MergeFrom(CharacterState_ItemState * this, CharacterState_ItemState * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::CharacterState_ItemState::MergeFrom(Caver::Proto::CharacterState_ItemState const&)
    */

void __thiscall
Caver::Proto::CharacterState_ItemState::MergeFrom
          (CharacterState_ItemState *this,CharacterState_ItemState *param_1)

{
  CharacterState_ItemState CVar1;
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
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/GameState.pb.cc",0xb0c);
    pLVar4 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar4);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
  }
  puVar3 = PTR__default_name__007e5e50;
  CVar1 = param_1[0x1c];
  uVar6 = (uint)(byte)CVar1;
  if (CVar1 != (CharacterState_ItemState)0x0) {
    if (((byte)CVar1 & 1) != 0) {
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
      *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
      *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 2;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


