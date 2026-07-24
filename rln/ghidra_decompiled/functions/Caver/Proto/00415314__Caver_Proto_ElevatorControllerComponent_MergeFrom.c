/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00415314
 * Function: Caver::Proto::ElevatorControllerComponent::MergeFrom
 * Signature: undefined __thiscall MergeFrom(ElevatorControllerComponent * this, ElevatorControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ElevatorControllerComponent::MergeFrom(Caver::Proto::ElevatorControllerComponent
   const&) */

void __thiscall
Caver::Proto::ElevatorControllerComponent::MergeFrom
          (ElevatorControllerComponent *this,ElevatorControllerComponent *param_1)

{
  undefined4 uVar1;
  ElevatorControllerComponent EVar2;
  long lVar3;
  LogMessage *pLVar4;
  uint uVar5;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (param_1 == this) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004152dc with catch @ 00415358
                        */
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x2a9c);
                    /* try { // try from 0041535c to 00515363 has its CatchHandler @ 00415368 */
                    /* try { // try from 00415364 to 0051537f has its CatchHandler @ 00415250 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0041535c with catch @ 00415368
                        */
    pLVar4 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004152e0 with catch @ 0041536c
                        */
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar4);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
  }
                    /* try { // try from 00415380 to 0051539b has its CatchHandler @ 00415380
                       catch() { ... } // from try @ 00415380 with catch @ 00415380
                       catch() { ... } // from try @ 004153a0 with catch @ 00415380 */
  EVar2 = param_1[0x14];
  uVar5 = (uint)(byte)EVar2;
  if (EVar2 != (ElevatorControllerComponent)0x0) {
    if (((byte)EVar2 & 1) != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0xc);
      *(uint *)(this + 0x14) = *(uint *)(this + 0x14) | 1;
                    /* try { // try from 0041539c to 0051539f has its CatchHandler @ 00415404 */
      *(undefined4 *)(this + 0xc) = uVar1;
                    /* try { // try from 004153a0 to 00515417 has its CatchHandler @ 00415380 */
      uVar5 = *(uint *)(param_1 + 0x14);
    }
    if ((uVar5 >> 1 & 1) != 0) {
      *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
      *(uint *)(this + 0x14) = *(uint *)(this + 0x14) | 2;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


