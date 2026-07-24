/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00434e68
 * Function: Caver::Proto::FireBreathComponent::MergeFrom
 * Signature: undefined __thiscall MergeFrom(FireBreathComponent * this, FireBreathComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::FireBreathComponent::MergeFrom(Caver::Proto::FireBreathComponent const&) */

void __thiscall
Caver::Proto::FireBreathComponent::MergeFrom(FireBreathComponent *this,FireBreathComponent *param_1)

{
  FireBreathComponent *pFVar1;
  undefined4 uVar2;
  FireBreathComponent FVar3;
  long lVar4;
  LogMessage *pLVar5;
  uint uVar6;
  FloatColor *this_00;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x6168);
                    /* try { // try from 00434ec8 to 00534ed3 has its CatchHandler @ 0043517c */
    pLVar5 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar5);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
    FVar3 = param_1[0x20];
  }
  else {
    FVar3 = param_1[0x20];
  }
  if (FVar3 == (FireBreathComponent)0x0) goto LAB_00434f7c;
  uVar6 = (uint)(byte)FVar3;
  if (((byte)FVar3 & 1) == 0) {
                    /* try { // try from 00434ea4 to 00534eb7 has its CatchHandler @ 004351b4 */
    if (((byte)FVar3 >> 1 & 1) != 0) {
LAB_00434f14:
      uVar2 = *(undefined4 *)(param_1 + 0x10);
      *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 2;
      *(undefined4 *)(this + 0x10) = uVar2;
      uVar6 = *(uint *)(param_1 + 0x20);
    }
  }
  else {
                    /* try { // try from 00434efc to 00534f37 has its CatchHandler @ 00435120 */
    uVar2 = *(undefined4 *)(param_1 + 0xc);
    *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 1;
    *(undefined4 *)(this + 0xc) = uVar2;
    uVar6 = *(uint *)(param_1 + 0x20);
    if ((uVar6 >> 1 & 1) != 0) goto LAB_00434f14;
  }
  if ((uVar6 >> 2 & 1) != 0) {
    this_00 = *(FloatColor **)(this + 0x18);
                    /* try { // try from 00434f38 to 00535323 has its CatchHandler @ 00434d10 */
    *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 4;
    if (this_00 == (FloatColor *)0x0) {
      this_00 = operator_new(0x20);
      FloatColor::FloatColor(this_00);
      *(FloatColor **)(this + 0x18) = this_00;
    }
    pFVar1 = *(FireBreathComponent **)PTR_default_instance__007e77e8;
    if (*(long *)(param_1 + 0x18) != 0) {
      pFVar1 = param_1;
    }
    FloatColor::MergeFrom(this_00,*(FloatColor **)(pFVar1 + 0x18));
  }
LAB_00434f7c:
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


