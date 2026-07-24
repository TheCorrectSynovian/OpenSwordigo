/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a3bfc
 * Function: Caver::OrbitControllerComponent::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(OrbitControllerComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OrbitControllerComponent::SaveToProtobufMessage(Caver::Proto::Component*) const */

void __thiscall
Caver::OrbitControllerComponent::SaveToProtobufMessage
          (OrbitControllerComponent *this,Component *param_1)

{
  int iVar1;
  MessageLite *pMVar2;
  long lVar3;
  undefined8 uVar4;
  Vector3 *this_00;
  
  Component::SaveToProtobufMessage((Component *)this,param_1);
  iVar1 = *(int *)PTR_extension_007e69a8;
  pMVar2 = (MessageLite *)Proto::OrbitControllerComponent::default_instance();
  lVar3 = google::protobuf::internal::ExtensionSet::MutableMessage
                    ((ExtensionSet *)(param_1 + 8),iVar1,'\v',pMVar2,(FieldDescriptor *)0x0);
  this_00 = *(Vector3 **)(lVar3 + 0x10);
  *(uint *)(lVar3 + 0x20) = *(uint *)(lVar3 + 0x20) | 1;
  if (this_00 == (Vector3 *)0x0) {
    this_00 = operator_new(0x20);
    Proto::Vector3::Vector3(this_00);
    *(Vector3 **)(lVar3 + 0x10) = this_00;
  }
  *(undefined8 *)(this_00 + 0xc) = *(undefined8 *)(this + 0x7c);
  *(undefined4 *)(this_00 + 0x14) = *(undefined4 *)(this + 0x84);
  *(uint *)(this_00 + 0x18) = *(uint *)(this_00 + 0x18) | 7;
  uVar4 = *(undefined8 *)(this + 0x88);
  *(uint *)(lVar3 + 0x20) = *(uint *)(lVar3 + 0x20) | 6;
  *(undefined8 *)(lVar3 + 0x18) = uVar4;
  return;
}


