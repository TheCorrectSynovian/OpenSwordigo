/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003f198c
 * Function: Caver::Proto::LevelState::MergeFrom
 * Signature: undefined __thiscall MergeFrom(LevelState * this, LevelState * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* Caver::Proto::LevelState::MergeFrom(Caver::Proto::LevelState const&) */

void __thiscall Caver::Proto::LevelState::MergeFrom(LevelState *this,LevelState *param_1)

{
  LevelState *pLVar1;
  undefined4 uVar2;
  LevelState LVar3;
  long lVar4;
  undefined *puVar5;
  LogMessage *pLVar6;
  long *plVar7;
  StateProperties *this_00;
  uint uVar8;
  undefined8 uVar9;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/GameState.pb.cc",0xa38);
    pLVar6 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar6);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
  }
  puVar5 = PTR__default_level_name__007e5098;
  LVar3 = param_1[0x30];
  uVar8 = (uint)(byte)LVar3;
  if (LVar3 == (LevelState)0x0) goto LAB_003f1a24;
  if (((byte)LVar3 & 1) == 0) {
    if (((byte)LVar3 >> 1 & 1) != 0) {
LAB_003f1a98:
      LVar3 = param_1[0x18];
      *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 2;
      this[0x18] = LVar3;
      uVar8 = *(uint *)(param_1 + 0x30);
    }
  }
  else {
    plVar7 = *(long **)(this + 0x10);
    uVar9 = *(undefined8 *)(param_1 + 0x10);
    *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 1;
    if (plVar7 == (long *)puVar5) {
      plVar7 = operator_new(8);
      *plVar7 = (long)(PTR_DAT_007e5de8 + 0x18);
      *(long **)(this + 0x10) = plVar7;
    }
    FUN_0066a6a8(plVar7,uVar9);
    uVar8 = *(uint *)(param_1 + 0x30);
    if ((uVar8 >> 1 & 1) != 0) goto LAB_003f1a98;
  }
  if ((uVar8 >> 2 & 1) != 0) {
    this_00 = *(StateProperties **)(this + 0x20);
    *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 4;
    if (this_00 == (StateProperties *)0x0) {
      this_00 = operator_new(0x50);
      puVar5 = PTR_vtable_007e6290;
      *(StateProperties **)(this_00 + 0x10) = this_00 + 0x28;
      *(long *)(this_00 + 0x18) = 0;
      *(undefined4 *)(this_00 + 8) = 0;
      *(undefined4 *)(this_00 + 0x48) = 0;
      *(undefined4 *)(this_00 + 0x20) = 4;
      *(undefined **)this_00 = puVar5 + 0x10;
      *(StateProperties **)(this + 0x20) = this_00;
    }
    pLVar1 = *(LevelState **)PTR_default_instance__007e7240;
    if (*(long *)(param_1 + 0x20) != 0) {
      pLVar1 = param_1;
    }
    StateProperties::MergeFrom(this_00,*(StateProperties **)(pLVar1 + 0x20));
    uVar8 = *(uint *)(param_1 + 0x30);
  }
  if ((uVar8 >> 3 & 1) != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x28);
    *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 8;
    *(undefined4 *)(this + 0x28) = uVar2;
    uVar8 = *(uint *)(param_1 + 0x30);
  }
  if ((uVar8 >> 4 & 1) != 0) {
    *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
    *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 0x10;
  }
LAB_003f1a24:
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


