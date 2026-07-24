/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041fc88
 * Function: Caver::Proto::FireEmitterComponent::MergeFrom
 * Signature: undefined __thiscall MergeFrom(FireEmitterComponent * this, FireEmitterComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* Caver::Proto::FireEmitterComponent::MergeFrom(Caver::Proto::FireEmitterComponent const&) */

void __thiscall
Caver::Proto::FireEmitterComponent::MergeFrom
          (FireEmitterComponent *this,FireEmitterComponent *param_1)

{
  FireEmitterComponent *pFVar1;
  undefined4 uVar2;
  FireEmitterComponent FVar3;
  long lVar4;
  LogMessage *pLVar5;
  uint uVar6;
  Vector2 *this_00;
  FloatColor *this_01;
  Vector3 *pVVar7;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
                    /* try { // try from 0041fc94 to 0051fcb7 has its CatchHandler @ 0041f9d8 */
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
                    /* catch() { ... } // from try @ 0041fc1c with catch @ 0041fcb4 */
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x3d63);
    pLVar5 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar5);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
    FVar3 = param_1[0x40];
  }
  else {
    FVar3 = param_1[0x40];
  }
  if (FVar3 == (FireEmitterComponent)0x0) goto LAB_0041fee4;
  uVar6 = (uint)(byte)FVar3;
  if (((byte)FVar3 & 1) == 0) {
    if (((byte)FVar3 >> 1 & 1) != 0) {
LAB_0041fd48:
      uVar2 = *(undefined4 *)(param_1 + 0x10);
      *(uint *)(this + 0x40) = *(uint *)(this + 0x40) | 2;
      *(undefined4 *)(this + 0x10) = uVar2;
      uVar6 = *(uint *)(param_1 + 0x40);
    }
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0xc);
    *(uint *)(this + 0x40) = *(uint *)(this + 0x40) | 1;
    *(undefined4 *)(this + 0xc) = uVar2;
    uVar6 = *(uint *)(param_1 + 0x40);
    if ((uVar6 >> 1 & 1) != 0) goto LAB_0041fd48;
  }
  if ((uVar6 >> 2 & 1) != 0) {
    this_00 = *(Vector2 **)(this + 0x18);
    *(uint *)(this + 0x40) = *(uint *)(this + 0x40) | 4;
    if (this_00 == (Vector2 *)0x0) {
      this_00 = operator_new(0x18);
      Vector2::Vector2(this_00);
      *(Vector2 **)(this + 0x18) = this_00;
    }
    pFVar1 = *(FireEmitterComponent **)PTR_default_instance__007e7b98;
    if (*(long *)(param_1 + 0x18) != 0) {
      pFVar1 = param_1;
    }
    Vector2::MergeFrom(this_00,*(Vector2 **)(pFVar1 + 0x18));
    uVar6 = *(uint *)(param_1 + 0x40);
  }
  if ((uVar6 >> 3 & 1) != 0) {
    pVVar7 = *(Vector3 **)(this + 0x20);
    *(uint *)(this + 0x40) = *(uint *)(this + 0x40) | 8;
    if (pVVar7 == (Vector3 *)0x0) {
      pVVar7 = operator_new(0x20);
      Vector3::Vector3(pVVar7);
      *(Vector3 **)(this + 0x20) = pVVar7;
    }
    pFVar1 = *(FireEmitterComponent **)PTR_default_instance__007e7b98;
    if (*(long *)(param_1 + 0x20) != 0) {
      pFVar1 = param_1;
    }
                    /* try { // try from 0041fdfc to 0051fe9f has its CatchHandler @ 0041fdfc
                       catch(type#1 @ 00000000) { ... } // from try @ 0041fdfc with catch @ 0041fdfc
                       catch(type#1 @ 00000000) { ... } // from try @ 0041fed0 with catch @ 0041fdfc
                       catch(type#1 @ 00000000) { ... } // from try @ 0041ff94 with catch @ 0041fdfc
                        */
    Vector3::MergeFrom(pVVar7,*(Vector3 **)(pFVar1 + 0x20));
    uVar6 = *(uint *)(param_1 + 0x40);
  }
  if ((uVar6 >> 4 & 1) != 0) {
    this_01 = *(FloatColor **)(this + 0x28);
    *(uint *)(this + 0x40) = *(uint *)(this + 0x40) | 0x10;
    if (this_01 == (FloatColor *)0x0) {
      this_01 = operator_new(0x20);
      FloatColor::FloatColor(this_01);
      *(FloatColor **)(this + 0x28) = this_01;
    }
    pFVar1 = *(FireEmitterComponent **)PTR_default_instance__007e7b98;
    if (*(long *)(param_1 + 0x28) != 0) {
      pFVar1 = param_1;
    }
    FloatColor::MergeFrom(this_01,*(FloatColor **)(pFVar1 + 0x28));
    uVar6 = *(uint *)(param_1 + 0x40);
  }
  if ((uVar6 >> 5 & 1) != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x30);
    *(uint *)(this + 0x40) = *(uint *)(this + 0x40) | 0x20;
    *(undefined4 *)(this + 0x30) = uVar2;
    uVar6 = *(uint *)(param_1 + 0x40);
  }
  if ((uVar6 >> 6 & 1) != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x34);
    *(uint *)(this + 0x40) = *(uint *)(this + 0x40) | 0x40;
    *(undefined4 *)(this + 0x34) = uVar2;
    uVar6 = *(uint *)(param_1 + 0x40);
  }
  if ((uVar6 >> 7 & 1) != 0) {
    pVVar7 = *(Vector3 **)(this + 0x38);
                    /* try { // try from 0041fea0 to 0051fecf has its CatchHandler @ 0041ff48 */
    *(uint *)(this + 0x40) = *(uint *)(this + 0x40) | 0x80;
    if (pVVar7 == (Vector3 *)0x0) {
      pVVar7 = operator_new(0x20);
      Vector3::Vector3(pVVar7);
      *(Vector3 **)(this + 0x38) = pVVar7;
    }
                    /* try { // try from 0041fed0 to 0051ff6b has its CatchHandler @ 0041fdfc */
    pFVar1 = *(FireEmitterComponent **)PTR_default_instance__007e7b98;
    if (*(long *)(param_1 + 0x38) != 0) {
      pFVar1 = param_1;
    }
    Vector3::MergeFrom(pVVar7,*(Vector3 **)(pFVar1 + 0x38));
  }
LAB_0041fee4:
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


