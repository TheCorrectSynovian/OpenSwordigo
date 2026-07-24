/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00396f64
 * Function: Caver::GenericMonsterControllerComponent::GenericMonsterControllerComponent
 * Signature: undefined __thiscall GenericMonsterControllerComponent(GenericMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GenericMonsterControllerComponent::GenericMonsterControllerComponent() */

void __thiscall
Caver::GenericMonsterControllerComponent::GenericMonsterControllerComponent
          (GenericMonsterControllerComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  int *piVar7;
  int iVar8;
  undefined1 auStack_70 [8];
  long local_68 [2];
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  MonsterControllerComponent::MonsterControllerComponent((MonsterControllerComponent *)this);
  puVar6 = PTR_vtable_007e5548;
  puVar1 = PTR_vtable_007e52e0 + 0x128;
  puVar2 = PTR_vtable_007e52e0 + 0x168;
  *(undefined **)this = PTR_vtable_007e52e0 + 0x10;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  *(undefined **)(this + 0xd0) = puVar6 + 0x10;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x10c) = 0x7f7fffff7f7fffff;
  *(undefined8 *)(this + 0x118) = 0;
  FUN_00666bb8(local_68,"walkAnimation",auStack_70);
  Component::BindOutlet
            ((Component *)this,100,(string *)local_68,(ComponentOutletBase *)(this + 0xd0),true);
  if ((undefined *)(local_68[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar7 = (int *)(local_68[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar4) {
          *piVar7 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_68[0] + -0x18));
    }
  }
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


