/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041983c
 * Function: Caver::Proto::EntityControllerComponent::MergeFrom
 * Signature: undefined __thiscall MergeFrom(EntityControllerComponent * this, EntityControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* Caver::Proto::EntityControllerComponent::MergeFrom(Caver::Proto::EntityControllerComponent
   const&) */

void __thiscall
Caver::Proto::EntityControllerComponent::MergeFrom
          (EntityControllerComponent *this,EntityControllerComponent *param_1)

{
  undefined4 uVar1;
  EntityControllerComponent EVar2;
  long lVar3;
  LogMessage *pLVar4;
  uint uVar5;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
                    /* catch() { ... } // from try @ 0041806c with catch @ 00419868 */
  if (param_1 == this) {
                    /* try { // try from 00419874 to 0051990f has its CatchHandler @ 00419874
                       catch() { ... } // from try @ 00419874 with catch @ 00419874
                       catch() { ... } // from try @ 00419a24 with catch @ 00419874
                       catch() { ... } // from try @ 00419bb0 with catch @ 00419874 */
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x334c);
    pLVar4 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar4);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
  }
  EVar2 = param_1[0x2c];
  uVar5 = (uint)(byte)EVar2;
  if (EVar2 == (EntityControllerComponent)0x0) goto LAB_004198e0;
  if (((byte)EVar2 & 1) == 0) {
    if (((byte)EVar2 >> 1 & 1) != 0) {
LAB_00419920:
      uVar1 = *(undefined4 *)(param_1 + 0x10);
      *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) | 2;
      *(undefined4 *)(this + 0x10) = uVar1;
      uVar5 = *(uint *)(param_1 + 0x2c);
    }
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0xc);
                    /* try { // try from 00419910 to 0051991f has its CatchHandler @ 00419bbc */
    *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) | 1;
    *(undefined4 *)(this + 0xc) = uVar1;
    uVar5 = *(uint *)(param_1 + 0x2c);
    if ((uVar5 >> 1 & 1) != 0) goto LAB_00419920;
  }
  if ((uVar5 >> 2 & 1) != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x14);
    *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) | 4;
    *(undefined4 *)(this + 0x14) = uVar1;
    uVar5 = *(uint *)(param_1 + 0x2c);
  }
  if ((uVar5 >> 3 & 1) != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) | 8;
    *(undefined4 *)(this + 0x18) = uVar1;
    uVar5 = *(uint *)(param_1 + 0x2c);
  }
  if ((uVar5 >> 4 & 1) != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x1c);
    *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) | 0x10;
    *(undefined4 *)(this + 0x1c) = uVar1;
                    /* try { // try from 00419988 to 00519993 has its CatchHandler @ 00419ac0 */
    uVar5 = *(uint *)(param_1 + 0x2c);
  }
  if ((uVar5 >> 5 & 1) != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x20);
    *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) | 0x20;
    *(undefined4 *)(this + 0x20) = uVar1;
    uVar5 = *(uint *)(param_1 + 0x2c);
  }
  if ((uVar5 >> 6 & 1) != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x24);
                    /* try { // try from 004199b4 to 005199db has its CatchHandler @ 00419a6c */
    *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) | 0x40;
    *(undefined4 *)(this + 0x24) = uVar1;
    uVar5 = *(uint *)(param_1 + 0x2c);
  }
  if ((uVar5 >> 7 & 1) != 0) {
    *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
    *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) | 0x80;
  }
LAB_004198e0:
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


