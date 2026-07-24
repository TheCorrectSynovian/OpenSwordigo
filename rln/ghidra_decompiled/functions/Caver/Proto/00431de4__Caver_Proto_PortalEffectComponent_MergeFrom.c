/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00431de4
 * Function: Caver::Proto::PortalEffectComponent::MergeFrom
 * Signature: undefined __thiscall MergeFrom(PortalEffectComponent * this, PortalEffectComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PortalEffectComponent::MergeFrom(Caver::Proto::PortalEffectComponent const&) */

void __thiscall
Caver::Proto::PortalEffectComponent::MergeFrom
          (PortalEffectComponent *this,PortalEffectComponent *param_1)

{
  PortalEffectComponent *pPVar1;
  undefined4 uVar2;
  PortalEffectComponent PVar3;
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
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x5c5c);
                    /* catch() { ... } // from try @ 00431b44 with catch @ 00431e50 */
                    /* catch() { ... } // from try @ 00431ae8 with catch @ 00431e54 */
    pLVar5 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar5);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
    PVar3 = param_1[0x28];
  }
  else {
    PVar3 = param_1[0x28];
                    /* catch() { ... } // from try @ 00431b68 with catch @ 00431e18 */
  }
  if (PVar3 == (PortalEffectComponent)0x0) goto LAB_00431f50;
  uVar6 = (uint)(byte)PVar3;
  if (((byte)PVar3 & 1) == 0) {
    if (((byte)PVar3 >> 1 & 1) != 0) {
LAB_00431e94:
      uVar2 = *(undefined4 *)(param_1 + 0x10);
      *(uint *)(this + 0x28) = *(uint *)(this + 0x28) | 2;
      *(undefined4 *)(this + 0x10) = uVar2;
      uVar6 = *(uint *)(param_1 + 0x28);
    }
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0xc);
    *(uint *)(this + 0x28) = *(uint *)(this + 0x28) | 1;
    *(undefined4 *)(this + 0xc) = uVar2;
    uVar6 = *(uint *)(param_1 + 0x28);
    if ((uVar6 >> 1 & 1) != 0) goto LAB_00431e94;
  }
  if ((uVar6 >> 2 & 1) != 0) {
                    /* catch() { ... } // from try @ 00431ab4 with catch @ 00431eb0 */
    this_00 = *(FloatColor **)(this + 0x18);
    *(uint *)(this + 0x28) = *(uint *)(this + 0x28) | 4;
    if (this_00 == (FloatColor *)0x0) {
      this_00 = operator_new(0x20);
      FloatColor::FloatColor(this_00);
      *(FloatColor **)(this + 0x18) = this_00;
    }
                    /* catch() { ... } // from try @ 00431a90 with catch @ 00431ee8 */
                    /* catch() { ... } // from try @ 00431a2c with catch @ 00431eec */
    pPVar1 = *(PortalEffectComponent **)PTR_default_instance__007e69c0;
    if (*(long *)(param_1 + 0x18) != 0) {
      pPVar1 = param_1;
    }
    FloatColor::MergeFrom(this_00,*(FloatColor **)(pPVar1 + 0x18));
    uVar6 = *(uint *)(param_1 + 0x28);
  }
  if ((uVar6 >> 3 & 1) != 0) {
    this_01 = *(Vector3 **)(this + 0x20);
    *(uint *)(this + 0x28) = *(uint *)(this + 0x28) | 8;
    if (this_01 == (Vector3 *)0x0) {
      this_01 = operator_new(0x20);
      Vector3::Vector3(this_01);
      *(Vector3 **)(this + 0x20) = this_01;
    }
    pPVar1 = *(PortalEffectComponent **)PTR_default_instance__007e69c0;
    if (*(long *)(param_1 + 0x20) != 0) {
      pPVar1 = param_1;
    }
    Vector3::MergeFrom(this_01,*(Vector3 **)(pPVar1 + 0x20));
  }
LAB_00431f50:
                    /* catch() { ... } // from try @ 004319f4 with catch @ 00431f50 */
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


