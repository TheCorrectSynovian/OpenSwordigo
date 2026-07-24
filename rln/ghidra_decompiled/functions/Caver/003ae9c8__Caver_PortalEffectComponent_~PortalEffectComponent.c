/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ae9c8
 * Function: Caver::PortalEffectComponent::~PortalEffectComponent
 * Signature: undefined __thiscall ~PortalEffectComponent(PortalEffectComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PortalEffectComponent::~PortalEffectComponent() */

void __thiscall Caver::PortalEffectComponent::~PortalEffectComponent(PortalEffectComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  
  puVar1 = PTR_vtable_007e5ec0 + 0x138;
  puVar2 = PTR_vtable_007e5ec0 + 0x178;
  *(undefined **)this = PTR_vtable_007e5ec0 + 0x10;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  if (*(void **)(this + 0xf0) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0xf0));
  }
  if (*(void **)(this + 0xe0) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0xe0));
  }
  plVar4 = *(long **)(this + 0xb0);
  *(undefined **)(this + 0xa0) = PTR_vtable_007e4878 + 0x10;
  if ((plVar4 != (long *)0x0) &&
     (iVar3 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar3, iVar3 == 0)) {
    (**(code **)(*plVar4 + 8))();
  }
  plVar4 = *(long **)(this + 0x98);
  *(undefined **)(this + 0x88) = PTR_vtable_007e5768 + 0x10;
  if ((plVar4 != (long *)0x0) &&
     (iVar3 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar3, iVar3 == 0)) {
    (**(code **)(*plVar4 + 8))();
  }
  Component::~Component((Component *)this);
  return;
}


