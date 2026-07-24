/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00410690
 * Function: Caver::Proto::ShadowComponent::MergeFrom
 * Signature: undefined __thiscall MergeFrom(ShadowComponent * this, ShadowComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ShadowComponent::MergeFrom(Caver::Proto::ShadowComponent const&) */

void __thiscall
Caver::Proto::ShadowComponent::MergeFrom(ShadowComponent *this,ShadowComponent *param_1)

{
  ShadowComponent *pSVar1;
  undefined4 uVar2;
  ShadowComponent SVar3;
  long lVar4;
  LogMessage *pLVar5;
  uint uVar6;
  Vector3 *this_00;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
                    /* catch() { ... } // from try @ 0040e918 with catch @ 004106b8 */
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x219e);
    pLVar5 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar5);
                    /* catch() { ... } // from try @ 0040e904 with catch @ 0041070c */
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
                    /* catch() { ... } // from try @ 0040e838 with catch @ 00410714 */
    SVar3 = param_1[0x20];
  }
  else {
    SVar3 = param_1[0x20];
  }
  if (SVar3 == (ShadowComponent)0x0) goto LAB_004107a4;
  uVar6 = (uint)(byte)SVar3;
  if (((byte)SVar3 & 1) == 0) {
    if (((byte)SVar3 >> 1 & 1) != 0) {
LAB_0041073c:
      uVar2 = *(undefined4 *)(param_1 + 0x10);
      *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 2;
                    /* catch() { ... } // from try @ 0040e824 with catch @ 0041074c */
      *(undefined4 *)(this + 0x10) = uVar2;
      uVar6 = *(uint *)(param_1 + 0x20);
    }
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0xc);
    *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 1;
    *(undefined4 *)(this + 0xc) = uVar2;
    uVar6 = *(uint *)(param_1 + 0x20);
    if ((uVar6 >> 1 & 1) != 0) goto LAB_0041073c;
  }
                    /* catch() { ... } // from try @ 0040e800 with catch @ 00410754 */
  if ((uVar6 >> 2 & 1) != 0) {
    this_00 = *(Vector3 **)(this + 0x18);
    *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 4;
    if (this_00 == (Vector3 *)0x0) {
      this_00 = operator_new(0x20);
      Vector3::Vector3(this_00);
      *(Vector3 **)(this + 0x18) = this_00;
    }
                    /* catch() { ... } // from try @ 0040e7ec with catch @ 0041078c */
                    /* catch() { ... } // from try @ 0040e7c8 with catch @ 00410794 */
    pSVar1 = *(ShadowComponent **)PTR_default_instance__007e5258;
    if (*(long *)(param_1 + 0x18) != 0) {
      pSVar1 = param_1;
    }
    Vector3::MergeFrom(this_00,*(Vector3 **)(pSVar1 + 0x18));
  }
LAB_004107a4:
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


