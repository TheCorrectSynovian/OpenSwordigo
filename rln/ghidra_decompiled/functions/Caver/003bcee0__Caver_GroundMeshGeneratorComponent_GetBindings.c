/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003bcee0
 * Function: Caver::GroundMeshGeneratorComponent::GetBindings
 * Signature: undefined __thiscall GetBindings(GroundMeshGeneratorComponent * this, vector * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::GroundMeshGeneratorComponent::GetBindings(std::vector<Caver::Binding,
   std::allocator<Caver::Binding> >*) */

void __thiscall
Caver::GroundMeshGeneratorComponent::GetBindings(GroundMeshGeneratorComponent *this,vector *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  int *piVar8;
  int iVar9;
  undefined1 auStack_a0 [8];
  long local_98 [2];
  undefined4 local_88 [2];
  long local_80;
  undefined8 local_78;
  undefined4 local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  Component::GetBindings((Component *)this,param_1);
  FUN_00666bb8(local_98,"meshType",auStack_a0);
  local_88[0] = 4;
  FUN_0066a528(&local_80,local_98);
  uVar6 = DAT_00683968;
  local_70 = 5;
  local_78 = DAT_00683968;
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (puVar1 == *(undefined4 **)(param_1 + 0x10)) {
    std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux
              ((vector<Caver::Binding,std::allocator<Caver::Binding>> *)param_1,puVar1,local_88);
  }
  else {
    *puVar1 = local_88[0];
    FUN_0066a528(puVar1 + 2,&local_80);
    puVar1[6] = local_70;
    *(undefined8 *)(puVar1 + 4) = local_78;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x20;
  }
  puVar7 = PTR_DAT_007e5de8;
  if ((undefined *)(local_80 + -0x18) != PTR_DAT_007e5de8) {
    piVar8 = (int *)(local_80 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar3) {
          *piVar8 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete((undefined *)(local_80 + -0x18));
    }
  }
  if ((undefined *)(local_98[0] + -0x18) != puVar7) {
    piVar8 = (int *)(local_98[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar3) {
          *piVar8 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete((undefined *)(local_98[0] + -0x18));
    }
  }
  FUN_00666bb8(local_98,"surfaceWidth",auStack_a0);
  local_88[0] = 5;
  FUN_0066a528(&local_80,local_98);
  uVar5 = _LAB_00683960;
  local_70 = 0;
  local_78 = _LAB_00683960;
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (puVar1 == *(undefined4 **)(param_1 + 0x10)) {
    std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux
              ((vector<Caver::Binding,std::allocator<Caver::Binding>> *)param_1,puVar1,local_88);
  }
  else {
    *puVar1 = local_88[0];
    FUN_0066a528(puVar1 + 2,&local_80);
    puVar1[6] = local_70;
    *(undefined8 *)(puVar1 + 4) = local_78;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x20;
  }
  if ((undefined *)(local_80 + -0x18) != puVar7) {
    piVar8 = (int *)(local_80 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar3) {
          *piVar8 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete((undefined *)(local_80 + -0x18));
    }
  }
  if ((undefined *)(local_98[0] + -0x18) != puVar7) {
    piVar8 = (int *)(local_98[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar3) {
          *piVar8 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete((undefined *)(local_98[0] + -0x18));
    }
  }
  FUN_00666bb8(local_98,"randomSeed",auStack_a0);
  local_88[0] = 6;
  FUN_0066a528(&local_80,local_98);
  local_78 = uVar6;
  local_70 = 0;
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (puVar1 == *(undefined4 **)(param_1 + 0x10)) {
    std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux
              ((vector<Caver::Binding,std::allocator<Caver::Binding>> *)param_1,puVar1,local_88);
  }
  else {
    *puVar1 = local_88[0];
    FUN_0066a528(puVar1 + 2,&local_80);
    puVar1[6] = local_70;
    *(undefined8 *)(puVar1 + 4) = local_78;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x20;
  }
  if ((undefined *)(local_80 + -0x18) != puVar7) {
    piVar8 = (int *)(local_80 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar3) {
          *piVar8 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete((undefined *)(local_80 + -0x18));
    }
  }
  if ((undefined *)(local_98[0] + -0x18) != puVar7) {
    piVar8 = (int *)(local_98[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar3) {
          *piVar8 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete((undefined *)(local_98[0] + -0x18));
    }
  }
  FUN_00666bb8(local_98,"horizNoise",auStack_a0);
  local_88[0] = 7;
  FUN_0066a528(&local_80,local_98);
  local_78 = uVar5;
  local_70 = 0;
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (puVar1 == *(undefined4 **)(param_1 + 0x10)) {
    std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux
              ((vector<Caver::Binding,std::allocator<Caver::Binding>> *)param_1,puVar1,local_88);
  }
  else {
    *puVar1 = local_88[0];
    FUN_0066a528(puVar1 + 2,&local_80);
    puVar1[6] = local_70;
    *(undefined8 *)(puVar1 + 4) = local_78;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x20;
  }
  if ((undefined *)(local_80 + -0x18) != puVar7) {
    piVar8 = (int *)(local_80 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar3) {
          *piVar8 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete((undefined *)(local_80 + -0x18));
    }
  }
  if ((undefined *)(local_98[0] + -0x18) != puVar7) {
    piVar8 = (int *)(local_98[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar3) {
          *piVar8 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete((undefined *)(local_98[0] + -0x18));
    }
  }
  if (*(int *)(this + 0xd0) == 1) {
    FUN_00666bb8(local_98,"hatHeight",auStack_a0);
    local_88[0] = 8;
    FUN_0066a528(&local_80,local_98);
    local_78 = uVar5;
    local_70 = 0;
    puVar1 = *(undefined4 **)(param_1 + 8);
    if (puVar1 == *(undefined4 **)(param_1 + 0x10)) {
      std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux
                ((vector<Caver::Binding,std::allocator<Caver::Binding>> *)param_1,puVar1,local_88);
    }
    else {
      *puVar1 = local_88[0];
      FUN_0066a528(puVar1 + 2,&local_80);
      puVar1[6] = local_70;
      *(undefined8 *)(puVar1 + 4) = local_78;
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x20;
    }
    if ((undefined *)(local_80 + -0x18) != puVar7) {
      piVar8 = (int *)(local_80 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar9 = *piVar8;
        *piVar8 = iVar9 + -1;
      }
      else {
        do {
          iVar9 = *piVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar3) {
            *piVar8 = iVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar9 < 1) {
        operator_delete((undefined *)(local_80 + -0x18));
      }
    }
    if ((undefined *)(local_98[0] + -0x18) != puVar7) {
      piVar8 = (int *)(local_98[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar9 = *piVar8;
        *piVar8 = iVar9 + -1;
      }
      else {
        do {
          iVar9 = *piVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar3) {
            *piVar8 = iVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar9 < 1) {
        operator_delete((undefined *)(local_98[0] + -0x18));
      }
    }
    FUN_00666bb8(local_98,"hatWidthOffset1",auStack_a0);
    local_88[0] = 9;
    FUN_0066a528(&local_80,local_98);
    local_78 = uVar5;
    local_70 = 0;
    puVar1 = *(undefined4 **)(param_1 + 8);
    if (puVar1 == *(undefined4 **)(param_1 + 0x10)) {
      std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux
                ((vector<Caver::Binding,std::allocator<Caver::Binding>> *)param_1,puVar1,local_88);
    }
    else {
      *puVar1 = local_88[0];
      FUN_0066a528(puVar1 + 2,&local_80);
      puVar1[6] = local_70;
      *(undefined8 *)(puVar1 + 4) = local_78;
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x20;
    }
    if ((undefined *)(local_80 + -0x18) != puVar7) {
      piVar8 = (int *)(local_80 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar9 = *piVar8;
        *piVar8 = iVar9 + -1;
      }
      else {
        do {
          iVar9 = *piVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar3) {
            *piVar8 = iVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar9 < 1) {
        operator_delete((undefined *)(local_80 + -0x18));
      }
    }
    if ((undefined *)(local_98[0] + -0x18) != puVar7) {
      piVar8 = (int *)(local_98[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar9 = *piVar8;
        *piVar8 = iVar9 + -1;
      }
      else {
        do {
          iVar9 = *piVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar3) {
            *piVar8 = iVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar9 < 1) {
        operator_delete((undefined *)(local_98[0] + -0x18));
      }
    }
    FUN_00666bb8(local_98,"hatWidthOffset2",auStack_a0);
    local_88[0] = 10;
    FUN_0066a528(&local_80,local_98);
    local_78 = uVar5;
    local_70 = 0;
    puVar1 = *(undefined4 **)(param_1 + 8);
    if (puVar1 == *(undefined4 **)(param_1 + 0x10)) {
      std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux
                ((vector<Caver::Binding,std::allocator<Caver::Binding>> *)param_1,puVar1,local_88);
    }
    else {
      *puVar1 = local_88[0];
      FUN_0066a528(puVar1 + 2,&local_80);
      puVar1[6] = local_70;
      *(undefined8 *)(puVar1 + 4) = local_78;
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x20;
    }
    if ((undefined *)(local_80 + -0x18) != puVar7) {
      piVar8 = (int *)(local_80 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar9 = *piVar8;
        *piVar8 = iVar9 + -1;
      }
      else {
        do {
          iVar9 = *piVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar3) {
            *piVar8 = iVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar9 < 1) {
        operator_delete((undefined *)(local_80 + -0x18));
      }
    }
    if ((undefined *)(local_98[0] + -0x18) != puVar7) {
      piVar8 = (int *)(local_98[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar9 = *piVar8;
        *piVar8 = iVar9 + -1;
      }
      else {
        do {
          iVar9 = *piVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar3) {
            *piVar8 = iVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar9 < 1) {
        operator_delete((undefined *)(local_98[0] + -0x18));
      }
    }
  }
  FUN_00666bb8(local_98,"Randomize",auStack_a0);
  local_88[0] = 0xb;
  FUN_0066a528(&local_80,local_98);
  local_78 = 0;
  local_70 = 0;
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (puVar1 == *(undefined4 **)(param_1 + 0x10)) {
    std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux
              ((vector<Caver::Binding,std::allocator<Caver::Binding>> *)param_1,puVar1,local_88);
  }
  else {
    *puVar1 = local_88[0];
    FUN_0066a528(puVar1 + 2,&local_80);
    puVar1[6] = local_70;
    *(undefined8 *)(puVar1 + 4) = local_78;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x20;
  }
  if ((undefined *)(local_80 + -0x18) != puVar7) {
    piVar8 = (int *)(local_80 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar3) {
          *piVar8 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete((undefined *)(local_80 + -0x18));
    }
  }
  if ((undefined *)(local_98[0] + -0x18) != puVar7) {
    piVar8 = (int *)(local_98[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar3) {
          *piVar8 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete((undefined *)(local_98[0] + -0x18));
    }
  }
  FUN_00666bb8(local_98,"Apply changes",auStack_a0);
  local_88[0] = 0xc;
  FUN_0066a528(&local_80,local_98);
  local_78 = 0;
  local_70 = 0;
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (puVar1 == *(undefined4 **)(param_1 + 0x10)) {
    std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux
              ((vector<Caver::Binding,std::allocator<Caver::Binding>> *)param_1,puVar1,local_88);
  }
  else {
    *puVar1 = local_88[0];
    FUN_0066a528(puVar1 + 2,&local_80);
    puVar1[6] = local_70;
    *(undefined8 *)(puVar1 + 4) = local_78;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x20;
  }
  if ((undefined *)(local_80 + -0x18) != puVar7) {
    piVar8 = (int *)(local_80 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar3) {
          *piVar8 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete((undefined *)(local_80 + -0x18));
    }
  }
  if ((undefined *)(local_98[0] + -0x18) != puVar7) {
    piVar8 = (int *)(local_98[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar3) {
          *piVar8 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete((undefined *)(local_98[0] + -0x18));
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


