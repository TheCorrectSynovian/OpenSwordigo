/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b54ac
 * Function: Caver::PressureTriggerComponent::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(PressureTriggerComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PressureTriggerComponent::SaveToProtobufMessage(Caver::Proto::Component*) const */

void __thiscall
Caver::PressureTriggerComponent::SaveToProtobufMessage
          (PressureTriggerComponent *this,Component *param_1)

{
  int iVar1;
  PressureTriggerComponent PVar2;
  MessageLite *pMVar3;
  long lVar4;
  Program *pPVar5;
  
  Component::SaveToProtobufMessage((Component *)this,param_1);
  iVar1 = *(int *)PTR_extension_007e79f0;
  pMVar3 = (MessageLite *)Proto::PressureTriggerComponent::default_instance();
  lVar4 = google::protobuf::internal::ExtensionSet::MutableMessage
                    ((ExtensionSet *)(param_1 + 8),iVar1,'\v',pMVar3,(FieldDescriptor *)0x0);
  pPVar5 = *(Program **)(lVar4 + 0x18);
  *(undefined4 *)(lVar4 + 0xc) = *(undefined4 *)(this + 0x78);
  PVar2 = this[0xd8];
  *(uint *)(lVar4 + 0x28) = *(uint *)(lVar4 + 0x28) | 7;
  *(PressureTriggerComponent *)(lVar4 + 0x10) = PVar2;
  if (pPVar5 == (Program *)0x0) {
    pPVar5 = operator_new(0x30);
    Proto::Program::Program(pPVar5);
    *(Program **)(lVar4 + 0x18) = pPVar5;
  }
  Program::SaveToProtobufMessage((Program *)(this + 0x88),pPVar5);
  pPVar5 = *(Program **)(lVar4 + 0x20);
  *(uint *)(lVar4 + 0x28) = *(uint *)(lVar4 + 0x28) | 8;
  if (pPVar5 == (Program *)0x0) {
    pPVar5 = operator_new(0x30);
    Proto::Program::Program(pPVar5);
    *(Program **)(lVar4 + 0x20) = pPVar5;
  }
  Program::SaveToProtobufMessage((Program *)(this + 0xb0),pPVar5);
  return;
}


