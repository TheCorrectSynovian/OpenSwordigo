/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00317dc4
 * Function: Caver::CollisionShapeComponent::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(CollisionShapeComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CollisionShapeComponent::SaveToProtobufMessage(Caver::Proto::Component*) const */

void __thiscall
Caver::CollisionShapeComponent::SaveToProtobufMessage
          (CollisionShapeComponent *this,Component *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  MessageLite *pMVar4;
  long lVar5;
  uint uVar6;
  undefined8 uVar7;
  Program *pPVar8;
  float fVar9;
  
  ShapeComponent::SaveToProtobufMessage((ShapeComponent *)this,param_1);
  iVar1 = *(int *)PTR_extension_007e4c40;
  pMVar4 = (MessageLite *)Proto::CollisionShapeComponent::default_instance();
  lVar5 = google::protobuf::internal::ExtensionSet::MutableMessage
                    ((ExtensionSet *)(param_1 + 8),iVar1,'\v',pMVar4,(FieldDescriptor *)0x0);
  uVar2 = *(uint *)(lVar5 + 0x40);
  *(CollisionShapeComponent *)(lVar5 + 0xc) = this[0x178];
  uVar7 = *(undefined8 *)(this + 0x150);
  uVar6 = uVar2 | 0x61;
  *(uint *)(lVar5 + 0x40) = uVar6;
  *(undefined8 *)(lVar5 + 0x14) = uVar7;
  if (this[0x17a] != (CollisionShapeComponent)0x0) {
    uVar6 = uVar2 | 99;
    *(uint *)(lVar5 + 0x40) = uVar6;
    *(undefined1 *)(lVar5 + 0xd) = 1;
  }
  if (this[0x17b] != (CollisionShapeComponent)0x0) {
    uVar6 = uVar6 | 4;
    *(uint *)(lVar5 + 0x40) = uVar6;
    *(undefined1 *)(lVar5 + 0xe) = 1;
  }
  if (this[0x17c] != (CollisionShapeComponent)0x0) {
    uVar6 = uVar6 | 8;
    *(uint *)(lVar5 + 0x40) = uVar6;
    *(undefined1 *)(lVar5 + 0xf) = 1;
  }
  if (this[0x17d] != (CollisionShapeComponent)0x0) {
    uVar6 = uVar6 | 0x10;
    *(uint *)(lVar5 + 0x40) = uVar6;
    *(undefined1 *)(lVar5 + 0x10) = 1;
  }
  if (*(int *)(this + 0x180) - 1U < 7) {
    uVar3 = *(undefined4 *)(&DAT_00683b50 + (long)(int)(*(int *)(this + 0x180) - 1U) * 4);
    uVar6 = uVar6 | 0x80;
    *(uint *)(lVar5 + 0x40) = uVar6;
    *(undefined4 *)(lVar5 + 0x1c) = uVar3;
  }
  fVar9 = *(float *)(this + 0x184);
  if (DAT_00683734 < ABS(fVar9 + -1.0)) {
    uVar6 = uVar6 | 0x100;
    *(uint *)(lVar5 + 0x40) = uVar6;
    *(float *)(lVar5 + 0x20) = fVar9;
  }
  if (this[0x188] != (CollisionShapeComponent)0x0) {
    uVar6 = uVar6 | 0x200;
    *(uint *)(lVar5 + 0x40) = uVar6;
    *(undefined1 *)(lVar5 + 0x24) = 1;
  }
  if (((*(long *)(*(long *)(this + 0x90) + -0x18) != 0) || (*(long *)(this + 0x98) != 0)) ||
     (*(long *)(this + 0xa8) != 0)) {
    pPVar8 = *(Program **)(lVar5 + 0x28);
    *(uint *)(lVar5 + 0x40) = uVar6 | 0x400;
    if (pPVar8 == (Program *)0x0) {
      pPVar8 = operator_new(0x30);
      Proto::Program::Program(pPVar8);
      *(Program **)(lVar5 + 0x28) = pPVar8;
    }
    Program::SaveToProtobufMessage((Program *)(this + 0x90),pPVar8);
  }
  if (((*(long *)(*(long *)(this + 0xb8) + -0x18) != 0) || (*(long *)(this + 0xc0) != 0)) ||
     (*(long *)(this + 0xd0) != 0)) {
    pPVar8 = *(Program **)(lVar5 + 0x30);
    *(uint *)(lVar5 + 0x40) = *(uint *)(lVar5 + 0x40) | 0x800;
    if (pPVar8 == (Program *)0x0) {
      pPVar8 = operator_new(0x30);
      Proto::Program::Program(pPVar8);
      *(Program **)(lVar5 + 0x30) = pPVar8;
    }
    Program::SaveToProtobufMessage((Program *)(this + 0xb8),pPVar8);
  }
  if (((*(long *)(*(long *)(this + 0xe0) + -0x18) == 0) && (*(long *)(this + 0xe8) == 0)) &&
     (*(long *)(this + 0xf8) == 0)) {
    return;
  }
  pPVar8 = *(Program **)(lVar5 + 0x38);
  *(uint *)(lVar5 + 0x40) = *(uint *)(lVar5 + 0x40) | 0x1000;
  if (pPVar8 == (Program *)0x0) {
    pPVar8 = operator_new(0x30);
    Proto::Program::Program(pPVar8);
    *(Program **)(lVar5 + 0x38) = pPVar8;
  }
  Program::SaveToProtobufMessage((Program *)(this + 0xe0),pPVar8);
  return;
}


