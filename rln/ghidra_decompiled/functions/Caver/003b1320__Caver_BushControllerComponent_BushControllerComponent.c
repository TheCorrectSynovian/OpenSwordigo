/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b1320
 * Function: Caver::BushControllerComponent::BushControllerComponent
 * Signature: undefined __thiscall BushControllerComponent(BushControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BushControllerComponent::BushControllerComponent() */

void __thiscall
Caver::BushControllerComponent::BushControllerComponent(BushControllerComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  BushControllerComponent *pBVar10;
  int *piVar11;
  int iVar12;
  undefined1 auStack_70 [8];
  long local_68 [2];
  long local_58;
  
  puVar9 = PTR_vtable_007e75a8;
  puVar8 = PTR_DAT_007e5de8;
  puVar7 = PTR_vtable_007e5a50;
  puVar6 = PTR_vtable_007e5548;
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  puVar1 = PTR_vtable_007e75a8 + 0x128;
  puVar2 = PTR_vtable_007e75a8 + 0x168;
  *(undefined **)(this + 0x38) = PTR_DAT_007e5de8 + 0x18;
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  this[0x30] = (BushControllerComponent)0x0;
  pBVar10 = this + 0x48;
  *(undefined8 *)pBVar10 = 0;
  *(BushControllerComponent **)(this + 0x58) = pBVar10;
  *(BushControllerComponent **)(this + 0x60) = pBVar10;
  *(undefined **)this = puVar9 + 0x10;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  *(undefined **)(this + 0x70) = puVar6 + 0x10;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined **)(this + 0x88) = puVar7 + 0x10;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined **)(this + 0xa0) = puVar7 + 0x10;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  this[0xb8] = (BushControllerComponent)0x0;
  FUN_00666bb8(local_68,"wobbleAnimation",auStack_70);
  Component::BindOutlet
            ((Component *)this,0,(string *)local_68,(ComponentOutletBase *)(this + 0x70),true);
  if ((undefined *)(local_68[0] + -0x18) != puVar8) {
    piVar11 = (int *)(local_68[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar12 = *piVar11;
      *piVar11 = iVar12 + -1;
    }
    else {
      do {
        iVar12 = *piVar11;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar4) {
          *piVar11 = iVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar12 < 1) {
      operator_delete((undefined *)(local_68[0] + -0x18));
    }
  }
  FUN_00666bb8(local_68,"wobbleSound",auStack_70);
  Component::BindOutlet
            ((Component *)this,1,(string *)local_68,(ComponentOutletBase *)(this + 0x88),true);
  if ((undefined *)(local_68[0] + -0x18) != puVar8) {
    piVar11 = (int *)(local_68[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar12 = *piVar11;
      *piVar11 = iVar12 + -1;
    }
    else {
      do {
        iVar12 = *piVar11;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar4) {
          *piVar11 = iVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar12 < 1) {
      operator_delete((undefined *)(local_68[0] + -0x18));
    }
  }
  FUN_00666bb8(local_68,"cutSound",auStack_70);
  Component::BindOutlet
            ((Component *)this,2,(string *)local_68,(ComponentOutletBase *)(this + 0xa0),true);
  if ((undefined *)(local_68[0] + -0x18) != puVar8) {
    piVar11 = (int *)(local_68[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar12 = *piVar11;
      *piVar11 = iVar12 + -1;
    }
    else {
      do {
        iVar12 = *piVar11;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar4) {
          *piVar11 = iVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar12 < 1) {
      operator_delete((undefined *)(local_68[0] + -0x18));
    }
  }
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


