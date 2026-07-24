/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0039d66c
 * Function: Caver::SkellyMonsterControllerComponent::SkellyMonsterControllerComponent
 * Signature: undefined __thiscall SkellyMonsterControllerComponent(SkellyMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SkellyMonsterControllerComponent::SkellyMonsterControllerComponent() */

void __thiscall
Caver::SkellyMonsterControllerComponent::SkellyMonsterControllerComponent
          (SkellyMonsterControllerComponent *this)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int *piVar9;
  int iVar10;
  undefined1 auStack_70 [8];
  long local_68 [2];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  MonsterControllerComponent::MonsterControllerComponent((MonsterControllerComponent *)this);
  puVar8 = PTR_vtable_007e5818;
  puVar7 = PTR_vtable_007e5778;
  puVar6 = PTR_vtable_007e5238;
  puVar1 = PTR_vtable_007e5818 + 0x128;
  *(undefined **)(this + 0x18) = PTR_vtable_007e5818 + 0x168;
  *(undefined **)(this + 0x10) = puVar1;
  uVar5 = DAT_00689370;
  *(undefined **)this = puVar8 + 0x10;
  *(undefined **)(this + 0xd0) = puVar7 + 0x10;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined **)(this + 0xe8) = puVar6 + 0x10;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  this[0x110] = (SkellyMonsterControllerComponent)0x1;
  *(undefined8 *)(this + 0x114) = uVar5;
  *(undefined4 *)(this + 0x11c) = 0;
  this[0x124] = (SkellyMonsterControllerComponent)0x0;
  FUN_00666bb8(local_68,"charController",auStack_70);
  Component::BindOutlet
            ((Component *)this,100,(string *)local_68,(ComponentOutletBase *)(this + 0xd0),true);
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
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar3) {
          *piVar9 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_68[0] + -0x18));
    }
  }
  FUN_00666bb8(local_68,"attackArea",auStack_70);
  Component::BindOutlet
            ((Component *)this,0x65,(string *)local_68,(ComponentOutletBase *)(this + 0xe8),true);
  if ((undefined *)(local_68[0] + -0x18) != puVar1) {
    piVar9 = (int *)(local_68[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar9;
      *piVar9 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar3) {
          *piVar9 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_68[0] + -0x18));
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


