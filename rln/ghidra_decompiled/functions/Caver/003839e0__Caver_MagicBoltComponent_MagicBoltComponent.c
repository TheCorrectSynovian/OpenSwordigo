/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003839e0
 * Function: Caver::MagicBoltComponent::MagicBoltComponent
 * Signature: undefined __thiscall MagicBoltComponent(MagicBoltComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::MagicBoltComponent::MagicBoltComponent() */

void __thiscall Caver::MagicBoltComponent::MagicBoltComponent(MagicBoltComponent *this)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int *piVar11;
  int iVar12;
  undefined1 auStack_70 [8];
  long local_68 [2];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  SpellComponent::SpellComponent((SpellComponent *)this);
  puVar10 = PTR_vtable_007e74d8;
  puVar9 = PTR_vtable_007e61a8;
  puVar8 = PTR_vtable_007e5a50;
  uVar7 = _UNK_00688b38;
  uVar6 = _DAT_00688b30;
  puVar1 = PTR_vtable_007e61a8 + 0x148;
  *(undefined **)(this + 0x18) = PTR_vtable_007e61a8 + 0x188;
  *(undefined **)(this + 0x10) = puVar1;
  uVar5 = DAT_006840e0;
  *(undefined **)this = puVar9 + 0x10;
  *(undefined **)(this + 0xc0) = puVar10 + 0x10;
  *(undefined4 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined **)(this + 0xd8) = puVar8 + 0x10;
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined **)(this + 0xf0) = puVar8 + 0x10;
  *(undefined4 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x110) = uVar7;
  *(undefined8 *)(this + 0x108) = uVar6;
  *(undefined8 *)(this + 0x118) = uVar5;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined2 *)(this + 0x130) = 0;
  FUN_00666bb8(local_68,"particleEmitter",auStack_70);
  Component::BindOutlet
            ((Component *)this,100,(string *)local_68,(ComponentOutletBase *)(this + 0xc0),true);
  puVar1 = PTR_DAT_007e5de8;
  if ((undefined *)(local_68[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar11 = (int *)(local_68[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar12 = *piVar11;
      *piVar11 = iVar12 + -1;
    }
    else {
      do {
        iVar12 = *piVar11;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar3) {
          *piVar11 = iVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar12 < 1) {
      operator_delete((undefined *)(local_68[0] + -0x18));
    }
  }
  FUN_00666bb8(local_68,"swooshSound",auStack_70);
  Component::BindOutlet
            ((Component *)this,0x65,(string *)local_68,(ComponentOutletBase *)(this + 0xd8),true);
  if ((undefined *)(local_68[0] + -0x18) != puVar1) {
    piVar11 = (int *)(local_68[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar12 = *piVar11;
      *piVar11 = iVar12 + -1;
    }
    else {
      do {
        iVar12 = *piVar11;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar3) {
          *piVar11 = iVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar12 < 1) {
      operator_delete((undefined *)(local_68[0] + -0x18));
    }
  }
  FUN_00666bb8(local_68,"hitSound",auStack_70);
  Component::BindOutlet
            ((Component *)this,0x66,(string *)local_68,(ComponentOutletBase *)(this + 0xf0),true);
  if ((undefined *)(local_68[0] + -0x18) != puVar1) {
    piVar11 = (int *)(local_68[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar12 = *piVar11;
      *piVar11 = iVar12 + -1;
    }
    else {
      do {
        iVar12 = *piVar11;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar3) {
          *piVar11 = iVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar12 < 1) {
      operator_delete((undefined *)(local_68[0] + -0x18));
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


