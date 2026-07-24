/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b2344
 * Function: Caver::DoorControllerComponent::DoorControllerComponent
 * Signature: undefined __thiscall DoorControllerComponent(DoorControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::DoorControllerComponent::DoorControllerComponent() */

void __thiscall
Caver::DoorControllerComponent::DoorControllerComponent(DoorControllerComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  DoorControllerComponent *pDVar11;
  int *piVar12;
  int iVar13;
  undefined1 auStack_80 [8];
  long local_78 [2];
  long local_68;
  
  puVar10 = PTR_DAT_007e5de8;
  puVar9 = PTR_vtable_007e5a50;
  puVar8 = PTR_vtable_007e5548;
  puVar7 = PTR_vtable_007e51c0;
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  puVar1 = PTR_vtable_007e7c80 + 0x128;
  puVar2 = PTR_vtable_007e7c80 + 0x168;
  puVar3 = PTR_vtable_007e7c80 + 0x10;
  *(undefined **)(this + 0x38) = PTR_DAT_007e5de8 + 0x18;
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  this[0x30] = (DoorControllerComponent)0x0;
  pDVar11 = this + 0x48;
  *(undefined8 *)pDVar11 = 0;
  *(undefined **)this = puVar3;
  *(DoorControllerComponent **)(this + 0x58) = pDVar11;
  *(DoorControllerComponent **)(this + 0x60) = pDVar11;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  *(undefined **)(this + 0x70) = puVar7 + 0x10;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined **)(this + 0x88) = puVar8 + 0x10;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined **)(this + 0xb8) = puVar9 + 0x10;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined **)(this + 0xa0) = puVar9 + 0x10;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 200) = 0;
  this[0xd0] = (DoorControllerComponent)0x0;
  *(undefined4 *)(this + 0xd4) = 0;
  FUN_00666bb8(local_78,&DAT_0068801c,auStack_80);
  Component::BindOutlet
            ((Component *)this,0,(string *)local_78,(ComponentOutletBase *)(this + 0x70),true);
  if ((undefined *)(local_78[0] + -0x18) != puVar10) {
    piVar12 = (int *)(local_78[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar13 = *piVar12;
      *piVar12 = iVar13 + -1;
    }
    else {
      do {
        iVar13 = *piVar12;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar5) {
          *piVar12 = iVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar13 < 1) {
      operator_delete((undefined *)(local_78[0] + -0x18));
    }
  }
  FUN_00666bb8(local_78,"animation",auStack_80);
  Component::BindOutlet
            ((Component *)this,1,(string *)local_78,(ComponentOutletBase *)(this + 0x88),true);
  if ((undefined *)(local_78[0] + -0x18) != puVar10) {
    piVar12 = (int *)(local_78[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar13 = *piVar12;
      *piVar12 = iVar13 + -1;
    }
    else {
      do {
        iVar13 = *piVar12;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar5) {
          *piVar12 = iVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar13 < 1) {
      operator_delete((undefined *)(local_78[0] + -0x18));
    }
  }
  FUN_00666bb8(local_78,"closeSound",auStack_80);
  Component::BindOutlet
            ((Component *)this,2,(string *)local_78,(ComponentOutletBase *)(this + 0xa0),true);
  if ((undefined *)(local_78[0] + -0x18) != puVar10) {
    piVar12 = (int *)(local_78[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar13 = *piVar12;
      *piVar12 = iVar13 + -1;
    }
    else {
      do {
        iVar13 = *piVar12;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar5) {
          *piVar12 = iVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar13 < 1) {
      operator_delete((undefined *)(local_78[0] + -0x18));
    }
  }
  FUN_00666bb8(local_78,"openSound",auStack_80);
  Component::BindOutlet
            ((Component *)this,3,(string *)local_78,(ComponentOutletBase *)(this + 0xb8),true);
  if ((undefined *)(local_78[0] + -0x18) != puVar10) {
    piVar12 = (int *)(local_78[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar13 = *piVar12;
      *piVar12 = iVar13 + -1;
    }
    else {
      do {
        iVar13 = *piVar12;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar5) {
          *piVar12 = iVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar13 < 1) {
      operator_delete((undefined *)(local_78[0] + -0x18));
    }
  }
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


