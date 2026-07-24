/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003bc374
 * Function: Caver::GroundMeshGeneratorComponent::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(GroundMeshGeneratorComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GroundMeshGeneratorComponent::SaveToProtobufMessage(Caver::Proto::Component*) const */

void __thiscall
Caver::GroundMeshGeneratorComponent::SaveToProtobufMessage
          (GroundMeshGeneratorComponent *this,Component *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  MessageLite *pMVar4;
  long lVar5;
  uint uVar6;
  
  Component::SaveToProtobufMessage((Component *)this,param_1);
  iVar1 = *(int *)PTR_extension_007e58c0;
  pMVar4 = (MessageLite *)Proto::GroundMeshGeneratorComponent::default_instance();
  lVar5 = google::protobuf::internal::ExtensionSet::MutableMessage
                    ((ExtensionSet *)(param_1 + 8),iVar1,'\v',pMVar4,(FieldDescriptor *)0x0);
  uVar2 = *(uint *)(lVar5 + 0x38);
  uVar3 = *(undefined4 *)(this + 0x78);
  *(uint *)(lVar5 + 0x38) = uVar2 | 1;
  *(undefined4 *)(lVar5 + 0xc) = uVar3;
  uVar3 = *(undefined4 *)(this + 0x90);
  *(uint *)(lVar5 + 0x38) = uVar2 | 3;
  *(undefined4 *)(lVar5 + 0x10) = uVar3;
  uVar3 = *(undefined4 *)(this + 0xa8);
  *(uint *)(lVar5 + 0x38) = uVar2 | 7;
  *(undefined4 *)(lVar5 + 0x14) = uVar3;
  uVar3 = *(undefined4 *)(this + 0xc0);
  uVar6 = uVar2 | 0xf;
  *(uint *)(lVar5 + 0x38) = uVar6;
  *(undefined4 *)(lVar5 + 0x18) = uVar3;
  iVar1 = *(int *)(this + 0xd0);
  if ((iVar1 == 1) || (iVar1 == 0)) {
    uVar6 = uVar2 | 0x4f;
    *(uint *)(lVar5 + 0x38) = uVar6;
    *(int *)(lVar5 + 0x24) = iVar1;
  }
  uVar3 = *(undefined4 *)(this + 0xd4);
  *(uint *)(lVar5 + 0x38) = uVar6 | 0x80;
  *(undefined4 *)(lVar5 + 0x28) = uVar3;
  *(undefined8 *)(lVar5 + 0x1c) = *(undefined8 *)(this + 0xd8);
  *(undefined8 *)(lVar5 + 0x2c) = *(undefined8 *)(this + 0xe0);
  *(undefined4 *)(lVar5 + 0x34) = *(undefined4 *)(this + 0xe8);
  *(uint *)(lVar5 + 0x38) = uVar6 | 0x7b0;
  return;
}


