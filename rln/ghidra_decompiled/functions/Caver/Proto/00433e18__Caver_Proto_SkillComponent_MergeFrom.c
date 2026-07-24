/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00433e18
 * Function: Caver::Proto::SkillComponent::MergeFrom
 * Signature: undefined __thiscall MergeFrom(SkillComponent * this, SkillComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SkillComponent::MergeFrom(Caver::Proto::SkillComponent const&) */

void __thiscall
Caver::Proto::SkillComponent::MergeFrom(SkillComponent *this,SkillComponent *param_1)

{
  SkillComponent *pSVar1;
  undefined4 uVar2;
  SkillComponent SVar3;
  long lVar4;
  undefined *puVar5;
  LogMessage *pLVar6;
  long *plVar7;
  uint uVar8;
  undefined8 uVar9;
  Vector2 *this_00;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x5fb4);
    pLVar6 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar6);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
    SVar3 = param_1[0x20];
  }
  else {
    SVar3 = param_1[0x20];
  }
  if (SVar3 == (SkillComponent)0x0) goto LAB_00433f60;
  uVar8 = (uint)(byte)SVar3;
  if (((byte)SVar3 & 1) == 0) {
    if (((byte)SVar3 >> 1 & 1) != 0) {
LAB_00433ec4:
      puVar5 = PTR__default_cast_object_template_name__007e65a8;
      plVar7 = *(long **)(this + 0x10);
      uVar9 = *(undefined8 *)(param_1 + 0x10);
      *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 2;
      if (plVar7 == (long *)puVar5) {
        plVar7 = operator_new(8);
        *plVar7 = (long)(PTR_DAT_007e5de8 + 0x18);
        *(long **)(this + 0x10) = plVar7;
      }
      FUN_0066a6a8(plVar7,uVar9);
      uVar8 = *(uint *)(param_1 + 0x20);
    }
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0xc);
    *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 1;
    *(undefined4 *)(this + 0xc) = uVar2;
    uVar8 = *(uint *)(param_1 + 0x20);
                    /* try { // try from 00433ec0 to 00533f0f has its CatchHandler @ 00433ec0
                       catch() { ... } // from try @ 00433ec0 with catch @ 00433ec0
                       catch() { ... } // from try @ 00433f60 with catch @ 00433ec0 */
    if ((uVar8 >> 1 & 1) != 0) goto LAB_00433ec4;
  }
                    /* try { // try from 00433f10 to 00533f1f has its CatchHandler @ 0043403c */
  if ((uVar8 >> 2 & 1) != 0) {
    this_00 = *(Vector2 **)(this + 0x18);
    *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 4;
                    /* try { // try from 00433f24 to 00533f5f has its CatchHandler @ 00434044 */
    if (this_00 == (Vector2 *)0x0) {
      this_00 = operator_new(0x18);
      Vector2::Vector2(this_00);
      *(Vector2 **)(this + 0x18) = this_00;
    }
    pSVar1 = *(SkillComponent **)PTR_default_instance__007e5830;
    if (*(long *)(param_1 + 0x18) != 0) {
      pSVar1 = param_1;
    }
    Vector2::MergeFrom(this_00,*(Vector2 **)(pSVar1 + 0x18));
  }
LAB_00433f60:
                    /* try { // try from 00433f60 to 0053410f has its CatchHandler @ 00433ec0 */
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


