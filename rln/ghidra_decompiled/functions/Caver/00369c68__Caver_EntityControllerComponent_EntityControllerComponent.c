/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00369c68
 * Function: Caver::EntityControllerComponent::EntityControllerComponent
 * Signature: undefined __thiscall EntityControllerComponent(EntityControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::EntityControllerComponent::EntityControllerComponent() */

void __thiscall
Caver::EntityControllerComponent::EntityControllerComponent(EntityControllerComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  EntityControllerComponent *pEVar12;
  int *piVar13;
  int iVar14;
  undefined1 auStack_80 [8];
  long local_78 [2];
  long local_68;
  
  puVar11 = PTR_vtable_007e67b0;
  puVar10 = PTR_vtable_007e6270;
  puVar9 = PTR_DAT_007e5de8;
  puVar8 = PTR_vtable_007e5548;
  puVar7 = PTR_vtable_007e51c0;
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  puVar1 = PTR_vtable_007e6270 + 0x128;
  puVar2 = PTR_vtable_007e6270 + 0x168;
  *(undefined **)(this + 0x38) = PTR_DAT_007e5de8 + 0x18;
  *(undefined4 *)(this + 8) = 0;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  this[0x30] = (EntityControllerComponent)0x0;
  pEVar12 = this + 0x48;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)pEVar12 = 0;
  puVar1 = PTR_vtable_007e5238;
  *(undefined **)this = puVar10 + 0x10;
  uVar6 = DAT_00687fe0;
  *(EntityControllerComponent **)(this + 0x58) = pEVar12;
  *(EntityControllerComponent **)(this + 0x60) = pEVar12;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined **)(this + 0x70) = puVar11 + 0x10;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined **)(this + 0x88) = puVar7 + 0x10;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined **)(this + 0xa0) = puVar8 + 0x10;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined **)(this + 0xb8) = puVar1 + 0x10;
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xe0) = uVar6;
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  this[0x120] = (EntityControllerComponent)0x0;
  *(undefined4 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined4 *)(this + 0x124) = 0x447a0000;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  FUN_00666bb8(local_78,"entity",auStack_80);
  Component::BindOutlet
            ((Component *)this,0,(string *)local_78,(ComponentOutletBase *)(this + 0x70),true);
  if ((undefined *)(local_78[0] + -0x18) != puVar9) {
    piVar13 = (int *)(local_78[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar14 = *piVar13;
      *piVar13 = iVar14 + -1;
    }
    else {
      do {
        iVar14 = *piVar13;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar4) {
          *piVar13 = iVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar14 < 1) {
      operator_delete((undefined *)(local_78[0] + -0x18));
    }
  }
  FUN_00666bb8(local_78,&DAT_0068801c,auStack_80);
  Component::BindOutlet
            ((Component *)this,1,(string *)local_78,(ComponentOutletBase *)(this + 0x88),true);
  if ((undefined *)(local_78[0] + -0x18) != puVar9) {
    piVar13 = (int *)(local_78[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar14 = *piVar13;
      *piVar13 = iVar14 + -1;
    }
    else {
      do {
        iVar14 = *piVar13;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar4) {
          *piVar13 = iVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar14 < 1) {
      operator_delete((undefined *)(local_78[0] + -0x18));
    }
  }
  FUN_00666bb8(local_78,"defaultMoveAnimation",auStack_80);
  Component::BindOutlet
            ((Component *)this,2,(string *)local_78,(ComponentOutletBase *)(this + 0xa0),true);
  if ((undefined *)(local_78[0] + -0x18) != puVar9) {
    piVar13 = (int *)(local_78[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar14 = *piVar13;
      *piVar13 = iVar14 + -1;
    }
    else {
      do {
        iVar14 = *piVar13;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar4) {
          *piVar13 = iVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar14 < 1) {
      operator_delete((undefined *)(local_78[0] + -0x18));
    }
  }
  FUN_00666bb8(local_78,"roamArea",auStack_80);
  Component::BindOutlet
            ((Component *)this,7,(string *)local_78,(ComponentOutletBase *)(this + 0xb8),true);
  if ((undefined *)(local_78[0] + -0x18) != puVar9) {
    piVar13 = (int *)(local_78[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar14 = *piVar13;
      *piVar13 = iVar14 + -1;
    }
    else {
      do {
        iVar14 = *piVar13;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar4) {
          *piVar13 = iVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar14 < 1) {
      operator_delete((undefined *)(local_78[0] + -0x18));
    }
  }
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


