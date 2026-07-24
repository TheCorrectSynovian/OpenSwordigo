/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003763d8
 * Function: Caver::ItemDropComponent::GetBindings
 * Signature: undefined __thiscall GetBindings(ItemDropComponent * this, vector * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Caver::ItemDropComponent::GetBindings(std::vector<Caver::Binding, std::allocator<Caver::Binding>
   >*) */

void __thiscall Caver::ItemDropComponent::GetBindings(ItemDropComponent *this,vector *param_1)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined *local_c8;
  long local_c0;
  long local_b8 [2];
  int local_a8 [2];
  long local_a0;
  undefined8 local_98;
  int local_90;
  long local_88;
  
  lVar4 = tpidr_el0;
  local_88 = *(long *)(lVar4 + 0x28);
  Component::GetBindings((Component *)this,param_1);
  FUN_00666bb8(local_b8,"canDropMultipleItems",&local_c8);
  local_a8[0] = 0;
  FUN_0066a528(&local_a0,local_b8);
  uVar5 = _DAT_00683958;
  local_90 = 0;
  local_98 = _DAT_00683958;
  piVar8 = *(int **)(param_1 + 8);
  if (piVar8 == *(int **)(param_1 + 0x10)) {
    std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux
              ((vector<Caver::Binding,std::allocator<Caver::Binding>> *)param_1,piVar8,local_a8);
  }
  else {
    *piVar8 = local_a8[0];
    FUN_0066a528(piVar8 + 2,&local_a0);
    piVar8[6] = local_90;
    *(undefined8 *)(piVar8 + 4) = local_98;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x20;
  }
  puVar12 = (undefined8 *)PTR_DAT_007e5de8;
  if ((undefined *)(local_a0 + -0x18) != PTR_DAT_007e5de8) {
    piVar8 = (int *)(local_a0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar3) {
          *piVar8 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_a0 + -0x18));
    }
  }
  if ((undefined8 *)(local_b8[0] + -0x18) != puVar12) {
    piVar8 = (int *)(local_b8[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar3) {
          *piVar8 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_b8[0] + -0x18));
    }
  }
  FUN_00666bb8(local_b8,"canDropDefaultItems",&local_c8);
  local_a8[0] = 1;
  FUN_0066a528(&local_a0,local_b8);
  local_98 = uVar5;
  local_90 = 0;
  piVar8 = *(int **)(param_1 + 8);
  if (piVar8 == *(int **)(param_1 + 0x10)) {
    std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux
              ((vector<Caver::Binding,std::allocator<Caver::Binding>> *)param_1,piVar8,local_a8);
  }
  else {
    *piVar8 = local_a8[0];
    FUN_0066a528(piVar8 + 2,&local_a0);
    piVar8[6] = local_90;
    *(undefined8 *)(piVar8 + 4) = local_98;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x20;
  }
  if ((undefined8 *)(local_a0 + -0x18) != puVar12) {
    piVar8 = (int *)(local_a0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar3) {
          *piVar8 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_a0 + -0x18));
    }
  }
  if ((undefined8 *)(local_b8[0] + -0x18) != puVar12) {
    piVar8 = (int *)(local_b8[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar3) {
          *piVar8 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_b8[0] + -0x18));
    }
  }
  FUN_00666bb8(local_b8,"Add Item",&local_c8);
  local_a8[0] = 2;
  FUN_0066a528(&local_a0,local_b8);
  local_98 = 0;
  local_90 = 4;
  piVar8 = *(int **)(param_1 + 8);
  if (piVar8 == *(int **)(param_1 + 0x10)) {
    std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux
              ((vector<Caver::Binding,std::allocator<Caver::Binding>> *)param_1,piVar8,local_a8);
  }
  else {
    *piVar8 = local_a8[0];
    FUN_0066a528(piVar8 + 2,&local_a0);
    piVar8[6] = local_90;
    *(undefined8 *)(piVar8 + 4) = local_98;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x20;
  }
  if ((undefined8 *)(local_a0 + -0x18) != puVar12) {
    piVar8 = (int *)(local_a0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar3) {
          *piVar8 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_a0 + -0x18));
    }
  }
  if ((undefined8 *)(local_b8[0] + -0x18) != puVar12) {
    piVar8 = (int *)(local_b8[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar3) {
          *piVar8 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_b8[0] + -0x18));
    }
  }
  FUN_00666bb8(local_b8,&DAT_00688506,&local_c8);
  local_a8[0] = 3;
  FUN_0066a528(&local_a0,local_b8);
  local_98 = 0;
  local_90 = 4;
  piVar8 = *(int **)(param_1 + 8);
  if (piVar8 == *(int **)(param_1 + 0x10)) {
    std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux
              ((vector<Caver::Binding,std::allocator<Caver::Binding>> *)param_1,piVar8,local_a8);
  }
  else {
    *piVar8 = local_a8[0];
    FUN_0066a528(piVar8 + 2,&local_a0);
    piVar8[6] = local_90;
    *(undefined8 *)(piVar8 + 4) = local_98;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x20;
  }
  if ((undefined8 *)(local_a0 + -0x18) != puVar12) {
    piVar8 = (int *)(local_a0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar3) {
          *piVar8 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_a0 + -0x18));
    }
  }
  if ((undefined8 *)(local_b8[0] + -0x18) != puVar12) {
    piVar8 = (int *)(local_b8[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar8;
      *piVar8 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar3) {
          *piVar8 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_b8[0] + -0x18));
    }
  }
  uVar6 = DAT_00683968;
  uVar5 = _LAB_00683960;
  if (0 < *(int *)(this + 0x88)) {
    uVar11 = 0;
    puVar1 = (undefined *)((long)puVar12 + 0x18);
    do {
      local_c8 = puVar1;
      pcVar7 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned_int,char>
                         (uVar11,(char *)((long)&local_98 + 4));
      FUN_00669e1c(&local_c8,0,*puVar12,pcVar7,((long)&local_98 + 4) - (long)pcVar7);
      FUN_0035a030(&local_c0,&DAT_00688512,&local_c8);
      FUN_0066a528(local_b8,&local_c0);
      FUN_006677d4(local_b8,&DAT_00688514,2);
      if ((undefined8 *)(local_c0 + -0x18) != puVar12) {
        piVar8 = (int *)(local_c0 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar10 = *piVar8;
          *piVar8 = iVar10 + -1;
        }
        else {
          do {
            iVar10 = *piVar8;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
            if (bVar3) {
              *piVar8 = iVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (iVar10 < 1) {
          operator_delete((undefined8 *)(local_c0 + -0x18));
        }
      }
      if ((undefined8 *)(local_c8 + -0x18) != puVar12) {
        piVar8 = (int *)(local_c8 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar10 = *piVar8;
          *piVar8 = iVar10 + -1;
        }
        else {
          do {
            iVar10 = *piVar8;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
            if (bVar3) {
              *piVar8 = iVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (iVar10 < 1) {
          operator_delete(local_c8 + -0x18);
        }
      }
      FUN_0066a528(&local_c0,local_b8);
      FUN_006677d4(&local_c0,&DAT_00688517,0xc);
      iVar10 = uVar11 * 5;
      local_a8[0] = iVar10 + 4;
      FUN_0066a528(&local_a0,&local_c0);
      local_98 = 0x100000001;
      local_90 = 0;
      piVar8 = *(int **)(param_1 + 8);
      if (piVar8 == *(int **)(param_1 + 0x10)) {
        std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux
                  ((vector<Caver::Binding,std::allocator<Caver::Binding>> *)param_1,piVar8,local_a8)
        ;
      }
      else {
        *piVar8 = local_a8[0];
        FUN_0066a528(piVar8 + 2,&local_a0);
        piVar8[6] = local_90;
        *(undefined8 *)(piVar8 + 4) = local_98;
        *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x20;
      }
      puVar13 = PTR_DAT_007e5de8;
      if ((undefined *)(local_a0 + -0x18) != PTR_DAT_007e5de8) {
        piVar8 = (int *)(local_a0 + -8);
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
        puVar13 = PTR_DAT_007e5de8;
        if (iVar9 < 1) {
          operator_delete((undefined *)(local_a0 + -0x18));
        }
      }
      if ((undefined *)(local_c0 + -0x18) != puVar13) {
        piVar8 = (int *)(local_c0 + -8);
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
          operator_delete((undefined *)(local_c0 + -0x18));
        }
      }
      FUN_0066a528(&local_c0,local_b8);
      FUN_006677d4(&local_c0,"itemIdentifier",0xe);
      local_a8[0] = iVar10 + 5;
      FUN_0066a528(&local_a0,&local_c0);
      local_98 = 0x100000001;
      local_90 = 0;
      piVar8 = *(int **)(param_1 + 8);
      if (piVar8 == *(int **)(param_1 + 0x10)) {
        std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux
                  ((vector<Caver::Binding,std::allocator<Caver::Binding>> *)param_1,piVar8,local_a8)
        ;
      }
      else {
        *piVar8 = local_a8[0];
        FUN_0066a528(piVar8 + 2,&local_a0);
        piVar8[6] = local_90;
        *(undefined8 *)(piVar8 + 4) = local_98;
        *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x20;
      }
      puVar13 = PTR_DAT_007e5de8;
      if ((undefined *)(local_a0 + -0x18) != PTR_DAT_007e5de8) {
        piVar8 = (int *)(local_a0 + -8);
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
        puVar13 = PTR_DAT_007e5de8;
        if (iVar9 < 1) {
          operator_delete((undefined *)(local_a0 + -0x18));
        }
      }
      if ((undefined *)(local_c0 + -0x18) != puVar13) {
        piVar8 = (int *)(local_c0 + -8);
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
          operator_delete((undefined *)(local_c0 + -0x18));
        }
      }
      FUN_0066a528(&local_c0,local_b8);
      FUN_006677d4(&local_c0,"dropChance",10);
      local_a8[0] = iVar10 + 6;
      FUN_0066a528(&local_a0,&local_c0);
      local_98 = uVar5;
      local_90 = 0;
      piVar8 = *(int **)(param_1 + 8);
      if (piVar8 == *(int **)(param_1 + 0x10)) {
        std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux
                  ((vector<Caver::Binding,std::allocator<Caver::Binding>> *)param_1,piVar8,local_a8)
        ;
      }
      else {
        *piVar8 = local_a8[0];
        FUN_0066a528(piVar8 + 2,&local_a0);
        piVar8[6] = local_90;
        *(undefined8 *)(piVar8 + 4) = local_98;
        *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x20;
      }
      puVar13 = PTR_DAT_007e5de8;
      if ((undefined *)(local_a0 + -0x18) != PTR_DAT_007e5de8) {
        piVar8 = (int *)(local_a0 + -8);
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
        puVar13 = PTR_DAT_007e5de8;
        if (iVar9 < 1) {
          operator_delete((undefined *)(local_a0 + -0x18));
        }
      }
      if ((undefined *)(local_c0 + -0x18) != puVar13) {
        piVar8 = (int *)(local_c0 + -8);
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
          operator_delete((undefined *)(local_c0 + -0x18));
        }
      }
      FUN_0066a528(&local_c0,local_b8);
      FUN_006677d4(&local_c0,"minCount",8);
      local_a8[0] = iVar10 + 7;
      FUN_0066a528(&local_a0,&local_c0);
      local_98 = uVar6;
      local_90 = 0;
      piVar8 = *(int **)(param_1 + 8);
      if (piVar8 == *(int **)(param_1 + 0x10)) {
        std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux
                  ((vector<Caver::Binding,std::allocator<Caver::Binding>> *)param_1,piVar8,local_a8)
        ;
      }
      else {
        *piVar8 = local_a8[0];
        FUN_0066a528(piVar8 + 2,&local_a0);
        piVar8[6] = local_90;
        *(undefined8 *)(piVar8 + 4) = local_98;
        *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x20;
      }
      puVar13 = PTR_DAT_007e5de8;
      if ((undefined *)(local_a0 + -0x18) != PTR_DAT_007e5de8) {
        piVar8 = (int *)(local_a0 + -8);
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
        puVar13 = PTR_DAT_007e5de8;
        if (iVar9 < 1) {
          operator_delete((undefined *)(local_a0 + -0x18));
        }
      }
      if ((undefined *)(local_c0 + -0x18) != puVar13) {
        piVar8 = (int *)(local_c0 + -8);
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
          operator_delete((undefined *)(local_c0 + -0x18));
        }
      }
      FUN_0066a528(&local_c0,local_b8);
      FUN_006677d4(&local_c0,"maxCount",8);
      local_a8[0] = iVar10 + 8;
      FUN_0066a528(&local_a0,&local_c0);
      local_98 = uVar6;
      local_90 = 0;
      piVar8 = *(int **)(param_1 + 8);
      if (piVar8 == *(int **)(param_1 + 0x10)) {
        std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux
                  ((vector<Caver::Binding,std::allocator<Caver::Binding>> *)param_1,piVar8,local_a8)
        ;
      }
      else {
        *piVar8 = local_a8[0];
        FUN_0066a528(piVar8 + 2,&local_a0);
        piVar8[6] = local_90;
        *(undefined8 *)(piVar8 + 4) = local_98;
        *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x20;
      }
      puVar12 = (undefined8 *)PTR_DAT_007e5de8;
      if ((undefined *)(local_a0 + -0x18) != PTR_DAT_007e5de8) {
        piVar8 = (int *)(local_a0 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar10 = *piVar8;
          *piVar8 = iVar10 + -1;
        }
        else {
          do {
            iVar10 = *piVar8;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
            if (bVar3) {
              *piVar8 = iVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        puVar12 = (undefined8 *)PTR_DAT_007e5de8;
        if (iVar10 < 1) {
          operator_delete((undefined *)(local_a0 + -0x18));
        }
      }
      if ((undefined8 *)(local_c0 + -0x18) != puVar12) {
        piVar8 = (int *)(local_c0 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar10 = *piVar8;
          *piVar8 = iVar10 + -1;
        }
        else {
          do {
            iVar10 = *piVar8;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
            if (bVar3) {
              *piVar8 = iVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (iVar10 < 1) {
          operator_delete((undefined8 *)(local_c0 + -0x18));
        }
      }
      if ((undefined8 *)(local_b8[0] + -0x18) != puVar12) {
        piVar8 = (int *)(local_b8[0] + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar10 = *piVar8;
          *piVar8 = iVar10 + -1;
        }
        else {
          do {
            iVar10 = *piVar8;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
            if (bVar3) {
              *piVar8 = iVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (iVar10 < 1) {
          operator_delete((undefined8 *)(local_b8[0] + -0x18));
        }
      }
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < *(int *)(this + 0x88));
  }
  if (*(long *)(lVar4 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


