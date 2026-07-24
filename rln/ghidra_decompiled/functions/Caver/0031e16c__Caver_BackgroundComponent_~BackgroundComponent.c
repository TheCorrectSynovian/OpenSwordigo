/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031e16c
 * Function: Caver::BackgroundComponent::~BackgroundComponent
 * Signature: undefined __thiscall ~BackgroundComponent(BackgroundComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BackgroundComponent::~BackgroundComponent() */

void __thiscall Caver::BackgroundComponent::~BackgroundComponent(BackgroundComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)(this + 0x88);
  puVar1 = PTR_vtable_007e5dc0 + 0x130;
  puVar2 = PTR_vtable_007e5dc0 + 0x170;
  *(undefined **)this = PTR_vtable_007e5dc0 + 0x10;
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
  operator_delete(this);
  return;
}


