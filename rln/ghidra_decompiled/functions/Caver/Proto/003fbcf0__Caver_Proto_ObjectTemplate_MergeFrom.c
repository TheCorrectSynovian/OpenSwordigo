/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003fbcf0
 * Function: Caver::Proto::ObjectTemplate::MergeFrom
 * Signature: undefined __thiscall MergeFrom(ObjectTemplate * this, ObjectTemplate * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ObjectTemplate::MergeFrom(Caver::Proto::ObjectTemplate const&) */

void __thiscall
Caver::Proto::ObjectTemplate::MergeFrom(ObjectTemplate *this,ObjectTemplate *param_1)

{
  ObjectTemplate *pOVar1;
  ObjectTemplate OVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  LogMessage *pLVar6;
  SceneObject *this_00;
  uint uVar7;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x456);
    pLVar6 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar6);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
  }
  OVar2 = param_1[0x1c];
  uVar7 = (uint)(byte)OVar2;
  if (OVar2 != (ObjectTemplate)0x0) {
    if (((byte)OVar2 & 1) != 0) {
      this_00 = *(SceneObject **)(this + 0x10);
      *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 1;
      if (this_00 == (SceneObject *)0x0) {
        this_00 = operator_new(0x90);
        *(SceneObject **)(this_00 + 0x20) = this_00 + 0x38;
        puVar4 = PTR__default_template_name__007e5070;
        *(undefined4 *)(this_00 + 0x30) = 4;
        *(undefined4 *)(this_00 + 0x68) = 0x3f800000;
        puVar5 = PTR_vtable_007e6240;
        *(long *)(this_00 + 0x28) = 0;
        *(undefined4 *)(this_00 + 8) = 0;
        *(undefined **)this_00 = puVar5 + 0x10;
        puVar5 = PTR__default_identifier__007e5320;
        *(long *)(this_00 + 0x58) = 0;
        *(long *)(this_00 + 0x60) = 0;
        *(long *)(this_00 + 0x70) = 0;
        this_00[0x78] = (SceneObject)0x0;
        *(long *)(this_00 + 0x80) = 0;
        *(undefined4 *)(this_00 + 0x88) = 0;
        *(undefined **)(this_00 + 0x18) = puVar5;
        *(undefined **)(this_00 + 0x10) = puVar4;
        *(SceneObject **)(this + 0x10) = this_00;
      }
      pOVar1 = *(ObjectTemplate **)PTR_default_instance__007e4a98;
      if (*(long *)(param_1 + 0x10) != 0) {
        pOVar1 = param_1;
      }
      SceneObject::MergeFrom(this_00,*(SceneObject **)(pOVar1 + 0x10));
      uVar7 = *(uint *)(param_1 + 0x1c);
    }
    if ((uVar7 >> 1 & 1) != 0) {
      *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
      *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 2;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


