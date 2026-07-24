/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003371fc
 * Function: Caver::ShapeComponent::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(ShapeComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ShapeComponent::SaveToProtobufMessage(Caver::Proto::Component*) const */

void __thiscall
Caver::ShapeComponent::SaveToProtobufMessage(ShapeComponent *this,Component *param_1)

{
  int iVar1;
  MessageLite *pMVar2;
  long lVar3;
  undefined8 uVar4;
  Rectangle *this_00;
  Polygon *pPVar5;
  Circle *this_01;
  undefined8 *puVar6;
  Vector2 *this_02;
  Polygon *this_03;
  
  Component::SaveToProtobufMessage((Component *)this,param_1);
  iVar1 = *(int *)PTR_extension_007e6128;
  pMVar2 = (MessageLite *)Proto::ShapeComponent::default_instance();
  lVar3 = google::protobuf::internal::ExtensionSet::MutableMessage
                    ((ExtensionSet *)(param_1 + 8),iVar1,'\v',pMVar2,(FieldDescriptor *)0x0);
  iVar1 = *(int *)(this + 0x70);
  if (iVar1 != 3) {
    if (iVar1 == 2) {
      this_01 = *(Circle **)(lVar3 + 0x18);
      puVar6 = *(undefined8 **)(this + 0x78);
      *(uint *)(lVar3 + 0x28) = *(uint *)(lVar3 + 0x28) | 2;
      if (this_01 == (Circle *)0x0) {
        this_01 = operator_new(0x20);
        Proto::Circle::Circle(this_01);
        *(Circle **)(lVar3 + 0x18) = this_01;
      }
      this_02 = *(Vector2 **)(this_01 + 0x10);
      *(uint *)(this_01 + 0x1c) = *(uint *)(this_01 + 0x1c) | 1;
      if (this_02 == (Vector2 *)0x0) {
        this_02 = operator_new(0x18);
        Proto::Vector2::Vector2(this_02);
        *(Vector2 **)(this_01 + 0x10) = this_02;
      }
      *(undefined8 *)(this_02 + 0xc) = *puVar6;
      *(uint *)(this_02 + 0x14) = *(uint *)(this_02 + 0x14) | 3;
      *(undefined4 *)(this_01 + 0x18) = *(undefined4 *)(puVar6 + 1);
      *(uint *)(this_01 + 0x1c) = *(uint *)(this_01 + 0x1c) | 2;
    }
    else if (iVar1 == 1) {
      this_00 = *(Rectangle **)(lVar3 + 0x10);
      puVar6 = *(undefined8 **)(this + 0x78);
      *(uint *)(lVar3 + 0x28) = *(uint *)(lVar3 + 0x28) | 1;
      if (this_00 == (Rectangle *)0x0) {
        this_00 = operator_new(0x20);
        Proto::Rectangle::Rectangle(this_00);
        *(Rectangle **)(lVar3 + 0x10) = this_00;
      }
      *(undefined8 *)(this_00 + 0xc) = *puVar6;
      uVar4 = puVar6[1];
      *(uint *)(this_00 + 0x1c) = *(uint *)(this_00 + 0x1c) | 0xf;
      *(undefined8 *)(this_00 + 0x14) = uVar4;
    }
    return;
  }
  this_03 = *(Polygon **)(lVar3 + 0x20);
  pPVar5 = *(Polygon **)(this + 0x78);
  *(uint *)(lVar3 + 0x28) = *(uint *)(lVar3 + 0x28) | 4;
  if (this_03 == (Polygon *)0x0) {
    this_03 = operator_new(0x50);
    Proto::Polygon::Polygon(this_03);
    *(Polygon **)(lVar3 + 0x20) = this_03;
  }
  SavePolygonToProtobufMessage(pPVar5,this_03);
  return;
}


