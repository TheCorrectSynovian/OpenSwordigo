/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00347cc4
 * Function: Caver::DefaultComponents::RegisterAll
 * Signature: undefined __cdecl RegisterAll(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::DefaultComponents::RegisterAll() */

void Caver::DefaultComponents::RegisterAll(void)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ComponentFactory *pCVar9;
  int *piVar10;
  int iVar11;
  ulong local_bc0;
  undefined *apuStack_bb8 [3];
  ulong local_ba0;
  undefined *apuStack_b98 [3];
  ulong local_b80;
  undefined *apuStack_b78 [3];
  ulong local_b60;
  undefined *apuStack_b58 [3];
  ulong local_b40;
  undefined *apuStack_b38 [3];
  ulong local_b20;
  undefined *apuStack_b18 [3];
  ulong local_b00;
  undefined *apuStack_af8 [3];
  ulong local_ae0;
  undefined *apuStack_ad8 [3];
  ulong local_ac0;
  undefined *apuStack_ab8 [3];
  ulong local_aa0;
  undefined *apuStack_a98 [3];
  ulong local_a80;
  undefined *apuStack_a78 [3];
  ulong local_a60;
  undefined *apuStack_a58 [3];
  ulong local_a40;
  undefined *apuStack_a38 [3];
  ulong local_a20;
  undefined *apuStack_a18 [3];
  ulong local_a00;
  undefined *apuStack_9f8 [3];
  ulong local_9e0;
  undefined *apuStack_9d8 [3];
  ulong local_9c0;
  undefined *local_9b8 [3];
  ulong local_9a0;
  undefined *local_998 [3];
  ulong local_980;
  undefined *local_978 [3];
  ulong local_960;
  undefined *local_958 [3];
  ulong local_940;
  undefined *local_938 [3];
  ulong local_920;
  undefined *local_918 [3];
  ulong local_900;
  undefined *local_8f8 [3];
  ulong local_8e0;
  undefined *local_8d8 [3];
  ulong local_8c0;
  undefined *local_8b8 [3];
  ulong local_8a0;
  undefined *local_898 [3];
  ulong local_880;
  undefined *local_878 [3];
  ulong local_860;
  undefined *local_858 [3];
  ulong local_840;
  undefined *local_838 [3];
  ulong local_820;
  undefined *local_818 [3];
  ulong local_800;
  undefined *local_7f8 [3];
  ulong local_7e0;
  undefined *local_7d8 [3];
  ulong local_7c0;
  undefined *local_7b8 [3];
  ulong local_7a0;
  undefined *local_798 [3];
  ulong local_780;
  undefined *local_778 [3];
  ulong local_760;
  undefined *local_758 [3];
  undefined1 auStack_740 [8];
  ulong local_738;
  undefined *local_730 [3];
  ulong local_718;
  undefined *local_710 [3];
  ulong local_6f8;
  undefined *local_6f0 [3];
  ulong local_6d8;
  undefined *local_6d0 [3];
  ulong local_6b8;
  undefined *local_6b0 [3];
  ulong local_698;
  undefined *local_690 [3];
  ulong local_678;
  undefined *local_670 [3];
  ulong local_658;
  undefined *local_650 [3];
  ulong local_638;
  undefined *local_630 [3];
  ulong local_618;
  undefined *local_610 [3];
  ulong local_5f8;
  undefined *local_5f0 [3];
  ulong local_5d8;
  undefined *local_5d0 [3];
  ulong local_5b8;
  undefined *local_5b0 [3];
  ulong local_598;
  undefined *local_590 [3];
  ulong local_578;
  undefined *local_570 [3];
  ulong local_558;
  undefined *local_550 [3];
  ulong local_538;
  undefined *local_530 [3];
  ulong local_518;
  undefined *local_510 [3];
  ulong local_4f8;
  undefined *local_4f0 [3];
  ulong local_4d8;
  undefined *local_4d0 [3];
  ulong local_4b8;
  undefined *local_4b0 [3];
  ulong local_498;
  undefined *local_490 [3];
  ulong local_478;
  undefined *local_470 [3];
  ulong local_458;
  undefined *local_450 [3];
  ulong local_438;
  undefined *local_430 [3];
  ulong local_418;
  undefined *local_410 [3];
  ulong local_3f8;
  undefined *local_3f0 [3];
  ulong local_3d8;
  undefined *local_3d0 [3];
  ulong local_3b8;
  undefined *local_3b0 [3];
  ulong local_398;
  undefined *local_390 [3];
  ulong local_378;
  undefined *local_370 [3];
  ulong local_358;
  undefined *local_350 [3];
  ulong local_338;
  undefined *local_330 [3];
  ulong local_318;
  undefined *local_310 [3];
  ulong local_2f8;
  undefined *local_2f0 [3];
  ulong local_2d8;
  undefined *local_2d0 [3];
  ulong local_2b8;
  undefined *local_2b0 [3];
  ulong local_298;
  undefined *local_290 [3];
  ulong local_278;
  undefined *local_270 [3];
  ulong local_258;
  undefined *local_250 [3];
  ulong local_238;
  undefined *local_230 [3];
  ulong local_218;
  undefined *local_210 [3];
  ulong local_1f8;
  undefined *local_1f0 [3];
  ulong local_1d8;
  undefined *local_1d0 [3];
  ulong local_1b8;
  undefined *local_1b0 [3];
  ulong local_198;
  undefined *local_190 [3];
  ulong local_178;
  undefined *local_170 [3];
  ulong local_158;
  undefined *local_150 [3];
  ulong local_138;
  undefined *local_130 [3];
  ulong local_118;
  undefined *local_110 [3];
  ulong local_f8;
  undefined *apuStack_f0 [3];
  ulong local_d8;
  undefined *apuStack_d0 [3];
  ulong local_b8;
  undefined *apuStack_b0 [3];
  ulong local_98;
  undefined *apuStack_90 [3];
  long local_78;
  undefined1 auStack_70 [8];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if ((DAT_007e8b4b & 1) == 0) {
    DAT_007e8b4b = 1;
    pCVar9 = (ComponentFactory *)ComponentFactory::sharedManager();
    FUN_00666bb8(&local_78,"Sprite",auStack_70);
    puVar5 = PTR_stored_vtable_007e4ac8;
    local_98 = 0;
    if (*(code **)PTR_stored_vtable_007e4ac8 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e4ac8)(apuStack_90,apuStack_90,2);
    }
    local_98 = (ulong)puVar5 | 1;
    apuStack_90[0] = PTR_Create_007e60e8;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_98);
    if (local_98 != 0) {
      if (((local_98 & 1) == 0) && (*(code **)(local_98 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_98 & 0xfffffffffffffffe))(apuStack_90,apuStack_90,2);
      }
      local_98 = 0;
    }
    puVar5 = PTR_DAT_007e5de8;
    if ((undefined *)(local_78 + -0x18) != PTR_DAT_007e5de8) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,"Model",auStack_70);
    puVar4 = PTR_stored_vtable_007e7d48;
    local_b8 = 0;
    if (*(code **)PTR_stored_vtable_007e7d48 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e7d48)(apuStack_b0,apuStack_b0,2);
    }
    local_b8 = (ulong)puVar4 | 1;
    apuStack_b0[0] = PTR_Create_007e7df0;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_b8);
    if (local_b8 != 0) {
      if (((local_b8 & 1) == 0) && (*(code **)(local_b8 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_b8 & 0xfffffffffffffffe))(apuStack_b0,apuStack_b0,2);
      }
      local_b8 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,&DAT_00683eab,auStack_70);
    puVar4 = PTR_stored_vtable_007e6628;
    local_d8 = 0;
    if (*(code **)PTR_stored_vtable_007e6628 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e6628)(apuStack_d0,apuStack_d0,2);
    }
    local_d8 = (ulong)puVar4 | 1;
    apuStack_d0[0] = PTR_Create_007e5af0;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_d8);
    if (local_d8 != 0) {
      if (((local_d8 & 1) == 0) && (*(code **)(local_d8 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_d8 & 0xfffffffffffffffe))(apuStack_d0,apuStack_d0,2);
      }
      local_d8 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,"BlendAnimation",auStack_70);
    puVar4 = PTR_stored_vtable_007e5f20;
    local_f8 = 0;
    if (*(code **)PTR_stored_vtable_007e5f20 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e5f20)(apuStack_f0,apuStack_f0,2);
    }
    local_f8 = (ulong)puVar4 | 1;
    apuStack_f0[0] = PTR_Create_007e4d70;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_f8);
    if (local_f8 != 0) {
      if (((local_f8 & 1) == 0) && (*(code **)(local_f8 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_f8 & 0xfffffffffffffffe))(apuStack_f0,apuStack_f0,2);
      }
      local_f8 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,&DAT_0068541c,auStack_70);
    puVar4 = PTR_stored_vtable_007e6308;
    local_118 = 0;
    if (*(code **)PTR_stored_vtable_007e6308 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e6308)(local_110,local_110,2);
    }
    local_118 = (ulong)puVar4 | 1;
    local_110[0] = PTR_Create_007e6a08;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_118);
    if (local_118 != 0) {
      if (((local_118 & 1) == 0) && (*(code **)(local_118 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_118 & 0xfffffffffffffffe))(local_110,local_110,2);
      }
      local_118 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,&DAT_0068542a,auStack_70);
    puVar4 = PTR_stored_vtable_007e6ac8;
    local_138 = 0;
    if (*(code **)PTR_stored_vtable_007e6ac8 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e6ac8)(local_130,local_130,2);
    }
    local_138 = (ulong)puVar4 | 1;
    local_130[0] = PTR_Create_007e7af8;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_138);
    if (local_138 != 0) {
      if (((local_138 & 1) == 0) && (*(code **)(local_138 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_138 & 0xfffffffffffffffe))(local_130,local_130,2);
      }
      local_138 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,0x685435,auStack_70);
    puVar4 = PTR_stored_vtable_007e60a8;
    local_158 = 0;
    if (*(code **)PTR_stored_vtable_007e60a8 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e60a8)(local_150,local_150,2);
    }
    local_158 = (ulong)puVar4 | 1;
    local_150[0] = PTR_Create_007e61a0;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_158);
    if (local_158 != 0) {
      if (((local_158 & 1) == 0) && (*(code **)(local_158 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_158 & 0xfffffffffffffffe))(local_150,local_150,2);
      }
      local_158 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,&DAT_00685449,auStack_70);
    puVar4 = PTR_stored_vtable_007e60d8;
    local_178 = 0;
    if (*(code **)PTR_stored_vtable_007e60d8 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e60d8)(local_170,local_170,2);
    }
    local_178 = (ulong)puVar4 | 1;
    local_170[0] = PTR_Create_007e5240;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_178);
    if (local_178 != 0) {
      if (((local_178 & 1) == 0) && (*(code **)(local_178 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_178 & 0xfffffffffffffffe))(local_170,local_170,2);
      }
      local_178 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,"Entity",auStack_70);
    puVar4 = PTR_stored_vtable_007e65f8;
    local_198 = 0;
    if (*(code **)PTR_stored_vtable_007e65f8 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e65f8)(local_190,local_190,2);
    }
    local_198 = (ulong)puVar4 | 1;
    local_190[0] = PTR_Create_007e4e00;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_198);
    if (local_198 != 0) {
      if (((local_198 & 1) == 0) && (*(code **)(local_198 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_198 & 0xfffffffffffffffe))(local_190,local_190,2);
      }
      local_198 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,"EntityInfo",auStack_70);
    puVar4 = PTR_stored_vtable_007e4c18;
    local_1b8 = 0;
    if (*(code **)PTR_stored_vtable_007e4c18 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e4c18)(local_1b0,local_1b0,2);
    }
    local_1b8 = (ulong)puVar4 | 1;
    local_1b0[0] = PTR_Create_007e56d0;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_1b8);
    if (local_1b8 != 0) {
      if (((local_1b8 & 1) == 0) && (*(code **)(local_1b8 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_1b8 & 0xfffffffffffffffe))(local_1b0,local_1b0,2);
      }
      local_1b8 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,"EntityController",auStack_70);
    puVar4 = PTR_stored_vtable_007e5458;
    local_1d8 = 0;
    if (*(code **)PTR_stored_vtable_007e5458 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e5458)(local_1d0,local_1d0,2);
    }
    local_1d8 = (ulong)puVar4 | 1;
    local_1d0[0] = PTR_Create_007e5dd0;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_1d8);
    if (local_1d8 != 0) {
      if (((local_1d8 & 1) == 0) && (*(code **)(local_1d8 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_1d8 & 0xfffffffffffffffe))(local_1d0,local_1d0,2);
      }
      local_1d8 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,"EntityAction",auStack_70);
    puVar4 = PTR_stored_vtable_007e7160;
    local_1f8 = 0;
    if (*(code **)PTR_stored_vtable_007e7160 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e7160)(local_1f0,local_1f0,2);
    }
    local_1f8 = (ulong)puVar4 | 1;
    local_1f0[0] = PTR_Create_007e6168;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_1f8);
    if (local_1f8 != 0) {
      if (((local_1f8 & 1) == 0) && (*(code **)(local_1f8 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_1f8 & 0xfffffffffffffffe))(local_1f0,local_1f0,2);
      }
      local_1f8 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,"CharController",auStack_70);
    puVar4 = PTR_stored_vtable_007e5af8;
    local_218 = 0;
    if (*(code **)PTR_stored_vtable_007e5af8 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e5af8)(local_210,local_210,2);
    }
    local_218 = (ulong)puVar4 | 1;
    local_210[0] = PTR_Create_007e7a88;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_218);
    if (local_218 != 0) {
      if (((local_218 & 1) == 0) && (*(code **)(local_218 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_218 & 0xfffffffffffffffe))(local_210,local_210,2);
      }
      local_218 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,"HeroEntity",auStack_70);
    puVar4 = PTR_stored_vtable_007e7cd8;
    local_238 = 0;
    if (*(code **)PTR_stored_vtable_007e7cd8 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e7cd8)(local_230,local_230,2);
    }
    local_238 = (ulong)puVar4 | 1;
    local_230[0] = PTR_Create_007e5560;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_238);
    if (local_238 != 0) {
      if (((local_238 & 1) == 0) && (*(code **)(local_238 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_238 & 0xfffffffffffffffe))(local_230,local_230,2);
      }
      local_238 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,"BushController",auStack_70);
    puVar4 = PTR_stored_vtable_007e7870;
    local_258 = 0;
    if (*(code **)PTR_stored_vtable_007e7870 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e7870)(local_250,local_250,2);
    }
    local_258 = (ulong)puVar4 | 1;
    local_250[0] = PTR_Create_007e6c90;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_258);
    if (local_258 != 0) {
      if (((local_258 & 1) == 0) && (*(code **)(local_258 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_258 & 0xfffffffffffffffe))(local_250,local_250,2);
      }
      local_258 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,"ElevatorController",auStack_70);
    puVar4 = PTR_stored_vtable_007e7768;
    local_278 = 0;
    if (*(code **)PTR_stored_vtable_007e7768 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e7768)(local_270,local_270,2);
    }
    local_278 = (ulong)puVar4 | 1;
    local_270[0] = PTR_Create_007e5820;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_278);
    if (local_278 != 0) {
      if (((local_278 & 1) == 0) && (*(code **)(local_278 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_278 & 0xfffffffffffffffe))(local_270,local_270,2);
      }
      local_278 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,&DAT_006841c2,auStack_70);
    puVar4 = PTR_stored_vtable_007e5b18;
    local_298 = 0;
    if (*(code **)PTR_stored_vtable_007e5b18 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e5b18)(local_290,local_290,2);
    }
    local_298 = (ulong)puVar4 | 1;
    local_290[0] = PTR_Create_007e55c8;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_298);
    if (local_298 != 0) {
      if (((local_298 & 1) == 0) && (*(code **)(local_298 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_298 & 0xfffffffffffffffe))(local_290,local_290,2);
      }
      local_298 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,"Properties",auStack_70);
    puVar4 = PTR_stored_vtable_007e79f8;
    local_2b8 = 0;
    if (*(code **)PTR_stored_vtable_007e79f8 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e79f8)(local_2b0,local_2b0,2);
    }
    local_2b8 = (ulong)puVar4 | 1;
    local_2b0[0] = PTR_Create_007e5900;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_2b8);
    if (local_2b8 != 0) {
      if (((local_2b8 & 1) == 0) && (*(code **)(local_2b8 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_2b8 & 0xfffffffffffffffe))(local_2b0,local_2b0,2);
      }
      local_2b8 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,"Shadow",auStack_70);
    puVar4 = PTR_stored_vtable_007e6e80;
    local_2d8 = 0;
    if (*(code **)PTR_stored_vtable_007e6e80 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e6e80)(local_2d0,local_2d0,2);
    }
    local_2d8 = (ulong)puVar4 | 1;
    local_2d0[0] = PTR_Create_007e5150;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_2d8);
    if (local_2d8 != 0) {
      if (((local_2d8 & 1) == 0) && (*(code **)(local_2d8 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_2d8 & 0xfffffffffffffffe))(local_2d0,local_2d0,2);
      }
      local_2d8 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,"ObjectLinkController",auStack_70);
    puVar4 = PTR_stored_vtable_007e7ea8;
    local_2f8 = 0;
    if (*(code **)PTR_stored_vtable_007e7ea8 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e7ea8)(local_2f0,local_2f0,2);
    }
    local_2f8 = (ulong)puVar4 | 1;
    local_2f0[0] = PTR_Create_007e59d0;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_2f8);
    if (local_2f8 != 0) {
      if (((local_2f8 & 1) == 0) && (*(code **)(local_2f8 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_2f8 & 0xfffffffffffffffe))(local_2f0,local_2f0,2);
      }
      local_2f8 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,&DAT_00684afd,auStack_70);
    puVar4 = PTR_stored_vtable_007e64d0;
    local_318 = 0;
    if (*(code **)PTR_stored_vtable_007e64d0 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e64d0)(local_310,local_310,2);
    }
    local_318 = (ulong)puVar4 | 1;
    local_310[0] = PTR_Create_007e5108;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_318);
    if (local_318 != 0) {
      if (((local_318 & 1) == 0) && (*(code **)(local_318 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_318 & 0xfffffffffffffffe))(local_310,local_310,2);
      }
      local_318 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,"AnimationController",auStack_70);
    puVar4 = PTR_stored_vtable_007e47f0;
    local_338 = 0;
    if (*(code **)PTR_stored_vtable_007e47f0 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e47f0)(local_330,local_330,2);
    }
    local_338 = (ulong)puVar4 | 1;
    local_330[0] = PTR_Create_007e7f38;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_338);
    if (local_338 != 0) {
      if (((local_338 & 1) == 0) && (*(code **)(local_338 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_338 & 0xfffffffffffffffe))(local_330,local_330,2);
      }
      local_338 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,"CharAnimController",auStack_70);
    puVar4 = PTR_stored_vtable_007e7ac0;
    local_358 = 0;
    if (*(code **)PTR_stored_vtable_007e7ac0 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e7ac0)(local_350,local_350,2);
    }
    local_358 = (ulong)puVar4 | 1;
    local_350[0] = PTR_Create_007e7740;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_358);
    if (local_358 != 0) {
      if (((local_358 & 1) == 0) && (*(code **)(local_358 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_358 & 0xfffffffffffffffe))(local_350,local_350,2);
      }
      local_358 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,"Background",auStack_70);
    puVar4 = PTR_stored_vtable_007e62c8;
    local_378 = 0;
    if (*(code **)PTR_stored_vtable_007e62c8 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e62c8)(local_370,local_370,2);
    }
    local_378 = (ulong)puVar4 | 1;
    local_370[0] = PTR_Create_007e6100;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_378);
    if (local_378 != 0) {
      if (((local_378 & 1) == 0) && (*(code **)(local_378 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_378 & 0xfffffffffffffffe))(local_370,local_370,2);
      }
      local_378 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,"TextureMapping",auStack_70);
    puVar4 = PTR_stored_vtable_007e4e18;
    local_398 = 0;
    if (*(code **)PTR_stored_vtable_007e4e18 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e4e18)(local_390,local_390,2);
    }
    local_398 = (ulong)puVar4 | 1;
    local_390[0] = PTR_Create_007e7b38;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_398);
    if (local_398 != 0) {
      if (((local_398 & 1) == 0) && (*(code **)(local_398 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_398 & 0xfffffffffffffffe))(local_390,local_390,2);
      }
      local_398 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,"UtilityShape",auStack_70);
    puVar4 = PTR_stored_vtable_007e6ed0;
    local_3b8 = 0;
    if (*(code **)PTR_stored_vtable_007e6ed0 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e6ed0)(local_3b0,local_3b0,2);
    }
    local_3b8 = (ulong)puVar4 | 1;
    local_3b0[0] = PTR_Create_007e7370;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_3b8);
    if (local_3b8 != 0) {
      if (((local_3b8 & 1) == 0) && (*(code **)(local_3b8 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_3b8 & 0xfffffffffffffffe))(local_3b0,local_3b0,2);
      }
      local_3b8 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,&DAT_00683843,auStack_70);
    puVar4 = PTR_stored_vtable_007e76d8;
    local_3d8 = 0;
    if (*(code **)PTR_stored_vtable_007e76d8 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e76d8)(local_3d0,local_3d0,2);
    }
    local_3d8 = (ulong)puVar4 | 1;
    local_3d0[0] = PTR_Create_007e6750;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_3d8);
    if (local_3d8 != 0) {
      if (((local_3d8 & 1) == 0) && (*(code **)(local_3d8 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_3d8 & 0xfffffffffffffffe))(local_3d0,local_3d0,2);
      }
      local_3d8 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,&DAT_00683835,auStack_70);
    puVar4 = PTR_stored_vtable_007e4928;
    local_3f8 = 0;
    if (*(code **)PTR_stored_vtable_007e4928 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e4928)(local_3f0,local_3f0,2);
    }
    local_3f8 = (ulong)puVar4 | 1;
    local_3f0[0] = PTR_Create_007e5b98;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_3f8);
    if (local_3f8 != 0) {
      if (((local_3f8 & 1) == 0) && (*(code **)(local_3f8 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_3f8 & 0xfffffffffffffffe))(local_3f0,local_3f0,2);
      }
      local_3f8 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,"Damage",auStack_70);
    puVar4 = PTR_stored_vtable_007e49d8;
    local_418 = 0;
    if (*(code **)PTR_stored_vtable_007e49d8 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e49d8)(local_410,local_410,2);
    }
    local_418 = (ulong)puVar4 | 1;
    local_410[0] = PTR_Create_007e6690;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_418);
    if (local_418 != 0) {
      if (((local_418 & 1) == 0) && (*(code **)(local_418 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_418 & 0xfffffffffffffffe))(local_410,local_410,2);
      }
      local_418 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,"Health",auStack_70);
    puVar4 = PTR_stored_vtable_007e7350;
    local_438 = 0;
    if (*(code **)PTR_stored_vtable_007e7350 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e7350)(local_430,local_430,2);
    }
    local_438 = (ulong)puVar4 | 1;
    local_430[0] = PTR_Create_007e53d8;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_438);
    if (local_438 != 0) {
      if (((local_438 & 1) == 0) && (*(code **)(local_438 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_438 & 0xfffffffffffffffe))(local_430,local_430,2);
      }
      local_438 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,&DAT_006854d8,auStack_70);
    puVar4 = PTR_stored_vtable_007e7168;
    local_458 = 0;
    if (*(code **)PTR_stored_vtable_007e7168 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e7168)(local_450,local_450,2);
    }
    local_458 = (ulong)puVar4 | 1;
    local_450[0] = PTR_Create_007e62b0;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_458);
    if (local_458 != 0) {
      if (((local_458 & 1) == 0) && (*(code **)(local_458 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_458 & 0xfffffffffffffffe))(local_450,local_450,2);
      }
      local_458 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,"SwingableWeaponController",auStack_70);
    puVar4 = PTR_stored_vtable_007e78f8;
    local_478 = 0;
    if (*(code **)PTR_stored_vtable_007e78f8 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e78f8)(local_470,local_470,2);
    }
    local_478 = (ulong)puVar4 | 1;
    local_470[0] = PTR_Create_007e5d80;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_478);
    if (local_478 != 0) {
      if (((local_478 & 1) == 0) && (*(code **)(local_478 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_478 & 0xfffffffffffffffe))(local_470,local_470,2);
      }
      local_478 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,"Swing",auStack_70);
    puVar4 = PTR_stored_vtable_007e7918;
    local_498 = 0;
    if (*(code **)PTR_stored_vtable_007e7918 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e7918)(local_490,local_490,2);
    }
    local_498 = (ulong)puVar4 | 1;
    local_490[0] = PTR_Create_007e79c8;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_498);
    if (local_498 != 0) {
      if (((local_498 & 1) == 0) && (*(code **)(local_498 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_498 & 0xfffffffffffffffe))(local_490,local_490,2);
      }
      local_498 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,"WeaponTrail",auStack_70);
    puVar4 = PTR_stored_vtable_007e4ff8;
    local_4b8 = 0;
    if (*(code **)PTR_stored_vtable_007e4ff8 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e4ff8)(local_4b0,local_4b0,2);
    }
    local_4b8 = (ulong)puVar4 | 1;
    local_4b0[0] = PTR_Create_007e7398;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_4b8);
    if (local_4b8 != 0) {
      if (((local_4b8 & 1) == 0) && (*(code **)(local_4b8 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_4b8 & 0xfffffffffffffffe))(local_4b0,local_4b0,2);
      }
      local_4b8 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,"WeaponGlow",auStack_70);
    puVar4 = PTR_stored_vtable_007e7b88;
    local_4d8 = 0;
    if (*(code **)PTR_stored_vtable_007e7b88 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e7b88)(local_4d0,local_4d0,2);
    }
    local_4d8 = (ulong)puVar4 | 1;
    local_4d0[0] = PTR_Create_007e5bd0;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_4d8);
    if (local_4d8 != 0) {
      if (((local_4d8 & 1) == 0) && (*(code **)(local_4d8 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_4d8 & 0xfffffffffffffffe))(local_4d0,local_4d0,2);
      }
      local_4d8 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,"Light",auStack_70);
    puVar4 = PTR_stored_vtable_007e5510;
    local_4f8 = 0;
    if (*(code **)PTR_stored_vtable_007e5510 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e5510)(local_4f0,local_4f0,2);
    }
    local_4f8 = (ulong)puVar4 | 1;
    local_4f0[0] = PTR_Create_007e4a18;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_4f8);
    if (local_4f8 != 0) {
      if (((local_4f8 & 1) == 0) && (*(code **)(local_4f8 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_4f8 & 0xfffffffffffffffe))(local_4f0,local_4f0,2);
      }
      local_4f8 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,"PhysicsObject",auStack_70);
    puVar4 = PTR_stored_vtable_007e7f58;
    local_518 = 0;
    if (*(code **)PTR_stored_vtable_007e7f58 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e7f58)(local_510,local_510,2);
    }
    local_518 = (ulong)puVar4 | 1;
    local_510[0] = PTR_Create_007e7928;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_518);
    if (local_518 != 0) {
      if (((local_518 & 1) == 0) && (*(code **)(local_518 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_518 & 0xfffffffffffffffe))(local_510,local_510,2);
      }
      local_518 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,"PhysicsPlatform",auStack_70);
    puVar4 = PTR_stored_vtable_007e6060;
    local_538 = 0;
    if (*(code **)PTR_stored_vtable_007e6060 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e6060)(local_530,local_530,2);
    }
    local_538 = (ulong)puVar4 | 1;
    local_530[0] = PTR_Create_007e5148;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_538);
    if (local_538 != 0) {
      if (((local_538 & 1) == 0) && (*(code **)(local_538 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_538 & 0xfffffffffffffffe))(local_530,local_530,2);
      }
      local_538 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,"BreakableObject",auStack_70);
    puVar4 = PTR_stored_vtable_007e7f80;
    local_558 = 0;
    if (*(code **)PTR_stored_vtable_007e7f80 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e7f80)(local_550,local_550,2);
    }
    local_558 = (ulong)puVar4 | 1;
    local_550[0] = PTR_Create_007e6568;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_558);
    if (local_558 != 0) {
      if (((local_558 & 1) == 0) && (*(code **)(local_558 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_558 & 0xfffffffffffffffe))(local_550,local_550,2);
      }
      local_558 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,&DAT_00685547,auStack_70);
    puVar4 = PTR_stored_vtable_007e52d0;
    local_578 = 0;
    if (*(code **)PTR_stored_vtable_007e52d0 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e52d0)(local_570,local_570,2);
    }
    local_578 = (ulong)puVar4 | 1;
    local_570[0] = PTR_Create_007e5828;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_578);
    if (local_578 != 0) {
      if (((local_578 & 1) == 0) && (*(code **)(local_578 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_578 & 0xfffffffffffffffe))(local_570,local_570,2);
      }
      local_578 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,"MonsterEntity",auStack_70);
    puVar4 = PTR_stored_vtable_007e5080;
    local_598 = 0;
    if (*(code **)PTR_stored_vtable_007e5080 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e5080)(local_590,local_590,2);
    }
    local_598 = (ulong)puVar4 | 1;
    local_590[0] = PTR_Create_007e7ba8;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_598);
    if (local_598 != 0) {
      if (((local_598 & 1) == 0) && (*(code **)(local_598 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_598 & 0xfffffffffffffffe))(local_590,local_590,2);
      }
      local_598 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,"Attack",auStack_70);
    puVar4 = PTR_stored_vtable_007e7ec0;
    local_5b8 = 0;
    if (*(code **)PTR_stored_vtable_007e7ec0 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e7ec0)(local_5b0,local_5b0,2);
    }
    local_5b8 = (ulong)puVar4 | 1;
    local_5b0[0] = PTR_Create_007e4988;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_5b8);
    if (local_5b8 != 0) {
      if (((local_5b8 & 1) == 0) && (*(code **)(local_5b8 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_5b8 & 0xfffffffffffffffe))(local_5b0,local_5b0,2);
      }
      local_5b8 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,"WalkingMonsterController",auStack_70);
    puVar4 = PTR_stored_vtable_007e6f30;
    local_5d8 = 0;
    if (*(code **)PTR_stored_vtable_007e6f30 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e6f30)(local_5d0,local_5d0,2);
    }
    local_5d8 = (ulong)puVar4 | 1;
    local_5d0[0] = PTR_Create_007e7fe0;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_5d8);
    if (local_5d8 != 0) {
      if (((local_5d8 & 1) == 0) && (*(code **)(local_5d8 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_5d8 & 0xfffffffffffffffe))(local_5d0,local_5d0,2);
      }
      local_5d8 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,&DAT_0068557f,auStack_70);
    puVar4 = PTR_stored_vtable_007e72a8;
    local_5f8 = 0;
    if (*(code **)PTR_stored_vtable_007e72a8 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e72a8)(local_5f0,local_5f0,2);
    }
    local_5f8 = (ulong)puVar4 | 1;
    local_5f0[0] = PTR_Create_007e7a28;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_5f8);
    if (local_5f8 != 0) {
      if (((local_5f8 & 1) == 0) && (*(code **)(local_5f8 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_5f8 & 0xfffffffffffffffe))(local_5f0,local_5f0,2);
      }
      local_5f8 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,"SnappingMonsterController",auStack_70);
    puVar4 = PTR_stored_vtable_007e6eb8;
    local_618 = 0;
    if (*(code **)PTR_stored_vtable_007e6eb8 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e6eb8)(local_610,local_610,2);
    }
    local_618 = (ulong)puVar4 | 1;
    local_610[0] = PTR_Create_007e7c70;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_618);
    if (local_618 != 0) {
      if (((local_618 & 1) == 0) && (*(code **)(local_618 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_618 & 0xfffffffffffffffe))(local_610,local_610,2);
      }
      local_618 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,"LeapingMonsterController",auStack_70);
    puVar4 = PTR_stored_vtable_007e6fd0;
    local_638 = 0;
    if (*(code **)PTR_stored_vtable_007e6fd0 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e6fd0)(local_630,local_630,2);
    }
    local_638 = (ulong)puVar4 | 1;
    local_630[0] = PTR_Create_007e59e0;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_638);
    if (local_638 != 0) {
      if (((local_638 & 1) == 0) && (*(code **)(local_638 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_638 & 0xfffffffffffffffe))(local_630,local_630,2);
      }
      local_638 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,"SkellyMonsterController",auStack_70);
    puVar4 = PTR_stored_vtable_007e5ba0;
    local_658 = 0;
    if (*(code **)PTR_stored_vtable_007e5ba0 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e5ba0)(local_650,local_650,2);
    }
    local_658 = (ulong)puVar4 | 1;
    local_650[0] = PTR_Create_007e5ad0;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_658);
    if (local_658 != 0) {
      if (((local_658 & 1) == 0) && (*(code **)(local_658 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_658 & 0xfffffffffffffffe))(local_650,local_650,2);
      }
      local_658 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,"StaticMonsterController",auStack_70);
    puVar4 = PTR_stored_vtable_007e6218;
    local_678 = 0;
    if (*(code **)PTR_stored_vtable_007e6218 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e6218)(local_670,local_670,2);
    }
    local_678 = (ulong)puVar4 | 1;
    local_670[0] = PTR_Create_007e6db8;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_678);
    if (local_678 != 0) {
      if (((local_678 & 1) == 0) && (*(code **)(local_678 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_678 & 0xfffffffffffffffe))(local_670,local_670,2);
      }
      local_678 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,"ShootingMonsterController",auStack_70);
    puVar4 = PTR_stored_vtable_007e6d58;
    local_698 = 0;
    if (*(code **)PTR_stored_vtable_007e6d58 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e6d58)(local_690,local_690,2);
    }
    local_698 = (ulong)puVar4 | 1;
    local_690[0] = PTR_Create_007e7d28;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_698);
    if (local_698 != 0) {
      if (((local_698 & 1) == 0) && (*(code **)(local_698 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_698 & 0xfffffffffffffffe))(local_690,local_690,2);
      }
      local_698 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,"ProjectileMonsterController",auStack_70);
    puVar4 = PTR_stored_vtable_007e7ac8;
    local_6b8 = 0;
    if (*(code **)PTR_stored_vtable_007e7ac8 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e7ac8)(local_6b0,local_6b0,2);
    }
    local_6b8 = (ulong)puVar4 | 1;
    local_6b0[0] = PTR_Create_007e5040;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_6b8);
    if (local_6b8 != 0) {
      if (((local_6b8 & 1) == 0) && (*(code **)(local_6b8 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_6b8 & 0xfffffffffffffffe))(local_6b0,local_6b0,2);
      }
      local_6b8 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,"BatMonsterController",auStack_70);
    puVar4 = PTR_stored_vtable_007e76f8;
    local_6d8 = 0;
    if (*(code **)PTR_stored_vtable_007e76f8 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e76f8)(local_6d0,local_6d0,2);
    }
    local_6d8 = (ulong)puVar4 | 1;
    local_6d0[0] = PTR_Create_007e5058;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_6d8);
    if (local_6d8 != 0) {
      if (((local_6d8 & 1) == 0) && (*(code **)(local_6d8 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_6d8 & 0xfffffffffffffffe))(local_6d0,local_6d0,2);
      }
      local_6d8 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,"BouncingMonsterController",auStack_70);
    puVar4 = PTR_stored_vtable_007e7630;
    local_6f8 = 0;
    if (*(code **)PTR_stored_vtable_007e7630 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e7630)(local_6f0,local_6f0,2);
    }
    local_6f8 = (ulong)puVar4 | 1;
    local_6f0[0] = PTR_Create_007e5df0;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_6f8);
    if (local_6f8 != 0) {
      if (((local_6f8 & 1) == 0) && (*(code **)(local_6f8 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_6f8 & 0xfffffffffffffffe))(local_6f0,local_6f0,2);
      }
      local_6f8 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,&DAT_00685661,auStack_70);
    puVar4 = PTR_stored_vtable_007e52c8;
    local_718 = 0;
    if (*(code **)PTR_stored_vtable_007e52c8 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e52c8)(local_710,local_710,2);
    }
    local_718 = (ulong)puVar4 | 1;
    local_710[0] = PTR_Create_007e4978;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_718);
    if (local_718 != 0) {
      if (((local_718 & 1) == 0) && (*(code **)(local_718 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_718 & 0xfffffffffffffffe))(local_710,local_710,2);
      }
      local_718 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,"GenericMonsterController",auStack_70);
    puVar4 = PTR_stored_vtable_007e60d0;
    local_738 = 0;
    if (*(code **)PTR_stored_vtable_007e60d0 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e60d0)(local_730,local_730,2);
    }
    local_738 = (ulong)puVar4 | 1;
    local_730[0] = PTR_Create_007e48b8;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_738);
    if (local_738 != 0) {
      if (((local_738 & 1) == 0) && (*(code **)(local_738 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_738 & 0xfffffffffffffffe))(local_730,local_730,2);
      }
      local_738 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,"ParticleEmitterComponent",auStack_740);
    puVar4 = PTR_stored_vtable_007e6928;
    local_760 = 0;
    if (*(code **)PTR_stored_vtable_007e6928 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e6928)(local_758,local_758,2);
    }
    puVar6 = PTR_Create_007e6c10;
    local_760 = (ulong)puVar4 | 1;
    local_758[0] = PTR_Create_007e6c10;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_760);
    if (local_760 != 0) {
      if (((local_760 & 1) == 0) && (*(code **)(local_760 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_760 & 0xfffffffffffffffe))(local_758,local_758,2);
      }
      local_760 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,"ParticleComponent",auStack_740);
    puVar8 = PTR_stored_vtable_007e7430;
    local_780 = 0;
    if (*(code **)PTR_stored_vtable_007e7430 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e7430)(local_778,local_778,2);
    }
    puVar7 = PTR_Create_007e57e0;
    local_780 = (ulong)puVar8 | 1;
    local_778[0] = PTR_Create_007e57e0;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_780);
    if (local_780 != 0) {
      if (((local_780 & 1) == 0) && (*(code **)(local_780 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_780 & 0xfffffffffffffffe))(local_778,local_778,2);
      }
      local_780 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,"ParticleEmitter",auStack_70);
    local_7a0 = 0;
    if (*(code **)puVar4 != (code *)0x0) {
      (**(code **)puVar4)(local_798,local_798,2);
    }
    local_7a0 = (ulong)puVar4 | 1;
    local_798[0] = puVar6;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_7a0);
    if (local_7a0 != 0) {
      if (((local_7a0 & 1) == 0) && (*(code **)(local_7a0 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_7a0 & 0xfffffffffffffffe))(local_798,local_798,2);
      }
      local_7a0 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,"Particle",auStack_70);
    local_7c0 = 0;
    if (*(code **)puVar8 != (code *)0x0) {
      (**(code **)puVar8)(local_7b8,local_7b8,2);
    }
    local_7c0 = (ulong)puVar8 | 1;
    local_7b8[0] = puVar7;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_7c0);
    if (local_7c0 != 0) {
      if (((local_7c0 & 1) == 0) && (*(code **)(local_7c0 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_7c0 & 0xfffffffffffffffe))(local_7b8,local_7b8,2);
      }
      local_7c0 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,"MagicParticleEmitter",auStack_70);
    puVar4 = PTR_stored_vtable_007e4958;
    local_7e0 = 0;
    if (*(code **)PTR_stored_vtable_007e4958 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e4958)(local_7d8,local_7d8,2);
    }
    local_7e0 = (ulong)puVar4 | 1;
    local_7d8[0] = PTR_Create_007e5910;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_7e0);
    if (local_7e0 != 0) {
      if (((local_7e0 & 1) == 0) && (*(code **)(local_7e0 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_7e0 & 0xfffffffffffffffe))(local_7d8,local_7d8,2);
      }
      local_7e0 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,"FireEmitter",auStack_70);
    puVar4 = PTR_stored_vtable_007e7288;
    local_800 = 0;
    if (*(code **)PTR_stored_vtable_007e7288 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e7288)(local_7f8,local_7f8,2);
    }
    local_800 = (ulong)puVar4 | 1;
    local_7f8[0] = PTR_Create_007e4788;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_800);
    if (local_800 != 0) {
      if (((local_800 & 1) == 0) && (*(code **)(local_800 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_800 & 0xfffffffffffffffe))(local_7f8,local_7f8,2);
      }
      local_800 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,"SimpleGlow",auStack_70);
    puVar4 = PTR_stored_vtable_007e59f8;
    local_820 = 0;
    if (*(code **)PTR_stored_vtable_007e59f8 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e59f8)(local_818,local_818,2);
    }
    local_820 = (ulong)puVar4 | 1;
    local_818[0] = PTR_Create_007e7948;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_820);
    if (local_820 != 0) {
      if (((local_820 & 1) == 0) && (*(code **)(local_820 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_820 & 0xfffffffffffffffe))(local_818,local_818,2);
      }
      local_820 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,"ParticleObject",auStack_70);
    puVar4 = PTR_stored_vtable_007e5660;
    local_840 = 0;
    if (*(code **)PTR_stored_vtable_007e5660 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e5660)(local_838,local_838,2);
    }
    local_840 = (ulong)puVar4 | 1;
    local_838[0] = PTR_Create_007e7fd0;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_840);
    if (local_840 != 0) {
      if (((local_840 & 1) == 0) && (*(code **)(local_840 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_840 & 0xfffffffffffffffe))(local_838,local_838,2);
      }
      local_840 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,"OrbitController",auStack_70);
    puVar4 = PTR_stored_vtable_007e77a0;
    local_860 = 0;
    if (*(code **)PTR_stored_vtable_007e77a0 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e77a0)(local_858,local_858,2);
    }
    local_860 = (ulong)puVar4 | 1;
    local_858[0] = PTR_Create_007e7440;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_860);
    if (local_860 != 0) {
      if (((local_860 & 1) == 0) && (*(code **)(local_860 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_860 & 0xfffffffffffffffe))(local_858,local_858,2);
      }
      local_860 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,"PortalEffect",auStack_70);
    puVar4 = PTR_stored_vtable_007e71f0;
    local_880 = 0;
    if (*(code **)PTR_stored_vtable_007e71f0 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e71f0)(local_878,local_878,2);
    }
    local_880 = (ulong)puVar4 | 1;
    local_878[0] = PTR_Create_007e6540;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_880);
    if (local_880 != 0) {
      if (((local_880 & 1) == 0) && (*(code **)(local_880 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_880 & 0xfffffffffffffffe))(local_878,local_878,2);
      }
      local_880 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,"ParticleField",auStack_70);
    puVar4 = PTR_stored_vtable_007e6b40;
    local_8a0 = 0;
    if (*(code **)PTR_stored_vtable_007e6b40 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e6b40)(local_898,local_898,2);
    }
    local_8a0 = (ulong)puVar4 | 1;
    local_898[0] = PTR_Create_007e6178;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_8a0);
    if (local_8a0 != 0) {
      if (((local_8a0 & 1) == 0) && (*(code **)(local_8a0 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_8a0 & 0xfffffffffffffffe))(local_898,local_898,2);
      }
      local_8a0 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,"SoundEffect",auStack_70);
    puVar4 = PTR_stored_vtable_007e7958;
    local_8c0 = 0;
    if (*(code **)PTR_stored_vtable_007e7958 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e7958)(local_8b8,local_8b8,2);
    }
    local_8c0 = (ulong)puVar4 | 1;
    local_8b8[0] = PTR_Create_007e7800;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_8c0);
    if (local_8c0 != 0) {
      if (((local_8c0 & 1) == 0) && (*(code **)(local_8c0 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_8c0 & 0xfffffffffffffffe))(local_8b8,local_8b8,2);
      }
      local_8c0 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,"PortalComponent",auStack_740);
    puVar4 = PTR_stored_vtable_007e6468;
    local_8e0 = 0;
    if (*(code **)PTR_stored_vtable_007e6468 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e6468)(local_8d8,local_8d8,2);
    }
    puVar6 = PTR_Create_007e4d20;
    local_8e0 = (ulong)puVar4 | 1;
    local_8d8[0] = PTR_Create_007e4d20;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_8e0);
    if (local_8e0 != 0) {
      if (((local_8e0 & 1) == 0) && (*(code **)(local_8e0 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_8e0 & 0xfffffffffffffffe))(local_8d8,local_8d8,2);
      }
      local_8e0 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,"Portal",auStack_70);
    local_900 = 0;
    if (*(code **)puVar4 != (code *)0x0) {
      (**(code **)puVar4)(local_8f8,local_8f8,2);
    }
    local_900 = (ulong)puVar4 | 1;
    local_8f8[0] = puVar6;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_900);
    if (local_900 != 0) {
      if (((local_900 & 1) == 0) && (*(code **)(local_900 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_900 & 0xfffffffffffffffe))(local_8f8,local_8f8,2);
      }
      local_900 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,"SpawnPoint",auStack_70);
    puVar4 = PTR_stored_vtable_007e70a8;
    local_920 = 0;
    if (*(code **)PTR_stored_vtable_007e70a8 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e70a8)(local_918,local_918,2);
    }
    local_920 = (ulong)puVar4 | 1;
    local_918[0] = PTR_Create_007e4cb8;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_920);
    if (local_920 != 0) {
      if (((local_920 & 1) == 0) && (*(code **)(local_920 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_920 & 0xfffffffffffffffe))(local_918,local_918,2);
      }
      local_920 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,"Touchable",auStack_70);
    puVar4 = PTR_stored_vtable_007e6298;
    local_940 = 0;
    if (*(code **)PTR_stored_vtable_007e6298 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e6298)(local_938,local_938,2);
    }
    local_940 = (ulong)puVar4 | 1;
    local_938[0] = PTR_Create_007e5ab8;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_940);
    if (local_940 != 0) {
      if (((local_940 & 1) == 0) && (*(code **)(local_940 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_940 & 0xfffffffffffffffe))(local_938,local_938,2);
      }
      local_940 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,"PressureTrigger",auStack_70);
    puVar4 = PTR_stored_vtable_007e7b68;
    local_960 = 0;
    if (*(code **)PTR_stored_vtable_007e7b68 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e7b68)(local_958,local_958,2);
    }
    local_960 = (ulong)puVar4 | 1;
    local_958[0] = PTR_Create_007e7c00;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_960);
    if (local_960 != 0) {
      if (((local_960 & 1) == 0) && (*(code **)(local_960 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_960 & 0xfffffffffffffffe))(local_958,local_958,2);
      }
      local_960 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,"DoorController",auStack_70);
    puVar4 = PTR_stored_vtable_007e7238;
    local_980 = 0;
    if (*(code **)PTR_stored_vtable_007e7238 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e7238)(local_978,local_978,2);
    }
    local_980 = (ulong)puVar4 | 1;
    local_978[0] = PTR_Create_007e5038;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_980);
    if (local_980 != 0) {
      if (((local_980 & 1) == 0) && (*(code **)(local_980 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_980 & 0xfffffffffffffffe))(local_978,local_978,2);
      }
      local_980 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,"RotatingBackground",auStack_70);
    puVar4 = PTR_stored_vtable_007e7408;
    local_9a0 = 0;
    if (*(code **)PTR_stored_vtable_007e7408 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e7408)(local_998,local_998,2);
    }
    local_9a0 = (ulong)puVar4 | 1;
    local_998[0] = PTR_Create_007e5e78;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_9a0);
    if (local_9a0 != 0) {
      if (((local_9a0 & 1) == 0) && (*(code **)(local_9a0 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_9a0 & 0xfffffffffffffffe))(local_998,local_998,2);
      }
      local_9a0 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,&DAT_00685732,auStack_70);
    puVar4 = PTR_stored_vtable_007e62d8;
    local_9c0 = 0;
    if (*(code **)PTR_stored_vtable_007e62d8 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e62d8)(local_9b8,local_9b8,2);
    }
    local_9c0 = (ulong)puVar4 | 1;
    local_9b8[0] = PTR_Create_007e6cb8;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_9c0);
    if (local_9c0 != 0) {
      if (((local_9c0 & 1) == 0) && (*(code **)(local_9c0 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_9c0 & 0xfffffffffffffffe))(local_9b8,local_9b8,2);
      }
      local_9c0 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,"ItemDrop",auStack_70);
    puVar4 = PTR_stored_vtable_007e75b8;
    local_9e0 = 0;
    if (*(code **)PTR_stored_vtable_007e75b8 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e75b8)(apuStack_9d8,apuStack_9d8,2);
    }
    puVar6 = PTR_Create_007e5570;
    local_9e0 = (ulong)puVar4 | 1;
    apuStack_9d8[0] = PTR_Create_007e5570;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_9e0);
    if (local_9e0 != 0) {
      if (((local_9e0 & 1) == 0) && (*(code **)(local_9e0 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_9e0 & 0xfffffffffffffffe))(apuStack_9d8,apuStack_9d8,2);
      }
      local_9e0 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,"ItemDropComponent",auStack_740);
    local_a00 = 0;
    if (*(code **)puVar4 != (code *)0x0) {
      (**(code **)puVar4)(apuStack_9f8,apuStack_9f8,2);
    }
    local_a00 = (ulong)puVar4 | 1;
    apuStack_9f8[0] = puVar6;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_a00);
    if (local_a00 != 0) {
      if (((local_a00 & 1) == 0) && (*(code **)(local_a00 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_a00 & 0xfffffffffffffffe))(apuStack_9f8,apuStack_9f8,2);
      }
      local_a00 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,"Program",auStack_70);
    puVar4 = PTR_stored_vtable_007e7e60;
    local_a20 = 0;
    if (*(code **)PTR_stored_vtable_007e7e60 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e7e60)(apuStack_a18,apuStack_a18,2);
    }
    local_a20 = (ulong)puVar4 | 1;
    apuStack_a18[0] = PTR_Create_007e49f0;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_a20);
    if (local_a20 != 0) {
      if (((local_a20 & 1) == 0) && (*(code **)(local_a20 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_a20 & 0xfffffffffffffffe))(apuStack_a18,apuStack_a18,2);
      }
      local_a20 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,"OverlayText",auStack_70);
    puVar4 = PTR_stored_vtable_007e6ca8;
    local_a40 = 0;
    if (*(code **)PTR_stored_vtable_007e6ca8 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e6ca8)(apuStack_a38,apuStack_a38,2);
    }
    local_a40 = (ulong)puVar4 | 1;
    apuStack_a38[0] = PTR_Create_007e5528;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_a40);
    if (local_a40 != 0) {
      if (((local_a40 & 1) == 0) && (*(code **)(local_a40 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_a40 & 0xfffffffffffffffe))(apuStack_a38,apuStack_a38,2);
      }
      local_a40 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,"TextBubble",auStack_70);
    puVar4 = PTR_stored_vtable_007e4d58;
    local_a60 = 0;
    if (*(code **)PTR_stored_vtable_007e4d58 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e4d58)(apuStack_a58,apuStack_a58,2);
    }
    local_a60 = (ulong)puVar4 | 1;
    apuStack_a58[0] = PTR_Create_007e7ff0;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_a60);
    if (local_a60 != 0) {
      if (((local_a60 & 1) == 0) && (*(code **)(local_a60 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_a60 & 0xfffffffffffffffe))(apuStack_a58,apuStack_a58,2);
      }
      local_a60 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,0x6841c7,auStack_70);
    puVar4 = PTR_stored_vtable_007e67f8;
    local_a80 = 0;
    if (*(code **)PTR_stored_vtable_007e67f8 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e67f8)(apuStack_a78,apuStack_a78,2);
    }
    local_a80 = (ulong)puVar4 | 1;
    apuStack_a78[0] = PTR_Create_007e4d10;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_a80);
    if (local_a80 != 0) {
      if (((local_a80 & 1) == 0) && (*(code **)(local_a80 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_a80 & 0xfffffffffffffffe))(apuStack_a78,apuStack_a78,2);
      }
      local_a80 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,"MagicBomb",auStack_70);
    puVar4 = PTR_stored_vtable_007e5d08;
    local_aa0 = 0;
    if (*(code **)PTR_stored_vtable_007e5d08 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e5d08)(apuStack_a98,apuStack_a98,2);
    }
    local_aa0 = (ulong)puVar4 | 1;
    apuStack_a98[0] = PTR_Create_007e5650;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_aa0);
    if (local_aa0 != 0) {
      if (((local_aa0 & 1) == 0) && (*(code **)(local_aa0 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_aa0 & 0xfffffffffffffffe))(apuStack_a98,apuStack_a98,2);
      }
      local_aa0 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,"MagicBolt",auStack_70);
    puVar4 = PTR_stored_vtable_007e4d08;
    local_ac0 = 0;
    if (*(code **)PTR_stored_vtable_007e4d08 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e4d08)(apuStack_ab8,apuStack_ab8,2);
    }
    local_ac0 = (ulong)puVar4 | 1;
    apuStack_ab8[0] = PTR_Create_007e5128;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_ac0);
    if (local_ac0 != 0) {
      if (((local_ac0 & 1) == 0) && (*(code **)(local_ac0 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_ac0 & 0xfffffffffffffffe))(apuStack_ab8,apuStack_ab8,2);
      }
      local_ac0 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,"MagicHookshot",auStack_70);
    puVar4 = PTR_stored_vtable_007e6538;
    local_ae0 = 0;
    if (*(code **)PTR_stored_vtable_007e6538 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e6538)(apuStack_ad8,apuStack_ad8,2);
    }
    local_ae0 = (ulong)puVar4 | 1;
    apuStack_ad8[0] = PTR_Create_007e7050;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_ae0);
    if (local_ae0 != 0) {
      if (((local_ae0 & 1) == 0) && (*(code **)(local_ae0 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_ae0 & 0xfffffffffffffffe))(apuStack_ad8,apuStack_ad8,2);
      }
      local_ae0 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,"DimensionSpell",auStack_70);
    puVar4 = PTR_stored_vtable_007e7f48;
    local_b00 = 0;
    if (*(code **)PTR_stored_vtable_007e7f48 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e7f48)(apuStack_af8,apuStack_af8,2);
    }
    local_b00 = (ulong)puVar4 | 1;
    apuStack_af8[0] = PTR_Create_007e4790;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_b00);
    if (local_b00 != 0) {
      if (((local_b00 & 1) == 0) && (*(code **)(local_b00 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_b00 & 0xfffffffffffffffe))(apuStack_af8,apuStack_af8,2);
      }
      local_b00 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,"DimensionObject",auStack_70);
    puVar4 = PTR_stored_vtable_007e5aa8;
    local_b20 = 0;
    if (*(code **)PTR_stored_vtable_007e5aa8 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e5aa8)(apuStack_b18,apuStack_b18,2);
    }
    local_b20 = (ulong)puVar4 | 1;
    apuStack_b18[0] = PTR_Create_007e7340;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_b20);
    if (local_b20 != 0) {
      if (((local_b20 & 1) == 0) && (*(code **)(local_b20 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_b20 & 0xfffffffffffffffe))(apuStack_b18,apuStack_b18,2);
      }
      local_b20 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,"MagicExplosion",auStack_70);
    puVar4 = PTR_stored_vtable_007e7048;
    local_b40 = 0;
    if (*(code **)PTR_stored_vtable_007e7048 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e7048)(apuStack_b38,apuStack_b38,2);
    }
    local_b40 = (ulong)puVar4 | 1;
    apuStack_b38[0] = PTR_Create_007e47f8;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_b40);
    if (local_b40 != 0) {
      if (((local_b40 & 1) == 0) && (*(code **)(local_b40 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_b40 & 0xfffffffffffffffe))(apuStack_b38,apuStack_b38,2);
      }
      local_b40 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,"Skill",auStack_70);
    puVar4 = PTR_stored_vtable_007e7278;
    local_b60 = 0;
    if (*(code **)PTR_stored_vtable_007e7278 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e7278)(apuStack_b58,apuStack_b58,2);
    }
    local_b60 = (ulong)puVar4 | 1;
    apuStack_b58[0] = PTR_Create_007e50b8;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_b60);
    if (local_b60 != 0) {
      if (((local_b60 & 1) == 0) && (*(code **)(local_b60 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_b60 & 0xfffffffffffffffe))(apuStack_b58,apuStack_b58,2);
      }
      local_b60 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,"MagicSpellCast",auStack_70);
    puVar4 = PTR_stored_vtable_007e5fe8;
    local_b80 = 0;
    if (*(code **)PTR_stored_vtable_007e5fe8 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e5fe8)(apuStack_b78,apuStack_b78,2);
    }
    local_b80 = (ulong)puVar4 | 1;
    apuStack_b78[0] = PTR_Create_007e73e0;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_b80);
    if (local_b80 != 0) {
      if (((local_b80 & 1) == 0) && (*(code **)(local_b80 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_b80 & 0xfffffffffffffffe))(apuStack_b78,apuStack_b78,2);
      }
      local_b80 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,"FireBreath",auStack_70);
    puVar4 = PTR_stored_vtable_007e7920;
    local_ba0 = 0;
    if (*(code **)PTR_stored_vtable_007e7920 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e7920)(apuStack_b98,apuStack_b98,2);
    }
    local_ba0 = (ulong)puVar4 | 1;
    apuStack_b98[0] = PTR_Create_007e6208;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_ba0);
    if (local_ba0 != 0) {
      if (((local_ba0 & 1) == 0) && (*(code **)(local_ba0 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_ba0 & 0xfffffffffffffffe))(apuStack_b98,apuStack_b98,2);
      }
      local_ba0 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    FUN_00666bb8(&local_78,"ProjectileController",auStack_70);
    puVar4 = PTR_stored_vtable_007e63d0;
    local_bc0 = 0;
    if (*(code **)PTR_stored_vtable_007e63d0 != (code *)0x0) {
      (**(code **)PTR_stored_vtable_007e63d0)(apuStack_bb8,apuStack_bb8,2);
    }
    local_bc0 = (ulong)puVar4 | 1;
    apuStack_bb8[0] = PTR_Create_007e6ed8;
    ComponentFactory::RegisterComponentClass(pCVar9,&local_78,&local_bc0);
    if (local_bc0 != 0) {
      if (((local_bc0 & 1) == 0) && (*(code **)(local_bc0 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_bc0 & 0xfffffffffffffffe))(apuStack_bb8,apuStack_bb8,2);
      }
      local_bc0 = 0;
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar10 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


