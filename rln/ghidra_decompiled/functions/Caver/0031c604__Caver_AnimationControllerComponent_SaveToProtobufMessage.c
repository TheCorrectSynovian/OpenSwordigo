/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031c604
 * Function: Caver::AnimationControllerComponent::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(AnimationControllerComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AnimationControllerComponent::SaveToProtobufMessage(Caver::Proto::Component*) const */

void __thiscall
Caver::AnimationControllerComponent::SaveToProtobufMessage
          (AnimationControllerComponent *this,Component *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  AnimationControllerComponent AVar4;
  MessageLite *pMVar5;
  long lVar6;
  
  Component::SaveToProtobufMessage((Component *)this,param_1);
  iVar1 = *(int *)PTR_extension_007e4fc8;
  pMVar5 = (MessageLite *)Proto::AnimationControllerComponent::default_instance();
  lVar6 = google::protobuf::internal::ExtensionSet::MutableMessage
                    ((ExtensionSet *)(param_1 + 8),iVar1,'\v',pMVar5,(FieldDescriptor *)0x0);
  uVar2 = *(uint *)(lVar6 + 0x18);
  uVar3 = *(undefined4 *)(this + 0x78);
  *(uint *)(lVar6 + 0x18) = uVar2 | 1;
  *(undefined4 *)(lVar6 + 0xc) = uVar3;
  *(undefined4 *)(lVar6 + 0x10) = *(undefined4 *)(this + 0x90);
  AVar4 = this[0xa8];
  *(uint *)(lVar6 + 0x18) = uVar2 | 7;
  *(AnimationControllerComponent *)(lVar6 + 0x14) = AVar4;
  return;
}


