/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00432928
 * Function: Caver::Proto::MagicBoltComponent::MergeFrom
 * Signature: undefined __thiscall MergeFrom(MagicBoltComponent * this, MagicBoltComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* Caver::Proto::MagicBoltComponent::MergeFrom(Caver::Proto::MagicBoltComponent const&) */

void __thiscall
Caver::Proto::MagicBoltComponent::MergeFrom(MagicBoltComponent *this,MagicBoltComponent *param_1)

{
  MagicBoltComponent *pMVar1;
  undefined4 uVar2;
  MagicBoltComponent MVar3;
  long lVar4;
  LogMessage *pLVar5;
  uint uVar6;
  FloatColor *this_00;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
                    /* catch() { ... } // from try @ 00432824 with catch @ 00432928 */
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  if (param_1 == this) {
                    /* catch() { ... } // from try @ 0043291c with catch @ 0043297c */
                    /* catch() { ... } // from try @ 004329d0 with catch @ 00432984 */
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x5d89);
    pLVar5 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
                    /* try { // try from 004329a8 to 005329bb has its CatchHandler @ 00432ac0 */
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar5);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
    MVar3 = param_1[0x24];
  }
  else {
    MVar3 = param_1[0x24];
  }
  if (MVar3 == (MagicBoltComponent)0x0) goto LAB_00432a78;
  uVar6 = (uint)(byte)MVar3;
  if (((byte)MVar3 & 1) == 0) {
    if (((byte)MVar3 >> 1 & 1) != 0) {
LAB_004329dc:
      uVar2 = *(undefined4 *)(param_1 + 0x10);
      *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 2;
      *(undefined4 *)(this + 0x10) = uVar2;
      uVar6 = *(uint *)(param_1 + 0x24);
    }
  }
  else {
                    /* try { // try from 004329c0 to 005329cf has its CatchHandler @ 00432a50 */
    uVar2 = *(undefined4 *)(param_1 + 0xc);
    *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 1;
                    /* try { // try from 004329d0 to 00532ac3 has its CatchHandler @ 00432984 */
    *(undefined4 *)(this + 0xc) = uVar2;
    uVar6 = *(uint *)(param_1 + 0x24);
    if ((uVar6 >> 1 & 1) != 0) goto LAB_004329dc;
  }
  if ((uVar6 >> 2 & 1) != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x14);
    *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 4;
    *(undefined4 *)(this + 0x14) = uVar2;
    uVar6 = *(uint *)(param_1 + 0x24);
  }
  if ((uVar6 >> 3 & 1) != 0) {
    this_00 = *(FloatColor **)(this + 0x18);
    *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 8;
    if (this_00 == (FloatColor *)0x0) {
      this_00 = operator_new(0x20);
      FloatColor::FloatColor(this_00);
      *(FloatColor **)(this + 0x18) = this_00;
    }
                    /* catch() { ... } // from try @ 004329c0 with catch @ 00432a50 */
    pMVar1 = *(MagicBoltComponent **)PTR_default_instance__007e4db8;
    if (*(long *)(param_1 + 0x18) != 0) {
      pMVar1 = param_1;
    }
    FloatColor::MergeFrom(this_00,*(FloatColor **)(pMVar1 + 0x18));
    uVar6 = *(uint *)(param_1 + 0x24);
  }
  if ((uVar6 >> 4 & 1) != 0) {
    *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
    *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 0x10;
  }
LAB_00432a78:
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


