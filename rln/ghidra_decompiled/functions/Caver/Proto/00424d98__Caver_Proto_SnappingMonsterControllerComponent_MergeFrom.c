/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00424d98
 * Function: Caver::Proto::SnappingMonsterControllerComponent::MergeFrom
 * Signature: undefined __thiscall MergeFrom(SnappingMonsterControllerComponent * this, SnappingMonsterControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* Caver::Proto::SnappingMonsterControllerComponent::MergeFrom(Caver::Proto::SnappingMonsterControllerComponent
   const&) */

void __thiscall
Caver::Proto::SnappingMonsterControllerComponent::MergeFrom
          (SnappingMonsterControllerComponent *this,SnappingMonsterControllerComponent *param_1)

{
  undefined4 uVar1;
  SnappingMonsterControllerComponent SVar2;
  long lVar3;
  LogMessage *pLVar4;
  uint uVar5;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (param_1 == this) {
                    /* try { // try from 00424dc8 to 00524e03 has its CatchHandler @ 00425524 */
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x44f0);
    pLVar4 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar4);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
  }
  SVar2 = param_1[0x20];
  uVar5 = (uint)(byte)SVar2;
  if (SVar2 == (SnappingMonsterControllerComponent)0x0) goto LAB_00424e30;
  if (((byte)SVar2 & 1) == 0) {
    if (((byte)SVar2 >> 1 & 1) != 0) {
LAB_00424e70:
      uVar1 = *(undefined4 *)(param_1 + 0x10);
                    /* try { // try from 00424e7c to 00524eb7 has its CatchHandler @ 0042548c */
      *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 2;
      *(undefined4 *)(this + 0x10) = uVar1;
      uVar5 = *(uint *)(param_1 + 0x20);
    }
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0xc);
    *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 1;
    *(undefined4 *)(this + 0xc) = uVar1;
    uVar5 = *(uint *)(param_1 + 0x20);
    if ((uVar5 >> 1 & 1) != 0) goto LAB_00424e70;
  }
  if ((uVar5 >> 2 & 1) != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x14);
    *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 4;
    *(undefined4 *)(this + 0x14) = uVar1;
    uVar5 = *(uint *)(param_1 + 0x20);
  }
  if ((uVar5 >> 3 & 1) != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 8;
    *(undefined4 *)(this + 0x18) = uVar1;
    uVar5 = *(uint *)(param_1 + 0x20);
  }
  if ((uVar5 >> 4 & 1) != 0) {
                    /* try { // try from 00424e24 to 00524e37 has its CatchHandler @ 00425520 */
    *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 0x10;
  }
LAB_00424e30:
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00424e48 to 00524e53 has its CatchHandler @ 004254e8 */
  return;
}


