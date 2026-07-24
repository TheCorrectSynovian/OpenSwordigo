/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00377e9c
 * Function: Caver::ItemDropComponent::PerformBindedAction
 * Signature: undefined __thiscall PerformBindedAction(ItemDropComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ItemDropComponent::PerformBindedAction(int) */

void __thiscall Caver::ItemDropComponent::PerformBindedAction(ItemDropComponent *this,int param_1)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  int *piVar6;
  int iVar7;
  FastVector<Caver::ItemDropComponent::ItemDropEntry> *this_00;
  long lVar8;
  undefined *local_80;
  undefined *puStack_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  long local_58;
  
  puVar5 = PTR_DAT_007e5de8;
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  if (param_1 == 3) {
    if (0 < *(int *)(this + 0x88)) {
      *(int *)(this + 0x88) = *(int *)(this + 0x88) + -1;
    }
  }
  else if (param_1 == 2) {
    local_80 = PTR_DAT_007e5de8 + 0x18;
    this_00 = (FastVector<Caver::ItemDropComponent::ItemDropEntry> *)(this + 0x88);
    iVar7 = *(int *)this_00;
    uStack_6c = 1;
    uStack_68 = 1;
    local_70 = 0x3f800000;
    if (iVar7 != 0) {
      local_70 = 0;
    }
    puStack_78 = local_80;
    if (*(int *)(this + 0x8c) <= iVar7) {
      iVar7 = *(int *)(this + 0x8c) * 2;
      if (iVar7 < 0xb) {
        iVar7 = 10;
      }
      FastVector<Caver::ItemDropComponent::ItemDropEntry>::Resize(this_00,iVar7);
      iVar7 = *(int *)this_00;
    }
    lVar8 = *(long *)(this + 0x90);
    lVar1 = lVar8 + (long)iVar7 * 0x20;
    FUN_0066a6a8(lVar1,&local_80);
    FUN_0066a6a8(lVar1 + 8,(ulong)&local_80 | 8);
    lVar8 = lVar8 + (long)iVar7 * 0x20;
    *(undefined4 *)(lVar8 + 0x18) = uStack_68;
    *(ulong *)(lVar8 + 0x10) = CONCAT44(uStack_6c,local_70);
    *(int *)this_00 = *(int *)this_00 + 1;
    if (puStack_78 + -0x18 != puVar5) {
      piVar6 = (int *)(puStack_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar7 = *piVar6;
        *piVar6 = iVar7 + -1;
      }
      else {
        do {
          iVar7 = *piVar6;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar3) {
            *piVar6 = iVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar7 < 1) {
        operator_delete(puStack_78 + -0x18);
      }
    }
    if (local_80 + -0x18 != puVar5) {
      piVar6 = (int *)(local_80 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar7 = *piVar6;
        *piVar6 = iVar7 + -1;
      }
      else {
        do {
          iVar7 = *piVar6;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar3) {
            *piVar6 = iVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar7 < 1) {
        operator_delete(local_80 + -0x18);
      }
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


