/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00380a84
 * Function: Caver::PhysicsPlatformComponent::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(PhysicsPlatformComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PhysicsPlatformComponent::SaveToProtobufMessage(Caver::Proto::Component*) const */

void __thiscall
Caver::PhysicsPlatformComponent::SaveToProtobufMessage
          (PhysicsPlatformComponent *this,Component *param_1)

{
  int iVar1;
  MessageLite *pMVar2;
  long lVar3;
  undefined8 uVar4;
  
  Component::SaveToProtobufMessage((Component *)this,param_1);
  iVar1 = *(int *)PTR_extension_007e4c88;
  pMVar2 = (MessageLite *)Proto::PhysicsPlatformComponent::default_instance();
  lVar3 = google::protobuf::internal::ExtensionSet::MutableMessage
                    ((ExtensionSet *)(param_1 + 8),iVar1,'\v',pMVar2,(FieldDescriptor *)0x0);
  *(undefined8 *)(lVar3 + 0xc) = *(undefined8 *)(this + 0x94);
  uVar4 = *(undefined8 *)(this + 0x9c);
  *(uint *)(lVar3 + 0x1c) = *(uint *)(lVar3 + 0x1c) | 0xf;
  *(undefined8 *)(lVar3 + 0x14) = uVar4;
  return;
}


