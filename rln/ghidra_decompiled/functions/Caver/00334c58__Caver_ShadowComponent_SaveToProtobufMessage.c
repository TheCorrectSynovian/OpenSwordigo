/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00334c58
 * Function: Caver::ShadowComponent::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(ShadowComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ShadowComponent::SaveToProtobufMessage(Caver::Proto::Component*) const */

void __thiscall
Caver::ShadowComponent::SaveToProtobufMessage(ShadowComponent *this,Component *param_1)

{
  int iVar1;
  MessageLite *pMVar2;
  long lVar3;
  Vector3 *this_00;
  
  Component::SaveToProtobufMessage((Component *)this,param_1);
  iVar1 = *(int *)PTR_extension_007e6890;
  pMVar2 = (MessageLite *)Proto::ShadowComponent::default_instance();
  lVar3 = google::protobuf::internal::ExtensionSet::MutableMessage
                    ((ExtensionSet *)(param_1 + 8),iVar1,'\v',pMVar2,(FieldDescriptor *)0x0);
  this_00 = *(Vector3 **)(lVar3 + 0x18);
  *(undefined8 *)(lVar3 + 0xc) = *(undefined8 *)(this + 0x7c);
  *(uint *)(lVar3 + 0x20) = *(uint *)(lVar3 + 0x20) | 7;
  if (this_00 == (Vector3 *)0x0) {
    this_00 = operator_new(0x20);
    Proto::Vector3::Vector3(this_00);
    *(Vector3 **)(lVar3 + 0x18) = this_00;
  }
  *(undefined8 *)(this_00 + 0xc) = *(undefined8 *)(this + 0x84);
  *(undefined4 *)(this_00 + 0x14) = *(undefined4 *)(this + 0x8c);
  *(uint *)(this_00 + 0x18) = *(uint *)(this_00 + 0x18) | 7;
  return;
}


