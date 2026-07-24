/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c05a0
 * Function: Caver::GroundPolygonComponent::~GroundPolygonComponent
 * Signature: undefined __thiscall ~GroundPolygonComponent(GroundPolygonComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GroundPolygonComponent::~GroundPolygonComponent() */

void __thiscall Caver::GroundPolygonComponent::~GroundPolygonComponent(GroundPolygonComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_vtable_007e6680 + 0x128;
  puVar2 = PTR_vtable_007e6680 + 0x168;
  *(undefined **)this = PTR_vtable_007e6680 + 0x10;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  Program::~Program((Program *)(this + 0xc0));
  if (*(void **)(this + 0x78) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x78));
  }
  Component::~Component((Component *)this);
  operator_delete(this);
  return;
}


