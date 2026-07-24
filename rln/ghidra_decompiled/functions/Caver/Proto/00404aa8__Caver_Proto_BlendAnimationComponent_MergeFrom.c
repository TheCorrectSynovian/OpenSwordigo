/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00404aa8
 * Function: Caver::Proto::BlendAnimationComponent::MergeFrom
 * Signature: undefined __thiscall MergeFrom(BlendAnimationComponent * this, BlendAnimationComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::BlendAnimationComponent::MergeFrom(Caver::Proto::BlendAnimationComponent const&) */

void __thiscall
Caver::Proto::BlendAnimationComponent::MergeFrom
          (BlendAnimationComponent *this,BlendAnimationComponent *param_1)

{
  undefined4 uVar1;
  BlendAnimationComponent BVar2;
  long lVar3;
  LogMessage *pLVar4;
  uint uVar5;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (param_1 == this) {
                    /* try { // try from 00404aec to 00504b37 has its CatchHandler @ 00404aec
                       catch() { ... } // from try @ 00404aec with catch @ 00404aec
                       catch() { ... } // from try @ 00404b9c with catch @ 00404aec */
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0xe75);
    pLVar4 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar4);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
  }
  BVar2 = param_1[0x1c];
  uVar5 = (uint)(byte)BVar2;
  if (BVar2 == (BlendAnimationComponent)0x0) goto LAB_00404b3c;
  if (((byte)BVar2 & 1) == 0) {
    if (((byte)BVar2 >> 1 & 1) != 0) {
LAB_00404b7c:
      uVar1 = *(undefined4 *)(param_1 + 0x10);
                    /* try { // try from 00404b84 to 00504b9b has its CatchHandler @ 00404be0 */
      *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 2;
      *(undefined4 *)(this + 0x10) = uVar1;
      uVar5 = *(uint *)(param_1 + 0x1c);
    }
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0xc);
                    /* try { // try from 00404b6c to 00504b83 has its CatchHandler @ 00404be4 */
    *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 1;
    *(undefined4 *)(this + 0xc) = uVar1;
    uVar5 = *(uint *)(param_1 + 0x1c);
    if ((uVar5 >> 1 & 1) != 0) goto LAB_00404b7c;
  }
  if ((uVar5 >> 2 & 1) != 0) {
                    /* try { // try from 00404b9c to 00504c6b has its CatchHandler @ 00404aec */
    uVar1 = *(undefined4 *)(param_1 + 0x14);
    *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 4;
    *(undefined4 *)(this + 0x14) = uVar1;
    uVar5 = *(uint *)(param_1 + 0x1c);
  }
  if ((uVar5 >> 3 & 1) != 0) {
                    /* try { // try from 00404b38 to 00504b53 has its CatchHandler @ 00404c68 */
    *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
    *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 8;
  }
LAB_00404b3c:
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00404b54 to 00504b6b has its CatchHandler @ 00404be8 */
  return;
}


