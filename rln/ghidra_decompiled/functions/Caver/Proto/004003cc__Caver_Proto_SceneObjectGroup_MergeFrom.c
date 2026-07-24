/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004003cc
 * Function: Caver::Proto::SceneObjectGroup::MergeFrom
 * Signature: undefined __thiscall MergeFrom(SceneObjectGroup * this, SceneObjectGroup * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* Caver::Proto::SceneObjectGroup::MergeFrom(Caver::Proto::SceneObjectGroup const&) */

void __thiscall
Caver::Proto::SceneObjectGroup::MergeFrom(SceneObjectGroup *this,SceneObjectGroup *param_1)

{
  SceneObjectGroup *pSVar1;
  SceneObjectGroup SVar2;
  long lVar3;
  undefined *puVar4;
  LogMessage *pLVar5;
  long *plVar6;
  uint uVar7;
  undefined8 uVar8;
  Program *this_00;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x8b3);
    pLVar5 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar5);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
  }
  google::protobuf::RepeatedPtrField<std::string>::MergeFrom
            ((RepeatedPtrField<std::string> *)(this + 0x18),(RepeatedPtrField *)(param_1 + 0x18));
  puVar4 = PTR__default_identifier__007e5218;
  SVar2 = param_1[0x60];
  uVar7 = (uint)(byte)SVar2;
  if (SVar2 == (SceneObjectGroup)0x0) goto LAB_00400554;
  if (((byte)SVar2 & 1) == 0) {
    if (((byte)SVar2 >> 2 & 1) != 0) {
LAB_004004b4:
      SVar2 = param_1[0x50];
      *(uint *)(this + 0x60) = *(uint *)(this + 0x60) | 4;
      this[0x50] = SVar2;
      uVar7 = *(uint *)(param_1 + 0x60);
    }
  }
  else {
    plVar6 = *(long **)(this + 0x10);
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    *(uint *)(this + 0x60) = *(uint *)(this + 0x60) | 1;
    if (plVar6 == (long *)puVar4) {
      plVar6 = operator_new(8);
      *plVar6 = (long)(PTR_DAT_007e5de8 + 0x18);
      *(long **)(this + 0x10) = plVar6;
    }
    FUN_0066a6a8(plVar6,uVar8);
    uVar7 = *(uint *)(param_1 + 0x60);
    if ((uVar7 >> 2 & 1) != 0) goto LAB_004004b4;
  }
  if ((uVar7 >> 3 & 1) != 0) {
    SVar2 = param_1[0x51];
    *(uint *)(this + 0x60) = *(uint *)(this + 0x60) | 8;
    this[0x51] = SVar2;
    uVar7 = *(uint *)(param_1 + 0x60);
  }
  if ((uVar7 >> 4 & 1) != 0) {
    SVar2 = param_1[0x52];
    *(uint *)(this + 0x60) = *(uint *)(this + 0x60) | 0x10;
    this[0x52] = SVar2;
    uVar7 = *(uint *)(param_1 + 0x60);
  }
  if ((uVar7 >> 5 & 1) != 0) {
    this_00 = *(Program **)(this + 0x58);
    *(uint *)(this + 0x60) = *(uint *)(this + 0x60) | 0x20;
    if (this_00 == (Program *)0x0) {
      this_00 = operator_new(0x30);
      Program::Program(this_00);
      *(Program **)(this + 0x58) = this_00;
    }
    pSVar1 = *(SceneObjectGroup **)PTR_default_instance__007e48f0;
    if (*(long *)(param_1 + 0x58) != 0) {
      pSVar1 = param_1;
    }
    Program::MergeFrom(this_00,*(Program **)(pSVar1 + 0x58));
  }
LAB_00400554:
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


