/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0038c654
 * Function: Caver::ProjectileControllerComponent::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(ProjectileControllerComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProjectileControllerComponent::SaveToProtobufMessage(Caver::Proto::Component*) const */

void __thiscall
Caver::ProjectileControllerComponent::SaveToProtobufMessage
          (ProjectileControllerComponent *this,Component *param_1)

{
  int iVar1;
  ProjectileControllerComponent PVar2;
  MessageLite *pMVar3;
  long lVar4;
  
  Component::SaveToProtobufMessage((Component *)this,param_1);
  iVar1 = *(int *)PTR_extension_007e7df8;
  pMVar3 = (MessageLite *)Proto::ProjectileControllerComponent::default_instance();
  lVar4 = google::protobuf::internal::ExtensionSet::MutableMessage
                    ((ExtensionSet *)(param_1 + 8),iVar1,'\v',pMVar3,(FieldDescriptor *)0x0);
  *(ProjectileControllerComponent *)(lVar4 + 0xc) = this[0x70];
  PVar2 = this[0x71];
  *(uint *)(lVar4 + 0x10) = *(uint *)(lVar4 + 0x10) | 3;
  *(ProjectileControllerComponent *)(lVar4 + 0xd) = PVar2;
  return;
}


