/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0039eb20
 * Function: Caver::SnappingMonsterControllerComponent::SnappingMonsterControllerComponent
 * Signature: undefined __thiscall SnappingMonsterControllerComponent(SnappingMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SnappingMonsterControllerComponent::SnappingMonsterControllerComponent() */

void __thiscall
Caver::SnappingMonsterControllerComponent::SnappingMonsterControllerComponent
          (SnappingMonsterControllerComponent *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int *piVar9;
  int iVar10;
  undefined1 auStack_70 [8];
  long local_68 [2];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  MonsterControllerComponent::MonsterControllerComponent((MonsterControllerComponent *)this);
  puVar8 = PTR_vtable_007e5c38;
  puVar6 = PTR_vtable_007e5548;
  puVar4 = PTR_vtable_007e4a40;
  *(undefined **)this = PTR_vtable_007e5c38 + 0x10;
  puVar7 = PTR_vtable_007e5a50;
  puVar5 = PTR_vtable_007e5238;
  *(undefined **)(this + 0x18) = puVar8 + 0x168;
  *(undefined **)(this + 0x10) = puVar8 + 0x128;
  *(undefined **)(this + 0xd0) = puVar6 + 0x10;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined **)(this + 0xe8) = puVar6 + 0x10;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined **)(this + 0x100) = puVar4 + 0x10;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined **)(this + 0x118) = puVar5 + 0x10;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined **)(this + 0x130) = puVar7 + 0x10;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0x108) = 0;
  *(undefined4 *)(this + 0x120) = 0;
  *(undefined4 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  this[0x148] = (SnappingMonsterControllerComponent)0x0;
  *(undefined4 *)(this + 0x14c) = 0x7f7fffff;
  FUN_00666bb8(local_68,"standAnimation",auStack_70);
  Component::BindOutlet
            ((Component *)this,100,(string *)local_68,(ComponentOutletBase *)(this + 0xd0),true);
  puVar4 = PTR_DAT_007e5de8;
  if ((undefined *)(local_68[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar9 = (int *)(local_68[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar9;
      *piVar9 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar9;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar2) {
          *piVar9 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_68[0] + -0x18));
    }
  }
  FUN_00666bb8(local_68,"attackAnimation",auStack_70);
  Component::BindOutlet
            ((Component *)this,0x65,(string *)local_68,(ComponentOutletBase *)(this + 0xe8),true);
  if ((undefined *)(local_68[0] + -0x18) != puVar4) {
    piVar9 = (int *)(local_68[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar9;
      *piVar9 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar9;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar2) {
          *piVar9 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_68[0] + -0x18));
    }
  }
  FUN_00666bb8(local_68,"blendAnimation",auStack_70);
  Component::BindOutlet
            ((Component *)this,0x66,(string *)local_68,(ComponentOutletBase *)(this + 0x100),true);
  if ((undefined *)(local_68[0] + -0x18) != puVar4) {
    piVar9 = (int *)(local_68[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar9;
      *piVar9 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar9;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar2) {
          *piVar9 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_68[0] + -0x18));
    }
  }
  FUN_00666bb8(local_68,"attackArea",auStack_70);
  Component::BindOutlet
            ((Component *)this,0x67,(string *)local_68,(ComponentOutletBase *)(this + 0x118),true);
  if ((undefined *)(local_68[0] + -0x18) != puVar4) {
    piVar9 = (int *)(local_68[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar9;
      *piVar9 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar9;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar2) {
          *piVar9 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_68[0] + -0x18));
    }
  }
  FUN_00666bb8(local_68,"attackSound",auStack_70);
  Component::BindOutlet
            ((Component *)this,0x68,(string *)local_68,(ComponentOutletBase *)(this + 0x130),true);
  if ((undefined *)(local_68[0] + -0x18) != puVar4) {
    piVar9 = (int *)(local_68[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar9;
      *piVar9 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar9;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar2) {
          *piVar9 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_68[0] + -0x18));
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


