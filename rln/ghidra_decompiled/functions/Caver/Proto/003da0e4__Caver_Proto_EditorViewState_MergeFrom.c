/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003da0e4
 * Function: Caver::Proto::EditorViewState::MergeFrom
 * Signature: undefined __thiscall MergeFrom(EditorViewState * this, EditorViewState * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* Caver::Proto::EditorViewState::MergeFrom(Caver::Proto::EditorViewState const&) */

void __thiscall
Caver::Proto::EditorViewState::MergeFrom(EditorViewState *this,EditorViewState *param_1)

{
  EditorViewState *pEVar1;
  undefined4 uVar2;
  EditorViewState EVar3;
  long lVar4;
  undefined *puVar5;
  LogMessage *pLVar6;
  long *plVar7;
  uint uVar8;
  undefined8 uVar9;
  Vector3 *pVVar10;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/EditorViewState.pb.cc",0x18c);
    pLVar6 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar6);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
  }
  google::protobuf::RepeatedPtrField<std::string>::MergeFrom
            ((RepeatedPtrField<std::string> *)(this + 0x18),(RepeatedPtrField *)(param_1 + 0x18));
  puVar5 = PTR__default_file_path__007e4ba8;
  EVar3 = param_1[0x78];
  uVar8 = (uint)(byte)EVar3;
  if (EVar3 == (EditorViewState)0x0) goto LAB_003da32c;
  if (((byte)EVar3 & 1) == 0) {
    puVar5 = PTR__default_inspected_template_identifier__007e4d40;
    if (((byte)EVar3 >> 2 & 1) != 0) {
LAB_003da1d0:
      puVar5 = PTR__default_inspected_object_identifier__007e7f88;
      plVar7 = *(long **)(this + 0x50);
      uVar9 = *(undefined8 *)(param_1 + 0x50);
      *(uint *)(this + 0x78) = *(uint *)(this + 0x78) | 4;
      if (plVar7 == (long *)puVar5) {
        plVar7 = operator_new(8);
        *plVar7 = (long)(PTR_DAT_007e5de8 + 0x18);
        *(long **)(this + 0x50) = plVar7;
      }
      FUN_0066a6a8(plVar7,uVar9);
      uVar8 = *(uint *)(param_1 + 0x78);
      puVar5 = PTR__default_inspected_template_identifier__007e4d40;
    }
  }
  else {
    plVar7 = *(long **)(this + 0x10);
    uVar9 = *(undefined8 *)(param_1 + 0x10);
    *(uint *)(this + 0x78) = *(uint *)(this + 0x78) | 1;
    if (plVar7 == (long *)puVar5) {
      plVar7 = operator_new(8);
      *plVar7 = (long)(PTR_DAT_007e5de8 + 0x18);
      *(long **)(this + 0x10) = plVar7;
    }
    FUN_0066a6a8(plVar7,uVar9);
    uVar8 = *(uint *)(param_1 + 0x78);
    puVar5 = PTR__default_inspected_template_identifier__007e4d40;
    if ((uVar8 >> 2 & 1) != 0) goto LAB_003da1d0;
  }
  PTR__default_inspected_template_identifier__007e4d40 = puVar5;
  if ((uVar8 >> 3 & 1) != 0) {
    plVar7 = *(long **)(this + 0x58);
    uVar9 = *(undefined8 *)(param_1 + 0x58);
    *(uint *)(this + 0x78) = *(uint *)(this + 0x78) | 8;
    if (plVar7 == (long *)puVar5) {
      plVar7 = operator_new(8);
      *plVar7 = (long)(PTR_DAT_007e5de8 + 0x18);
      *(long **)(this + 0x58) = plVar7;
    }
    FUN_0066a6a8(plVar7,uVar9);
    uVar8 = *(uint *)(param_1 + 0x78);
  }
  if ((uVar8 >> 4 & 1) != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x60);
    *(uint *)(this + 0x78) = *(uint *)(this + 0x78) | 0x10;
    *(undefined4 *)(this + 0x60) = uVar2;
    uVar8 = *(uint *)(param_1 + 0x78);
  }
  if ((uVar8 >> 5 & 1) != 0) {
    pVVar10 = *(Vector3 **)(this + 0x68);
    *(uint *)(this + 0x78) = *(uint *)(this + 0x78) | 0x20;
    if (pVVar10 == (Vector3 *)0x0) {
      pVVar10 = operator_new(0x20);
      Vector3::Vector3(pVVar10);
      *(Vector3 **)(this + 0x68) = pVVar10;
    }
    pEVar1 = *(EditorViewState **)PTR_default_instance__007e4cc8;
    if (*(long *)(param_1 + 0x68) != 0) {
      pEVar1 = param_1;
    }
    Vector3::MergeFrom(pVVar10,*(Vector3 **)(pEVar1 + 0x68));
    uVar8 = *(uint *)(param_1 + 0x78);
  }
  if ((uVar8 >> 6 & 1) != 0) {
    pVVar10 = *(Vector3 **)(this + 0x70);
    *(uint *)(this + 0x78) = *(uint *)(this + 0x78) | 0x40;
    if (pVVar10 == (Vector3 *)0x0) {
      pVVar10 = operator_new(0x20);
      Vector3::Vector3(pVVar10);
      *(Vector3 **)(this + 0x70) = pVVar10;
    }
    pEVar1 = *(EditorViewState **)PTR_default_instance__007e4cc8;
    if (*(long *)(param_1 + 0x70) != 0) {
      pEVar1 = param_1;
    }
    Vector3::MergeFrom(pVVar10,*(Vector3 **)(pEVar1 + 0x70));
  }
LAB_003da32c:
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


