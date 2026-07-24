/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031394c
 * Function: Caver::BoneControlledCollisionShapeComponent::BoneControlledCollisionShapeComponent
 * Signature: undefined __thiscall BoneControlledCollisionShapeComponent(BoneControlledCollisionShapeComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BoneControlledCollisionShapeComponent::BoneControlledCollisionShapeComponent() */

void __thiscall
Caver::BoneControlledCollisionShapeComponent::BoneControlledCollisionShapeComponent
          (BoneControlledCollisionShapeComponent *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int *piVar7;
  int iVar8;
  undefined1 auStack_50 [8];
  long local_48 [2];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  CollisionShapeComponent::CollisionShapeComponent((CollisionShapeComponent *)this);
  puVar6 = PTR_vtable_007e62f0;
  puVar4 = PTR_vtable_007e50d0;
  *(undefined **)this = PTR_vtable_007e62f0 + 0x10;
  puVar5 = PTR_DAT_007e5de8;
  *(undefined **)(this + 0x1d0) = puVar4 + 0x10;
  *(undefined8 *)(this + 0x1e0) = 0;
  *(undefined **)(this + 0x1e8) = puVar5 + 0x18;
  *(undefined4 *)(this + 0x1d8) = 0;
  *(undefined8 *)(this + 0x1f0) = 0;
  *(undefined **)(this + 0x18) = puVar6 + 400;
  *(undefined **)(this + 0x10) = puVar6 + 0x150;
  *(undefined4 *)(this + 0x1f8) = 0;
  FUN_00666bb8(local_48,"controllingModel",auStack_50);
  Component::BindOutlet
            ((Component *)this,300,(string *)local_48,(ComponentOutletBase *)(this + 0x1d0),true);
  if ((undefined *)(local_48[0] + -0x18) != puVar5) {
    piVar7 = (int *)(local_48[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = iVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_48[0] + -0x18));
    }
  }
  this[0x179] = (BoneControlledCollisionShapeComponent)0x1;
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


