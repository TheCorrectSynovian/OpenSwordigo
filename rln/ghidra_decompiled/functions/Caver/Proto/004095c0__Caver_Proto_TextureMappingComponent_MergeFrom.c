/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004095c0
 * Function: Caver::Proto::TextureMappingComponent::MergeFrom
 * Signature: undefined __thiscall MergeFrom(TextureMappingComponent * this, TextureMappingComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::TextureMappingComponent::MergeFrom(Caver::Proto::TextureMappingComponent const&) */

void __thiscall
Caver::Proto::TextureMappingComponent::MergeFrom
          (TextureMappingComponent *this,TextureMappingComponent *param_1)

{
  TextureMappingComponent *pTVar1;
  undefined4 uVar2;
  TextureMappingComponent TVar3;
  long lVar4;
  long *plVar5;
  LogMessage *pLVar6;
  long *plVar7;
  uint uVar8;
  undefined8 uVar9;
  Vector2 *this_00;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x15e8);
    pLVar6 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar6);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
    TVar3 = param_1[0x28];
    plVar5 = (long *)PTR__default_texture_name__007e7c58;
  }
  else {
    TVar3 = param_1[0x28];
    plVar5 = (long *)PTR__default_texture_name__007e7c58;
  }
  PTR__default_texture_name__007e7c58 = (undefined *)plVar5;
  if (TVar3 == (TextureMappingComponent)0x0) goto LAB_00409708;
  uVar8 = (uint)(byte)TVar3;
  if (((byte)TVar3 & 1) == 0) {
    if (((byte)TVar3 >> 1 & 1) != 0) {
LAB_004096a0:
      uVar2 = *(undefined4 *)(param_1 + 0x18);
      *(uint *)(this + 0x28) = *(uint *)(this + 0x28) | 2;
      *(undefined4 *)(this + 0x18) = uVar2;
      uVar8 = *(uint *)(param_1 + 0x28);
    }
  }
  else {
    plVar7 = *(long **)(this + 0x10);
    uVar9 = *(undefined8 *)(param_1 + 0x10);
    *(uint *)(this + 0x28) = *(uint *)(this + 0x28) | 1;
    if (plVar7 == plVar5) {
      plVar7 = operator_new(8);
      *plVar7 = (long)(PTR_DAT_007e5de8 + 0x18);
      *(long **)(this + 0x10) = plVar7;
    }
    FUN_0066a6a8(plVar7,uVar9);
    uVar8 = *(uint *)(param_1 + 0x28);
    if ((uVar8 >> 1 & 1) != 0) goto LAB_004096a0;
  }
  if ((uVar8 >> 2 & 1) != 0) {
    this_00 = *(Vector2 **)(this + 0x20);
    *(uint *)(this + 0x28) = *(uint *)(this + 0x28) | 4;
    if (this_00 == (Vector2 *)0x0) {
      this_00 = operator_new(0x18);
      Vector2::Vector2(this_00);
      *(Vector2 **)(this + 0x20) = this_00;
    }
    pTVar1 = *(TextureMappingComponent **)PTR_default_instance__007e7550;
    if (*(long *)(param_1 + 0x20) != 0) {
      pTVar1 = param_1;
    }
    Vector2::MergeFrom(this_00,*(Vector2 **)(pTVar1 + 0x20));
  }
LAB_00409708:
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


