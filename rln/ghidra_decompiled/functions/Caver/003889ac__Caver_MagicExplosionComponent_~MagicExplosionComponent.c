/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003889ac
 * Function: Caver::MagicExplosionComponent::~MagicExplosionComponent
 * Signature: undefined __thiscall ~MagicExplosionComponent(MagicExplosionComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MagicExplosionComponent::~MagicExplosionComponent() */

void __thiscall
Caver::MagicExplosionComponent::~MagicExplosionComponent(MagicExplosionComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  
  plVar4 = *(long **)(this + 0x180);
  puVar1 = PTR_vtable_007e4ce0 + 0x128;
  puVar2 = PTR_vtable_007e4ce0 + 0x168;
  *(undefined **)this = PTR_vtable_007e4ce0 + 0x10;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  if ((plVar4 != (long *)0x0) &&
     (iVar3 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar3, iVar3 == 0)) {
    (**(code **)(*plVar4 + 8))();
  }
  if (*(void **)(this + 0x170) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x170));
  }
  if (*(void **)(this + 0x168) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x168));
  }
  if (*(void **)(this + 0x140) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x140));
  }
  if (*(void **)(this + 0x128) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x128));
  }
  plVar4 = *(long **)(this + 0x108);
  if ((plVar4 != (long *)0x0) &&
     (iVar3 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar3, iVar3 == 0)) {
    (**(code **)(*plVar4 + 8))();
  }
  plVar4 = *(long **)(this + 0xa8);
  if ((plVar4 != (long *)0x0) &&
     (iVar3 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar3, iVar3 == 0)) {
    (**(code **)(*plVar4 + 8))();
  }
  plVar4 = *(long **)(this + 0xa0);
  if ((plVar4 != (long *)0x0) &&
     (iVar3 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar3, iVar3 == 0)) {
    (**(code **)(*plVar4 + 8))();
  }
  plVar4 = *(long **)(this + 0x98);
  *(undefined **)(this + 0x88) = PTR_vtable_007e5a50 + 0x10;
  if ((plVar4 != (long *)0x0) &&
     (iVar3 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar3, iVar3 == 0)) {
    (**(code **)(*plVar4 + 8))();
  }
  plVar4 = *(long **)(this + 0x80);
  *(undefined **)(this + 0x70) = PTR_vtable_007e74d8 + 0x10;
  if ((plVar4 != (long *)0x0) &&
     (iVar3 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar3, iVar3 == 0)) {
    (**(code **)(*plVar4 + 8))();
  }
  Component::~Component((Component *)this);
  return;
}


