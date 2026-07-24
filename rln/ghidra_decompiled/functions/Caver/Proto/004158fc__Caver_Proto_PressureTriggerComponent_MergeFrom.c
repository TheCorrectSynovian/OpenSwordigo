/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004158fc
 * Function: Caver::Proto::PressureTriggerComponent::MergeFrom
 * Signature: undefined __thiscall MergeFrom(PressureTriggerComponent * this, PressureTriggerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PressureTriggerComponent::MergeFrom(Caver::Proto::PressureTriggerComponent const&)
    */

void __thiscall
Caver::Proto::PressureTriggerComponent::MergeFrom
          (PressureTriggerComponent *this,PressureTriggerComponent *param_1)

{
  PressureTriggerComponent *pPVar1;
  undefined4 uVar2;
  PressureTriggerComponent PVar3;
  long lVar4;
  LogMessage *pLVar5;
  uint uVar6;
  Program *pPVar7;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004158cc with catch @ 00415920
                        */
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x2ba3);
    pLVar5 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
                    /* try { // try from 00415978 to 0051597b has its CatchHandler @ 00415994 */
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar5);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
    PVar3 = param_1[0x28];
  }
  else {
    PVar3 = param_1[0x28];
  }
  if (PVar3 == (PressureTriggerComponent)0x0) goto LAB_00415a68;
  uVar6 = (uint)(byte)PVar3;
  if (((byte)PVar3 & 1) == 0) {
    if (((byte)PVar3 >> 1 & 1) != 0) {
LAB_004159ac:
      PVar3 = param_1[0x10];
      *(uint *)(this + 0x28) = *(uint *)(this + 0x28) | 2;
      this[0x10] = PVar3;
      uVar6 = *(uint *)(param_1 + 0x28);
    }
  }
  else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00415978 with catch @ 00415994
                        */
    uVar2 = *(undefined4 *)(param_1 + 0xc);
                    /* try { // try from 00415998 to 0051599b has its CatchHandler @ 004159a4 */
                    /* try { // try from 0041599c to 005159a7 has its CatchHandler @ 004158a0 */
    *(uint *)(this + 0x28) = *(uint *)(this + 0x28) | 1;
    *(undefined4 *)(this + 0xc) = uVar2;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00415998 with catch @ 004159a4
                        */
    uVar6 = *(uint *)(param_1 + 0x28);
    if ((uVar6 >> 1 & 1) != 0) goto LAB_004159ac;
  }
  if ((uVar6 >> 2 & 1) != 0) {
    pPVar7 = *(Program **)(this + 0x18);
    *(uint *)(this + 0x28) = *(uint *)(this + 0x28) | 4;
    if (pPVar7 == (Program *)0x0) {
      pPVar7 = operator_new(0x30);
      Program::Program(pPVar7);
      *(Program **)(this + 0x18) = pPVar7;
    }
    pPVar1 = *(PressureTriggerComponent **)PTR_default_instance__007e4948;
    if (*(long *)(param_1 + 0x18) != 0) {
      pPVar1 = param_1;
    }
    Program::MergeFrom(pPVar7,*(Program **)(pPVar1 + 0x18));
    uVar6 = *(uint *)(param_1 + 0x28);
  }
  if ((uVar6 >> 3 & 1) != 0) {
    pPVar7 = *(Program **)(this + 0x20);
    *(uint *)(this + 0x28) = *(uint *)(this + 0x28) | 8;
    if (pPVar7 == (Program *)0x0) {
      pPVar7 = operator_new(0x30);
      Program::Program(pPVar7);
      *(Program **)(this + 0x20) = pPVar7;
    }
    pPVar1 = *(PressureTriggerComponent **)PTR_default_instance__007e4948;
    if (*(long *)(param_1 + 0x20) != 0) {
      pPVar1 = param_1;
    }
    Program::MergeFrom(pPVar7,*(Program **)(pPVar1 + 0x20));
  }
LAB_00415a68:
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


