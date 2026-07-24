/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b766c
 * Function: Caver::GroundMeshComponent::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(GroundMeshComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GroundMeshComponent::SaveToProtobufMessage(Caver::Proto::Component*) const */

void __thiscall
Caver::GroundMeshComponent::SaveToProtobufMessage(GroundMeshComponent *this,Component *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  MessageLite *pMVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  Rectangle *this_00;
  FloatColor *this_01;
  Mesh *pMVar7;
  Mesh *pMVar8;
  undefined8 *puVar9;
  
  Component::SaveToProtobufMessage((Component *)this,param_1);
  iVar2 = *(int *)PTR_extension_007e5418;
  pMVar3 = (MessageLite *)Proto::GroundMeshComponent::default_instance();
  lVar4 = google::protobuf::internal::ExtensionSet::MutableMessage
                    ((ExtensionSet *)(param_1 + 8),iVar2,'\v',pMVar3,(FieldDescriptor *)0x0);
  puVar9 = *(undefined8 **)(this + 0x70);
  puVar1 = *(undefined8 **)(this + 0x78);
  if (puVar9 != puVar1) {
    do {
      iVar2 = *(int *)(lVar4 + 0x68);
      iVar5 = *(int *)(lVar4 + 0x6c);
      pMVar7 = *(Mesh **)*puVar9;
      if (iVar2 < iVar5) {
        *(int *)(lVar4 + 0x68) = iVar2 + 1;
        pMVar8 = *(Mesh **)(*(long *)(lVar4 + 0x60) + (long)iVar2 * 8);
      }
      else {
        if (iVar5 == *(int *)(lVar4 + 0x70)) {
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                    ((RepeatedPtrFieldBase *)(lVar4 + 0x60),iVar5 + 1);
          iVar5 = *(int *)(lVar4 + 0x6c);
        }
        *(int *)(lVar4 + 0x6c) = iVar5 + 1;
        pMVar8 = operator_new(0xa8);
        Proto::Mesh::Mesh(pMVar8);
        iVar2 = *(int *)(lVar4 + 0x68);
        *(int *)(lVar4 + 0x68) = iVar2 + 1;
        *(Mesh **)(*(long *)(lVar4 + 0x60) + (long)iVar2 * 8) = pMVar8;
      }
      Mesh::SaveToProtobufMessage(pMVar7,pMVar8);
      puVar9 = puVar9 + 2;
    } while (puVar1 != puVar9);
  }
  puVar9 = *(undefined8 **)(this + 0x88);
  puVar1 = *(undefined8 **)(this + 0x90);
  if (puVar9 != puVar1) {
    do {
      iVar2 = *(int *)(lVar4 + 0xa0);
      iVar5 = *(int *)(lVar4 + 0xa4);
      pMVar7 = *(Mesh **)*puVar9;
      if (iVar2 < iVar5) {
        *(int *)(lVar4 + 0xa0) = iVar2 + 1;
        pMVar8 = *(Mesh **)(*(long *)(lVar4 + 0x98) + (long)iVar2 * 8);
      }
      else {
        if (iVar5 == *(int *)(lVar4 + 0xa8)) {
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                    ((RepeatedPtrFieldBase *)(lVar4 + 0x98),iVar5 + 1);
          iVar5 = *(int *)(lVar4 + 0xa4);
        }
        *(int *)(lVar4 + 0xa4) = iVar5 + 1;
        pMVar8 = operator_new(0xa8);
        Proto::Mesh::Mesh(pMVar8);
        iVar2 = *(int *)(lVar4 + 0xa0);
        *(int *)(lVar4 + 0xa0) = iVar2 + 1;
        *(Mesh **)(*(long *)(lVar4 + 0x98) + (long)iVar2 * 8) = pMVar8;
      }
      Mesh::SaveToProtobufMessage(pMVar7,pMVar8);
      puVar9 = puVar9 + 2;
    } while (puVar1 != puVar9);
  }
  this_00 = *(Rectangle **)(lVar4 + 0x58);
  *(uint *)(lVar4 + 0xdc) = *(uint *)(lVar4 + 0xdc) | 8;
  if (this_00 == (Rectangle *)0x0) {
    this_00 = operator_new(0x20);
    Proto::Rectangle::Rectangle(this_00);
    *(Rectangle **)(lVar4 + 0x58) = this_00;
  }
  *(undefined8 *)(this_00 + 0xc) = *(undefined8 *)(this + 0xa0);
  uVar6 = *(undefined8 *)(this + 0xa8);
  *(uint *)(this_00 + 0x1c) = *(uint *)(this_00 + 0x1c) | 0xf;
  *(undefined8 *)(this_00 + 0x14) = uVar6;
  this_01 = *(FloatColor **)(lVar4 + 0xd0);
  *(uint *)(lVar4 + 0xdc) = *(uint *)(lVar4 + 0xdc) | 0x40;
  if (this_01 == (FloatColor *)0x0) {
    this_01 = operator_new(0x20);
    Proto::FloatColor::FloatColor(this_01);
    *(FloatColor **)(lVar4 + 0xd0) = this_01;
  }
  FloatColorToProtobufMessage((FloatColor *)(this + 0xb0),this_01);
  if (this[0xc0] != (GroundMeshComponent)0x0) {
    *(undefined1 *)(lVar4 + 0xd8) = 1;
    *(uint *)(lVar4 + 0xdc) = *(uint *)(lVar4 + 0xdc) | 0x80;
  }
  return;
}


