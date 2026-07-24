/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00399114
 * Function: Caver::MonsterControllerComponent::MonsterControllerComponent
 * Signature: undefined __thiscall MonsterControllerComponent(MonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MonsterControllerComponent::MonsterControllerComponent() */

void __thiscall
Caver::MonsterControllerComponent::MonsterControllerComponent(MonsterControllerComponent *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  MonsterControllerComponent *pMVar9;
  int *piVar10;
  int iVar11;
  undefined1 auStack_80 [8];
  long local_78 [2];
  long local_68;
  
  puVar8 = PTR_vtable_007e6f68;
  puVar7 = PTR_vtable_007e6bb0;
  puVar5 = PTR_DAT_007e5de8;
  puVar4 = PTR_vtable_007e51c0;
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  *(undefined **)(this + 0x38) = PTR_DAT_007e5de8 + 0x18;
  puVar6 = PTR_vtable_007e63b8;
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  this[0x30] = (MonsterControllerComponent)0x0;
  pMVar9 = this + 0x48;
  *(undefined8 *)pMVar9 = 0;
  *(undefined **)this = puVar8 + 0x10;
  *(MonsterControllerComponent **)(this + 0x58) = pMVar9;
  *(MonsterControllerComponent **)(this + 0x60) = pMVar9;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined **)(this + 0x18) = puVar8 + 0x168;
  *(undefined **)(this + 0x10) = puVar8 + 0x128;
  *(undefined **)(this + 0x70) = puVar7 + 0x10;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined **)(this + 0x88) = puVar4 + 0x10;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined **)(this + 0xa0) = puVar6 + 0x10;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined4 *)(this + 200) = 0x42c80000;
  FUN_00666bb8(local_78,"entity",auStack_80);
  Component::BindOutlet
            ((Component *)this,0,(string *)local_78,(ComponentOutletBase *)(this + 0x70),true);
  if ((undefined *)(local_78[0] + -0x18) != puVar5) {
    piVar10 = (int *)(local_78[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *piVar10;
      *piVar10 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *piVar10;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar2) {
          *piVar10 = iVar11 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar11 < 1) {
      operator_delete((undefined *)(local_78[0] + -0x18));
    }
  }
  FUN_00666bb8(local_78,&DAT_0068801c,auStack_80);
  Component::BindOutlet
            ((Component *)this,1,(string *)local_78,(ComponentOutletBase *)(this + 0x88),true);
  if ((undefined *)(local_78[0] + -0x18) != puVar5) {
    piVar10 = (int *)(local_78[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *piVar10;
      *piVar10 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *piVar10;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar2) {
          *piVar10 = iVar11 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar11 < 1) {
      operator_delete((undefined *)(local_78[0] + -0x18));
    }
  }
  FUN_00666bb8(local_78,"roamArea",auStack_80);
  Component::BindOutlet
            ((Component *)this,2,(string *)local_78,(ComponentOutletBase *)(this + 0xa0),true);
  if ((undefined *)(local_78[0] + -0x18) != puVar5) {
    piVar10 = (int *)(local_78[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *piVar10;
      *piVar10 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *piVar10;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar2) {
          *piVar10 = iVar11 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar11 < 1) {
      operator_delete((undefined *)(local_78[0] + -0x18));
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


