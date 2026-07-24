/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042b3cc
 * Function: Caver::Proto::SwingComponent::MergeFrom
 * Signature: undefined __thiscall MergeFrom(SwingComponent * this, SwingComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* Caver::Proto::SwingComponent::MergeFrom(Caver::Proto::SwingComponent const&) */

void __thiscall
Caver::Proto::SwingComponent::MergeFrom(SwingComponent *this,SwingComponent *param_1)

{
  undefined4 uVar1;
  SwingComponent SVar2;
  long lVar3;
  LogMessage *pLVar4;
  uint uVar5;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (param_1 == this) {
                    /* catch() { ... } // from try @ 0042b3a0 with catch @ 0042b410 */
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x51d5);
                    /* catch() { ... } // from try @ 0042b504 with catch @ 0042b414
                       catch() { ... } // from try @ 0042b6d0 with catch @ 0042b414 */
    pLVar4 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar4);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
  }
  SVar2 = param_1[0x1c];
  uVar5 = (uint)(byte)SVar2;
  if (SVar2 == (SwingComponent)0x0) goto LAB_0042b464;
  if (((byte)SVar2 & 1) == 0) {
    if (((byte)SVar2 >> 1 & 1) != 0) {
LAB_0042b4a4:
      SVar2 = param_1[0x10];
      *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 2;
      this[0x10] = SVar2;
      uVar5 = *(uint *)(param_1 + 0x1c);
    }
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0xc);
    *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 1;
    *(undefined4 *)(this + 0xc) = uVar1;
    uVar5 = *(uint *)(param_1 + 0x1c);
                    /* try { // try from 0042b4a0 to 0052b4a3 has its CatchHandler @ 0042b5ec */
    if ((uVar5 >> 1 & 1) != 0) goto LAB_0042b4a4;
  }
  if ((uVar5 >> 2 & 1) != 0) {
    SVar2 = param_1[0x11];
    *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 4;
    this[0x11] = SVar2;
    uVar5 = *(uint *)(param_1 + 0x1c);
  }
  if ((uVar5 >> 3 & 1) != 0) {
                    /* try { // try from 0042b4dc to 0052b4df has its CatchHandler @ 0042b5dc */
    uVar1 = *(undefined4 *)(param_1 + 0x14);
    *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 8;
    *(undefined4 *)(this + 0x14) = uVar1;
    uVar5 = *(uint *)(param_1 + 0x1c);
  }
  if ((uVar5 >> 4 & 1) != 0) {
    *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
    *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 0x10;
  }
LAB_0042b464:
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 0042b47c to 0052b47f has its CatchHandler @ 0042b5f4 */
  return;
}


