/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00336a9c
 * Function: Caver::ShadowVolumeComponent::~ShadowVolumeComponent
 * Signature: undefined __thiscall ~ShadowVolumeComponent(ShadowVolumeComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ShadowVolumeComponent::~ShadowVolumeComponent() */

void __thiscall Caver::ShadowVolumeComponent::~ShadowVolumeComponent(ShadowVolumeComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  
  puVar1 = PTR_vtable_007e5730 + 0x128;
  puVar2 = PTR_vtable_007e5730 + 0x168;
  *(undefined **)this = PTR_vtable_007e5730 + 0x10;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  if (*(void **)(this + 0x88) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x88));
  }
  plVar4 = *(long **)(this + 0x78);
  if ((plVar4 != (long *)0x0) &&
     (iVar3 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar3, iVar3 == 0)) {
    (**(code **)(*plVar4 + 8))();
  }
  plVar4 = *(long **)(this + 0x70);
  if ((plVar4 != (long *)0x0) &&
     (iVar3 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar3, iVar3 == 0)) {
    (**(code **)(*plVar4 + 8))();
  }
  Component::~Component((Component *)this);
  return;
}


