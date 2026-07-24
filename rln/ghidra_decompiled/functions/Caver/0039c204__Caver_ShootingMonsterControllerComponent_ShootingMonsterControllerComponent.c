/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0039c204
 * Function: Caver::ShootingMonsterControllerComponent::ShootingMonsterControllerComponent
 * Signature: undefined __thiscall ShootingMonsterControllerComponent(ShootingMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ShootingMonsterControllerComponent::ShootingMonsterControllerComponent() */

void __thiscall
Caver::ShootingMonsterControllerComponent::ShootingMonsterControllerComponent
          (ShootingMonsterControllerComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  int *piVar7;
  int iVar8;
  undefined1 auStack_60 [8];
  long local_58 [2];
  long local_48;
  
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  MonsterControllerComponent::MonsterControllerComponent((MonsterControllerComponent *)this);
  puVar1 = PTR_vtable_007e7b80 + 0x128;
  puVar2 = PTR_vtable_007e7b80 + 0x168;
  puVar3 = PTR_vtable_007e5548 + 0x10;
  *(undefined **)this = PTR_vtable_007e7b80 + 0x10;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  *(undefined **)(this + 0xd0) = puVar3;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined **)(this + 0xe8) = puVar3;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined4 *)(this + 0x108) = 0;
  *(undefined4 *)(this + 0x118) = 0x7f7fffff;
  *(undefined2 *)(this + 0x11c) = 0;
  *(undefined4 *)(this + 0x120) = 0x7f7fffff;
  FUN_00666bb8(local_58,"walkAnimation",auStack_60);
  Component::BindOutlet
            ((Component *)this,100,(string *)local_58,(ComponentOutletBase *)(this + 0xd0),true);
  puVar1 = PTR_DAT_007e5de8;
  if ((undefined *)(local_58[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar7 = (int *)(local_58[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar5) {
          *piVar7 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_58[0] + -0x18));
    }
  }
  FUN_00666bb8(local_58,"shootAnimation",auStack_60);
  Component::BindOutlet
            ((Component *)this,0x65,(string *)local_58,(ComponentOutletBase *)(this + 0xe8),true);
  if ((undefined *)(local_58[0] + -0x18) != puVar1) {
    piVar7 = (int *)(local_58[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar5) {
          *piVar7 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_58[0] + -0x18));
    }
  }
  if (*(long *)(lVar6 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


