/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c97a4
 * Function: Caver::SwingComponent::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(SwingComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SwingComponent::SaveToProtobufMessage(Caver::Proto::Component*) const */

void __thiscall
Caver::SwingComponent::SaveToProtobufMessage(SwingComponent *this,Component *param_1)

{
  int iVar1;
  MessageLite *pMVar2;
  long lVar3;
  undefined8 uVar4;
  
  Component::SaveToProtobufMessage((Component *)this,param_1);
  iVar1 = *(int *)PTR_extension_007e5348;
  pMVar2 = (MessageLite *)Proto::SwingComponent::default_instance();
  lVar3 = google::protobuf::internal::ExtensionSet::MutableMessage
                    ((ExtensionSet *)(param_1 + 8),iVar1,'\v',pMVar2,(FieldDescriptor *)0x0);
  *(undefined4 *)(lVar3 + 0xc) = *(undefined4 *)(this + 0x78);
  *(SwingComponent *)(lVar3 + 0x10) = this[0x90];
  *(SwingComponent *)(lVar3 + 0x11) = this[0x91];
  uVar4 = *(undefined8 *)(this + 0x88);
  *(uint *)(lVar3 + 0x1c) = *(uint *)(lVar3 + 0x1c) | 0x1f;
  *(undefined8 *)(lVar3 + 0x14) = uVar4;
  return;
}


