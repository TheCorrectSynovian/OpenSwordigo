/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00317c08
 * Function: Caver::CollisionShapeComponent::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(CollisionShapeComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CollisionShapeComponent::LoadFromProtobufMessage(Caver::Proto::Component const&) */

void __thiscall
Caver::CollisionShapeComponent::LoadFromProtobufMessage
          (CollisionShapeComponent *this,Component *param_1)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  
  ShapeComponent::LoadFromProtobufMessage((ShapeComponent *)this,param_1);
  uVar2 = *(undefined8 *)(this + 0x78);
  lVar5 = *(long *)(this + 0x80);
  *(undefined4 *)(this + 0x108) = *(undefined4 *)(this + 0x70);
  if (lVar5 != 0) {
    *(long *)(lVar5 + 8) = *(long *)(lVar5 + 8) + 1;
  }
  plVar6 = *(long **)(this + 0x118);
  *(undefined8 *)(this + 0x110) = uVar2;
  *(long *)(this + 0x118) = lVar5;
  if ((plVar6 != (long *)0x0) && (lVar5 = plVar6[1], plVar6[1] = lVar5 + -1, lVar5 + -1 == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    lVar5 = plVar6[2];
    plVar6[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
  }
  lVar5 = google::protobuf::internal::ExtensionSet::GetMessage
                    ((ExtensionSet *)(param_1 + 8),*(int *)PTR_extension_007e4c40,
                     *(MessageLite **)(PTR_extension_007e4c40 + 8));
  this[0x178] = *(CollisionShapeComponent *)(lVar5 + 0xc);
  uVar3 = *(uint *)(lVar5 + 0x40);
  if ((uVar3 >> 5 & 1) != 0) {
    *(undefined4 *)(this + 0x150) = *(undefined4 *)(lVar5 + 0x14);
  }
  if ((uVar3 >> 6 & 1) != 0) {
    *(undefined4 *)(this + 0x154) = *(undefined4 *)(lVar5 + 0x18);
  }
  this[0x17a] = *(CollisionShapeComponent *)(lVar5 + 0xd);
  this[0x17b] = *(CollisionShapeComponent *)(lVar5 + 0xe);
  this[0x17c] = *(CollisionShapeComponent *)(lVar5 + 0xf);
  this[0x17d] = *(CollisionShapeComponent *)(lVar5 + 0x10);
  uVar4 = *(int *)(lVar5 + 0x1c) - 1;
  if (uVar4 < 7) {
    *(undefined4 *)(this + 0x180) = *(undefined4 *)(&DAT_00683b30 + (long)(int)uVar4 * 4);
  }
  if ((uVar3 >> 8 & 1) != 0) {
    *(undefined4 *)(this + 0x184) = *(undefined4 *)(lVar5 + 0x20);
  }
  this[0x188] = *(CollisionShapeComponent *)(lVar5 + 0x24);
  if ((uVar3 >> 10 & 1) != 0) {
    lVar1 = *(long *)PTR_default_instance__007e7360;
    if (*(long *)(lVar5 + 0x28) != 0) {
      lVar1 = lVar5;
    }
    Program::LoadFromProtobufMessage((Program *)(this + 0x90),*(Program **)(lVar1 + 0x28));
    uVar3 = *(uint *)(lVar5 + 0x40);
  }
  if ((uVar3 >> 0xb & 1) != 0) {
    lVar1 = *(long *)PTR_default_instance__007e7360;
    if (*(long *)(lVar5 + 0x30) != 0) {
      lVar1 = lVar5;
    }
    Program::LoadFromProtobufMessage((Program *)(this + 0xb8),*(Program **)(lVar1 + 0x30));
    uVar3 = *(uint *)(lVar5 + 0x40);
  }
  if ((uVar3 >> 0xc & 1) != 0) {
    lVar1 = *(long *)PTR_default_instance__007e7360;
    if (*(long *)(lVar5 + 0x38) != 0) {
      lVar1 = lVar5;
    }
    Program::LoadFromProtobufMessage((Program *)(this + 0xe0),*(Program **)(lVar1 + 0x38));
    return;
  }
  return;
}


