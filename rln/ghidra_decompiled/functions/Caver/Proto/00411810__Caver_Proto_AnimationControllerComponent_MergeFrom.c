/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00411810
 * Function: Caver::Proto::AnimationControllerComponent::MergeFrom
 * Signature: undefined __thiscall MergeFrom(AnimationControllerComponent * this, AnimationControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::AnimationControllerComponent::MergeFrom(Caver::Proto::AnimationControllerComponent
   const&) */

void __thiscall
Caver::Proto::AnimationControllerComponent::MergeFrom
          (AnimationControllerComponent *this,AnimationControllerComponent *param_1)

{
  undefined4 uVar1;
  AnimationControllerComponent AVar2;
  long lVar3;
  LogMessage *pLVar4;
  uint uVar5;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 00411830 to 00511853 has its CatchHandler @ 0041163c */
  if (param_1 == this) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004117b8 with catch @ 00411850
                        */
                    /* catch() { ... } // from try @ 00411868 with catch @ 00411854 */
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x2373);
                    /* try { // try from 00411864 to 00511867 has its CatchHandler @ 00411878 */
    pLVar4 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
                    /* try { // try from 00411868 to 0051188b has its CatchHandler @ 00411854 */
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar4);
                    /* catch() { ... } // from try @ 00411864 with catch @ 00411878 */
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
  }
  AVar2 = param_1[0x18];
  uVar5 = (uint)(byte)AVar2;
  if (AVar2 == (AnimationControllerComponent)0x0) goto LAB_004118a4;
  if (((byte)AVar2 & 1) == 0) {
    if (((byte)AVar2 >> 1 & 1) != 0) {
LAB_004118e4:
      uVar1 = *(undefined4 *)(param_1 + 0x10);
      *(uint *)(this + 0x18) = *(uint *)(this + 0x18) | 2;
      *(undefined4 *)(this + 0x10) = uVar1;
                    /* catch() { ... } // from try @ 004118e0 with catch @ 004118f8 */
      uVar5 = *(uint *)(param_1 + 0x18);
    }
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0xc);
    *(uint *)(this + 0x18) = *(uint *)(this + 0x18) | 1;
    *(undefined4 *)(this + 0xc) = uVar1;
    uVar5 = *(uint *)(param_1 + 0x18);
                    /* try { // try from 004118e0 to 005118eb has its CatchHandler @ 004118f8 */
    if ((uVar5 >> 1 & 1) != 0) goto LAB_004118e4;
  }
  if ((uVar5 >> 2 & 1) != 0) {
                    /* catch() { ... } // from try @ 00411944 with catch @ 00411894 */
    AVar2 = param_1[0x14];
    *(uint *)(this + 0x18) = *(uint *)(this + 0x18) | 4;
    this[0x14] = AVar2;
  }
LAB_004118a4:
                    /* try { // try from 004118ac to 005118b3 has its CatchHandler @ 00411950 */
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


