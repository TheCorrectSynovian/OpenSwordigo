/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e1980
 * Function: Caver::Proto::Quest::MergeFrom
 * Signature: undefined __thiscall MergeFrom(Quest * this, Quest * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Quest::MergeFrom(Caver::Proto::Quest const&) */

void __thiscall Caver::Proto::Quest::MergeFrom(Quest *this,Quest *param_1)

{
  Quest QVar1;
  long lVar2;
  undefined *puVar3;
  LogMessage *pLVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  undefined8 uVar8;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/GameData.pb.cc",0x9cf);
    pLVar4 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar4);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
  }
  puVar3 = PTR__default_name__007e5e30;
  QVar1 = param_1[0x30];
  uVar7 = (uint)(byte)QVar1;
  if (QVar1 == (Quest)0x0) goto LAB_003e1b40;
  if (((byte)QVar1 & 1) == 0) {
    plVar6 = (long *)PTR__default_follow_up_quest__007e5bb8;
    if (((byte)QVar1 >> 1 & 1) != 0) {
LAB_003e1a58:
      puVar3 = PTR__default_title__007e6d70;
      plVar6 = *(long **)(this + 0x18);
      uVar8 = *(undefined8 *)(param_1 + 0x18);
      *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 2;
      if (plVar6 == (long *)puVar3) {
        plVar6 = operator_new(8);
        *plVar6 = (long)(PTR_DAT_007e5de8 + 0x18);
        *(long **)(this + 0x18) = plVar6;
      }
      FUN_0066a6a8(plVar6,uVar8);
      uVar7 = *(uint *)(param_1 + 0x30);
      plVar6 = (long *)PTR__default_follow_up_quest__007e5bb8;
    }
  }
  else {
    plVar6 = *(long **)(this + 0x10);
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 1;
    if (plVar6 == (long *)puVar3) {
      plVar6 = operator_new(8);
      *plVar6 = (long)(PTR_DAT_007e5de8 + 0x18);
      *(long **)(this + 0x10) = plVar6;
    }
    FUN_0066a6a8(plVar6,uVar8);
    uVar7 = *(uint *)(param_1 + 0x30);
    plVar6 = (long *)PTR__default_follow_up_quest__007e5bb8;
    if ((uVar7 >> 1 & 1) != 0) goto LAB_003e1a58;
  }
  plVar5 = (long *)PTR__default_map_location__007e4c80;
  PTR__default_follow_up_quest__007e5bb8 = (undefined *)plVar6;
  if ((uVar7 >> 2 & 1) != 0) {
    plVar5 = *(long **)(this + 0x20);
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 4;
    if (plVar5 == plVar6) {
      plVar5 = operator_new(8);
      *plVar5 = (long)(PTR_DAT_007e5de8 + 0x18);
      *(long **)(this + 0x20) = plVar5;
    }
    FUN_0066a6a8(plVar5,uVar8);
    uVar7 = *(uint *)(param_1 + 0x30);
    plVar5 = (long *)PTR__default_map_location__007e4c80;
  }
  PTR__default_map_location__007e4c80 = (undefined *)plVar5;
  if ((uVar7 >> 3 & 1) != 0) {
    plVar6 = *(long **)(this + 0x28);
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 8;
    if (plVar6 == plVar5) {
      plVar6 = operator_new(8);
      *plVar6 = (long)(PTR_DAT_007e5de8 + 0x18);
      *(long **)(this + 0x28) = plVar6;
    }
    FUN_0066a6a8(plVar6,uVar8);
  }
LAB_003e1b40:
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


