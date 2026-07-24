/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00383780
 * Function: Caver::HookshotTrailComponent::~HookshotTrailComponent
 * Signature: undefined __thiscall ~HookshotTrailComponent(HookshotTrailComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::HookshotTrailComponent::~HookshotTrailComponent() */

void __thiscall Caver::HookshotTrailComponent::~HookshotTrailComponent(HookshotTrailComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_vtable_007e7798 + 0x138;
  puVar2 = PTR_vtable_007e7798 + 0x178;
  *(undefined **)this = PTR_vtable_007e7798 + 0x10;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  if (*(void **)(this + 0x98) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x98));
  }
  if (*(void **)(this + 0x88) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x88));
  }
  Component::~Component((Component *)this);
  return;
}


