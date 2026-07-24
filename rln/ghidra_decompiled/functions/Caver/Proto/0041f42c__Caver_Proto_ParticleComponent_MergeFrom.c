/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041f42c
 * Function: Caver::Proto::ParticleComponent::MergeFrom
 * Signature: undefined __thiscall MergeFrom(ParticleComponent * this, ParticleComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ParticleComponent::MergeFrom(Caver::Proto::ParticleComponent const&) */

void __thiscall
Caver::Proto::ParticleComponent::MergeFrom(ParticleComponent *this,ParticleComponent *param_1)

{
  ParticleComponent PVar1;
  long lVar2;
  undefined *puVar3;
  LogMessage *pLVar4;
  long *plVar5;
  uint uVar6;
  undefined8 uVar7;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x3bda);
    pLVar4 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar4);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
  }
  puVar3 = PTR__default_texture_name__007e6170;
  PVar1 = param_1[0x1c];
  uVar6 = (uint)(byte)PVar1;
  if (PVar1 != (ParticleComponent)0x0) {
    if (((byte)PVar1 & 1) != 0) {
      plVar5 = *(long **)(this + 0x10);
      uVar7 = *(undefined8 *)(param_1 + 0x10);
                    /* catch() { ... } // from try @ 0041f3b0 with catch @ 0041f4bc */
      *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 1;
      if (plVar5 == (long *)puVar3) {
        plVar5 = operator_new(8);
        *plVar5 = (long)(PTR_DAT_007e5de8 + 0x18);
                    /* try { // try from 0041f4e0 to 0051f517 has its CatchHandler @ 0041f520 */
        *(long **)(this + 0x10) = plVar5;
      }
      FUN_0066a6a8(plVar5,uVar7);
                    /* catch() { ... } // from try @ 0041f354 with catch @ 0041f4ec */
      uVar6 = *(uint *)(param_1 + 0x1c);
    }
    if ((uVar6 >> 1 & 1) != 0) {
      *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
      *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 2;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* try { // try from 0041f518 to 0051f523 has its CatchHandler @ 0041f2ec */
                    /* catch() { ... } // from try @ 0041f4e0 with catch @ 0041f520 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


