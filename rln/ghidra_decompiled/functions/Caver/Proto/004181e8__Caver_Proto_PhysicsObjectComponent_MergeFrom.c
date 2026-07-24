/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004181e8
 * Function: Caver::Proto::PhysicsObjectComponent::MergeFrom
 * Signature: undefined __thiscall MergeFrom(PhysicsObjectComponent * this, PhysicsObjectComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* Caver::Proto::PhysicsObjectComponent::MergeFrom(Caver::Proto::PhysicsObjectComponent const&) */

void __thiscall
Caver::Proto::PhysicsObjectComponent::MergeFrom
          (PhysicsObjectComponent *this,PhysicsObjectComponent *param_1)

{
  PhysicsObjectComponent *pPVar1;
  undefined4 uVar2;
  PhysicsObjectComponent PVar3;
  long lVar4;
  LogMessage *pLVar5;
  uint uVar6;
  Vector2 *this_00;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
                    /* try { // try from 00418208 to 00518213 has its CatchHandler @ 004196c4 */
  if (param_1 == this) {
                    /* try { // try from 004182b4 to 005182bf has its CatchHandler @ 0041962c */
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x3090);
    pLVar5 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar5);
                    /* try { // try from 004182e0 to 0051831b has its CatchHandler @ 004195d0 */
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
    PVar3 = param_1[0x30];
  }
  else {
    PVar3 = param_1[0x30];
  }
  if (PVar3 != (PhysicsObjectComponent)0x0) {
    uVar6 = (uint)(byte)PVar3;
    if (((byte)PVar3 & 1) != 0) {
      PVar3 = param_1[0xc];
      *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 1;
                    /* try { // try from 00418234 to 0051826f has its CatchHandler @ 00419668 */
      this[0xc] = PVar3;
      uVar6 = *(uint *)(param_1 + 0x30);
    }
    if ((uVar6 >> 1 & 1) != 0) {
      this_00 = *(Vector2 **)(this + 0x10);
      *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 2;
      if (this_00 == (Vector2 *)0x0) {
        this_00 = operator_new(0x18);
        Vector2::Vector2(this_00);
        *(Vector2 **)(this + 0x10) = this_00;
      }
      pPVar1 = *(PhysicsObjectComponent **)PTR_default_instance__007e5a38;
      if (*(long *)(param_1 + 0x10) != 0) {
        pPVar1 = param_1;
      }
      Vector2::MergeFrom(this_00,*(Vector2 **)(pPVar1 + 0x10));
      uVar6 = *(uint *)(param_1 + 0x30);
    }
                    /* try { // try from 00418290 to 005182a3 has its CatchHandler @ 00419664 */
    if ((uVar6 >> 2 & 1) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x18);
      *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 4;
      *(undefined4 *)(this + 0x18) = uVar2;
      uVar6 = *(uint *)(param_1 + 0x30);
    }
    if ((uVar6 >> 3 & 1) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x1c);
      *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 8;
      *(undefined4 *)(this + 0x1c) = uVar2;
      uVar6 = *(uint *)(param_1 + 0x30);
    }
    if ((uVar6 >> 4 & 1) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x20);
      *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 0x10;
                    /* try { // try from 0041833c to 0051834f has its CatchHandler @ 004195cc */
      *(undefined4 *)(this + 0x20) = uVar2;
      uVar6 = *(uint *)(param_1 + 0x30);
    }
    if ((uVar6 >> 5 & 1) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x24);
      *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 0x20;
      *(undefined4 *)(this + 0x24) = uVar2;
      uVar6 = *(uint *)(param_1 + 0x30);
                    /* try { // try from 00418360 to 0051836b has its CatchHandler @ 00419594 */
    }
    if ((uVar6 >> 6 & 1) != 0) {
      PVar3 = param_1[0x28];
      *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 0x40;
      this[0x28] = PVar3;
      uVar6 = *(uint *)(param_1 + 0x30);
    }
    if ((uVar6 >> 7 & 1) != 0) {
                    /* try { // try from 0041838c to 005183c7 has its CatchHandler @ 00419538 */
      *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
      *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 0x80;
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


