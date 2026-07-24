/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00318038
 * Function: Caver::CollisionShapeComponent::GetBindings
 * Signature: undefined __thiscall GetBindings(CollisionShapeComponent * this, vector * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::CollisionShapeComponent::GetBindings(std::vector<Caver::Binding,
   std::allocator<Caver::Binding> >*) */

void __thiscall
Caver::CollisionShapeComponent::GetBindings(CollisionShapeComponent *this,vector *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  vector *pvVar10;
  undefined1 auStack_a0 [8];
  long local_98 [2];
  undefined4 local_88 [2];
  long local_80;
  undefined8 local_78;
  undefined4 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  ShapeComponent::GetBindings((ShapeComponent *)this,param_1);
  FUN_00666bb8(local_98,"enabled",auStack_a0);
  local_88[0] = 200;
  FUN_0066a528(&local_80,local_98);
  uVar4 = _DAT_00683958;
  local_70 = 0;
  local_78 = _DAT_00683958;
  pvVar10 = param_1 + 8;
  puVar9 = *(undefined4 **)pvVar10;
  if (puVar9 == *(undefined4 **)(param_1 + 0x10)) {
    std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux
              ((vector<Caver::Binding,std::allocator<Caver::Binding>> *)param_1,puVar9,local_88);
  }
  else {
    *puVar9 = local_88[0];
    FUN_0066a528(puVar9 + 2,&local_80);
    puVar9[6] = local_70;
    *(undefined8 *)(puVar9 + 4) = local_78;
    *(long *)pvVar10 = *(long *)pvVar10 + 0x20;
  }
  puVar6 = PTR_DAT_007e5de8;
  if ((undefined *)(local_80 + -0x18) != PTR_DAT_007e5de8) {
    piVar7 = (int *)(local_80 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = iVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_80 + -0x18));
    }
  }
  if ((undefined *)(local_98[0] + -0x18) != puVar6) {
    piVar7 = (int *)(local_98[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = iVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_98[0] + -0x18));
    }
  }
  FUN_00666bb8(local_98,"minDepth",auStack_a0);
  local_88[0] = 0xca;
  FUN_0066a528(&local_80,local_98);
  uVar5 = _LAB_00683960;
  local_70 = 0;
  local_78 = _LAB_00683960;
  puVar9 = *(undefined4 **)(param_1 + 8);
  if (puVar9 == *(undefined4 **)(param_1 + 0x10)) {
    std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux
              ((vector<Caver::Binding,std::allocator<Caver::Binding>> *)param_1,puVar9,local_88);
  }
  else {
    *puVar9 = local_88[0];
    FUN_0066a528(puVar9 + 2,&local_80);
    puVar9[6] = local_70;
    *(undefined8 *)(puVar9 + 4) = local_78;
    *(long *)pvVar10 = *(long *)pvVar10 + 0x20;
  }
  if ((undefined *)(local_80 + -0x18) != puVar6) {
    piVar7 = (int *)(local_80 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = iVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_80 + -0x18));
    }
  }
  if ((undefined *)(local_98[0] + -0x18) != puVar6) {
    piVar7 = (int *)(local_98[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = iVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_98[0] + -0x18));
    }
  }
  FUN_00666bb8(local_98,"maxDepth",auStack_a0);
  local_88[0] = 0xcb;
  FUN_0066a528(&local_80,local_98);
  local_78 = uVar5;
  local_70 = 0;
  puVar9 = *(undefined4 **)(param_1 + 8);
  if (puVar9 == *(undefined4 **)(param_1 + 0x10)) {
    std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux
              ((vector<Caver::Binding,std::allocator<Caver::Binding>> *)param_1,puVar9,local_88);
  }
  else {
    *puVar9 = local_88[0];
    FUN_0066a528(puVar9 + 2,&local_80);
    puVar9[6] = local_70;
    *(undefined8 *)(puVar9 + 4) = local_78;
    *(long *)pvVar10 = *(long *)pvVar10 + 0x20;
  }
  if ((undefined *)(local_80 + -0x18) != puVar6) {
    piVar7 = (int *)(local_80 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = iVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_80 + -0x18));
    }
  }
  if ((undefined *)(local_98[0] + -0x18) != puVar6) {
    piVar7 = (int *)(local_98[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = iVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_98[0] + -0x18));
    }
  }
  FUN_00666bb8(local_98,"isGround",auStack_a0);
  local_88[0] = 0xcc;
  FUN_0066a528(&local_80,local_98);
  local_78 = uVar4;
  local_70 = 0;
  puVar9 = *(undefined4 **)(param_1 + 8);
  if (puVar9 == *(undefined4 **)(param_1 + 0x10)) {
    std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux
              ((vector<Caver::Binding,std::allocator<Caver::Binding>> *)param_1,puVar9,local_88);
  }
  else {
    *puVar9 = local_88[0];
    FUN_0066a528(puVar9 + 2,&local_80);
    puVar9[6] = local_70;
    *(undefined8 *)(puVar9 + 4) = local_78;
    *(long *)pvVar10 = *(long *)pvVar10 + 0x20;
  }
  if ((undefined *)(local_80 + -0x18) != puVar6) {
    piVar7 = (int *)(local_80 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = iVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_80 + -0x18));
    }
  }
  if ((undefined *)(local_98[0] + -0x18) != puVar6) {
    piVar7 = (int *)(local_98[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = iVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_98[0] + -0x18));
    }
  }
  FUN_00666bb8(local_98,"collides",auStack_a0);
  local_88[0] = 0xcd;
  FUN_0066a528(&local_80,local_98);
  local_78 = uVar4;
  local_70 = 0;
  puVar9 = *(undefined4 **)(param_1 + 8);
  if (puVar9 == *(undefined4 **)(param_1 + 0x10)) {
    std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux
              ((vector<Caver::Binding,std::allocator<Caver::Binding>> *)param_1,puVar9,local_88);
  }
  else {
    *puVar9 = local_88[0];
    FUN_0066a528(puVar9 + 2,&local_80);
    puVar9[6] = local_70;
    *(undefined8 *)(puVar9 + 4) = local_78;
    *(long *)pvVar10 = *(long *)pvVar10 + 0x20;
  }
  if ((undefined *)(local_80 + -0x18) != puVar6) {
    piVar7 = (int *)(local_80 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = iVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_80 + -0x18));
    }
  }
  if ((undefined *)(local_98[0] + -0x18) != puVar6) {
    piVar7 = (int *)(local_98[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = iVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_98[0] + -0x18));
    }
  }
  FUN_00666bb8(local_98,"receivesDamage",auStack_a0);
  local_88[0] = 0xce;
  FUN_0066a528(&local_80,local_98);
  local_78 = uVar4;
  local_70 = 0;
  puVar9 = *(undefined4 **)(param_1 + 8);
  if (puVar9 == *(undefined4 **)(param_1 + 0x10)) {
    std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux
              ((vector<Caver::Binding,std::allocator<Caver::Binding>> *)param_1,puVar9,local_88);
  }
  else {
    *puVar9 = local_88[0];
    FUN_0066a528(puVar9 + 2,&local_80);
    puVar9[6] = local_70;
    *(undefined8 *)(puVar9 + 4) = local_78;
    *(long *)pvVar10 = *(long *)pvVar10 + 0x20;
  }
  if ((undefined *)(local_80 + -0x18) != puVar6) {
    piVar7 = (int *)(local_80 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = iVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_80 + -0x18));
    }
  }
  if ((undefined *)(local_98[0] + -0x18) != puVar6) {
    piVar7 = (int *)(local_98[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = iVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_98[0] + -0x18));
    }
  }
  FUN_00666bb8(local_98,"inflictsDamage",auStack_a0);
  local_88[0] = 0xcf;
  FUN_0066a528(&local_80,local_98);
  local_78 = uVar4;
  local_70 = 0;
  puVar9 = *(undefined4 **)(param_1 + 8);
  if (puVar9 == *(undefined4 **)(param_1 + 0x10)) {
    std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux
              ((vector<Caver::Binding,std::allocator<Caver::Binding>> *)param_1,puVar9,local_88);
  }
  else {
    *puVar9 = local_88[0];
    FUN_0066a528(puVar9 + 2,&local_80);
    puVar9[6] = local_70;
    *(undefined8 *)(puVar9 + 4) = local_78;
    *(long *)pvVar10 = *(long *)pvVar10 + 0x20;
  }
  if ((undefined *)(local_80 + -0x18) != puVar6) {
    piVar7 = (int *)(local_80 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = iVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_80 + -0x18));
    }
  }
  if ((undefined *)(local_98[0] + -0x18) != puVar6) {
    piVar7 = (int *)(local_98[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = iVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_98[0] + -0x18));
    }
  }
  FUN_00666bb8(local_98,"specialType",auStack_a0);
  local_88[0] = 0xd0;
  FUN_0066a528(&local_80,local_98);
  local_70 = 1;
  local_78 = DAT_00683968;
  puVar9 = *(undefined4 **)(param_1 + 8);
  if (puVar9 == *(undefined4 **)(param_1 + 0x10)) {
    std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux
              ((vector<Caver::Binding,std::allocator<Caver::Binding>> *)param_1,puVar9,local_88);
  }
  else {
    *puVar9 = local_88[0];
    FUN_0066a528(puVar9 + 2,&local_80);
    puVar9[6] = local_70;
    *(undefined8 *)(puVar9 + 4) = local_78;
    *(long *)pvVar10 = *(long *)pvVar10 + 0x20;
  }
  if ((undefined *)(local_80 + -0x18) != puVar6) {
    piVar7 = (int *)(local_80 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = iVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_80 + -0x18));
    }
  }
  if ((undefined *)(local_98[0] + -0x18) != puVar6) {
    piVar7 = (int *)(local_98[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = iVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_98[0] + -0x18));
    }
  }
  FUN_00666bb8(local_98,"friction",auStack_a0);
  local_88[0] = 0xd1;
  FUN_0066a528(&local_80,local_98);
  local_78 = uVar5;
  local_70 = 0;
  puVar9 = *(undefined4 **)(param_1 + 8);
  if (puVar9 == *(undefined4 **)(param_1 + 0x10)) {
    std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux
              ((vector<Caver::Binding,std::allocator<Caver::Binding>> *)param_1,puVar9,local_88);
  }
  else {
    *puVar9 = local_88[0];
    FUN_0066a528(puVar9 + 2,&local_80);
    puVar9[6] = local_70;
    *(undefined8 *)(puVar9 + 4) = local_78;
    *(long *)pvVar10 = *(long *)pvVar10 + 0x20;
  }
  if ((undefined *)(local_80 + -0x18) != puVar6) {
    piVar7 = (int *)(local_80 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = iVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_80 + -0x18));
    }
  }
  if ((undefined *)(local_98[0] + -0x18) != puVar6) {
    piVar7 = (int *)(local_98[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = iVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_98[0] + -0x18));
    }
  }
  FUN_00666bb8(local_98,"unsafeGround",auStack_a0);
  local_88[0] = 0xd2;
  FUN_0066a528(&local_80,local_98);
  local_78 = uVar4;
  local_70 = 0;
  puVar9 = *(undefined4 **)(param_1 + 8);
  if (puVar9 == *(undefined4 **)(param_1 + 0x10)) {
    std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux
              ((vector<Caver::Binding,std::allocator<Caver::Binding>> *)param_1,puVar9,local_88);
  }
  else {
    *puVar9 = local_88[0];
    FUN_0066a528(puVar9 + 2,&local_80);
    puVar9[6] = local_70;
    *(undefined8 *)(puVar9 + 4) = local_78;
    *(long *)pvVar10 = *(long *)pvVar10 + 0x20;
  }
  if ((undefined *)(local_80 + -0x18) != puVar6) {
    piVar7 = (int *)(local_80 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = iVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_80 + -0x18));
    }
  }
  if ((undefined *)(local_98[0] + -0x18) != puVar6) {
    piVar7 = (int *)(local_98[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = iVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_98[0] + -0x18));
    }
  }
  FUN_00666bb8(local_98,"onCollide",auStack_a0);
  local_88[0] = 0xd3;
  FUN_0066a528(&local_80,local_98);
  uVar4 = DAT_00683970;
  local_70 = 0;
  local_78 = DAT_00683970;
  puVar9 = *(undefined4 **)(param_1 + 8);
  if (puVar9 == *(undefined4 **)(param_1 + 0x10)) {
    std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux
              ((vector<Caver::Binding,std::allocator<Caver::Binding>> *)param_1,puVar9,local_88);
  }
  else {
    *puVar9 = local_88[0];
    FUN_0066a528(puVar9 + 2,&local_80);
    puVar9[6] = local_70;
    *(undefined8 *)(puVar9 + 4) = local_78;
    *(long *)pvVar10 = *(long *)pvVar10 + 0x20;
  }
  if ((undefined *)(local_80 + -0x18) != puVar6) {
    piVar7 = (int *)(local_80 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = iVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_80 + -0x18));
    }
  }
  if ((undefined *)(local_98[0] + -0x18) != puVar6) {
    piVar7 = (int *)(local_98[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = iVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_98[0] + -0x18));
    }
  }
  FUN_00666bb8(local_98,"onCollisionEnd",auStack_a0);
  local_88[0] = 0xd4;
  FUN_0066a528(&local_80,local_98);
  local_78 = uVar4;
  local_70 = 0;
  puVar9 = *(undefined4 **)(param_1 + 8);
  if (puVar9 == *(undefined4 **)(param_1 + 0x10)) {
    std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux
              ((vector<Caver::Binding,std::allocator<Caver::Binding>> *)param_1,puVar9,local_88);
  }
  else {
    *puVar9 = local_88[0];
    FUN_0066a528(puVar9 + 2,&local_80);
    puVar9[6] = local_70;
    *(undefined8 *)(puVar9 + 4) = local_78;
    *(long *)pvVar10 = *(long *)pvVar10 + 0x20;
  }
  if ((undefined *)(local_80 + -0x18) != puVar6) {
    piVar7 = (int *)(local_80 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = iVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_80 + -0x18));
    }
  }
  if ((undefined *)(local_98[0] + -0x18) != puVar6) {
    piVar7 = (int *)(local_98[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = iVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_98[0] + -0x18));
    }
  }
  FUN_00666bb8(local_98,&DAT_00683a89,auStack_a0);
  local_88[0] = 0xd5;
  FUN_0066a528(&local_80,local_98);
  local_78 = uVar4;
  local_70 = 0;
  puVar9 = *(undefined4 **)(param_1 + 8);
  if (puVar9 == *(undefined4 **)(param_1 + 0x10)) {
    std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux
              ((vector<Caver::Binding,std::allocator<Caver::Binding>> *)param_1,puVar9,local_88);
  }
  else {
    *puVar9 = local_88[0];
    FUN_0066a528(puVar9 + 2,&local_80);
    puVar9[6] = local_70;
    *(undefined8 *)(puVar9 + 4) = local_78;
    *(long *)pvVar10 = *(long *)pvVar10 + 0x20;
  }
  if ((undefined *)(local_80 + -0x18) != puVar6) {
    piVar7 = (int *)(local_80 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = iVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_80 + -0x18));
    }
  }
  if ((undefined *)(local_98[0] + -0x18) != puVar6) {
    piVar7 = (int *)(local_98[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = iVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_98[0] + -0x18));
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


