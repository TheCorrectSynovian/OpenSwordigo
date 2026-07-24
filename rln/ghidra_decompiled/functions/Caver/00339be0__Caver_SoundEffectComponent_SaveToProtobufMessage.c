/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00339be0
 * Function: Caver::SoundEffectComponent::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(SoundEffectComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SoundEffectComponent::SaveToProtobufMessage(Caver::Proto::Component*) const */

void __thiscall
Caver::SoundEffectComponent::SaveToProtobufMessage(SoundEffectComponent *this,Component *param_1)

{
  int iVar1;
  undefined *puVar2;
  MessageLite *pMVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  
  Component::SaveToProtobufMessage((Component *)this,param_1);
  iVar1 = *(int *)PTR_extension_007e6a80;
  pMVar3 = (MessageLite *)Proto::SoundEffectComponent::default_instance();
  lVar4 = google::protobuf::internal::ExtensionSet::MutableMessage
                    ((ExtensionSet *)(param_1 + 8),iVar1,'\v',pMVar3,(FieldDescriptor *)0x0);
  puVar2 = PTR__default_name__007e7518;
  plVar5 = *(long **)(lVar4 + 0x10);
  *(uint *)(lVar4 + 0x20) = *(uint *)(lVar4 + 0x20) | 1;
  if (plVar5 == (long *)puVar2) {
    plVar5 = operator_new(8);
    *plVar5 = (long)(PTR_DAT_007e5de8 + 0x18);
    *(long **)(lVar4 + 0x10) = plVar5;
  }
  FUN_0066a6a8(plVar5,this + 0x78);
  uVar6 = *(undefined8 *)(this + 0x80);
  *(uint *)(lVar4 + 0x20) = *(uint *)(lVar4 + 0x20) | 6;
  *(undefined8 *)(lVar4 + 0x18) = uVar6;
  return;
}


