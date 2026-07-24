/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b6ce8
 * Function: Caver::GroundMeshComponent::~GroundMeshComponent
 * Signature: undefined __thiscall ~GroundMeshComponent(GroundMeshComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GroundMeshComponent::~GroundMeshComponent() */

void __thiscall Caver::GroundMeshComponent::~GroundMeshComponent(GroundMeshComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  void *pvVar3;
  long lVar4;
  void *pvVar5;
  long *plVar6;
  
  pvVar5 = *(void **)(this + 0x88);
  pvVar3 = *(void **)(this + 0x90);
  puVar1 = PTR_vtable_007e7478 + 0x128;
  puVar2 = PTR_vtable_007e7478 + 0x168;
  *(undefined **)this = PTR_vtable_007e7478 + 0x10;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  if (pvVar5 != pvVar3) {
    do {
      plVar6 = *(long **)((long)pvVar5 + 8);
      if ((plVar6 != (long *)0x0) && (lVar4 = plVar6[1], plVar6[1] = lVar4 + -1, lVar4 + -1 == 0)) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        lVar4 = plVar6[2];
        plVar6[2] = lVar4 + -1;
        if (lVar4 + -1 == 0) {
          (**(code **)(*plVar6 + 0x18))(plVar6);
        }
      }
      pvVar5 = (void *)((long)pvVar5 + 0x10);
    } while (pvVar3 != pvVar5);
    pvVar5 = *(void **)(this + 0x88);
  }
  if (pvVar5 != (void *)0x0) {
    operator_delete(pvVar5);
  }
  pvVar5 = *(void **)(this + 0x70);
  pvVar3 = *(void **)(this + 0x78);
  if (pvVar5 != pvVar3) {
    do {
      plVar6 = *(long **)((long)pvVar5 + 8);
      if ((plVar6 != (long *)0x0) && (lVar4 = plVar6[1], plVar6[1] = lVar4 + -1, lVar4 + -1 == 0)) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        lVar4 = plVar6[2];
        plVar6[2] = lVar4 + -1;
        if (lVar4 + -1 == 0) {
          (**(code **)(*plVar6 + 0x18))(plVar6);
        }
      }
      pvVar5 = (void *)((long)pvVar5 + 0x10);
    } while (pvVar3 != pvVar5);
    pvVar5 = *(void **)(this + 0x70);
  }
  if (pvVar5 != (void *)0x0) {
    operator_delete(pvVar5);
  }
  Component::~Component((Component *)this);
  return;
}


