/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a4ea0
 * Function: Caver::ParticleComponent::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(ParticleComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ParticleComponent::SaveToProtobufMessage(Caver::Proto::Component*) const */

void __thiscall
Caver::ParticleComponent::SaveToProtobufMessage(ParticleComponent *this,Component *param_1)

{
  int iVar1;
  undefined *puVar2;
  MessageLite *pMVar3;
  long lVar4;
  long *plVar5;
  
  Component::SaveToProtobufMessage((Component *)this,param_1);
  iVar1 = *(int *)PTR_extension_007e4d80;
  pMVar3 = (MessageLite *)Proto::ParticleComponent::default_instance();
  lVar4 = google::protobuf::internal::ExtensionSet::MutableMessage
                    ((ExtensionSet *)(param_1 + 8),iVar1,'\v',pMVar3,(FieldDescriptor *)0x0);
  puVar2 = PTR__default_texture_name__007e6170;
  plVar5 = *(long **)(lVar4 + 0x10);
  *(uint *)(lVar4 + 0x1c) = *(uint *)(lVar4 + 0x1c) | 1;
  if (plVar5 == (long *)puVar2) {
    plVar5 = operator_new(8);
    *plVar5 = (long)(PTR_DAT_007e5de8 + 0x18);
    *(long **)(lVar4 + 0x10) = plVar5;
  }
  FUN_0066a6a8(plVar5,this + 0x70);
  *(undefined4 *)(lVar4 + 0x18) = *(undefined4 *)(this + 0x80);
  *(uint *)(lVar4 + 0x1c) = *(uint *)(lVar4 + 0x1c) | 2;
  return;
}


