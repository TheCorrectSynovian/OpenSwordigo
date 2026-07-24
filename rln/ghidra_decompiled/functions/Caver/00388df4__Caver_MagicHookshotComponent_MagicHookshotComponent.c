/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00388df4
 * Function: Caver::MagicHookshotComponent::MagicHookshotComponent
 * Signature: undefined __thiscall MagicHookshotComponent(MagicHookshotComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MagicHookshotComponent::MagicHookshotComponent() */

void __thiscall Caver::MagicHookshotComponent::MagicHookshotComponent(MagicHookshotComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  int *piVar9;
  int iVar10;
  undefined1 auStack_70 [8];
  long local_68 [2];
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  SpellComponent::SpellComponent((SpellComponent *)this);
  puVar8 = PTR_vtable_007e74d8;
  puVar3 = PTR_vtable_007e5a50;
  puVar1 = PTR_vtable_007e5c28 + 0x148;
  puVar2 = PTR_vtable_007e5c28 + 0x188;
  *(undefined **)this = PTR_vtable_007e5c28 + 0x10;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  uVar7 = DAT_00688c78;
  *(undefined **)(this + 0xc0) = puVar8 + 0x10;
  puVar3 = puVar3 + 0x10;
  *(undefined4 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined **)(this + 0xd8) = puVar3;
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined **)(this + 0xf0) = puVar3;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined **)(this + 0x108) = puVar3;
  *(undefined4 *)(this + 0x130) = 0x3ecccccd;
  *(undefined4 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined4 *)(this + 0x15c) = 0;
  *(undefined8 *)(this + 0x128) = uVar7;
  *(undefined8 *)(this + 0x134) = 0;
  *(undefined8 *)(this + 0x13c) = 0;
  *(undefined2 *)(this + 0x144) = 0;
  this[0x158] = (MagicHookshotComponent)0x0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined4 *)(this + 0x168) = 0x7f7fffff;
  FUN_00666bb8(local_68,"particleEmitter",auStack_70);
  Component::BindOutlet
            ((Component *)this,100,(string *)local_68,(ComponentOutletBase *)(this + 0xc0),true);
  puVar1 = PTR_DAT_007e5de8;
  if ((undefined *)(local_68[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar9 = (int *)(local_68[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar9;
      *piVar9 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar9;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar5) {
          *piVar9 = iVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_68[0] + -0x18));
    }
  }
  FUN_00666bb8(local_68,"swooshSound",auStack_70);
  Component::BindOutlet
            ((Component *)this,0x65,(string *)local_68,(ComponentOutletBase *)(this + 0xd8),true);
  if ((undefined *)(local_68[0] + -0x18) != puVar1) {
    piVar9 = (int *)(local_68[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar9;
      *piVar9 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar9;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar5) {
          *piVar9 = iVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_68[0] + -0x18));
    }
  }
  FUN_00666bb8(local_68,"hitSound",auStack_70);
  Component::BindOutlet
            ((Component *)this,0x66,(string *)local_68,(ComponentOutletBase *)(this + 0xf0),true);
  if ((undefined *)(local_68[0] + -0x18) != puVar1) {
    piVar9 = (int *)(local_68[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar9;
      *piVar9 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar9;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar5) {
          *piVar9 = iVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_68[0] + -0x18));
    }
  }
  FUN_00666bb8(local_68,"groundHitSound",auStack_70);
  Component::BindOutlet
            ((Component *)this,0x67,(string *)local_68,(ComponentOutletBase *)(this + 0x108),true);
  if ((undefined *)(local_68[0] + -0x18) != puVar1) {
    piVar9 = (int *)(local_68[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar9;
      *piVar9 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar9;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar5) {
          *piVar9 = iVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_68[0] + -0x18));
    }
  }
  if (*(long *)(lVar6 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


