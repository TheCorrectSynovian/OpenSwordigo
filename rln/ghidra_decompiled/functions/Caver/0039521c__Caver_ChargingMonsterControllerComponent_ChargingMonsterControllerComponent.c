/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0039521c
 * Function: Caver::ChargingMonsterControllerComponent::ChargingMonsterControllerComponent
 * Signature: undefined __thiscall ChargingMonsterControllerComponent(ChargingMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ChargingMonsterControllerComponent::ChargingMonsterControllerComponent() */

void __thiscall
Caver::ChargingMonsterControllerComponent::ChargingMonsterControllerComponent
          (ChargingMonsterControllerComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  int *piVar8;
  int iVar9;
  undefined1 auStack_60 [8];
  long local_58 [2];
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  MonsterControllerComponent::MonsterControllerComponent((MonsterControllerComponent *)this);
  puVar2 = PTR_vtable_007e5548;
  puVar7 = PTR_vtable_007e4888;
  puVar1 = PTR_vtable_007e4888 + 0x128;
  *(undefined **)(this + 0x18) = PTR_vtable_007e4888 + 0x168;
  *(undefined **)(this + 0x10) = puVar1;
  uVar6 = DAT_006890c0;
  *(undefined **)this = puVar7 + 0x10;
  puVar2 = puVar2 + 0x10;
  *(undefined **)(this + 0xd0) = puVar2;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined **)(this + 0xe8) = puVar2;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined **)(this + 0x100) = puVar2;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined2 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x128) = uVar6;
  *(undefined8 *)(this + 0x144) = 0;
  *(undefined8 *)(this + 0x13c) = 0;
  *(undefined8 *)(this + 0x134) = 0;
  *(undefined4 *)(this + 0x14c) = 0x7f7fffff;
  *(undefined4 *)(this + 0x150) = 0x7f7fffff;
  this[0x154] = (ChargingMonsterControllerComponent)0x0;
  FUN_00666bb8(local_58,"walkAnimation",auStack_60);
  Component::BindOutlet
            ((Component *)this,100,(string *)local_58,(ComponentOutletBase *)(this + 0xd0),true);
  puVar1 = PTR_DAT_007e5de8;
  if ((undefined *)(local_58[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar8 = (int *)(local_58[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar4) {
          *piVar8 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete((undefined *)(local_58[0] + -0x18));
    }
  }
  FUN_00666bb8(local_58,"chargeAnimation",auStack_60);
  Component::BindOutlet
            ((Component *)this,0x65,(string *)local_58,(ComponentOutletBase *)(this + 0xe8),true);
  if ((undefined *)(local_58[0] + -0x18) != puVar1) {
    piVar8 = (int *)(local_58[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar4) {
          *piVar8 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete((undefined *)(local_58[0] + -0x18));
    }
  }
  FUN_00666bb8(local_58,"runAnimation",auStack_60);
  Component::BindOutlet
            ((Component *)this,0x66,(string *)local_58,(ComponentOutletBase *)(this + 0x100),true);
  if ((undefined *)(local_58[0] + -0x18) != puVar1) {
    piVar8 = (int *)(local_58[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar4) {
          *piVar8 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete((undefined *)(local_58[0] + -0x18));
    }
  }
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


