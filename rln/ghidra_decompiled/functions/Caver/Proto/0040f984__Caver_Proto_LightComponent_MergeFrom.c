/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040f984
 * Function: Caver::Proto::LightComponent::MergeFrom
 * Signature: undefined __thiscall MergeFrom(LightComponent * this, LightComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* Caver::Proto::LightComponent::MergeFrom(Caver::Proto::LightComponent const&) */

void __thiscall
Caver::Proto::LightComponent::MergeFrom(LightComponent *this,LightComponent *param_1)

{
  LightComponent *pLVar1;
  undefined4 uVar2;
  LightComponent LVar3;
  long lVar4;
  LogMessage *pLVar5;
  uint uVar6;
  FloatColor *this_00;
  Vector3 *this_01;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x20a5);
    pLVar5 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar5);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
    LVar3 = param_1[0x38];
  }
  else {
    LVar3 = param_1[0x38];
  }
  if (LVar3 == (LightComponent)0x0) goto LAB_0040fb50;
  uVar6 = (uint)(byte)LVar3;
  if (((byte)LVar3 & 1) == 0) {
    if (((byte)LVar3 >> 1 & 1) != 0) {
LAB_0040fa40:
      uVar2 = *(undefined4 *)(param_1 + 0x10);
      *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 2;
      *(undefined4 *)(this + 0x10) = uVar2;
      uVar6 = *(uint *)(param_1 + 0x38);
    }
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0xc);
    *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 1;
    *(undefined4 *)(this + 0xc) = uVar2;
    uVar6 = *(uint *)(param_1 + 0x38);
    if ((uVar6 >> 1 & 1) != 0) goto LAB_0040fa40;
  }
  if ((uVar6 >> 2 & 1) != 0) {
    this_00 = *(FloatColor **)(this + 0x18);
    *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 4;
    if (this_00 == (FloatColor *)0x0) {
      this_00 = operator_new(0x20);
      FloatColor::FloatColor(this_00);
      *(FloatColor **)(this + 0x18) = this_00;
    }
    pLVar1 = *(LightComponent **)PTR_default_instance__007e5cc8;
    if (*(long *)(param_1 + 0x18) != 0) {
      pLVar1 = param_1;
    }
    FloatColor::MergeFrom(this_00,*(FloatColor **)(pLVar1 + 0x18));
    uVar6 = *(uint *)(param_1 + 0x38);
  }
  if ((uVar6 >> 3 & 1) != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x20);
    *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 8;
    *(undefined4 *)(this + 0x20) = uVar2;
    uVar6 = *(uint *)(param_1 + 0x38);
  }
  if ((uVar6 >> 4 & 1) != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x24);
    *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 0x10;
    *(undefined4 *)(this + 0x24) = uVar2;
    uVar6 = *(uint *)(param_1 + 0x38);
  }
  if ((uVar6 >> 5 & 1) != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x28);
                    /* catch() { ... } // from try @ 0040f280 with catch @ 0040faf4 */
    *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 0x20;
    *(undefined4 *)(this + 0x28) = uVar2;
    uVar6 = *(uint *)(param_1 + 0x38);
  }
  if ((uVar6 >> 6 & 1) != 0) {
    this_01 = *(Vector3 **)(this + 0x30);
    *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 0x40;
    if (this_01 == (Vector3 *)0x0) {
      this_01 = operator_new(0x20);
      Vector3::Vector3(this_01);
      *(Vector3 **)(this + 0x30) = this_01;
    }
    pLVar1 = *(LightComponent **)PTR_default_instance__007e5cc8;
    if (*(long *)(param_1 + 0x30) != 0) {
      pLVar1 = param_1;
    }
    Vector3::MergeFrom(this_01,*(Vector3 **)(pLVar1 + 0x30));
  }
LAB_0040fb50:
                    /* catch() { ... } // from try @ 0040f270 with catch @ 0040fb50 */
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


