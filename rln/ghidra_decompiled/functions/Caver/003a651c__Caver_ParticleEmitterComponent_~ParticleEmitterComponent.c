/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a651c
 * Function: Caver::ParticleEmitterComponent::~ParticleEmitterComponent
 * Signature: undefined __thiscall ~ParticleEmitterComponent(ParticleEmitterComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ParticleEmitterComponent::~ParticleEmitterComponent() */

void __thiscall
Caver::ParticleEmitterComponent::~ParticleEmitterComponent(ParticleEmitterComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(this + 0x160);
  puVar1 = PTR_vtable_007e69f8 + 0x128;
  puVar2 = PTR_vtable_007e69f8 + 0x168;
  *(undefined **)this = PTR_vtable_007e69f8 + 0x10;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  if ((plVar5 != (long *)0x0) && (lVar4 = plVar5[1], plVar5[1] = lVar4 + -1, lVar4 + -1 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    lVar4 = plVar5[2];
    plVar5[2] = lVar4 + -1;
    if (lVar4 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  plVar5 = *(long **)(this + 0x150);
  if ((plVar5 != (long *)0x0) && (lVar4 = plVar5[1], plVar5[1] = lVar4 + -1, lVar4 + -1 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    lVar4 = plVar5[2];
    plVar5[2] = lVar4 + -1;
    if (lVar4 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  plVar5 = *(long **)(this + 0x138);
  if ((plVar5 != (long *)0x0) &&
     (iVar3 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar3, iVar3 == 0)) {
    (**(code **)(*plVar5 + 8))();
  }
  plVar5 = *(long **)(this + 0x130);
  *(undefined **)(this + 0x120) = PTR_vtable_007e50d0 + 0x10;
  if ((plVar5 != (long *)0x0) &&
     (iVar3 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar3, iVar3 == 0)) {
    (**(code **)(*plVar5 + 8))();
  }
  plVar5 = *(long **)(this + 0x118);
  *(undefined **)(this + 0x108) = PTR_vtable_007e74d8 + 0x10;
  if ((plVar5 != (long *)0x0) &&
     (iVar3 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar3, iVar3 == 0)) {
    (**(code **)(*plVar5 + 8))();
  }
  puVar2 = PTR_vtable_007e7a70;
  puVar1 = PTR_vtable_007e7a70 + 0x10;
  *(undefined **)(this + 0xd8) = puVar1;
  plVar5 = *(long **)(this + 0xe8);
  if ((plVar5 != (long *)0x0) &&
     (iVar3 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar3, iVar3 == 0)) {
    (**(code **)(*plVar5 + 8))();
  }
  *(undefined **)(this + 0xc0) = puVar1;
  plVar5 = *(long **)(this + 0xd0);
  if ((plVar5 != (long *)0x0) &&
     (iVar3 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar3, iVar3 == 0)) {
    (**(code **)(*plVar5 + 8))();
  }
  puVar1 = puVar2 + 0x10;
  *(undefined **)(this + 0xa8) = puVar1;
  plVar5 = *(long **)(this + 0xb8);
  if ((plVar5 != (long *)0x0) &&
     (iVar3 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar3, iVar3 == 0)) {
    (**(code **)(*plVar5 + 8))();
  }
  *(undefined **)(this + 0x90) = puVar1;
  plVar5 = *(long **)(this + 0xa0);
  if ((plVar5 != (long *)0x0) &&
     (iVar3 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar3, iVar3 == 0)) {
    (**(code **)(*plVar5 + 8))();
  }
  *(undefined **)(this + 0x78) = puVar2 + 0x10;
  plVar5 = *(long **)(this + 0x88);
  if ((plVar5 != (long *)0x0) &&
     (iVar3 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar3, iVar3 == 0)) {
    (**(code **)(*plVar5 + 8))();
  }
  Component::~Component((Component *)this);
  return;
}


