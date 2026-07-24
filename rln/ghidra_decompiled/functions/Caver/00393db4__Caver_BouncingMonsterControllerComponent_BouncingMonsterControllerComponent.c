/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00393db4
 * Function: Caver::BouncingMonsterControllerComponent::BouncingMonsterControllerComponent
 * Signature: undefined __thiscall BouncingMonsterControllerComponent(BouncingMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::BouncingMonsterControllerComponent::BouncingMonsterControllerComponent() */

void __thiscall
Caver::BouncingMonsterControllerComponent::BouncingMonsterControllerComponent
          (BouncingMonsterControllerComponent *this)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  int *piVar8;
  int iVar9;
  undefined1 auStack_60 [8];
  long local_58 [2];
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  MonsterControllerComponent::MonsterControllerComponent((MonsterControllerComponent *)this);
  puVar7 = PTR_vtable_007e78d8;
  puVar6 = PTR_vtable_007e5548;
  puVar1 = PTR_vtable_007e78d8 + 0x128;
  *(undefined **)(this + 0x18) = PTR_vtable_007e78d8 + 0x168;
  *(undefined **)(this + 0x10) = puVar1;
  uVar5 = _DAT_00689078;
  *(undefined **)this = puVar7 + 0x10;
  *(undefined **)(this + 0xd0) = puVar6 + 0x10;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined **)(this + 0xe8) = puVar6 + 0x10;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined2 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x108) = uVar5;
  *(undefined8 *)(this + 0x110) = 0;
  FUN_00666bb8(local_58,"jumpAnimation",auStack_60);
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
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar3) {
          *piVar8 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete((undefined *)(local_58[0] + -0x18));
    }
  }
  FUN_00666bb8(local_58,"fallAnimation",auStack_60);
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
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar3) {
          *piVar8 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete((undefined *)(local_58[0] + -0x18));
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


