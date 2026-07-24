/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a724c
 * Function: Caver::ParticleEmitterComponent::GetBindings
 * Signature: undefined __thiscall GetBindings(ParticleEmitterComponent * this, vector * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::ParticleEmitterComponent::GetBindings(std::vector<Caver::Binding,
   std::allocator<Caver::Binding> >*) */

void __thiscall
Caver::ParticleEmitterComponent::GetBindings(ParticleEmitterComponent *this,vector *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  undefined *puVar10;
  long lVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  vector *pvVar16;
  undefined *local_c0;
  long local_b8;
  long local_b0;
  long local_a8 [2];
  int local_98;
  undefined4 uStack_94;
  long local_90;
  undefined8 local_88;
  uint local_80;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  iVar7 = (int)this;
  Component::BindingForOutlet(iVar7);
  pvVar16 = param_1 + 8;
  piVar13 = *(int **)pvVar16;
  if (piVar13 == *(int **)(param_1 + 0x10)) {
    std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux
              ((vector<Caver::Binding,std::allocator<Caver::Binding>> *)param_1,piVar13,&local_98);
  }
  else {
    *piVar13 = local_98;
    FUN_0066a528(piVar13 + 2,&local_90);
    piVar13[6] = local_80;
    *(undefined8 *)(piVar13 + 4) = local_88;
    *(long *)pvVar16 = *(long *)pvVar16 + 0x20;
  }
  puVar6 = PTR_DAT_007e5de8;
  if ((undefined *)(local_90 + -0x18) != PTR_DAT_007e5de8) {
    piVar13 = (int *)(local_90 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar14 = *piVar13;
      *piVar13 = iVar14 + -1;
    }
    else {
      do {
        iVar14 = *piVar13;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar2) {
          *piVar13 = iVar14 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar14 < 1) {
      operator_delete((undefined *)(local_90 + -0x18));
    }
  }
  Component::BindingForOutlet(iVar7);
  piVar13 = *(int **)(param_1 + 8);
  if (piVar13 == *(int **)(param_1 + 0x10)) {
    std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux
              ((vector<Caver::Binding,std::allocator<Caver::Binding>> *)param_1,piVar13,&local_98);
  }
  else {
    *piVar13 = local_98;
    FUN_0066a528(piVar13 + 2,&local_90);
    piVar13[6] = local_80;
    *(undefined8 *)(piVar13 + 4) = local_88;
    *(long *)pvVar16 = *(long *)pvVar16 + 0x20;
  }
  if ((undefined *)(local_90 + -0x18) != puVar6) {
    piVar13 = (int *)(local_90 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar14 = *piVar13;
      *piVar13 = iVar14 + -1;
    }
    else {
      do {
        iVar14 = *piVar13;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar2) {
          *piVar13 = iVar14 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar14 < 1) {
      operator_delete((undefined *)(local_90 + -0x18));
    }
  }
  FUN_00666bb8(local_a8,"localSystem",&local_b8);
  local_98 = 1;
  FUN_0066a528(&local_90,local_a8);
  uVar4 = _DAT_00683958;
  local_80 = 0;
  local_88 = _DAT_00683958;
  piVar13 = *(int **)(param_1 + 8);
  if (piVar13 == *(int **)(param_1 + 0x10)) {
    std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux
              ((vector<Caver::Binding,std::allocator<Caver::Binding>> *)param_1,piVar13,&local_98);
  }
  else {
    *piVar13 = local_98;
    FUN_0066a528(piVar13 + 2,&local_90);
    piVar13[6] = local_80;
    *(undefined8 *)(piVar13 + 4) = local_88;
    *(long *)pvVar16 = *(long *)pvVar16 + 0x20;
  }
  if ((undefined *)(local_90 + -0x18) != puVar6) {
    piVar13 = (int *)(local_90 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar14 = *piVar13;
      *piVar13 = iVar14 + -1;
    }
    else {
      do {
        iVar14 = *piVar13;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar2) {
          *piVar13 = iVar14 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar14 < 1) {
      operator_delete((undefined *)(local_90 + -0x18));
    }
  }
  if ((undefined *)(local_a8[0] + -0x18) != puVar6) {
    piVar13 = (int *)(local_a8[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar14 = *piVar13;
      *piVar13 = iVar14 + -1;
    }
    else {
      do {
        iVar14 = *piVar13;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar2) {
          *piVar13 = iVar14 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar14 < 1) {
      operator_delete((undefined *)(local_a8[0] + -0x18));
    }
  }
  FUN_00666bb8(local_a8,"maxParticles",&local_b8);
  local_98 = 3;
  FUN_0066a528(&local_90,local_a8);
  uVar5 = DAT_00683968;
  local_80 = 0;
  local_88 = DAT_00683968;
  piVar13 = *(int **)(param_1 + 8);
  if (piVar13 == *(int **)(param_1 + 0x10)) {
    std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux
              ((vector<Caver::Binding,std::allocator<Caver::Binding>> *)param_1,piVar13,&local_98);
  }
  else {
    *piVar13 = local_98;
    FUN_0066a528(piVar13 + 2,&local_90);
    piVar13[6] = local_80;
    *(undefined8 *)(piVar13 + 4) = local_88;
    *(long *)pvVar16 = *(long *)pvVar16 + 0x20;
  }
  if ((undefined *)(local_90 + -0x18) != puVar6) {
    piVar13 = (int *)(local_90 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar14 = *piVar13;
      *piVar13 = iVar14 + -1;
    }
    else {
      do {
        iVar14 = *piVar13;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar2) {
          *piVar13 = iVar14 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar14 < 1) {
      operator_delete((undefined *)(local_90 + -0x18));
    }
  }
  if ((undefined *)(local_a8[0] + -0x18) != puVar6) {
    piVar13 = (int *)(local_a8[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar14 = *piVar13;
      *piVar13 = iVar14 + -1;
    }
    else {
      do {
        iVar14 = *piVar13;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar2) {
          *piVar13 = iVar14 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar14 < 1) {
      operator_delete((undefined *)(local_a8[0] + -0x18));
    }
  }
  FUN_00666bb8(local_a8,"destroyWhenFinished",&local_b8);
  local_98 = 4;
  FUN_0066a528(&local_90,local_a8);
  local_88 = uVar4;
  local_80 = 0;
  piVar13 = *(int **)(param_1 + 8);
  if (piVar13 == *(int **)(param_1 + 0x10)) {
    std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux
              ((vector<Caver::Binding,std::allocator<Caver::Binding>> *)param_1,piVar13,&local_98);
  }
  else {
    *piVar13 = local_98;
    FUN_0066a528(piVar13 + 2,&local_90);
    piVar13[6] = local_80;
    *(undefined8 *)(piVar13 + 4) = local_88;
    *(long *)pvVar16 = *(long *)pvVar16 + 0x20;
  }
  if ((undefined *)(local_90 + -0x18) != puVar6) {
    piVar13 = (int *)(local_90 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar14 = *piVar13;
      *piVar13 = iVar14 + -1;
    }
    else {
      do {
        iVar14 = *piVar13;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar2) {
          *piVar13 = iVar14 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar14 < 1) {
      operator_delete((undefined *)(local_90 + -0x18));
    }
  }
  if ((undefined *)(local_a8[0] + -0x18) != puVar6) {
    piVar13 = (int *)(local_a8[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar14 = *piVar13;
      *piVar13 = iVar14 + -1;
    }
    else {
      do {
        iVar14 = *piVar13;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar2) {
          *piVar13 = iVar14 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar14 < 1) {
      operator_delete((undefined *)(local_a8[0] + -0x18));
    }
  }
  FUN_00666bb8(local_a8,"gravity",&local_b8);
  local_98 = 5;
  FUN_0066a528(&local_90,local_a8);
  uVar4 = DAT_00683ef8;
  local_80 = 0;
  local_88 = DAT_00683ef8;
  piVar13 = *(int **)(param_1 + 8);
  if (piVar13 == *(int **)(param_1 + 0x10)) {
    std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux
              ((vector<Caver::Binding,std::allocator<Caver::Binding>> *)param_1,piVar13,&local_98);
  }
  else {
    *piVar13 = local_98;
    FUN_0066a528(piVar13 + 2,&local_90);
    piVar13[6] = local_80;
    *(undefined8 *)(piVar13 + 4) = local_88;
    *(long *)pvVar16 = *(long *)pvVar16 + 0x20;
  }
  if ((undefined *)(local_90 + -0x18) != puVar6) {
    piVar13 = (int *)(local_90 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar14 = *piVar13;
      *piVar13 = iVar14 + -1;
    }
    else {
      do {
        iVar14 = *piVar13;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar2) {
          *piVar13 = iVar14 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar14 < 1) {
      operator_delete((undefined *)(local_90 + -0x18));
    }
  }
  if ((undefined *)(local_a8[0] + -0x18) != puVar6) {
    piVar13 = (int *)(local_a8[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar14 = *piVar13;
      *piVar13 = iVar14 + -1;
    }
    else {
      do {
        iVar14 = *piVar13;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar2) {
          *piVar13 = iVar14 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar14 < 1) {
      operator_delete((undefined *)(local_a8[0] + -0x18));
    }
  }
  FUN_00666bb8(local_a8,"rotation",&local_b8);
  local_98 = 6;
  FUN_0066a528(&local_90,local_a8);
  local_88 = uVar4;
  local_80 = 0;
  piVar13 = *(int **)(param_1 + 8);
  if (piVar13 == *(int **)(param_1 + 0x10)) {
    std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux
              ((vector<Caver::Binding,std::allocator<Caver::Binding>> *)param_1,piVar13,&local_98);
  }
  else {
    *piVar13 = local_98;
    FUN_0066a528(piVar13 + 2,&local_90);
    piVar13[6] = local_80;
    *(undefined8 *)(piVar13 + 4) = local_88;
    *(long *)pvVar16 = *(long *)pvVar16 + 0x20;
  }
  if ((undefined *)(local_90 + -0x18) != puVar6) {
    piVar13 = (int *)(local_90 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar14 = *piVar13;
      *piVar13 = iVar14 + -1;
    }
    else {
      do {
        iVar14 = *piVar13;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar2) {
          *piVar13 = iVar14 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar14 < 1) {
      operator_delete((undefined *)(local_90 + -0x18));
    }
  }
  if ((undefined *)(local_a8[0] + -0x18) != puVar6) {
    piVar13 = (int *)(local_a8[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar14 = *piVar13;
      *piVar13 = iVar14 + -1;
    }
    else {
      do {
        iVar14 = *piVar13;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar2) {
          *piVar13 = iVar14 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar14 < 1) {
      operator_delete((undefined *)(local_a8[0] + -0x18));
    }
  }
  puVar10 = PTR_pthread_create_007e4e78;
  if (-1 < *(int *)(this + 0x70)) {
    iVar14 = 0;
    do {
      Component::BindingForOutlet(iVar7);
      local_80 = local_80 | 4;
      piVar13 = *(int **)(param_1 + 8);
      if (piVar13 == *(int **)(param_1 + 0x10)) {
        std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux
                  ((vector<Caver::Binding,std::allocator<Caver::Binding>> *)param_1,piVar13,
                   &local_98);
      }
      else {
        *piVar13 = local_98;
        FUN_0066a528(piVar13 + 2,&local_90);
        piVar13[6] = local_80;
        *(undefined8 *)(piVar13 + 4) = local_88;
        *(long *)pvVar16 = *(long *)pvVar16 + 0x20;
      }
      if ((undefined *)(local_90 + -0x18) != puVar6) {
        piVar13 = (int *)(local_90 + -8);
        if (puVar10 == (undefined *)0x0) {
          iVar15 = *piVar13;
          *piVar13 = iVar15 + -1;
        }
        else {
          do {
            iVar15 = *piVar13;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar13,0x10);
            if (bVar2) {
              *piVar13 = iVar15 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        if (iVar15 < 1) {
          operator_delete((undefined *)(local_90 + -0x18));
        }
      }
      iVar14 = iVar14 + 1;
      iVar15 = 5;
      if (*(int *)(this + 0x70) < 4) {
        iVar15 = *(int *)(this + 0x70) + 1;
      }
    } while (iVar14 < iVar15);
  }
  FUN_00666bb8(local_a8,"emitterType",&local_b8);
  local_98 = 0xc;
  FUN_0066a528(&local_90,local_a8);
  local_88 = uVar5;
  local_80 = 5;
  piVar13 = *(int **)(param_1 + 8);
  if (piVar13 == *(int **)(param_1 + 0x10)) {
    std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux
              ((vector<Caver::Binding,std::allocator<Caver::Binding>> *)param_1,piVar13,&local_98);
  }
  else {
    *piVar13 = local_98;
    FUN_0066a528(piVar13 + 2,&local_90);
    piVar13[6] = local_80;
    *(undefined8 *)(piVar13 + 4) = local_88;
    *(long *)pvVar16 = *(long *)pvVar16 + 0x20;
  }
  if ((undefined *)(local_90 + -0x18) != puVar6) {
    piVar13 = (int *)(local_90 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar13;
      *piVar13 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar13;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar2) {
          *piVar13 = iVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete((undefined *)(local_90 + -0x18));
    }
  }
  if ((undefined *)(local_a8[0] + -0x18) != puVar6) {
    piVar13 = (int *)(local_a8[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar13;
      *piVar13 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar13;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar2) {
          *piVar13 = iVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete((undefined *)(local_a8[0] + -0x18));
      lVar11 = *(long *)(this + 0x158);
      goto joined_r0x003a84a4;
    }
  }
  lVar11 = *(long *)(this + 0x158);
joined_r0x003a84a4:
  if (lVar11 != 0) {
    FUN_00666bb8(local_a8,"originOffset",&local_b8);
    local_98 = 0xd;
    FUN_0066a528(&local_90,local_a8);
    local_88 = uVar4;
    local_80 = 0;
    piVar13 = *(int **)(param_1 + 8);
    if (piVar13 == *(int **)(param_1 + 0x10)) {
      std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux
                ((vector<Caver::Binding,std::allocator<Caver::Binding>> *)param_1,piVar13,&local_98)
      ;
    }
    else {
      *piVar13 = local_98;
      FUN_0066a528(piVar13 + 2,&local_90);
      piVar13[6] = local_80;
      *(undefined8 *)(piVar13 + 4) = local_88;
      *(long *)pvVar16 = *(long *)pvVar16 + 0x20;
    }
    if ((undefined *)(local_90 + -0x18) != puVar6) {
      piVar13 = (int *)(local_90 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar7 = *piVar13;
        *piVar13 = iVar7 + -1;
      }
      else {
        do {
          iVar7 = *piVar13;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar2) {
            *piVar13 = iVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar7 < 1) {
        operator_delete((undefined *)(local_90 + -0x18));
      }
    }
    if ((undefined *)(local_a8[0] + -0x18) != puVar6) {
      piVar13 = (int *)(local_a8[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar7 = *piVar13;
        *piVar13 = iVar7 + -1;
      }
      else {
        do {
          iVar7 = *piVar13;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar2) {
            *piVar13 = iVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar7 < 1) {
        operator_delete((undefined *)(local_a8[0] + -0x18));
      }
    }
    FUN_00666bb8(local_a8,"color",&local_b8);
    local_98 = 0xe;
    FUN_0066a528(&local_90,local_a8);
    local_80 = 0;
    local_88 = DAT_00683ef0;
    piVar13 = *(int **)(param_1 + 8);
    if (piVar13 == *(int **)(param_1 + 0x10)) {
      std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux
                ((vector<Caver::Binding,std::allocator<Caver::Binding>> *)param_1,piVar13,&local_98)
      ;
    }
    else {
      *piVar13 = local_98;
      FUN_0066a528(piVar13 + 2,&local_90);
      piVar13[6] = local_80;
      *(undefined8 *)(piVar13 + 4) = local_88;
      *(long *)pvVar16 = *(long *)pvVar16 + 0x20;
    }
    if ((undefined *)(local_90 + -0x18) != puVar6) {
      piVar13 = (int *)(local_90 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar7 = *piVar13;
        *piVar13 = iVar7 + -1;
      }
      else {
        do {
          iVar7 = *piVar13;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar2) {
            *piVar13 = iVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar7 < 1) {
        operator_delete((undefined *)(local_90 + -0x18));
      }
    }
    if ((undefined *)(local_a8[0] + -0x18) != puVar6) {
      piVar13 = (int *)(local_a8[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar7 = *piVar13;
        *piVar13 = iVar7 + -1;
      }
      else {
        do {
          iVar7 = *piVar13;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar2) {
            *piVar13 = iVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar7 < 1) {
        operator_delete((undefined *)(local_a8[0] + -0x18));
      }
    }
    FUN_00666bb8(local_a8,"hueVariance",&local_b8);
    local_98 = 0xf;
    FUN_0066a528(&local_90,local_a8);
    uVar4 = _LAB_00683960;
    local_80 = 0;
    local_88 = _LAB_00683960;
    piVar13 = *(int **)(param_1 + 8);
    if (piVar13 == *(int **)(param_1 + 0x10)) {
      std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux
                ((vector<Caver::Binding,std::allocator<Caver::Binding>> *)param_1,piVar13,&local_98)
      ;
    }
    else {
      *piVar13 = local_98;
      FUN_0066a528(piVar13 + 2,&local_90);
      piVar13[6] = local_80;
      *(undefined8 *)(piVar13 + 4) = local_88;
      *(long *)pvVar16 = *(long *)pvVar16 + 0x20;
    }
    if ((undefined *)(local_90 + -0x18) != puVar6) {
      piVar13 = (int *)(local_90 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar7 = *piVar13;
        *piVar13 = iVar7 + -1;
      }
      else {
        do {
          iVar7 = *piVar13;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar2) {
            *piVar13 = iVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar7 < 1) {
        operator_delete((undefined *)(local_90 + -0x18));
      }
    }
    if ((undefined *)(local_a8[0] + -0x18) != puVar6) {
      piVar13 = (int *)(local_a8[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar7 = *piVar13;
        *piVar13 = iVar7 + -1;
      }
      else {
        do {
          iVar7 = *piVar13;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar2) {
            *piVar13 = iVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar7 < 1) {
        operator_delete((undefined *)(local_a8[0] + -0x18));
      }
    }
    FUN_00666bb8(local_a8,"saturationVariance",&local_b8);
    local_98 = 0x10;
    FUN_0066a528(&local_90,local_a8);
    local_88 = uVar4;
    local_80 = 0;
    piVar13 = *(int **)(param_1 + 8);
    if (piVar13 == *(int **)(param_1 + 0x10)) {
      std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux
                ((vector<Caver::Binding,std::allocator<Caver::Binding>> *)param_1,piVar13,&local_98)
      ;
    }
    else {
      *piVar13 = local_98;
      FUN_0066a528(piVar13 + 2,&local_90);
      piVar13[6] = local_80;
      *(undefined8 *)(piVar13 + 4) = local_88;
      *(long *)pvVar16 = *(long *)pvVar16 + 0x20;
    }
    if ((undefined *)(local_90 + -0x18) != puVar6) {
      piVar13 = (int *)(local_90 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar7 = *piVar13;
        *piVar13 = iVar7 + -1;
      }
      else {
        do {
          iVar7 = *piVar13;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar2) {
            *piVar13 = iVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar7 < 1) {
        operator_delete((undefined *)(local_90 + -0x18));
      }
    }
    if ((undefined *)(local_a8[0] + -0x18) != puVar6) {
      piVar13 = (int *)(local_a8[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar7 = *piVar13;
        *piVar13 = iVar7 + -1;
      }
      else {
        do {
          iVar7 = *piVar13;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar2) {
            *piVar13 = iVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar7 < 1) {
        operator_delete((undefined *)(local_a8[0] + -0x18));
      }
    }
    FUN_00666bb8(local_a8,"lightnessVariance",&local_b8);
    local_98 = 0x11;
    FUN_0066a528(&local_90,local_a8);
    local_88 = uVar4;
    local_80 = 0;
    piVar13 = *(int **)(param_1 + 8);
    if (piVar13 == *(int **)(param_1 + 0x10)) {
      std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux
                ((vector<Caver::Binding,std::allocator<Caver::Binding>> *)param_1,piVar13,&local_98)
      ;
    }
    else {
      *piVar13 = local_98;
      FUN_0066a528(piVar13 + 2,&local_90);
      piVar13[6] = local_80;
      *(undefined8 *)(piVar13 + 4) = local_88;
      *(long *)pvVar16 = *(long *)pvVar16 + 0x20;
    }
    if ((undefined *)(local_90 + -0x18) != puVar6) {
      piVar13 = (int *)(local_90 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar7 = *piVar13;
        *piVar13 = iVar7 + -1;
      }
      else {
        do {
          iVar7 = *piVar13;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar2) {
            *piVar13 = iVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar7 < 1) {
        operator_delete((undefined *)(local_90 + -0x18));
      }
    }
    if ((undefined *)(local_a8[0] + -0x18) != puVar6) {
      piVar13 = (int *)(local_a8[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar7 = *piVar13;
        *piVar13 = iVar7 + -1;
      }
      else {
        do {
          iVar7 = *piVar13;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar2) {
            *piVar13 = iVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar7 < 1) {
        operator_delete((undefined *)(local_a8[0] + -0x18));
      }
    }
    iVar7 = (**(code **)(**(long **)(this + 0x158) + 0x18))();
    if (iVar7 != 0) {
      uVar12 = 0;
      do {
        local_c0 = puVar6 + 0x18;
        pcVar9 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned_int,char>
                           (uVar12,(char *)((long)&local_88 + 3));
        FUN_00669e1c(&local_c0,0,*(undefined8 *)puVar6,pcVar9,((long)&local_88 + 3) - (long)pcVar9);
        FUN_0035a030(&local_b8,&DAT_00688512,&local_c0);
        FUN_0066a528(&local_b0,&local_b8);
        FUN_006677d4(&local_b0,&DAT_00688514,2);
        (**(code **)(**(long **)(this + 0x158) + 0x28))(&local_98,*(long **)(this + 0x158),uVar12);
        FUN_0066a528(local_a8,&local_b0);
        FUN_00667614(local_a8,&local_98);
        puVar10 = (undefined *)(CONCAT44(uStack_94,local_98) + -0x18);
        if (puVar10 != puVar6) {
          piVar13 = (int *)(CONCAT44(uStack_94,local_98) + -8);
          if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
            iVar7 = *piVar13;
            *piVar13 = iVar7 + -1;
          }
          else {
            do {
              iVar7 = *piVar13;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(piVar13,0x10);
              if (bVar2) {
                *piVar13 = iVar7 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          if (iVar7 < 1) {
            operator_delete(puVar10);
          }
        }
        if ((undefined *)(local_b0 + -0x18) != puVar6) {
          piVar13 = (int *)(local_b0 + -8);
          if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
            iVar7 = *piVar13;
            *piVar13 = iVar7 + -1;
          }
          else {
            do {
              iVar7 = *piVar13;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(piVar13,0x10);
              if (bVar2) {
                *piVar13 = iVar7 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          if (iVar7 < 1) {
            operator_delete((undefined *)(local_b0 + -0x18));
          }
        }
        if ((undefined *)(local_b8 + -0x18) != puVar6) {
          piVar13 = (int *)(local_b8 + -8);
          if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
            iVar7 = *piVar13;
            *piVar13 = iVar7 + -1;
          }
          else {
            do {
              iVar7 = *piVar13;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(piVar13,0x10);
              if (bVar2) {
                *piVar13 = iVar7 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          if (iVar7 < 1) {
            operator_delete((undefined *)(local_b8 + -0x18));
          }
        }
        if (local_c0 + -0x18 != puVar6) {
          piVar13 = (int *)(local_c0 + -8);
          if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
            iVar7 = *piVar13;
            *piVar13 = iVar7 + -1;
          }
          else {
            do {
              iVar7 = *piVar13;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(piVar13,0x10);
              if (bVar2) {
                *piVar13 = iVar7 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          if (iVar7 < 1) {
            operator_delete(local_c0 + -0x18);
          }
        }
        local_98 = uVar12 + 0x12;
        FUN_0066a528(&local_90,local_a8);
        local_88 = uVar4;
        local_80 = 0;
        piVar13 = *(int **)(param_1 + 8);
        if (piVar13 == *(int **)(param_1 + 0x10)) {
          std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux
                    ((vector<Caver::Binding,std::allocator<Caver::Binding>> *)param_1,piVar13,
                     &local_98);
        }
        else {
          *piVar13 = local_98;
          FUN_0066a528(piVar13 + 2,&local_90);
          piVar13[6] = local_80;
          *(undefined8 *)(piVar13 + 4) = local_88;
          *(long *)pvVar16 = *(long *)pvVar16 + 0x20;
        }
        if ((undefined *)(local_90 + -0x18) != puVar6) {
          piVar13 = (int *)(local_90 + -8);
          if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
            iVar7 = *piVar13;
            *piVar13 = iVar7 + -1;
          }
          else {
            do {
              iVar7 = *piVar13;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(piVar13,0x10);
              if (bVar2) {
                *piVar13 = iVar7 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          if (iVar7 < 1) {
            operator_delete((undefined *)(local_90 + -0x18));
          }
        }
        if ((undefined *)(local_a8[0] + -0x18) != puVar6) {
          piVar13 = (int *)(local_a8[0] + -8);
          if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
            iVar7 = *piVar13;
            *piVar13 = iVar7 + -1;
          }
          else {
            do {
              iVar7 = *piVar13;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(piVar13,0x10);
              if (bVar2) {
                *piVar13 = iVar7 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          if (iVar7 < 1) {
            operator_delete((undefined *)(local_a8[0] + -0x18));
          }
        }
        uVar12 = uVar12 + 1;
        uVar8 = (**(code **)(**(long **)(this + 0x158) + 0x18))();
      } while (uVar12 < uVar8);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


