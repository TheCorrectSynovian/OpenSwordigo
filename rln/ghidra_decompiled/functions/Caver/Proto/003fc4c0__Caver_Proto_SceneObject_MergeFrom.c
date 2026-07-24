/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003fc4c0
 * Function: Caver::Proto::SceneObject::MergeFrom
 * Signature: undefined __thiscall MergeFrom(SceneObject * this, SceneObject * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* Caver::Proto::SceneObject::MergeFrom(Caver::Proto::SceneObject const&) */

void __thiscall Caver::Proto::SceneObject::MergeFrom(SceneObject *this,SceneObject *param_1)

{
  SceneObject *pSVar1;
  undefined4 uVar2;
  SceneObject SVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  LogMessage *pLVar7;
  Type *this_00;
  long *plVar8;
  uint uVar9;
  Program *this_01;
  undefined8 uVar10;
  Vector2 *this_02;
  Rectangle *this_03;
  Component *pCVar11;
  long lVar12;
  LogFinisher aLStack_70 [8];
  LogMessage aLStack_68 [32];
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_68,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x750);
    pLVar7 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_68,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_70,pLVar7);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_68);
  }
  google::protobuf::internal::RepeatedPtrFieldBase::Reserve
            ((RepeatedPtrFieldBase *)(this + 0x20),*(int *)(param_1 + 0x28) + *(int *)(this + 0x28))
  ;
  if (0 < *(int *)(param_1 + 0x28)) {
    lVar12 = 0;
    do {
      pCVar11 = *(Component **)(*(long *)(param_1 + 0x20) + lVar12 * 8);
      this_00 = google::protobuf::internal::RepeatedPtrFieldBase::
                Add<google::protobuf::RepeatedPtrField<Caver::Proto::Component>::TypeHandler>
                          ((RepeatedPtrFieldBase *)(this + 0x20));
      Component::MergeFrom((Component *)this_00,pCVar11);
      lVar12 = lVar12 + 1;
    } while (lVar12 < *(int *)(param_1 + 0x28));
  }
  puVar6 = PTR__default_template_name__007e5070;
  uVar9 = *(uint *)(param_1 + 0x88);
  if ((uVar9 & 0xff) != 0) {
    puVar5 = PTR__default_identifier__007e5320;
    if ((uVar9 & 1) != 0) {
      plVar8 = *(long **)(this + 0x10);
      uVar10 = *(undefined8 *)(param_1 + 0x10);
      *(uint *)(this + 0x88) = *(uint *)(this + 0x88) | 1;
      if (plVar8 == (long *)puVar6) {
        plVar8 = operator_new(8);
        *plVar8 = (long)(PTR_DAT_007e5de8 + 0x18);
        *(long **)(this + 0x10) = plVar8;
      }
      FUN_0066a6a8(plVar8,uVar10);
      uVar9 = *(uint *)(param_1 + 0x88);
      puVar5 = PTR__default_identifier__007e5320;
    }
    PTR__default_identifier__007e5320 = puVar5;
    if ((uVar9 >> 1 & 1) != 0) {
      plVar8 = *(long **)(this + 0x18);
      uVar10 = *(undefined8 *)(param_1 + 0x18);
      *(uint *)(this + 0x88) = *(uint *)(this + 0x88) | 2;
      if (plVar8 == (long *)puVar5) {
        plVar8 = operator_new(8);
        *plVar8 = (long)(PTR_DAT_007e5de8 + 0x18);
        *(long **)(this + 0x18) = plVar8;
      }
      FUN_0066a6a8(plVar8,uVar10);
      uVar9 = *(uint *)(param_1 + 0x88);
    }
    if ((uVar9 >> 3 & 1) != 0) {
      this_02 = *(Vector2 **)(this + 0x58);
      *(uint *)(this + 0x88) = *(uint *)(this + 0x88) | 8;
      if (this_02 == (Vector2 *)0x0) {
        this_02 = operator_new(0x18);
        Vector2::Vector2(this_02);
        *(Vector2 **)(this + 0x58) = this_02;
      }
      pSVar1 = *(SceneObject **)PTR_default_instance__007e7da8;
      if (*(long *)(param_1 + 0x58) != 0) {
        pSVar1 = param_1;
      }
      Vector2::MergeFrom(this_02,*(Vector2 **)(pSVar1 + 0x58));
      uVar9 = *(uint *)(param_1 + 0x88);
    }
    if ((uVar9 >> 4 & 1) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x60);
      *(uint *)(this + 0x88) = *(uint *)(this + 0x88) | 0x10;
      *(undefined4 *)(this + 0x60) = uVar2;
      uVar9 = *(uint *)(param_1 + 0x88);
    }
    if ((uVar9 >> 5 & 1) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 100);
      *(uint *)(this + 0x88) = *(uint *)(this + 0x88) | 0x20;
      *(undefined4 *)(this + 100) = uVar2;
      uVar9 = *(uint *)(param_1 + 0x88);
    }
    if ((uVar9 >> 6 & 1) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x68);
      *(uint *)(this + 0x88) = *(uint *)(this + 0x88) | 0x40;
      *(undefined4 *)(this + 0x68) = uVar2;
      uVar9 = *(uint *)(param_1 + 0x88);
    }
    if ((uVar9 >> 7 & 1) != 0) {
      this_03 = *(Rectangle **)(this + 0x70);
      *(uint *)(this + 0x88) = *(uint *)(this + 0x88) | 0x80;
      if (this_03 == (Rectangle *)0x0) {
        this_03 = operator_new(0x20);
        Rectangle::Rectangle(this_03);
        *(Rectangle **)(this + 0x70) = this_03;
      }
      pSVar1 = *(SceneObject **)PTR_default_instance__007e7da8;
      if (*(long *)(param_1 + 0x70) != 0) {
        pSVar1 = param_1;
      }
      Rectangle::MergeFrom(this_03,*(Rectangle **)(pSVar1 + 0x70));
      uVar9 = *(uint *)(param_1 + 0x88);
    }
  }
  if ((uVar9 & 0xff00) != 0) {
    if ((uVar9 >> 8 & 1) != 0) {
      SVar3 = param_1[0x78];
      *(uint *)(this + 0x88) = *(uint *)(this + 0x88) | 0x100;
      this[0x78] = SVar3;
      uVar9 = *(uint *)(param_1 + 0x88);
    }
    if ((uVar9 >> 9 & 1) != 0) {
      this_01 = *(Program **)(this + 0x80);
      *(uint *)(this + 0x88) = *(uint *)(this + 0x88) | 0x200;
      if (this_01 == (Program *)0x0) {
        this_01 = operator_new(0x30);
        Program::Program(this_01);
        *(Program **)(this + 0x80) = this_01;
      }
      pSVar1 = *(SceneObject **)PTR_default_instance__007e7da8;
      if (*(long *)(param_1 + 0x80) != 0) {
        pSVar1 = param_1;
      }
      Program::MergeFrom(this_01,*(Program **)(pSVar1 + 0x80));
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


