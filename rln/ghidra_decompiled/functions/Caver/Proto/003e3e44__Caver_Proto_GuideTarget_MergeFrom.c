/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e3e44
 * Function: Caver::Proto::GuideTarget::MergeFrom
 * Signature: undefined __thiscall MergeFrom(GuideTarget * this, GuideTarget * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* Caver::Proto::GuideTarget::MergeFrom(Caver::Proto::GuideTarget const&) */

void __thiscall Caver::Proto::GuideTarget::MergeFrom(GuideTarget *this,GuideTarget *param_1)

{
  undefined4 uVar1;
  GuideTarget GVar2;
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
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/GameData.pb.cc",0xdcb);
    pLVar5 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar5);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
  }
  google::protobuf::RepeatedPtrField<Caver::Proto::GuideTarget_LevelObject>::MergeFrom
            ((RepeatedPtrField<Caver::Proto::GuideTarget_LevelObject> *)(this + 0x38),
             (RepeatedPtrField *)(param_1 + 0x38));
  GVar2 = param_1[0x70];
  uVar8 = (uint)(byte)GVar2;
  if (GVar2 == (GuideTarget)0x0) goto LAB_003e3ef0;
  if (((byte)GVar2 & 1) == 0) {
    puVar4 = PTR__default_level_name__007e6788;
    if (((byte)GVar2 >> 1 & 1) != 0) {
LAB_003e3f30:
      puVar4 = PTR__default_name__007e4fe0;
      plVar7 = *(long **)(this + 0x10);
      uVar9 = *(undefined8 *)(param_1 + 0x10);
      *(uint *)(this + 0x70) = *(uint *)(this + 0x70) | 2;
      if (plVar7 == (long *)puVar4) {
        plVar7 = operator_new(8);
        *plVar7 = (long)(PTR_DAT_007e5de8 + 0x18);
        *(long **)(this + 0x10) = plVar7;
      }
      FUN_0066a6a8(plVar7,uVar9);
      uVar8 = *(uint *)(param_1 + 0x70);
      puVar4 = PTR__default_level_name__007e6788;
    }
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0xc);
    *(uint *)(this + 0x70) = *(uint *)(this + 0x70) | 1;
    *(undefined4 *)(this + 0xc) = uVar1;
    uVar8 = *(uint *)(param_1 + 0x70);
    puVar4 = PTR__default_level_name__007e6788;
    if ((uVar8 >> 1 & 1) != 0) goto LAB_003e3f30;
  }
  PTR__default_level_name__007e6788 = puVar4;
  plVar7 = (long *)PTR__default_object_identifier__007e7520;
  if ((uVar8 >> 2 & 1) != 0) {
    plVar7 = *(long **)(this + 0x18);
    uVar9 = *(undefined8 *)(param_1 + 0x18);
    *(uint *)(this + 0x70) = *(uint *)(this + 0x70) | 4;
    if (plVar7 == (long *)puVar4) {
      plVar7 = operator_new(8);
      *plVar7 = (long)(PTR_DAT_007e5de8 + 0x18);
      *(long **)(this + 0x18) = plVar7;
    }
    FUN_0066a6a8(plVar7,uVar9);
    uVar8 = *(uint *)(param_1 + 0x70);
    plVar7 = (long *)PTR__default_object_identifier__007e7520;
  }
  plVar6 = (long *)PTR__default_carry_object_identifier__007e49b0;
  PTR__default_object_identifier__007e7520 = (undefined *)plVar7;
  if ((uVar8 >> 3 & 1) != 0) {
    plVar6 = *(long **)(this + 0x20);
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    *(uint *)(this + 0x70) = *(uint *)(this + 0x70) | 8;
    if (plVar6 == plVar7) {
      plVar6 = operator_new(8);
      *plVar6 = (long)(PTR_DAT_007e5de8 + 0x18);
      *(long **)(this + 0x20) = plVar6;
    }
    FUN_0066a6a8(plVar6,uVar9);
    uVar8 = *(uint *)(param_1 + 0x70);
    plVar6 = (long *)PTR__default_carry_object_identifier__007e49b0;
  }
  PTR__default_carry_object_identifier__007e49b0 = (undefined *)plVar6;
  if ((uVar8 >> 4 & 1) != 0) {
    plVar7 = *(long **)(this + 0x28);
    uVar9 = *(undefined8 *)(param_1 + 0x28);
    *(uint *)(this + 0x70) = *(uint *)(this + 0x70) | 0x10;
    if (plVar7 == plVar6) {
      plVar7 = operator_new(8);
      *plVar7 = (long)(PTR_DAT_007e5de8 + 0x18);
      *(long **)(this + 0x28) = plVar7;
    }
    FUN_0066a6a8(plVar7,uVar9);
    uVar8 = *(uint *)(param_1 + 0x70);
  }
  if ((uVar8 >> 5 & 1) != 0) {
    GVar2 = param_1[0x30];
    *(uint *)(this + 0x70) = *(uint *)(this + 0x70) | 0x20;
    this[0x30] = GVar2;
  }
LAB_003e3ef0:
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


