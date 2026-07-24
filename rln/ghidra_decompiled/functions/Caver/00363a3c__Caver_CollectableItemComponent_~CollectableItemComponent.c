/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00363a3c
 * Function: Caver::CollectableItemComponent::~CollectableItemComponent
 * Signature: undefined __thiscall ~CollectableItemComponent(CollectableItemComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CollectableItemComponent::~CollectableItemComponent() */

void __thiscall
Caver::CollectableItemComponent::~CollectableItemComponent(CollectableItemComponent *this)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  int *piVar6;
  int iVar7;
  long lVar8;
  
  lVar4 = tpidr_el0;
  lVar8 = *(long *)(lVar4 + 0x28);
  puVar1 = PTR_vtable_007e60b0 + 0x128;
  puVar5 = PTR_vtable_007e60b0 + 0x168;
  *(undefined **)this = PTR_vtable_007e60b0 + 0x10;
  *(undefined **)(this + 0x18) = puVar5;
  *(undefined **)(this + 0x10) = puVar1;
  Program::~Program((Program *)(this + 0x90));
  puVar1 = PTR_DAT_007e5de8;
  puVar5 = (undefined *)(*(long *)(this + 0x80) + -0x18);
  if (puVar5 != PTR_DAT_007e5de8) {
    piVar6 = (int *)(*(long *)(this + 0x80) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar6;
      *piVar6 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar3) {
          *piVar6 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete(puVar5);
    }
  }
  puVar5 = (undefined *)(*(long *)(this + 0x78) + -0x18);
  if (puVar5 != puVar1) {
    piVar6 = (int *)(*(long *)(this + 0x78) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar6;
      *piVar6 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar3) {
          *piVar6 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete(puVar5);
    }
  }
  Component::~Component((Component *)this);
  if (*(long *)(lVar4 + 0x28) != lVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


