/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004051d0
 * Function: Caver::Proto::ModelTransformControllerComponent::MergeFrom
 * Signature: undefined __thiscall MergeFrom(ModelTransformControllerComponent * this, ModelTransformControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ModelTransformControllerComponent::MergeFrom(Caver::Proto::ModelTransformControllerComponent
   const&) */

void __thiscall
Caver::Proto::ModelTransformControllerComponent::MergeFrom
          (ModelTransformControllerComponent *this,ModelTransformControllerComponent *param_1)

{
  ModelTransformControllerComponent *pMVar1;
  undefined4 uVar2;
  ModelTransformControllerComponent MVar3;
  long lVar4;
  LogMessage *pLVar5;
  uint uVar6;
  Vector3 *pVVar7;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  if (param_1 == this) {
                    /* try { // try from 00405304 to 0050531f has its CatchHandler @ 0040546c */
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0xfa3);
                    /* try { // try from 00405320 to 00505337 has its CatchHandler @ 004053ec */
    pLVar5 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar5);
                    /* try { // try from 00405338 to 0050534f has its CatchHandler @ 004053e8 */
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
    MVar3 = param_1[0x28];
  }
  else {
    MVar3 = param_1[0x28];
  }
  if (MVar3 != (ModelTransformControllerComponent)0x0) {
    uVar6 = (uint)(byte)MVar3;
    if (((byte)MVar3 & 1) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0xc);
      *(uint *)(this + 0x28) = *(uint *)(this + 0x28) | 1;
      *(undefined4 *)(this + 0xc) = uVar2;
      uVar6 = *(uint *)(param_1 + 0x28);
    }
    if ((uVar6 >> 1 & 1) != 0) {
      pVVar7 = *(Vector3 **)(this + 0x10);
      *(uint *)(this + 0x28) = *(uint *)(this + 0x28) | 2;
      if (pVVar7 == (Vector3 *)0x0) {
        pVVar7 = operator_new(0x20);
        Vector3::Vector3(pVVar7);
        *(Vector3 **)(this + 0x10) = pVVar7;
      }
      pMVar1 = *(ModelTransformControllerComponent **)PTR_default_instance__007e6260;
      if (*(long *)(param_1 + 0x10) != 0) {
        pMVar1 = param_1;
      }
      Vector3::MergeFrom(pVVar7,*(Vector3 **)(pMVar1 + 0x10));
      uVar6 = *(uint *)(param_1 + 0x28);
    }
    if ((uVar6 >> 2 & 1) != 0) {
      pVVar7 = *(Vector3 **)(this + 0x18);
      *(uint *)(this + 0x28) = *(uint *)(this + 0x28) | 4;
      if (pVVar7 == (Vector3 *)0x0) {
        pVVar7 = operator_new(0x20);
        Vector3::Vector3(pVVar7);
        *(Vector3 **)(this + 0x18) = pVVar7;
      }
                    /* try { // try from 004052b8 to 00505303 has its CatchHandler @ 004052b8
                       catch() { ... } // from try @ 004052b8 with catch @ 004052b8
                       catch() { ... } // from try @ 00405398 with catch @ 004052b8 */
      pMVar1 = *(ModelTransformControllerComponent **)PTR_default_instance__007e6260;
      if (*(long *)(param_1 + 0x18) != 0) {
        pMVar1 = param_1;
      }
      Vector3::MergeFrom(pVVar7,*(Vector3 **)(pMVar1 + 0x18));
      uVar6 = *(uint *)(param_1 + 0x28);
    }
    if ((uVar6 >> 3 & 1) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x20);
      *(uint *)(this + 0x28) = *(uint *)(this + 0x28) | 8;
      *(undefined4 *)(this + 0x20) = uVar2;
      uVar6 = *(uint *)(param_1 + 0x28);
    }
    if ((uVar6 >> 4 & 1) != 0) {
      *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
      *(uint *)(this + 0x28) = *(uint *)(this + 0x28) | 0x10;
    }
  }
                    /* try { // try from 00405350 to 00505367 has its CatchHandler @ 004053e4 */
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00405368 to 0050537f has its CatchHandler @ 004053e0 */
    __stack_chk_fail();
  }
  return;
}


