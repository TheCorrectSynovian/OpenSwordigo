/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00428740
 * Function: Caver::Proto::BouncingMonsterControllerComponent::MergeFrom
 * Signature: undefined __thiscall MergeFrom(BouncingMonsterControllerComponent * this, BouncingMonsterControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::BouncingMonsterControllerComponent::MergeFrom(Caver::Proto::BouncingMonsterControllerComponent
   const&) */

void __thiscall
Caver::Proto::BouncingMonsterControllerComponent::MergeFrom
          (BouncingMonsterControllerComponent *this,BouncingMonsterControllerComponent *param_1)

{
  undefined4 uVar1;
  BouncingMonsterControllerComponent BVar2;
  long lVar3;
  LogMessage *pLVar4;
  uint uVar5;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (param_1 == this) {
                    /* try { // try from 00428774 to 00528777 has its CatchHandler @ 00428788 */
                    /* try { // try from 00428778 to 0052878b has its CatchHandler @ 00428710 */
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x4c28);
                    /* catch() { ... } // from try @ 00428774 with catch @ 00428788 */
                    /* try { // try from 0042878c to 00528793 has its CatchHandler @ 0042879c */
                    /* try { // try from 00428794 to 0052879f has its CatchHandler @ 00428710 */
    pLVar4 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
                    /* catch() { ... } // from try @ 0042878c with catch @ 0042879c */
                    /* catch() { ... } // from try @ 0042882c with catch @ 004287a0 */
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar4);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
  }
  BVar2 = param_1[0x1c];
  uVar5 = (uint)(byte)BVar2;
  if (BVar2 == (BouncingMonsterControllerComponent)0x0) goto LAB_004287d4;
  if (((byte)BVar2 & 1) == 0) {
    if (((byte)BVar2 >> 1 & 1) != 0) {
LAB_00428814:
      uVar1 = *(undefined4 *)(param_1 + 0x10);
                    /* catch() { ... } // from try @ 00428804 with catch @ 00428820 */
      *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 2;
                    /* try { // try from 00428824 to 0052882b has its CatchHandler @ 00428830 */
      *(undefined4 *)(this + 0x10) = uVar1;
      uVar5 = *(uint *)(param_1 + 0x1c);
                    /* try { // try from 0042882c to 00528847 has its CatchHandler @ 004287a0 */
    }
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0xc);
                    /* try { // try from 00428804 to 00528807 has its CatchHandler @ 00428820 */
    *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 1;
                    /* try { // try from 00428808 to 0052880f has its CatchHandler @ 00428834 */
    *(undefined4 *)(this + 0xc) = uVar1;
    uVar5 = *(uint *)(param_1 + 0x1c);
    if ((uVar5 >> 1 & 1) != 0) goto LAB_00428814;
  }
  if ((uVar5 >> 2 & 1) != 0) {
                    /* catch() { ... } // from try @ 00428824 with catch @ 00428830 */
                    /* catch() { ... } // from try @ 00428808 with catch @ 00428834 */
    uVar1 = *(undefined4 *)(param_1 + 0x14);
    *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 4;
    *(undefined4 *)(this + 0x14) = uVar1;
    uVar5 = *(uint *)(param_1 + 0x1c);
  }
                    /* try { // try from 00428848 to 00528863 has its CatchHandler @ 00428848
                       catch() { ... } // from try @ 00428848 with catch @ 00428848
                       catch() { ... } // from try @ 00428868 with catch @ 00428848 */
  if ((uVar5 >> 3 & 1) != 0) {
    *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
    *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 8;
  }
LAB_004287d4:
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


