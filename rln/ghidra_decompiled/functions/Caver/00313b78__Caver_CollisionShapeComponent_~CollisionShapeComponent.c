/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00313b78
 * Function: Caver::CollisionShapeComponent::~CollisionShapeComponent
 * Signature: undefined __thiscall ~CollisionShapeComponent(CollisionShapeComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CollisionShapeComponent::~CollisionShapeComponent() */

void __thiscall
Caver::CollisionShapeComponent::~CollisionShapeComponent(CollisionShapeComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  
  puVar1 = PTR_vtable_007e4b78 + 0x150;
  puVar2 = PTR_vtable_007e4b78 + 400;
  *(undefined **)this = PTR_vtable_007e4b78 + 0x10;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  SceneGridEntry::~SceneGridEntry((SceneGridEntry *)(this + 400));
  plVar4 = *(long **)(this + 0x118);
  if ((plVar4 != (long *)0x0) && (lVar3 = plVar4[1], plVar4[1] = lVar3 + -1, lVar3 + -1 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar3 = plVar4[2];
    plVar4[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  Program::~Program((Program *)(this + 0xe0));
  Program::~Program((Program *)(this + 0xb8));
  Program::~Program((Program *)(this + 0x90));
  plVar4 = *(long **)(this + 0x80);
  puVar1 = PTR_vtable_007e7a10 + 0x148;
  puVar2 = PTR_vtable_007e7a10 + 0x188;
  *(undefined **)this = PTR_vtable_007e7a10 + 0x10;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  if ((plVar4 != (long *)0x0) && (lVar3 = plVar4[1], plVar4[1] = lVar3 + -1, lVar3 + -1 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar3 = plVar4[2];
    plVar4[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  Component::~Component((Component *)this);
  return;
}


