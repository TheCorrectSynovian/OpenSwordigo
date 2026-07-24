/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c3464
 * Function: Caver::SwingableWeaponComponent::SwingableWeaponComponent
 * Signature: undefined __thiscall SwingableWeaponComponent(SwingableWeaponComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::SwingableWeaponComponent::SwingableWeaponComponent() */

void __thiscall
Caver::SwingableWeaponComponent::SwingableWeaponComponent(SwingableWeaponComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  int iVar16;
  SwingableWeaponComponent *pSVar17;
  int *piVar18;
  undefined1 auStack_80 [8];
  long local_78 [2];
  long local_68;
  
  puVar15 = PTR_vtable_007e74d8;
  puVar14 = PTR_vtable_007e6c20;
  puVar13 = PTR_vtable_007e6958;
  puVar12 = PTR_vtable_007e5f58;
  puVar11 = PTR_DAT_007e5de8;
  puVar10 = PTR_vtable_007e50d0;
  puVar9 = PTR_vtable_007e4b90;
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  puVar1 = PTR_vtable_007e4b90 + 0x128;
  puVar2 = PTR_vtable_007e4b90 + 0x168;
  *(undefined **)(this + 0x38) = PTR_DAT_007e5de8 + 0x18;
  *(undefined4 *)(this + 8) = 0;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  this[0x30] = (SwingableWeaponComponent)0x0;
  pSVar17 = this + 0x48;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)pSVar17 = 0;
  puVar1 = PTR_vtable_007e5a50;
  uVar6 = DAT_0068a030;
  *(SwingableWeaponComponent **)(this + 0x58) = pSVar17;
  *(SwingableWeaponComponent **)(this + 0x60) = pSVar17;
  *(undefined **)this = puVar9 + 0x10;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined **)(this + 0x78) = puVar10 + 0x10;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined **)(this + 0x90) = puVar12 + 0x10;
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined **)(this + 200) = puVar13 + 0x10;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined **)(this + 0xe0) = puVar13 + 0x10;
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined **)(this + 0xf8) = puVar14 + 0x10;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  uVar8 = _UNK_0068a048;
  uVar7 = _DAT_0068a040;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined **)(this + 0x110) = puVar15 + 0x10;
  *(undefined4 *)(this + 0x100) = 0;
  *(undefined4 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined **)(this + 0x128) = puVar1 + 0x10;
  *(undefined4 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined **)(this + 0x140) = puVar1 + 0x10;
  *(undefined4 *)(this + 0x148) = 0;
  *(undefined2 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x19c) = uVar6;
  *(undefined4 *)(this + 0x1a4) = 0;
  *(undefined8 *)(this + 0x1b0) = uVar8;
  *(undefined8 *)(this + 0x1a8) = uVar7;
  *(undefined4 *)(this + 0x1bc) = 0x41200000;
  *(undefined4 *)(this + 0x1c0) = 0;
  this[0x1c4] = (SwingableWeaponComponent)0x0;
  FUN_00666bb8(local_78,"model",auStack_80);
  Component::BindOutlet
            ((Component *)this,0,(string *)local_78,(ComponentOutletBase *)(this + 0x78),true);
  if ((undefined *)(local_78[0] + -0x18) != puVar11) {
    piVar18 = (int *)(local_78[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar16 = *piVar18;
      *piVar18 = iVar16 + -1;
    }
    else {
      do {
        iVar16 = *piVar18;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar18,0x10);
        if (bVar4) {
          *piVar18 = iVar16 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar16 < 1) {
      operator_delete((undefined *)(local_78[0] + -0x18));
    }
  }
  FUN_00666bb8(local_78,"collisionShape",auStack_80);
  Component::BindOutlet
            ((Component *)this,1,(string *)local_78,(ComponentOutletBase *)(this + 0x90),true);
  if ((undefined *)(local_78[0] + -0x18) != puVar11) {
    piVar18 = (int *)(local_78[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar16 = *piVar18;
      *piVar18 = iVar16 + -1;
    }
    else {
      do {
        iVar16 = *piVar18;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar18,0x10);
        if (bVar4) {
          *piVar18 = iVar16 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar16 < 1) {
      operator_delete((undefined *)(local_78[0] + -0x18));
    }
  }
  FUN_00666bb8(local_78,&LAB_0068a100,auStack_80);
  Component::BindOutlet
            ((Component *)this,7,(string *)local_78,(ComponentOutletBase *)(this + 200),true);
  if ((undefined *)(local_78[0] + -0x18) != puVar11) {
    piVar18 = (int *)(local_78[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar16 = *piVar18;
      *piVar18 = iVar16 + -1;
    }
    else {
      do {
        iVar16 = *piVar18;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar18,0x10);
        if (bVar4) {
          *piVar18 = iVar16 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar16 < 1) {
      operator_delete((undefined *)(local_78[0] + -0x18));
    }
  }
  FUN_00666bb8(local_78,"glowTrail",auStack_80);
  Component::BindOutlet
            ((Component *)this,8,(string *)local_78,(ComponentOutletBase *)(this + 0xe0),true);
  if ((undefined *)(local_78[0] + -0x18) != puVar11) {
    piVar18 = (int *)(local_78[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar16 = *piVar18;
      *piVar18 = iVar16 + -1;
    }
    else {
      do {
        iVar16 = *piVar18;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar18,0x10);
        if (bVar4) {
          *piVar18 = iVar16 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar16 < 1) {
      operator_delete((undefined *)(local_78[0] + -0x18));
    }
  }
  FUN_00666bb8(local_78,0x68a10d,auStack_80);
  Component::BindOutlet
            ((Component *)this,9,(string *)local_78,(ComponentOutletBase *)(this + 0xf8),true);
  if ((undefined *)(local_78[0] + -0x18) != puVar11) {
    piVar18 = (int *)(local_78[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar16 = *piVar18;
      *piVar18 = iVar16 + -1;
    }
    else {
      do {
        iVar16 = *piVar18;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar18,0x10);
        if (bVar4) {
          *piVar18 = iVar16 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar16 < 1) {
      operator_delete((undefined *)(local_78[0] + -0x18));
    }
  }
  FUN_00666bb8(local_78,"impactParticleEmitter",auStack_80);
  Component::BindOutlet
            ((Component *)this,10,(string *)local_78,(ComponentOutletBase *)(this + 0x110),true);
  if ((undefined *)(local_78[0] + -0x18) != puVar11) {
    piVar18 = (int *)(local_78[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar16 = *piVar18;
      *piVar18 = iVar16 + -1;
    }
    else {
      do {
        iVar16 = *piVar18;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar18,0x10);
        if (bVar4) {
          *piVar18 = iVar16 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar16 < 1) {
      operator_delete((undefined *)(local_78[0] + -0x18));
    }
  }
  FUN_00666bb8(local_78,"swingSound",auStack_80);
  Component::BindOutlet
            ((Component *)this,0xb,(string *)local_78,(ComponentOutletBase *)(this + 0x128),true);
  if ((undefined *)(local_78[0] + -0x18) != puVar11) {
    piVar18 = (int *)(local_78[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar16 = *piVar18;
      *piVar18 = iVar16 + -1;
    }
    else {
      do {
        iVar16 = *piVar18;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar18,0x10);
        if (bVar4) {
          *piVar18 = iVar16 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar16 < 1) {
      operator_delete((undefined *)(local_78[0] + -0x18));
    }
  }
  FUN_00666bb8(local_78,"damageImpactSound",auStack_80);
  Component::BindOutlet
            ((Component *)this,0xc,(string *)local_78,(ComponentOutletBase *)(this + 0x140),true);
  if ((undefined *)(local_78[0] + -0x18) != puVar11) {
    piVar18 = (int *)(local_78[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar16 = *piVar18;
      *piVar18 = iVar16 + -1;
    }
    else {
      do {
        iVar16 = *piVar18;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar18,0x10);
        if (bVar4) {
          *piVar18 = iVar16 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar16 < 1) {
      operator_delete((undefined *)(local_78[0] + -0x18));
    }
  }
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


