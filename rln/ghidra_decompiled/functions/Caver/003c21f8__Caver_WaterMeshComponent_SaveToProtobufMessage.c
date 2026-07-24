/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c21f8
 * Function: Caver::WaterMeshComponent::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(WaterMeshComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::WaterMeshComponent::SaveToProtobufMessage(Caver::Proto::Component*) const */

void __thiscall
Caver::WaterMeshComponent::SaveToProtobufMessage(WaterMeshComponent *this,Component *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  MessageLite *pMVar4;
  long lVar5;
  FloatColor *pFVar6;
  
  Component::SaveToProtobufMessage((Component *)this,param_1);
  iVar1 = *(int *)PTR_extension_007e71e0;
  pMVar4 = (MessageLite *)Proto::WaterMeshComponent::default_instance();
  lVar5 = google::protobuf::internal::ExtensionSet::MutableMessage
                    ((ExtensionSet *)(param_1 + 8),iVar1,'\v',pMVar4,(FieldDescriptor *)0x0);
  uVar2 = *(uint *)(lVar5 + 0x28);
  pFVar6 = *(FloatColor **)(lVar5 + 0x18);
  *(undefined4 *)(lVar5 + 0xc) = *(undefined4 *)(this + 0x78);
  *(uint *)(lVar5 + 0x28) = uVar2 | 1;
  uVar3 = *(undefined4 *)(this + 0xa0);
  *(uint *)(lVar5 + 0x28) = uVar2 | 7;
  *(undefined4 *)(lVar5 + 0x10) = uVar3;
  if (pFVar6 == (FloatColor *)0x0) {
    pFVar6 = operator_new(0x20);
    Proto::FloatColor::FloatColor(pFVar6);
    *(FloatColor **)(lVar5 + 0x18) = pFVar6;
  }
  FloatColorToProtobufMessage((FloatColor *)(this + 0xb0),pFVar6);
  pFVar6 = *(FloatColor **)(lVar5 + 0x20);
  *(uint *)(lVar5 + 0x28) = *(uint *)(lVar5 + 0x28) | 8;
  if (pFVar6 == (FloatColor *)0x0) {
    pFVar6 = operator_new(0x20);
    Proto::FloatColor::FloatColor(pFVar6);
    *(FloatColor **)(lVar5 + 0x20) = pFVar6;
  }
  FloatColorToProtobufMessage((FloatColor *)(this + 0xc0),pFVar6);
  return;
}


