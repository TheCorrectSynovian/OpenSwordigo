/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003fb17c
 * Function: Caver::Proto::Component::MergeFrom
 * Signature: undefined __thiscall MergeFrom(Component * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Component::MergeFrom(Caver::Proto::Component const&) */

void __thiscall Caver::Proto::Component::MergeFrom(Component *this,Component *param_1)

{
  undefined4 uVar1;
  Component CVar2;
  long lVar3;
  undefined *puVar4;
  LogMessage *pLVar5;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  undefined8 uVar9;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x389);
    pLVar5 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar5);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
  }
  puVar4 = PTR__default_class_name__007e5328;
  CVar2 = param_1[0x58];
  uVar8 = (uint)(byte)CVar2;
  if (CVar2 == (Component)0x0) goto LAB_003fb2d4;
  if (((byte)CVar2 & 1) == 0) {
    if (((byte)CVar2 >> 1 & 1) != 0) {
LAB_003fb254:
      uVar1 = *(undefined4 *)(param_1 + 0x48);
      *(uint *)(this + 0x58) = *(uint *)(this + 0x58) | 2;
      *(undefined4 *)(this + 0x48) = uVar1;
      uVar8 = *(uint *)(param_1 + 0x58);
    }
  }
  else {
    plVar6 = *(long **)(this + 0x40);
    uVar9 = *(undefined8 *)(param_1 + 0x40);
    *(uint *)(this + 0x58) = *(uint *)(this + 0x58) | 1;
    if (plVar6 == (long *)puVar4) {
      plVar6 = operator_new(8);
      *plVar6 = (long)(PTR_DAT_007e5de8 + 0x18);
      *(long **)(this + 0x40) = plVar6;
    }
    FUN_0066a6a8(plVar6,uVar9);
    uVar8 = *(uint *)(param_1 + 0x58);
    if ((uVar8 >> 1 & 1) != 0) goto LAB_003fb254;
  }
  plVar6 = (long *)PTR__default_label__007e6320;
  if ((uVar8 >> 2 & 1) != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x4c);
    *(uint *)(this + 0x58) = *(uint *)(this + 0x58) | 4;
    *(undefined4 *)(this + 0x4c) = uVar1;
    uVar8 = *(uint *)(param_1 + 0x58);
    plVar6 = (long *)PTR__default_label__007e6320;
  }
  PTR__default_label__007e6320 = (undefined *)plVar6;
  if ((uVar8 >> 3 & 1) != 0) {
    plVar7 = *(long **)(this + 0x50);
    uVar9 = *(undefined8 *)(param_1 + 0x50);
    *(uint *)(this + 0x58) = *(uint *)(this + 0x58) | 8;
    if (plVar7 == plVar6) {
      plVar7 = operator_new(8);
      *plVar7 = (long)(PTR_DAT_007e5de8 + 0x18);
      *(long **)(this + 0x50) = plVar7;
    }
    FUN_0066a6a8(plVar7,uVar9);
  }
LAB_003fb2d4:
  google::protobuf::internal::ExtensionSet::MergeFrom
            ((ExtensionSet *)(this + 8),(ExtensionSet *)(param_1 + 8));
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


