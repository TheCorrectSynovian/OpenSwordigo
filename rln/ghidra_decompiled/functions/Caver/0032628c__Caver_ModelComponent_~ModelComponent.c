/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0032628c
 * Function: Caver::ModelComponent::~ModelComponent
 * Signature: undefined __thiscall ~ModelComponent(ModelComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ModelComponent::~ModelComponent() */

void __thiscall Caver::ModelComponent::~ModelComponent(ModelComponent *this)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  int iVar10;
  ModelInstance *this_00;
  
  lVar4 = tpidr_el0;
  lVar7 = *(long *)(lVar4 + 0x28);
  plVar5 = *(long **)(this + 0x90);
  puVar6 = PTR_vtable_007e6b98 + 0x128;
  puVar1 = PTR_vtable_007e6b98 + 0x168;
  *(undefined **)this = PTR_vtable_007e6b98 + 0x10;
  *(undefined **)(this + 0x18) = puVar1;
  *(undefined **)(this + 0x10) = puVar6;
  if ((plVar5 != (long *)0x0) &&
     (iVar10 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar10, iVar10 == 0)) {
    (**(code **)(*plVar5 + 8))();
  }
  this_00 = *(ModelInstance **)(this + 0x88);
  if (this_00 != (ModelInstance *)0x0) {
    ModelInstance::~ModelInstance(this_00);
    operator_delete(this_00);
  }
  plVar5 = *(long **)(this + 0x80);
  if ((plVar5 != (long *)0x0) && (lVar8 = plVar5[1], plVar5[1] = lVar8 + -1, lVar8 + -1 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    lVar8 = plVar5[2];
    plVar5[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  puVar6 = (undefined *)(*(long *)(this + 0x70) + -0x18);
  if (puVar6 != PTR_DAT_007e5de8) {
    piVar9 = (int *)(*(long *)(this + 0x70) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar9;
      *piVar9 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar3) {
          *piVar9 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete(puVar6);
    }
  }
  Component::~Component((Component *)this);
  if (*(long *)(lVar4 + 0x28) != lVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


