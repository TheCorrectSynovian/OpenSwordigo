/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040ea48
 * Function: Caver::Proto::ObjectLinkControllerComponent::MergeFrom
 * Signature: undefined __thiscall MergeFrom(ObjectLinkControllerComponent * this, ObjectLinkControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* Caver::Proto::ObjectLinkControllerComponent::MergeFrom(Caver::Proto::ObjectLinkControllerComponent
   const&) */

void __thiscall
Caver::Proto::ObjectLinkControllerComponent::MergeFrom
          (ObjectLinkControllerComponent *this,ObjectLinkControllerComponent *param_1)

{
  ObjectLinkControllerComponent *pOVar1;
  ObjectLinkControllerComponent OVar2;
  long lVar3;
  undefined *puVar4;
  LogMessage *pLVar5;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  undefined8 uVar9;
  Vector3 *pVVar10;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
                    /* try { // try from 0040ea50 to 0050ea63 has its CatchHandler @ 004104f4 */
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 0040ea64 to 0050ea77 has its CatchHandler @ 00410494 */
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x1f1f);
    pLVar5 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
                    /* try { // try from 0040eac8 to 0050eacf has its CatchHandler @ 004103dc */
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar5);
                    /* try { // try from 0040ead0 to 0050eae3 has its CatchHandler @ 004103a4 */
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
    OVar2 = param_1[0x38];
    plVar7 = (long *)PTR__default_target_object_identifier__007e4c30;
  }
  else {
                    /* try { // try from 0040ea78 to 0050ea87 has its CatchHandler @ 0041043c */
    OVar2 = param_1[0x38];
    plVar7 = (long *)PTR__default_target_object_identifier__007e4c30;
  }
  PTR__default_target_object_identifier__007e4c30 = (undefined *)plVar7;
  if (OVar2 == (ObjectLinkControllerComponent)0x0) goto LAB_0040ec74;
  uVar8 = (uint)(byte)OVar2;
  if (((byte)OVar2 & 1) == 0) {
    if (((byte)OVar2 >> 1 & 1) != 0) {
LAB_0040eb30:
      puVar4 = PTR__default_target_bone_identifier__007e7b50;
      plVar7 = *(long **)(this + 0x18);
      uVar9 = *(undefined8 *)(param_1 + 0x18);
      *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 2;
                    /* try { // try from 0040eb50 to 0050eb53 has its CatchHandler @ 004108c0 */
      if (plVar7 == (long *)puVar4) {
        plVar7 = operator_new(8);
        *plVar7 = (long)(PTR_DAT_007e5de8 + 0x18);
        *(long **)(this + 0x18) = plVar7;
      }
      FUN_0066a6a8(plVar7,uVar9);
      uVar8 = *(uint *)(param_1 + 0x38);
    }
  }
  else {
                    /* try { // try from 0040eae4 to 0050eaf3 has its CatchHandler @ 0041034c */
    plVar6 = *(long **)(this + 0x10);
    uVar9 = *(undefined8 *)(param_1 + 0x10);
                    /* try { // try from 0040eaf4 to 0050eaff has its CatchHandler @ 004102f0 */
    *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 1;
    if (plVar6 == plVar7) {
      plVar6 = operator_new(8);
      *plVar6 = (long)(PTR_DAT_007e5de8 + 0x18);
      *(long **)(this + 0x10) = plVar6;
    }
    FUN_0066a6a8(plVar6,uVar9);
    uVar8 = *(uint *)(param_1 + 0x38);
    if ((uVar8 >> 1 & 1) != 0) goto LAB_0040eb30;
  }
                    /* try { // try from 0040ea88 to 0050ea93 has its CatchHandler @ 004103e0 */
  if ((uVar8 >> 2 & 1) != 0) {
                    /* try { // try from 0040eb84 to 0050eb8b has its CatchHandler @ 00410870 */
    pVVar10 = *(Vector3 **)(this + 0x20);
    *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 4;
    if (pVVar10 == (Vector3 *)0x0) {
      pVVar10 = operator_new(0x20);
      Vector3::Vector3(pVVar10);
      *(Vector3 **)(this + 0x20) = pVVar10;
    }
                    /* try { // try from 0040ebac to 0050ebd3 has its CatchHandler @ 0041086c */
    pOVar1 = *(ObjectLinkControllerComponent **)PTR_default_instance__007e4830;
    if (*(long *)(param_1 + 0x20) != 0) {
      pOVar1 = param_1;
    }
    Vector3::MergeFrom(pVVar10,*(Vector3 **)(pOVar1 + 0x20));
    uVar8 = *(uint *)(param_1 + 0x38);
  }
  if ((uVar8 >> 3 & 1) != 0) {
    pVVar10 = *(Vector3 **)(this + 0x28);
    *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 8;
    if (pVVar10 == (Vector3 *)0x0) {
      pVVar10 = operator_new(0x20);
                    /* try { // try from 0040ebf4 to 0050ec03 has its CatchHandler @ 00410858 */
      Vector3::Vector3(pVVar10);
      *(Vector3 **)(this + 0x28) = pVVar10;
    }
                    /* try { // try from 0040ec04 to 0050ec0b has its CatchHandler @ 00410144 */
                    /* try { // try from 0040ec0c to 0050ec73 has its CatchHandler @ 00410858 */
    pOVar1 = *(ObjectLinkControllerComponent **)PTR_default_instance__007e4830;
    if (*(long *)(param_1 + 0x28) != 0) {
      pOVar1 = param_1;
    }
    Vector3::MergeFrom(pVVar10,*(Vector3 **)(pOVar1 + 0x28));
    uVar8 = *(uint *)(param_1 + 0x38);
  }
  if ((uVar8 >> 4 & 1) != 0) {
    pVVar10 = *(Vector3 **)(this + 0x30);
    *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 0x10;
    if (pVVar10 == (Vector3 *)0x0) {
      pVVar10 = operator_new(0x20);
      Vector3::Vector3(pVVar10);
      *(Vector3 **)(this + 0x30) = pVVar10;
    }
    pOVar1 = *(ObjectLinkControllerComponent **)PTR_default_instance__007e4830;
    if (*(long *)(param_1 + 0x30) != 0) {
      pOVar1 = param_1;
    }
    Vector3::MergeFrom(pVVar10,*(Vector3 **)(pOVar1 + 0x30));
  }
LAB_0040ec74:
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0040ec98 to 0050ec9f has its CatchHandler @ 004100f4 */
    __stack_chk_fail();
  }
  return;
}


