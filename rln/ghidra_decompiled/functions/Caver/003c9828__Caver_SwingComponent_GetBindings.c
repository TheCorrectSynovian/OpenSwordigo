/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c9828
 * Function: Caver::SwingComponent::GetBindings
 * Signature: undefined __thiscall GetBindings(SwingComponent * this, vector * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::SwingComponent::GetBindings(std::vector<Caver::Binding, std::allocator<Caver::Binding> >*)
    */

void __thiscall Caver::SwingComponent::GetBindings(SwingComponent *this,vector *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong uVar8;
  int *piVar9;
  int iVar10;
  uint *puVar11;
  undefined1 auStack_90 [8];
  long local_88 [2];
  undefined4 local_78 [2];
  long local_70;
  undefined8 local_68;
  undefined4 local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  Component::GetBindings((Component *)this,param_1);
  lVar4 = *(long *)(param_1 + 8) - *(long *)param_1;
  if (lVar4 != 0) {
    uVar8 = 0;
    puVar11 = (uint *)(*(long *)param_1 + 0x18);
    do {
      if (puVar11[-6] == 0) {
        *puVar11 = *puVar11 | 4;
      }
      uVar8 = uVar8 + 1;
      puVar11 = puVar11 + 8;
    } while (uVar8 < (ulong)(lVar4 >> 5));
  }
  FUN_00666bb8(local_88,"swingRightWeapon",auStack_90);
  local_78[0] = 2;
  FUN_0066a528(&local_70,local_88);
  uVar6 = _DAT_00683958;
  local_60 = 0;
  local_68 = _DAT_00683958;
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (puVar1 == *(undefined4 **)(param_1 + 0x10)) {
    std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux
              ((vector<Caver::Binding,std::allocator<Caver::Binding>> *)param_1,puVar1,local_78);
  }
  else {
    *puVar1 = local_78[0];
    FUN_0066a528(puVar1 + 2,&local_70);
    puVar1[6] = local_60;
    *(undefined8 *)(puVar1 + 4) = local_68;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x20;
  }
  puVar7 = PTR_DAT_007e5de8;
  if ((undefined *)(local_70 + -0x18) != PTR_DAT_007e5de8) {
    piVar9 = (int *)(local_70 + -8);
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
      operator_delete((undefined *)(local_70 + -0x18));
    }
  }
  if ((undefined *)(local_88[0] + -0x18) != puVar7) {
    piVar9 = (int *)(local_88[0] + -8);
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
      operator_delete((undefined *)(local_88[0] + -0x18));
    }
  }
  FUN_00666bb8(local_88,"swingLeftWeapon",auStack_90);
  local_78[0] = 1;
  FUN_0066a528(&local_70,local_88);
  local_68 = uVar6;
  local_60 = 0;
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (puVar1 == *(undefined4 **)(param_1 + 0x10)) {
    std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux
              ((vector<Caver::Binding,std::allocator<Caver::Binding>> *)param_1,puVar1,local_78);
  }
  else {
    *puVar1 = local_78[0];
    FUN_0066a528(puVar1 + 2,&local_70);
    puVar1[6] = local_60;
    *(undefined8 *)(puVar1 + 4) = local_68;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x20;
  }
  if ((undefined *)(local_70 + -0x18) != puVar7) {
    piVar9 = (int *)(local_70 + -8);
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
      operator_delete((undefined *)(local_70 + -0x18));
    }
  }
  if ((undefined *)(local_88[0] + -0x18) != puVar7) {
    piVar9 = (int *)(local_88[0] + -8);
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
      operator_delete((undefined *)(local_88[0] + -0x18));
    }
  }
  FUN_00666bb8(local_88,"startFrame",auStack_90);
  local_78[0] = 3;
  FUN_0066a528(&local_70,local_88);
  uVar6 = _LAB_00683960;
  local_60 = 0;
  local_68 = _LAB_00683960;
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (puVar1 == *(undefined4 **)(param_1 + 0x10)) {
    std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux
              ((vector<Caver::Binding,std::allocator<Caver::Binding>> *)param_1,puVar1,local_78);
  }
  else {
    *puVar1 = local_78[0];
    FUN_0066a528(puVar1 + 2,&local_70);
    puVar1[6] = local_60;
    *(undefined8 *)(puVar1 + 4) = local_68;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x20;
  }
  if ((undefined *)(local_70 + -0x18) != puVar7) {
    piVar9 = (int *)(local_70 + -8);
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
      operator_delete((undefined *)(local_70 + -0x18));
    }
  }
  if ((undefined *)(local_88[0] + -0x18) != puVar7) {
    piVar9 = (int *)(local_88[0] + -8);
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
      operator_delete((undefined *)(local_88[0] + -0x18));
    }
  }
  FUN_00666bb8(local_88,"endFrame",auStack_90);
  local_78[0] = 4;
  FUN_0066a528(&local_70,local_88);
  local_68 = uVar6;
  local_60 = 0;
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (puVar1 == *(undefined4 **)(param_1 + 0x10)) {
    std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux
              ((vector<Caver::Binding,std::allocator<Caver::Binding>> *)param_1,puVar1,local_78);
  }
  else {
    *puVar1 = local_78[0];
    FUN_0066a528(puVar1 + 2,&local_70);
    puVar1[6] = local_60;
    *(undefined8 *)(puVar1 + 4) = local_68;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x20;
  }
  if ((undefined *)(local_70 + -0x18) != puVar7) {
    piVar9 = (int *)(local_70 + -8);
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
      operator_delete((undefined *)(local_70 + -0x18));
    }
  }
  if ((undefined *)(local_88[0] + -0x18) != puVar7) {
    piVar9 = (int *)(local_88[0] + -8);
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
      operator_delete((undefined *)(local_88[0] + -0x18));
    }
  }
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


