/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00407070
 * Function: Caver::Proto::GroundMeshComponent::MergeFrom
 * Signature: undefined __thiscall MergeFrom(GroundMeshComponent * this, GroundMeshComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* Caver::Proto::GroundMeshComponent::MergeFrom(Caver::Proto::GroundMeshComponent const&) */

void __thiscall
Caver::Proto::GroundMeshComponent::MergeFrom(GroundMeshComponent *this,GroundMeshComponent *param_1)

{
  GroundMeshComponent *pGVar1;
  GroundMeshComponent GVar2;
  long lVar3;
  undefined *puVar4;
  LogMessage *pLVar5;
  long *plVar6;
  uint uVar7;
  undefined8 uVar8;
  Rectangle *this_00;
  FloatColor *this_01;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x12d6);
    pLVar5 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar5);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
  }
  google::protobuf::internal::RepeatedPtrFieldBase::
  MergeFrom<google::protobuf::RepeatedPtrField<Caver::Proto::Mesh>::TypeHandler>
            ((RepeatedPtrFieldBase *)(this + 0x20),(RepeatedPtrFieldBase *)(param_1 + 0x20));
  google::protobuf::internal::RepeatedPtrFieldBase::
  MergeFrom<google::protobuf::RepeatedPtrField<Caver::Proto::Mesh>::TypeHandler>
            ((RepeatedPtrFieldBase *)(this + 0x60),(RepeatedPtrFieldBase *)(param_1 + 0x60));
  google::protobuf::internal::RepeatedPtrFieldBase::
  MergeFrom<google::protobuf::RepeatedPtrField<Caver::Proto::Mesh>::TypeHandler>
            ((RepeatedPtrFieldBase *)(this + 0x98),(RepeatedPtrFieldBase *)(param_1 + 0x98));
  puVar4 = PTR__default_vertex_data__007e4e40;
  GVar2 = param_1[0xdc];
  uVar7 = (uint)(byte)GVar2;
  if (GVar2 == (GroundMeshComponent)0x0) goto LAB_00407130;
  if (((byte)GVar2 & 1) == 0) {
    if (((byte)GVar2 >> 1 & 1) != 0) {
LAB_004071a4:
      puVar4 = PTR__default_indices__007e67d8;
      plVar6 = *(long **)(this + 0x18);
      uVar8 = *(undefined8 *)(param_1 + 0x18);
      *(uint *)(this + 0xdc) = *(uint *)(this + 0xdc) | 2;
      if (plVar6 == (long *)puVar4) {
        plVar6 = operator_new(8);
        *plVar6 = (long)(PTR_DAT_007e5de8 + 0x18);
        *(long **)(this + 0x18) = plVar6;
      }
      FUN_0066a6a8(plVar6,uVar8);
      uVar7 = *(uint *)(param_1 + 0xdc);
    }
  }
  else {
    plVar6 = *(long **)(this + 0x10);
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    *(uint *)(this + 0xdc) = *(uint *)(this + 0xdc) | 1;
    if (plVar6 == (long *)puVar4) {
      plVar6 = operator_new(8);
      *plVar6 = (long)(PTR_DAT_007e5de8 + 0x18);
      *(long **)(this + 0x10) = plVar6;
    }
    FUN_0066a6a8(plVar6,uVar8);
    uVar7 = *(uint *)(param_1 + 0xdc);
    if ((uVar7 >> 1 & 1) != 0) goto LAB_004071a4;
  }
  if ((uVar7 >> 3 & 1) != 0) {
    this_00 = *(Rectangle **)(this + 0x58);
    *(uint *)(this + 0xdc) = *(uint *)(this + 0xdc) | 8;
    if (this_00 == (Rectangle *)0x0) {
      this_00 = operator_new(0x20);
      Rectangle::Rectangle(this_00);
      *(Rectangle **)(this + 0x58) = this_00;
    }
    pGVar1 = *(GroundMeshComponent **)PTR_default_instance__007e5600;
    if (*(long *)(param_1 + 0x58) != 0) {
      pGVar1 = param_1;
    }
    Rectangle::MergeFrom(this_00,*(Rectangle **)(pGVar1 + 0x58));
    uVar7 = *(uint *)(param_1 + 0xdc);
  }
  if ((uVar7 >> 6 & 1) != 0) {
    this_01 = *(FloatColor **)(this + 0xd0);
    *(uint *)(this + 0xdc) = *(uint *)(this + 0xdc) | 0x40;
    if (this_01 == (FloatColor *)0x0) {
      this_01 = operator_new(0x20);
      FloatColor::FloatColor(this_01);
      *(FloatColor **)(this + 0xd0) = this_01;
    }
    pGVar1 = *(GroundMeshComponent **)PTR_default_instance__007e5600;
    if (*(long *)(param_1 + 0xd0) != 0) {
      pGVar1 = param_1;
    }
    FloatColor::MergeFrom(this_01,*(FloatColor **)(pGVar1 + 0xd0));
    uVar7 = *(uint *)(param_1 + 0xdc);
  }
  if ((uVar7 >> 7 & 1) != 0) {
    GVar2 = param_1[0xd8];
    *(uint *)(this + 0xdc) = *(uint *)(this + 0xdc) | 0x80;
    this[0xd8] = GVar2;
  }
LAB_00407130:
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


