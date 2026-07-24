/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042cd68
 * Function: Caver::Proto::PortalComponent::MergeFrom
 * Signature: undefined __thiscall MergeFrom(PortalComponent * this, PortalComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PortalComponent::MergeFrom(Caver::Proto::PortalComponent const&) */

void __thiscall
Caver::Proto::PortalComponent::MergeFrom(PortalComponent *this,PortalComponent *param_1)

{
  undefined4 uVar1;
  PortalComponent PVar2;
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
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x54aa);
    pLVar5 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar5);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
  }
  PVar2 = param_1[0x24];
  uVar8 = (uint)(byte)PVar2;
  if (PVar2 == (PortalComponent)0x0) goto LAB_0042ce00;
  if (((byte)PVar2 & 1) == 0) {
    plVar6 = (long *)PTR__default_spawn_point_name__007e72a0;
    if (((byte)PVar2 >> 1 & 1) != 0) {
LAB_0042ce40:
      puVar4 = PTR__default_destination_scene_name__007e6a68;
      plVar6 = *(long **)(this + 0x10);
      uVar9 = *(undefined8 *)(param_1 + 0x10);
      *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 2;
      if (plVar6 == (long *)puVar4) {
        plVar6 = operator_new(8);
        *plVar6 = (long)(PTR_DAT_007e5de8 + 0x18);
        *(long **)(this + 0x10) = plVar6;
      }
      FUN_0066a6a8(plVar6,uVar9);
      uVar8 = *(uint *)(param_1 + 0x24);
      plVar6 = (long *)PTR__default_spawn_point_name__007e72a0;
    }
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0xc);
    *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 1;
    *(undefined4 *)(this + 0xc) = uVar1;
    uVar8 = *(uint *)(param_1 + 0x24);
    plVar6 = (long *)PTR__default_spawn_point_name__007e72a0;
    if ((uVar8 >> 1 & 1) != 0) goto LAB_0042ce40;
  }
  PTR__default_spawn_point_name__007e72a0 = (undefined *)plVar6;
  if ((uVar8 >> 2 & 1) != 0) {
    plVar7 = *(long **)(this + 0x18);
    uVar9 = *(undefined8 *)(param_1 + 0x18);
    *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 4;
    if (plVar7 == plVar6) {
      plVar7 = operator_new(8);
      *plVar7 = (long)(PTR_DAT_007e5de8 + 0x18);
      *(long **)(this + 0x18) = plVar7;
    }
    FUN_0066a6a8(plVar7,uVar9);
    uVar8 = *(uint *)(param_1 + 0x24);
  }
  if ((uVar8 >> 3 & 1) != 0) {
    PVar2 = param_1[0x20];
    *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 8;
    this[0x20] = PVar2;
  }
LAB_0042ce00:
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


