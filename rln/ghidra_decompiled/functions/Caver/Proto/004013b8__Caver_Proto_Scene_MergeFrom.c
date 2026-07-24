/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004013b8
 * Function: Caver::Proto::Scene::MergeFrom
 * Signature: undefined __thiscall MergeFrom(Scene * this, Scene * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Scene::MergeFrom(Caver::Proto::Scene const&) */

void __thiscall Caver::Proto::Scene::MergeFrom(Scene *this,Scene *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  Scene *pSVar3;
  long lVar4;
  undefined *puVar5;
  LogMessage *pLVar6;
  SceneObject *this_00;
  ObjectLibrary *this_01;
  int iVar7;
  uint uVar8;
  Rectangle *this_02;
  Program *this_03;
  SceneObject *pSVar9;
  long lVar10;
  int iVar11;
  LogFinisher aLStack_90 [8];
  LogMessage aLStack_88 [32];
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_88,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x9e9);
    pLVar6 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_88,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_90,pLVar6);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_88);
  }
  google::protobuf::internal::RepeatedPtrFieldBase::Reserve
            ((RepeatedPtrFieldBase *)(this + 0x10),*(int *)(param_1 + 0x18) + *(int *)(this + 0x18))
  ;
  puVar5 = PTR__default_identifier__007e5320;
  puVar2 = PTR__default_template_name__007e5070;
  if (0 < *(int *)(param_1 + 0x18)) {
    lVar10 = 0;
    puVar1 = PTR_vtable_007e6240 + 0x10;
    do {
      iVar11 = *(int *)(this + 0x18);
      iVar7 = *(int *)(this + 0x1c);
      pSVar9 = *(SceneObject **)(*(long *)(param_1 + 0x10) + lVar10 * 8);
      if (iVar11 < iVar7) {
        *(int *)(this + 0x18) = iVar11 + 1;
        this_00 = *(SceneObject **)(*(long *)(this + 0x10) + (long)iVar11 * 8);
      }
      else {
        if (iVar7 == *(int *)(this + 0x20)) {
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                    ((RepeatedPtrFieldBase *)(this + 0x10),iVar7 + 1);
          iVar11 = *(int *)(this + 0x18);
          iVar7 = *(int *)(this + 0x1c);
        }
        *(int *)(this + 0x1c) = iVar7 + 1;
        this_00 = operator_new(0x90);
        *(undefined **)this_00 = puVar1;
        *(SceneObject **)(this_00 + 0x20) = this_00 + 0x38;
        *(long *)(this_00 + 0x28) = 0;
        *(undefined4 *)(this_00 + 0x30) = 4;
        *(undefined4 *)(this_00 + 8) = 0;
        *(undefined **)(this_00 + 0x18) = puVar5;
        *(undefined **)(this_00 + 0x10) = puVar2;
        *(long *)(this_00 + 0x58) = 0;
        *(long *)(this_00 + 0x60) = 0;
        *(undefined4 *)(this_00 + 0x68) = 0x3f800000;
        *(long *)(this_00 + 0x70) = 0;
        this_00[0x78] = (SceneObject)0x0;
        *(long *)(this_00 + 0x80) = 0;
        *(undefined4 *)(this_00 + 0x88) = 0;
        *(int *)(this + 0x18) = iVar11 + 1;
        *(SceneObject **)(*(long *)(this + 0x10) + (long)iVar11 * 8) = this_00;
      }
      SceneObject::MergeFrom(this_00,pSVar9);
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(int *)(param_1 + 0x18));
  }
  google::protobuf::internal::RepeatedPtrFieldBase::
  MergeFrom<google::protobuf::RepeatedPtrField<Caver::Proto::SceneObjectGroup>::TypeHandler>
            ((RepeatedPtrFieldBase *)(this + 0x48),(RepeatedPtrFieldBase *)(param_1 + 0x48));
  uVar8 = *(uint *)(param_1 + 0x98);
  if ((uVar8 & 0x3fc) != 0) {
    if ((uVar8 >> 2 & 1) != 0) {
      this_01 = *(ObjectLibrary **)(this + 0x80);
      *(uint *)(this + 0x98) = *(uint *)(this + 0x98) | 4;
      if (this_01 == (ObjectLibrary *)0x0) {
        this_01 = operator_new(0x100);
        puVar2 = PTR_vtable_007e6ec8 + 0x10;
        *(undefined **)(this_01 + 0x10) = PTR__default_name__007e6d40;
        *(ObjectLibrary **)(this_01 + 0x18) = this_01 + 0x30;
        *(ObjectLibrary **)(this_01 + 0x50) = this_01 + 0x68;
        *(ObjectLibrary **)(this_01 + 0x88) = this_01 + 0xa0;
        *(ObjectLibrary **)(this_01 + 0xc0) = this_01 + 0xd8;
        *(undefined4 *)(this_01 + 8) = 0;
        *(undefined4 *)(this_01 + 0xf8) = 0;
        *(long *)(this_01 + 0x20) = 0;
        *(undefined4 *)(this_01 + 0x28) = 4;
        *(long *)(this_01 + 0x58) = 0;
        *(undefined4 *)(this_01 + 0x60) = 4;
        *(long *)(this_01 + 0x90) = 0;
        *(undefined4 *)(this_01 + 0x98) = 4;
        *(long *)(this_01 + 200) = 0;
        *(undefined4 *)(this_01 + 0xd0) = 4;
        *(undefined **)this_01 = puVar2;
        *(ObjectLibrary **)(this + 0x80) = this_01;
      }
      pSVar3 = *(Scene **)PTR_default_instance__007e7a20;
      if (*(long *)(param_1 + 0x80) != 0) {
        pSVar3 = param_1;
      }
      ObjectLibrary::MergeFrom(this_01,*(ObjectLibrary **)(pSVar3 + 0x80));
      uVar8 = *(uint *)(param_1 + 0x98);
    }
    if ((uVar8 >> 3 & 1) != 0) {
      this_02 = *(Rectangle **)(this + 0x88);
      *(uint *)(this + 0x98) = *(uint *)(this + 0x98) | 8;
      if (this_02 == (Rectangle *)0x0) {
        this_02 = operator_new(0x20);
        Rectangle::Rectangle(this_02);
        *(Rectangle **)(this + 0x88) = this_02;
      }
      pSVar3 = *(Scene **)PTR_default_instance__007e7a20;
      if (*(long *)(param_1 + 0x88) != 0) {
        pSVar3 = param_1;
      }
      Rectangle::MergeFrom(this_02,*(Rectangle **)(pSVar3 + 0x88));
      uVar8 = *(uint *)(param_1 + 0x98);
    }
    if ((uVar8 >> 4 & 1) != 0) {
      this_03 = *(Program **)(this + 0x90);
      *(uint *)(this + 0x98) = *(uint *)(this + 0x98) | 0x10;
      if (this_03 == (Program *)0x0) {
        this_03 = operator_new(0x30);
        Program::Program(this_03);
        *(Program **)(this + 0x90) = this_03;
      }
      pSVar3 = *(Scene **)PTR_default_instance__007e7a20;
      if (*(long *)(param_1 + 0x90) != 0) {
        pSVar3 = param_1;
      }
      Program::MergeFrom(this_03,*(Program **)(pSVar3 + 0x90));
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


