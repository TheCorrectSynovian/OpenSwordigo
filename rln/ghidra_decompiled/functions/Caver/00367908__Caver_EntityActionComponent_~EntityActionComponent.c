/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00367908
 * Function: Caver::EntityActionComponent::~EntityActionComponent
 * Signature: undefined __thiscall ~EntityActionComponent(EntityActionComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::EntityActionComponent::~EntityActionComponent() */

void __thiscall Caver::EntityActionComponent::~EntityActionComponent(EntityActionComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)(this + 0xa0);
  puVar1 = PTR_vtable_007e5810 + 0x128;
  puVar2 = PTR_vtable_007e5810 + 0x168;
  *(undefined **)this = PTR_vtable_007e5810 + 0x10;
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
  Program::~Program((Program *)(this + 0x70));
  Component::~Component((Component *)this);
  return;
}


