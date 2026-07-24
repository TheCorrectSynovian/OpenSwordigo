/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0038dc80
 * Function: Caver::SkillComponent::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(SkillComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SkillComponent::SaveToProtobufMessage(Caver::Proto::Component*) const */

void __thiscall
Caver::SkillComponent::SaveToProtobufMessage(SkillComponent *this,Component *param_1)

{
  int iVar1;
  undefined *puVar2;
  MessageLite *pMVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  Vector2 *this_00;
  
  Component::SaveToProtobufMessage((Component *)this,param_1);
  iVar1 = *(int *)PTR_extension_007e5658;
  pMVar3 = (MessageLite *)Proto::SkillComponent::default_instance();
  lVar4 = google::protobuf::internal::ExtensionSet::MutableMessage
                    ((ExtensionSet *)(param_1 + 8),iVar1,'\v',pMVar3,(FieldDescriptor *)0x0);
  puVar2 = PTR__default_cast_object_template_name__007e65a8;
  plVar5 = *(long **)(lVar4 + 0x10);
  *(undefined4 *)(lVar4 + 0xc) = *(undefined4 *)(this + 0x78);
  *(uint *)(lVar4 + 0x20) = *(uint *)(lVar4 + 0x20) | 3;
  if (plVar5 == (long *)puVar2) {
    plVar5 = operator_new(8);
    *plVar5 = (long)(PTR_DAT_007e5de8 + 0x18);
    *(long **)(lVar4 + 0x10) = plVar5;
  }
  FUN_0066a6a8(plVar5,this + 0xa0);
  this_00 = *(Vector2 **)(lVar4 + 0x18);
  *(uint *)(lVar4 + 0x20) = *(uint *)(lVar4 + 0x20) | 4;
  if (this_00 == (Vector2 *)0x0) {
    this_00 = operator_new(0x18);
    Proto::Vector2::Vector2(this_00);
    *(Vector2 **)(lVar4 + 0x18) = this_00;
  }
  uVar6 = *(undefined8 *)(this + 0x88);
  *(uint *)(this_00 + 0x14) = *(uint *)(this_00 + 0x14) | 3;
  *(undefined8 *)(this_00 + 0xc) = uVar6;
  return;
}


