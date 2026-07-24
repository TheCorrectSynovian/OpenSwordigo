/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042e03c
 * Function: Caver::Proto::CollectableItemComponent::MergeFrom
 * Signature: undefined __thiscall MergeFrom(CollectableItemComponent * this, CollectableItemComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* Caver::Proto::CollectableItemComponent::MergeFrom(Caver::Proto::CollectableItemComponent const&)
    */

void __thiscall
Caver::Proto::CollectableItemComponent::MergeFrom
          (CollectableItemComponent *this,CollectableItemComponent *param_1)

{
  CollectableItemComponent *pCVar1;
  undefined4 uVar2;
  CollectableItemComponent CVar3;
  long lVar4;
  undefined *puVar5;
  LogMessage *pLVar6;
  long *plVar7;
  long *plVar8;
  uint uVar9;
  undefined8 uVar10;
  Program *this_00;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x56ea);
    pLVar6 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar6);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
    CVar3 = param_1[0x38];
  }
  else {
    CVar3 = param_1[0x38];
  }
  if (CVar3 == (CollectableItemComponent)0x0) goto LAB_0042e218;
  uVar9 = (uint)(byte)CVar3;
  if (((byte)CVar3 & 1) == 0) {
    puVar5 = PTR__default_item_name__007e5e68;
    if (((byte)CVar3 >> 1 & 1) != 0) {
LAB_0042e0f4:
      uVar2 = *(undefined4 *)(param_1 + 0x10);
      *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 2;
                    /* try { // try from 0042e104 to 0052e117 has its CatchHandler @ 0042e21c */
      *(undefined4 *)(this + 0x10) = uVar2;
      uVar9 = *(uint *)(param_1 + 0x38);
      puVar5 = PTR__default_item_name__007e5e68;
    }
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0xc);
                    /* catch() { ... } // from try @ 0042e12c with catch @ 0042e0e0 */
    *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 1;
    *(undefined4 *)(this + 0xc) = uVar2;
    uVar9 = *(uint *)(param_1 + 0x38);
    puVar5 = PTR__default_item_name__007e5e68;
    if ((uVar9 >> 1 & 1) != 0) goto LAB_0042e0f4;
  }
  PTR__default_item_name__007e5e68 = puVar5;
  plVar7 = (long *)PTR__default_identifier__007e6b70;
  if ((uVar9 >> 2 & 1) != 0) {
    plVar7 = *(long **)(this + 0x18);
                    /* try { // try from 0042e11c to 0052e12b has its CatchHandler @ 0042e1ac */
    uVar10 = *(undefined8 *)(param_1 + 0x18);
    *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 4;
                    /* try { // try from 0042e12c to 0052e21f has its CatchHandler @ 0042e0e0 */
    if (plVar7 == (long *)puVar5) {
      plVar7 = operator_new(8);
      *plVar7 = (long)(PTR_DAT_007e5de8 + 0x18);
      *(long **)(this + 0x18) = plVar7;
    }
    FUN_0066a6a8(plVar7,uVar10);
    uVar9 = *(uint *)(param_1 + 0x38);
    plVar7 = (long *)PTR__default_identifier__007e6b70;
  }
  PTR__default_identifier__007e6b70 = (undefined *)plVar7;
  if ((uVar9 >> 3 & 1) != 0) {
    plVar8 = *(long **)(this + 0x20);
    uVar10 = *(undefined8 *)(param_1 + 0x20);
    *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 8;
    if (plVar8 == plVar7) {
      plVar8 = operator_new(8);
      *plVar8 = (long)(PTR_DAT_007e5de8 + 0x18);
      *(long **)(this + 0x20) = plVar8;
    }
    FUN_0066a6a8(plVar8,uVar10);
    uVar9 = *(uint *)(param_1 + 0x38);
                    /* catch() { ... } // from try @ 0042e11c with catch @ 0042e1ac */
  }
  if ((uVar9 >> 4 & 1) != 0) {
    CVar3 = param_1[0x28];
    *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 0x10;
    this[0x28] = CVar3;
    uVar9 = *(uint *)(param_1 + 0x38);
  }
  if ((uVar9 >> 5 & 1) != 0) {
    this_00 = *(Program **)(this + 0x30);
    *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 0x20;
    if (this_00 == (Program *)0x0) {
      this_00 = operator_new(0x30);
      Program::Program(this_00);
      *(Program **)(this + 0x30) = this_00;
    }
    pCVar1 = *(CollectableItemComponent **)PTR_default_instance__007e5fb8;
    if (*(long *)(param_1 + 0x30) != 0) {
      pCVar1 = param_1;
    }
    Program::MergeFrom(this_00,*(Program **)(pCVar1 + 0x30));
  }
LAB_0042e218:
                    /* catch() { ... } // from try @ 0042e104 with catch @ 0042e21c */
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


