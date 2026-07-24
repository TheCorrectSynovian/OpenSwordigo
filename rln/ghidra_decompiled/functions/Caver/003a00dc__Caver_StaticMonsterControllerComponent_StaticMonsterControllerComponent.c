/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a00dc
 * Function: Caver::StaticMonsterControllerComponent::StaticMonsterControllerComponent
 * Signature: undefined __thiscall StaticMonsterControllerComponent(StaticMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::StaticMonsterControllerComponent::StaticMonsterControllerComponent() */

void __thiscall
Caver::StaticMonsterControllerComponent::StaticMonsterControllerComponent
          (StaticMonsterControllerComponent *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  char *pcVar7;
  int *piVar8;
  int iVar9;
  undefined *local_78;
  long local_70 [2];
  long local_60 [2];
  char acStack_4c [4];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  MonsterControllerComponent::MonsterControllerComponent((MonsterControllerComponent *)this);
  puVar6 = PTR_vtable_007e6430;
  puVar4 = PTR_vtable_007e5548;
  *(undefined **)this = PTR_vtable_007e6430 + 0x10;
  puVar5 = PTR_vtable_007e5a50;
  *(undefined **)(this + 0x18) = puVar6 + 0x168;
  *(undefined **)(this + 0x10) = puVar6 + 0x128;
  *(undefined **)(this + 0xd0) = puVar4 + 0x10;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined **)(this + 0xe8) = puVar5 + 0x10;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined **)(this + 0x100) = puVar5 + 0x10;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x118) = 0x7f7fffff00000000;
  FUN_00666bb8(local_60,"animation",&local_78);
  Component::BindOutlet
            ((Component *)this,100,(string *)local_60,(ComponentOutletBase *)(this + 0xd0),true);
  puVar4 = PTR_DAT_007e5de8;
  if ((undefined *)(local_60[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar8 = (int *)(local_60[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete((undefined *)(local_60[0] + -0x18));
    }
  }
  local_78 = puVar4 + 0x18;
  pcVar7 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned_int,char>(1,acStack_4c)
  ;
  FUN_00669e1c(&local_78,0,*(undefined8 *)puVar4,pcVar7,(long)acStack_4c - (long)pcVar7);
  FUN_0035a030(local_70,"sound",&local_78);
  Component::BindOutlet
            ((Component *)this,0x65,(string *)local_70,(ComponentOutletBase *)(this + 0xe8),true);
  if ((undefined *)(local_70[0] + -0x18) != puVar4) {
    piVar8 = (int *)(local_70[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete((undefined *)(local_70[0] + -0x18));
    }
  }
  if (local_78 + -0x18 != puVar4) {
    piVar8 = (int *)(local_78 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete(local_78 + -0x18);
    }
  }
  local_78 = puVar4 + 0x18;
  pcVar7 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned_int,char>(2,acStack_4c)
  ;
  FUN_00669e1c(&local_78,0,*(undefined8 *)puVar4,pcVar7,(long)acStack_4c - (long)pcVar7);
  FUN_0035a030(local_70,"sound",&local_78);
  Component::BindOutlet
            ((Component *)this,0x66,(string *)local_70,(ComponentOutletBase *)(this + 0x100),true);
  if ((undefined *)(local_70[0] + -0x18) != puVar4) {
    piVar8 = (int *)(local_70[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete((undefined *)(local_70[0] + -0x18));
    }
  }
  if (local_78 + -0x18 != puVar4) {
    piVar8 = (int *)(local_78 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete(local_78 + -0x18);
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


