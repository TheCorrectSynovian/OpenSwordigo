/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00315138
 * Function: Caver::BoneControlledCollisionShapeComponent::~BoneControlledCollisionShapeComponent
 * Signature: undefined __thiscall ~BoneControlledCollisionShapeComponent(BoneControlledCollisionShapeComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BoneControlledCollisionShapeComponent::~BoneControlledCollisionShapeComponent() */

void __thiscall
Caver::BoneControlledCollisionShapeComponent::~BoneControlledCollisionShapeComponent
          (BoneControlledCollisionShapeComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  int *piVar10;
  int iVar11;
  
  lVar5 = tpidr_el0;
  lVar9 = *(long *)(lVar5 + 0x28);
  puVar1 = PTR_vtable_007e62f0 + 0x150;
  puVar2 = PTR_vtable_007e62f0 + 400;
  *(undefined **)this = PTR_vtable_007e62f0 + 0x10;
  puVar6 = PTR_DAT_007e5de8;
  puVar7 = (undefined *)(*(long *)(this + 0x1e8) + -0x18);
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  if (puVar7 != puVar6) {
    piVar10 = (int *)(*(long *)(this + 0x1e8) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *piVar10;
      *piVar10 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *piVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar4) {
          *piVar10 = iVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar11 < 1) {
      operator_delete(puVar7);
    }
  }
  plVar8 = *(long **)(this + 0x1e0);
  *(undefined **)(this + 0x1d0) = PTR_vtable_007e50d0 + 0x10;
  if ((plVar8 != (long *)0x0) &&
     (iVar11 = (int)plVar8[1] + -1, *(int *)(plVar8 + 1) = iVar11, iVar11 == 0)) {
    (**(code **)(*plVar8 + 8))();
  }
  CollisionShapeComponent::~CollisionShapeComponent((CollisionShapeComponent *)this);
  if (*(long *)(lVar5 + 0x28) != lVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


