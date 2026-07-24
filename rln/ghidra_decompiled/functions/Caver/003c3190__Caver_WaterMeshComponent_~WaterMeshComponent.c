/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c3190
 * Function: Caver::WaterMeshComponent::~WaterMeshComponent
 * Signature: undefined __thiscall ~WaterMeshComponent(WaterMeshComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::WaterMeshComponent::~WaterMeshComponent() */

void __thiscall Caver::WaterMeshComponent::~WaterMeshComponent(WaterMeshComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  
  puVar1 = PTR_vtable_007e48b0 + 0x128;
  puVar2 = PTR_vtable_007e48b0 + 0x168;
  *(undefined **)this = PTR_vtable_007e48b0 + 0x10;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  VertexArrayObject::~VertexArrayObject((VertexArrayObject *)(this + 0xe0));
  plVar4 = *(long **)(this + 0xa8);
  *(undefined **)(this + 0x98) = PTR_vtable_007e4878 + 0x10;
  if ((plVar4 != (long *)0x0) &&
     (iVar3 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar3, iVar3 == 0)) {
    (**(code **)(*plVar4 + 8))();
  }
  plVar4 = *(long **)(this + 0x80);
  *(undefined **)(this + 0x70) = PTR_vtable_007e5238 + 0x10;
  if ((plVar4 != (long *)0x0) &&
     (iVar3 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar3, iVar3 == 0)) {
    (**(code **)(*plVar4 + 8))();
  }
  Component::~Component((Component *)this);
  return;
}


