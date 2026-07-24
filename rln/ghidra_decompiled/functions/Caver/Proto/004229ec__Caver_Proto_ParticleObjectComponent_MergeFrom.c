/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004229ec
 * Function: Caver::Proto::ParticleObjectComponent::MergeFrom
 * Signature: undefined __thiscall MergeFrom(ParticleObjectComponent * this, ParticleObjectComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ParticleObjectComponent::MergeFrom(Caver::Proto::ParticleObjectComponent const&) */

void __thiscall
Caver::Proto::ParticleObjectComponent::MergeFrom
          (ParticleObjectComponent *this,ParticleObjectComponent *param_1)

{
  ParticleObjectComponent PVar1;
  long lVar2;
  LogMessage *pLVar3;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
                    /* try { // try from 00422a00 to 00522a27 has its CatchHandler @ 00422a84 */
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x3f97);
    pLVar3 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
                    /* catch() { ... } // from try @ 00422a00 with catch @ 00422a84 */
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar3);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
    PVar1 = param_1[0x10];
  }
  else {
    PVar1 = param_1[0x10];
  }
  if (((byte)PVar1 & 1) != 0) {
                    /* try { // try from 00422a28 to 00522aa7 has its CatchHandler @ 004228f0 */
    *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(uint *)(this + 0x10) = *(uint *)(this + 0x10) | 1;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


