/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041466c
 * Function: Caver::Proto::EntityComponent::MergeFrom
 * Signature: undefined __thiscall MergeFrom(EntityComponent * this, EntityComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::EntityComponent::MergeFrom(Caver::Proto::EntityComponent const&) */

void __thiscall
Caver::Proto::EntityComponent::MergeFrom(EntityComponent *this,EntityComponent *param_1)

{
  undefined4 uVar1;
  EntityComponent EVar2;
  long lVar3;
  LogMessage *pLVar4;
  uint uVar5;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x28d5);
                    /* try { // try from 004146b4 to 005146db has its CatchHandler @ 00414760 */
    pLVar4 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar4);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
  }
  EVar2 = param_1[0x14];
  uVar5 = (uint)(byte)EVar2;
                    /* try { // try from 004146dc to 00514783 has its CatchHandler @ 00414624 */
  if (EVar2 != (EntityComponent)0x0) {
    if (((byte)EVar2 & 1) != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0xc);
      *(uint *)(this + 0x14) = *(uint *)(this + 0x14) | 1;
      *(undefined4 *)(this + 0xc) = uVar1;
      uVar5 = *(uint *)(param_1 + 0x14);
    }
    if ((uVar5 >> 1 & 1) != 0) {
      EVar2 = param_1[0x10];
      *(uint *)(this + 0x14) = *(uint *)(this + 0x14) | 2;
      this[0x10] = EVar2;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


