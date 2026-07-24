/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003bef94
 * Function: Caver::GroundPolygonComponent::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(GroundPolygonComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GroundPolygonComponent::SaveToProtobufMessage(Caver::Proto::Component*) const */

void __thiscall
Caver::GroundPolygonComponent::SaveToProtobufMessage
          (GroundPolygonComponent *this,Component *param_1)

{
  int iVar1;
  uint uVar2;
  MessageLite *pMVar3;
  long lVar4;
  uint uVar5;
  undefined8 uVar6;
  Polygon *this_00;
  Program *this_01;
  float fVar7;
  
  Component::SaveToProtobufMessage((Component *)this,param_1);
  iVar1 = *(int *)PTR_extension_007e5308;
  pMVar3 = (MessageLite *)Proto::GroundPolygonComponent::default_instance();
  lVar4 = google::protobuf::internal::ExtensionSet::MutableMessage
                    ((ExtensionSet *)(param_1 + 8),iVar1,'\v',pMVar3,(FieldDescriptor *)0x0);
  this_00 = *(Polygon **)(lVar4 + 0x50);
  *(uint *)(lVar4 + 0x6c) = *(uint *)(lVar4 + 0x6c) | 4;
  if (this_00 == (Polygon *)0x0) {
    this_00 = operator_new(0x50);
    Proto::Polygon::Polygon(this_00);
    *(Polygon **)(lVar4 + 0x50) = this_00;
  }
  SavePolygonToProtobufMessage((Polygon *)(this + 0x70),this_00);
  uVar2 = *(uint *)(lVar4 + 0x6c);
  *(GroundPolygonComponent *)(lVar4 + 0x58) = this[0xb0];
  uVar6 = *(undefined8 *)(this + 0xa8);
  uVar5 = uVar2 | 0x38;
  *(uint *)(lVar4 + 0x6c) = uVar5;
  *(undefined8 *)(lVar4 + 0x5c) = uVar6;
  fVar7 = *(float *)(this + 0xb4);
  if (DAT_00683734 < ABS(fVar7 + -1.0)) {
    uVar5 = uVar2 | 0x78;
    *(uint *)(lVar4 + 0x6c) = uVar5;
    *(float *)(lVar4 + 100) = fVar7;
  }
  if (this[0xb8] != (GroundPolygonComponent)0x0) {
    uVar5 = uVar5 | 0x80;
    *(uint *)(lVar4 + 0x6c) = uVar5;
    *(undefined1 *)(lVar4 + 0x68) = 1;
  }
  this_01 = *(Program **)(lVar4 + 0x10);
  *(uint *)(lVar4 + 0x6c) = uVar5 | 1;
  if (this_01 == (Program *)0x0) {
    this_01 = operator_new(0x30);
    Proto::Program::Program(this_01);
    *(Program **)(lVar4 + 0x10) = this_01;
  }
  Program::SaveToProtobufMessage((Program *)(this + 0xc0),this_01);
  return;
}


