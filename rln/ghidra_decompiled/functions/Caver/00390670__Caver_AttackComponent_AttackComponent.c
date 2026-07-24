/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00390670
 * Function: Caver::AttackComponent::AttackComponent
 * Signature: undefined __thiscall AttackComponent(AttackComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::AttackComponent::AttackComponent() */

void __thiscall Caver::AttackComponent::AttackComponent(AttackComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  AttackComponent *pAVar14;
  int *piVar15;
  int iVar16;
  undefined1 auStack_80 [8];
  long local_78 [2];
  long local_68;
  
  puVar13 = PTR_vtable_007e5f58;
  puVar12 = PTR_DAT_007e5de8;
  puVar11 = PTR_vtable_007e5548;
  puVar10 = PTR_vtable_007e5238;
  puVar9 = PTR_vtable_007e50d8;
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  puVar1 = PTR_vtable_007e50d8 + 0x128;
  puVar2 = PTR_vtable_007e50d8 + 0x168;
  puVar3 = PTR_DAT_007e5de8 + 0x18;
  *(undefined4 *)(this + 8) = 0;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  this[0x30] = (AttackComponent)0x0;
  *(undefined **)(this + 0x38) = puVar3;
  pAVar14 = this + 0x48;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)pAVar14 = 0;
  puVar1 = PTR_vtable_007e5a50;
  *(AttackComponent **)(this + 0x58) = pAVar14;
  *(AttackComponent **)(this + 0x60) = pAVar14;
  *(undefined **)this = puVar9 + 0x10;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined **)(this + 0x70) = puVar11 + 0x10;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined **)(this + 0x88) = puVar13 + 0x10;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined **)(this + 0xa0) = puVar10 + 0x10;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined **)(this + 0xb8) = puVar1 + 0x10;
  uVar7 = _DAT_00683948;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined **)(this + 0xd0) = puVar3;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  uVar8 = DAT_00688e80;
  *(undefined4 *)(this + 0x118) = 0x3f800000;
  *(undefined2 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x104) = uVar7;
  *(undefined8 *)(this + 0x110) = 0;
  this[0x126] = (AttackComponent)0x0;
  *(undefined2 *)(this + 0x124) = 0;
  *(undefined8 *)(this + 0x11c) = 0;
  *(undefined8 *)(this + 0x128) = uVar8;
  *(undefined4 *)(this + 0x130) = 0xbf800000;
  FUN_00666bb8(local_78,"animation",auStack_80);
  Component::BindOutlet
            ((Component *)this,0,(string *)local_78,(ComponentOutletBase *)(this + 0x70),false);
  if ((undefined *)(local_78[0] + -0x18) != puVar12) {
    piVar15 = (int *)(local_78[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar16 = *piVar15;
      *piVar15 = iVar16 + -1;
    }
    else {
      do {
        iVar16 = *piVar15;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar5) {
          *piVar15 = iVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar16 < 1) {
      operator_delete((undefined *)(local_78[0] + -0x18));
    }
  }
  FUN_00666bb8(local_78,"collisionShape",auStack_80);
  Component::BindOutlet
            ((Component *)this,1,(string *)local_78,(ComponentOutletBase *)(this + 0x88),false);
  if ((undefined *)(local_78[0] + -0x18) != puVar12) {
    piVar15 = (int *)(local_78[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar16 = *piVar15;
      *piVar15 = iVar16 + -1;
    }
    else {
      do {
        iVar16 = *piVar15;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar5) {
          *piVar15 = iVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar16 < 1) {
      operator_delete((undefined *)(local_78[0] + -0x18));
    }
  }
  FUN_00666bb8(local_78,"attackArea",auStack_80);
  Component::BindOutlet
            ((Component *)this,2,(string *)local_78,(ComponentOutletBase *)(this + 0xa0),false);
  if ((undefined *)(local_78[0] + -0x18) != puVar12) {
    piVar15 = (int *)(local_78[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar16 = *piVar15;
      *piVar15 = iVar16 + -1;
    }
    else {
      do {
        iVar16 = *piVar15;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar5) {
          *piVar15 = iVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar16 < 1) {
      operator_delete((undefined *)(local_78[0] + -0x18));
    }
  }
  FUN_00666bb8(local_78,"soundEffect",auStack_80);
  Component::BindOutlet
            ((Component *)this,3,(string *)local_78,(ComponentOutletBase *)(this + 0xb8),false);
  if ((undefined *)(local_78[0] + -0x18) != puVar12) {
    piVar15 = (int *)(local_78[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar16 = *piVar15;
      *piVar15 = iVar16 + -1;
    }
    else {
      do {
        iVar16 = *piVar15;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar5) {
          *piVar15 = iVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar16 < 1) {
      operator_delete((undefined *)(local_78[0] + -0x18));
    }
  }
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


