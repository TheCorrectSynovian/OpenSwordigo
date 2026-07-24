/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00398884
 * Function: Caver::LeapingMonsterControllerComponent::LeapingMonsterControllerComponent
 * Signature: undefined __thiscall LeapingMonsterControllerComponent(LeapingMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::LeapingMonsterControllerComponent::LeapingMonsterControllerComponent() */

void __thiscall
Caver::LeapingMonsterControllerComponent::LeapingMonsterControllerComponent
          (LeapingMonsterControllerComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined *puVar7;
  int *piVar8;
  int iVar9;
  undefined1 auStack_70 [8];
  long local_68 [2];
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  MonsterControllerComponent::MonsterControllerComponent((MonsterControllerComponent *)this);
  puVar7 = PTR_vtable_007e7fa0;
  puVar1 = PTR_vtable_007e70b8 + 0x128;
  puVar2 = PTR_vtable_007e70b8 + 0x168;
  puVar3 = PTR_vtable_007e5548 + 0x10;
  *(undefined **)this = PTR_vtable_007e70b8 + 0x10;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  *(undefined **)(this + 0xd0) = puVar3;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined **)(this + 0xe8) = puVar7 + 0x10;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x110) = 0x7f7fffff00000000;
  *(undefined8 *)(this + 0x100) = 0;
  this[0x108] = (LeapingMonsterControllerComponent)0x0;
  FUN_00666bb8(local_68,"walkAnimation",auStack_70);
  Component::BindOutlet
            ((Component *)this,100,(string *)local_68,(ComponentOutletBase *)(this + 0xd0),true);
  puVar1 = PTR_DAT_007e5de8;
  if ((undefined *)(local_68[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar8 = (int *)(local_68[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar5) {
          *piVar8 = iVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete((undefined *)(local_68[0] + -0x18));
    }
  }
  FUN_00666bb8(local_68,"leapAttack",auStack_70);
  Component::BindOutlet
            ((Component *)this,0x65,(string *)local_68,(ComponentOutletBase *)(this + 0xe8),false);
  if ((undefined *)(local_68[0] + -0x18) != puVar1) {
    piVar8 = (int *)(local_68[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar5) {
          *piVar8 = iVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete((undefined *)(local_68[0] + -0x18));
    }
  }
  if (*(long *)(lVar6 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


