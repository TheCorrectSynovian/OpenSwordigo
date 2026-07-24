/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040e130
 * Function: Caver::Proto::BoneControlledCollisionShapeComponent::MergeFrom
 * Signature: undefined __thiscall MergeFrom(BoneControlledCollisionShapeComponent * this, BoneControlledCollisionShapeComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::BoneControlledCollisionShapeComponent::MergeFrom(Caver::Proto::BoneControlledCollisionShapeComponent
   const&) */

void __thiscall
Caver::Proto::BoneControlledCollisionShapeComponent::MergeFrom
          (BoneControlledCollisionShapeComponent *this,
          BoneControlledCollisionShapeComponent *param_1)

{
  undefined4 uVar1;
  BoneControlledCollisionShapeComponent BVar2;
  long lVar3;
  undefined *puVar4;
  LogMessage *pLVar5;
  long *plVar6;
  uint uVar7;
  undefined8 uVar8;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x1de4);
    pLVar5 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar5);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
  }
  BVar2 = param_1[0x18];
  uVar7 = (uint)(byte)BVar2;
  if (BVar2 != (BoneControlledCollisionShapeComponent)0x0) {
                    /* try { // try from 0040e1a4 to 0050e1df has its CatchHandler @ 0040e1a4
                       catch() { ... } // from try @ 0040e1a4 with catch @ 0040e1a4
                       catch() { ... } // from try @ 0040e284 with catch @ 0040e1a4 */
    if (((byte)BVar2 & 1) != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0xc);
      *(uint *)(this + 0x18) = *(uint *)(this + 0x18) | 1;
      *(undefined4 *)(this + 0xc) = uVar1;
      uVar7 = *(uint *)(param_1 + 0x18);
    }
    puVar4 = PTR__default_controlling_bone_name__007e79d8;
    if ((uVar7 >> 1 & 1) != 0) {
      plVar6 = *(long **)(this + 0x10);
      uVar8 = *(undefined8 *)(param_1 + 0x10);
      *(uint *)(this + 0x18) = *(uint *)(this + 0x18) | 2;
                    /* try { // try from 0040e1e0 to 0050e1e3 has its CatchHandler @ 0040e2d4 */
      if (plVar6 == (long *)puVar4) {
        plVar6 = operator_new(8);
        *plVar6 = (long)(PTR_DAT_007e5de8 + 0x18);
        *(long **)(this + 0x10) = plVar6;
      }
      FUN_0066a6a8(plVar6,uVar8);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


