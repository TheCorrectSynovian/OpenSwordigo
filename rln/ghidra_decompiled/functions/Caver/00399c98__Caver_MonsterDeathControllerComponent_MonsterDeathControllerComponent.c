/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00399c98
 * Function: Caver::MonsterDeathControllerComponent::MonsterDeathControllerComponent
 * Signature: undefined __thiscall MonsterDeathControllerComponent(MonsterDeathControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::MonsterDeathControllerComponent::MonsterDeathControllerComponent() */

void __thiscall
Caver::MonsterDeathControllerComponent::MonsterDeathControllerComponent
          (MonsterDeathControllerComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  int *piVar10;
  int iVar11;
  MonsterDeathControllerComponent *pMVar12;
  undefined1 auStack_60 [8];
  long local_58 [2];
  long local_48;
  
  puVar9 = PTR_vtable_007e7c28;
  puVar8 = PTR_DAT_007e5de8;
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  puVar1 = PTR_vtable_007e7c28 + 0x128;
  puVar2 = PTR_vtable_007e7c28 + 0x168;
  *(undefined **)(this + 0x38) = PTR_DAT_007e5de8 + 0x18;
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  this[0x30] = (MonsterDeathControllerComponent)0x0;
  pMVar12 = this + 0x48;
  *(undefined8 *)pMVar12 = 0;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  puVar1 = PTR_vtable_007e74d8;
  uVar7 = _UNK_00689268;
  uVar6 = _DAT_00689260;
  *(undefined **)this = puVar9 + 0x10;
  *(MonsterDeathControllerComponent **)(this + 0x58) = pMVar12;
  *(MonsterDeathControllerComponent **)(this + 0x60) = pMVar12;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined **)(this + 0x70) = puVar1 + 0x10;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0xa4) = uVar7;
  *(undefined8 *)(this + 0x9c) = uVar6;
  *(undefined4 *)(this + 0xac) = 0;
  this[0xb4] = (MonsterDeathControllerComponent)0x0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xc0) = 0;
  FUN_00666bb8(local_58,"particleEmitter",auStack_60);
  Component::BindOutlet
            ((Component *)this,0,(string *)local_58,(ComponentOutletBase *)(this + 0x70),true);
  if ((undefined *)(local_58[0] + -0x18) != puVar8) {
    piVar10 = (int *)(local_58[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *piVar10;
      *piVar10 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *piVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar4) {
          *piVar10 = iVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar11 < 1) {
      operator_delete((undefined *)(local_58[0] + -0x18));
    }
  }
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


