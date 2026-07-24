/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00421d28
 * Function: Caver::Proto::SimpleGlowComponent::MergeFrom
 * Signature: undefined __thiscall MergeFrom(SimpleGlowComponent * this, SimpleGlowComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* Caver::Proto::SimpleGlowComponent::MergeFrom(Caver::Proto::SimpleGlowComponent const&) */

void __thiscall
Caver::Proto::SimpleGlowComponent::MergeFrom(SimpleGlowComponent *this,SimpleGlowComponent *param_1)

{
  SimpleGlowComponent *pSVar1;
  undefined4 uVar2;
  SimpleGlowComponent SVar3;
  long lVar4;
  LogMessage *pLVar5;
  uint uVar6;
  FloatColor *this_00;
  Vector2 *this_01;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x3edb);
    pLVar5 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar5);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
    SVar3 = param_1[0x38];
  }
  else {
    SVar3 = param_1[0x38];
  }
  if (SVar3 != (SimpleGlowComponent)0x0) {
    uVar6 = (uint)(byte)SVar3;
    if (((byte)SVar3 & 1) != 0) {
      this_00 = *(FloatColor **)(this + 0x10);
      *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 1;
      if (this_00 == (FloatColor *)0x0) {
        this_00 = operator_new(0x20);
        FloatColor::FloatColor(this_00);
        *(FloatColor **)(this + 0x10) = this_00;
      }
      pSVar1 = *(SimpleGlowComponent **)PTR_default_instance__007e53a8;
      if (*(long *)(param_1 + 0x10) != 0) {
        pSVar1 = param_1;
      }
      FloatColor::MergeFrom(this_00,*(FloatColor **)(pSVar1 + 0x10));
      uVar6 = *(uint *)(param_1 + 0x38);
    }
    if ((uVar6 >> 1 & 1) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x18);
      *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 2;
      *(undefined4 *)(this + 0x18) = uVar2;
      uVar6 = *(uint *)(param_1 + 0x38);
    }
                    /* try { // try from 00421e78 to 00521e7b has its CatchHandler @ 00421efc */
    if ((uVar6 >> 2 & 1) != 0) {
                    /* try { // try from 00421e7c to 00521ec7 has its CatchHandler @ 00421de0 */
      uVar2 = *(undefined4 *)(param_1 + 0x1c);
      *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 4;
      *(undefined4 *)(this + 0x1c) = uVar2;
      uVar6 = *(uint *)(param_1 + 0x38);
    }
    if ((uVar6 >> 3 & 1) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x20);
      *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 8;
      *(undefined4 *)(this + 0x20) = uVar2;
      uVar6 = *(uint *)(param_1 + 0x38);
    }
    if ((uVar6 >> 4 & 1) != 0) {
      this_01 = *(Vector2 **)(this + 0x28);
      *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 0x10;
      if (this_01 == (Vector2 *)0x0) {
                    /* try { // try from 00421ec8 to 00521ecb has its CatchHandler @ 00421ef8 */
                    /* try { // try from 00421ecc to 00521f0f has its CatchHandler @ 00421de0 */
        this_01 = operator_new(0x18);
        Vector2::Vector2(this_01);
        *(Vector2 **)(this + 0x28) = this_01;
      }
      pSVar1 = *(SimpleGlowComponent **)PTR_default_instance__007e53a8;
      if (*(long *)(param_1 + 0x28) != 0) {
        pSVar1 = param_1;
      }
                    /* catch() { ... } // from try @ 00421ec8 with catch @ 00421ef8 */
                    /* catch() { ... } // from try @ 00421e78 with catch @ 00421efc */
      Vector2::MergeFrom(this_01,*(Vector2 **)(pSVar1 + 0x28));
      uVar6 = *(uint *)(param_1 + 0x38);
    }
    if ((uVar6 >> 5 & 1) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x30);
      *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 0x20;
      *(undefined4 *)(this + 0x30) = uVar2;
      uVar6 = *(uint *)(param_1 + 0x38);
    }
                    /* try { // try from 00421de0 to 00521e77 has its CatchHandler @ 00421de0
                       catch() { ... } // from try @ 00421de0 with catch @ 00421de0
                       catch() { ... } // from try @ 00421e7c with catch @ 00421de0
                       catch() { ... } // from try @ 00421ecc with catch @ 00421de0 */
    if ((uVar6 >> 6 & 1) != 0) {
      *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
      *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 0x40;
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


