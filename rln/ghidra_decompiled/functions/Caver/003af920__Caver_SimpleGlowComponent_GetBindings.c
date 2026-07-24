/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003af920
 * Function: Caver::SimpleGlowComponent::GetBindings
 * Signature: undefined __thiscall GetBindings(SimpleGlowComponent * this, vector * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::SimpleGlowComponent::GetBindings(std::vector<Caver::Binding,
   std::allocator<Caver::Binding> >*) */

void __thiscall Caver::SimpleGlowComponent::GetBindings(SimpleGlowComponent *this,vector *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  int *piVar7;
  int iVar8;
  undefined1 auStack_90 [8];
  long local_88 [2];
  undefined4 local_78 [2];
  long local_70;
  undefined8 local_68;
  undefined4 local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  GlowComponent::GetBindings((vector *)this);
  FUN_00666bb8(local_88,"color",auStack_90);
  local_78[0] = 100;
  FUN_0066a528(&local_70,local_88);
  local_60 = 0;
  local_68 = DAT_00683ef0;
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
  puVar6 = PTR_DAT_007e5de8;
  if ((undefined *)(local_70 + -0x18) != PTR_DAT_007e5de8) {
    piVar7 = (int *)(local_70 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_70 + -0x18));
    }
  }
  if ((undefined *)(local_88[0] + -0x18) != puVar6) {
    piVar7 = (int *)(local_88[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_88[0] + -0x18));
    }
  }
  FUN_00666bb8(local_88,&DAT_006896a3,auStack_90);
  local_78[0] = 0x65;
  FUN_0066a528(&local_70,local_88);
  uVar5 = _LAB_00683960;
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
  if ((undefined *)(local_70 + -0x18) != puVar6) {
    piVar7 = (int *)(local_70 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_70 + -0x18));
    }
  }
  if ((undefined *)(local_88[0] + -0x18) != puVar6) {
    piVar7 = (int *)(local_88[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_88[0] + -0x18));
    }
  }
  FUN_00666bb8(local_88,"numSegments",auStack_90);
  local_78[0] = 0x66;
  FUN_0066a528(&local_70,local_88);
  local_60 = 0;
  local_68 = DAT_00683968;
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
  if ((undefined *)(local_70 + -0x18) != puVar6) {
    piVar7 = (int *)(local_70 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_70 + -0x18));
    }
  }
  if ((undefined *)(local_88[0] + -0x18) != puVar6) {
    piVar7 = (int *)(local_88[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_88[0] + -0x18));
    }
  }
  FUN_00666bb8(local_88,"depth",auStack_90);
  local_78[0] = 0x67;
  FUN_0066a528(&local_70,local_88);
  local_68 = uVar5;
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
  if ((undefined *)(local_70 + -0x18) != puVar6) {
    piVar7 = (int *)(local_70 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_70 + -0x18));
    }
  }
  if ((undefined *)(local_88[0] + -0x18) != puVar6) {
    piVar7 = (int *)(local_88[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_88[0] + -0x18));
    }
  }
  FUN_00666bb8(local_88,"offsetX",auStack_90);
  local_78[0] = 0x68;
  FUN_0066a528(&local_70,local_88);
  local_68 = uVar5;
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
  if ((undefined *)(local_70 + -0x18) != puVar6) {
    piVar7 = (int *)(local_70 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_70 + -0x18));
    }
  }
  if ((undefined *)(local_88[0] + -0x18) != puVar6) {
    piVar7 = (int *)(local_88[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_88[0] + -0x18));
    }
  }
  FUN_00666bb8(local_88,"offsetY",auStack_90);
  local_78[0] = 0x69;
  FUN_0066a528(&local_70,local_88);
  local_68 = uVar5;
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
  if ((undefined *)(local_70 + -0x18) != puVar6) {
    piVar7 = (int *)(local_70 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_70 + -0x18));
    }
  }
  if ((undefined *)(local_88[0] + -0x18) != puVar6) {
    piVar7 = (int *)(local_88[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_88[0] + -0x18));
    }
  }
  FUN_00666bb8(local_88,"pulseAmount",auStack_90);
  local_78[0] = 0x6a;
  FUN_0066a528(&local_70,local_88);
  local_68 = uVar5;
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
  if ((undefined *)(local_70 + -0x18) != puVar6) {
    piVar7 = (int *)(local_70 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_70 + -0x18));
    }
  }
  if ((undefined *)(local_88[0] + -0x18) != puVar6) {
    piVar7 = (int *)(local_88[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_88[0] + -0x18));
    }
  }
  FUN_00666bb8(local_88,"pulseTime",auStack_90);
  local_78[0] = 0x6b;
  FUN_0066a528(&local_70,local_88);
  local_68 = uVar5;
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
  if ((undefined *)(local_70 + -0x18) != puVar6) {
    piVar7 = (int *)(local_70 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_70 + -0x18));
    }
  }
  if ((undefined *)(local_88[0] + -0x18) != puVar6) {
    piVar7 = (int *)(local_88[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_88[0] + -0x18));
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


