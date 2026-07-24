/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042397c
 * Function: Caver::Proto::MonsterControllerComponent::MergeFrom
 * Signature: undefined __thiscall MergeFrom(MonsterControllerComponent * this, MonsterControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MonsterControllerComponent::MergeFrom(Caver::Proto::MonsterControllerComponent
   const&) */

void __thiscall
Caver::Proto::MonsterControllerComponent::MergeFrom
          (MonsterControllerComponent *this,MonsterControllerComponent *param_1)

{
  undefined4 uVar1;
  MonsterControllerComponent MVar2;
  long lVar3;
  LogMessage *pLVar4;
  uint uVar5;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 0042399c to 005239a7 has its CatchHandler @ 00423818 */
                    /* catch() { ... } // from try @ 0042396c with catch @ 004239a4 */
  if (param_1 == this) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00423ab8 with catch @ 004239b4
                       catch(type#1 @ 00000000) { ... } // from try @ 00423ca0 with catch @ 004239b4
                        */
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x41f4);
    pLVar4 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar4);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
  }
  MVar2 = param_1[0x1c];
  uVar5 = (uint)(byte)MVar2;
  if (MVar2 == (MonsterControllerComponent)0x0) goto LAB_00423a10;
  if (((byte)MVar2 & 1) == 0) {
    if (((byte)MVar2 >> 1 & 1) != 0) {
LAB_00423a50:
      uVar1 = *(undefined4 *)(param_1 + 0x10);
      *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 2;
      *(undefined4 *)(this + 0x10) = uVar1;
      uVar5 = *(uint *)(param_1 + 0x1c);
    }
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0xc);
    *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 1;
    *(undefined4 *)(this + 0xc) = uVar1;
    uVar5 = *(uint *)(param_1 + 0x1c);
    if ((uVar5 >> 1 & 1) != 0) goto LAB_00423a50;
  }
  if ((uVar5 >> 2 & 1) != 0) {
                    /* try { // try from 00423a6c to 00523a6f has its CatchHandler @ 00423c78 */
    uVar1 = *(undefined4 *)(param_1 + 0x14);
    *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 4;
    *(undefined4 *)(this + 0x14) = uVar1;
    uVar5 = *(uint *)(param_1 + 0x1c);
  }
  if ((uVar5 >> 3 & 1) != 0) {
    *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
    *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 8;
  }
LAB_00423a10:
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


