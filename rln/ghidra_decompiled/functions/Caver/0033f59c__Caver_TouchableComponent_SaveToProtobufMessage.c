/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0033f59c
 * Function: Caver::TouchableComponent::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(TouchableComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TouchableComponent::SaveToProtobufMessage(Caver::Proto::Component*) const */

void __thiscall
Caver::TouchableComponent::SaveToProtobufMessage(TouchableComponent *this,Component *param_1)

{
  int iVar1;
  MessageLite *pMVar2;
  long lVar3;
  Program *this_00;
  
  Component::SaveToProtobufMessage((Component *)this,param_1);
  iVar1 = *(int *)PTR_extension_007e7388;
  pMVar2 = (MessageLite *)Proto::TouchableComponent::default_instance();
  lVar3 = google::protobuf::internal::ExtensionSet::MutableMessage
                    ((ExtensionSet *)(param_1 + 8),iVar1,'\v',pMVar2,(FieldDescriptor *)0x0);
  this_00 = *(Program **)(lVar3 + 0x10);
  *(undefined4 *)(lVar3 + 0xc) = *(undefined4 *)(this + 0x70);
  *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) | 3;
  if (this_00 == (Program *)0x0) {
    this_00 = operator_new(0x30);
    Proto::Program::Program(this_00);
    *(Program **)(lVar3 + 0x10) = this_00;
  }
  Program::SaveToProtobufMessage((Program *)(this + 0x80),this_00);
  return;
}


