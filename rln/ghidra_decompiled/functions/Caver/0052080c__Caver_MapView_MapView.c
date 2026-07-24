/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0052080c
 * Function: Caver::MapView::MapView
 * Signature: undefined __thiscall MapView(MapView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::MapView::MapView() */

void __thiscall Caver::MapView::MapView(MapView *this)

{
  MapView *__s;
  intrusive_ptr *piVar1;
  MapView *__s_00;
  intrusive_ptr *piVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  string *psVar7;
  GUIFrameView *this_00;
  long *plVar8;
  long lVar9;
  code *pcVar10;
  int *piVar11;
  int iVar12;
  long *plVar13;
  undefined1 auStack_98 [8];
  long local_90;
  long *local_88;
  long *local_80;
  long *plStack_78;
  undefined1 auStack_70 [8];
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  GUIView::GUIView((GUIView *)this);
  *(undefined **)this = PTR_vtable_007e7fa8 + 0x10;
  this[0x180] = (MapView)0x0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined4 *)(this + 0x1b8) = 0;
  __s = this + 0x2a8;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x1b0) = 0;
  *(undefined8 *)(this + 0x1a8) = 0;
  piVar1 = (intrusive_ptr *)(this + 0x2e8);
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 0x1d0) = 0;
  *(undefined8 *)(this + 0x1c8) = 0;
  this[0x1d8] = (MapView)0x0;
  *(undefined8 *)(this + 0x1c0) = 0;
  *(undefined4 *)(this + 0x210) = 0;
  *(undefined8 *)(this + 0x1f8) = 0;
  *(undefined8 *)(this + 0x1f0) = 0;
  *(undefined8 *)(this + 0x208) = 0;
  *(undefined8 *)(this + 0x200) = 0;
  *(undefined8 *)(this + 0x1e8) = 0;
  *(undefined8 *)(this + 0x1e0) = 0;
  this[0x230] = (MapView)0x0;
  *(undefined8 *)(this + 0x228) = 0;
  *(undefined8 *)(this + 0x220) = 0;
  *(undefined8 *)(this + 0x218) = 0;
  *(undefined8 *)(this + 0x260) = 0;
  *(undefined8 *)(this + 600) = 0;
  __s_00 = this + 0x348;
  *(undefined8 *)(this + 0x250) = 0;
  *(undefined8 *)(this + 0x248) = 0;
  piVar2 = (intrusive_ptr *)(this + 0x368);
  *(undefined4 *)(this + 0x268) = 0;
  *(undefined8 *)(this + 0x240) = 0;
  *(undefined8 *)(this + 0x238) = 0;
  this[0x288] = (MapView)0x0;
  *(undefined8 *)(this + 0x280) = 0;
  *(undefined8 *)(this + 0x278) = 0;
  *(undefined8 *)(this + 0x270) = 0;
  *(undefined8 *)(this + 0x298) = 0;
  *(undefined8 *)(this + 0x290) = 0;
  this[0x340] = (MapView)0x0;
  *(undefined8 *)(this + 0x338) = 0;
  *(undefined8 *)(this + 0x330) = 0;
  *(undefined8 *)(this + 0x328) = 0;
  this[0x3f8] = (MapView)0x0;
  memset(this + 0xf0,0,0x74);
  memset(__s,0,0x7c);
  memset(__s_00,0,0x91);
  *(undefined8 *)(this + 1000) = 0;
  *(undefined8 *)(this + 0x3e0) = 0;
  *(undefined8 *)(this + 0x410) = 0;
  *(undefined8 *)(this + 0x408) = 0;
  this[0x418] = (MapView)0x0;
  *(undefined8 *)(this + 0x400) = 0;
  psVar7 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_88,"ui_map_node",auStack_70);
  TextureLibrary::TextureForName(psVar7,SUB81(&local_88,0));
  if (local_80 != (long *)0x0) {
    *(int *)(local_80 + 1) = (int)local_80[1] + 1;
  }
  plVar8 = *(long **)__s_00;
  *(long **)__s_00 = local_80;
  if ((plVar8 != (long *)0x0) &&
     (iVar12 = (int)plVar8[1] + -1, *(int *)(plVar8 + 1) = iVar12, iVar12 == 0)) {
    (**(code **)(*plVar8 + 8))(plVar8);
  }
  if ((local_80 != (long *)0x0) &&
     (iVar12 = (int)local_80[1] + -1, *(int *)(local_80 + 1) = iVar12, iVar12 == 0)) {
    (**(code **)(*local_80 + 8))();
  }
  puVar6 = PTR_DAT_007e5de8;
  if (local_88 + -3 != (long *)PTR_DAT_007e5de8) {
    plVar8 = local_88 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar12 = (int)*plVar8;
      *(int *)plVar8 = iVar12 + -1;
    }
    else {
      do {
        iVar12 = (int)*plVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *(int *)plVar8 = iVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar12 < 1) {
      operator_delete(local_88 + -3);
    }
  }
  psVar7 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_88,"ui_map_path",auStack_70);
  TextureLibrary::TextureForName(psVar7,SUB81(&local_88,0));
  if (local_80 != (long *)0x0) {
    *(int *)(local_80 + 1) = (int)local_80[1] + 1;
  }
  plVar8 = *(long **)piVar2;
  *(long **)piVar2 = local_80;
  if ((plVar8 != (long *)0x0) &&
     (iVar12 = (int)plVar8[1] + -1, *(int *)(plVar8 + 1) = iVar12, iVar12 == 0)) {
    (**(code **)(*plVar8 + 8))(plVar8);
  }
  if ((local_80 != (long *)0x0) &&
     (iVar12 = (int)local_80[1] + -1, *(int *)(local_80 + 1) = iVar12, iVar12 == 0)) {
    (**(code **)(*local_80 + 8))();
  }
  if (local_88 + -3 != (long *)puVar6) {
    plVar8 = local_88 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar12 = (int)*plVar8;
      *(int *)plVar8 = iVar12 + -1;
    }
    else {
      do {
        iVar12 = (int)*plVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *(int *)plVar8 = iVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar12 < 1) {
      operator_delete(local_88 + -3);
                    /* catch() { ... } // from try @ 00521c64 with catch @ 00521c34 */
    }
  }
  psVar7 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_88,"ui_map_icon_town",auStack_70);
  TextureLibrary::TextureForName(psVar7,SUB81(&local_88,0));
  if (local_80 != (long *)0x0) {
    *(int *)(local_80 + 1) = (int)local_80[1] + 1;
  }
  plVar8 = *(long **)(this + 0x350);
  *(long **)(this + 0x350) = local_80;
  if ((plVar8 != (long *)0x0) &&
     (iVar12 = (int)plVar8[1] + -1, *(int *)(plVar8 + 1) = iVar12, iVar12 == 0)) {
    (**(code **)(*plVar8 + 8))(plVar8);
  }
  if ((local_80 != (long *)0x0) &&
     (iVar12 = (int)local_80[1] + -1, *(int *)(local_80 + 1) = iVar12, iVar12 == 0)) {
    (**(code **)(*local_80 + 8))();
  }
  if (local_88 + -3 != (long *)puVar6) {
    plVar8 = local_88 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar12 = (int)*plVar8;
      *(int *)plVar8 = iVar12 + -1;
    }
    else {
      do {
        iVar12 = (int)*plVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *(int *)plVar8 = iVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar12 < 1) {
                    /* try { // try from 00521c50 to 00621c63 has its CatchHandler @ 00521c88 */
      operator_delete(local_88 + -3);
    }
  }
  psVar7 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_88,"ui_map_icon_boss",auStack_70);
  TextureLibrary::TextureForName(psVar7,SUB81(&local_88,0));
  if (local_80 != (long *)0x0) {
    *(int *)(local_80 + 1) = (int)local_80[1] + 1;
  }
  plVar8 = *(long **)(this + 0x358);
  *(long **)(this + 0x358) = local_80;
  if ((plVar8 != (long *)0x0) &&
     (iVar12 = (int)plVar8[1] + -1, *(int *)(plVar8 + 1) = iVar12, iVar12 == 0)) {
    (**(code **)(*plVar8 + 8))(plVar8);
  }
  if ((local_80 != (long *)0x0) &&
     (iVar12 = (int)local_80[1] + -1, *(int *)(local_80 + 1) = iVar12, iVar12 == 0)) {
    (**(code **)(*local_80 + 8))();
  }
  if (local_88 + -3 != (long *)puVar6) {
    plVar8 = local_88 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar12 = (int)*plVar8;
      *(int *)plVar8 = iVar12 + -1;
    }
    else {
      do {
        iVar12 = (int)*plVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *(int *)plVar8 = iVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
                    /* try { // try from 00521c64 to 00621c8b has its CatchHandler @ 00521c34 */
    if (iVar12 < 1) {
      operator_delete(local_88 + -3);
    }
  }
  psVar7 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_88,"ui_map_icon_locked",auStack_70);
  TextureLibrary::TextureForName(psVar7,SUB81(&local_88,0));
  if (local_80 != (long *)0x0) {
    *(int *)(local_80 + 1) = (int)local_80[1] + 1;
  }
  plVar8 = *(long **)(this + 0x360);
  *(long **)(this + 0x360) = local_80;
  if ((plVar8 != (long *)0x0) &&
     (iVar12 = (int)plVar8[1] + -1, *(int *)(plVar8 + 1) = iVar12, iVar12 == 0)) {
    (**(code **)(*plVar8 + 8))(plVar8);
  }
  if ((local_80 != (long *)0x0) &&
     (iVar12 = (int)local_80[1] + -1, *(int *)(local_80 + 1) = iVar12, iVar12 == 0)) {
    (**(code **)(*local_80 + 8))();
  }
  if (local_88 + -3 != (long *)puVar6) {
    plVar8 = local_88 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar12 = (int)*plVar8;
      *(int *)plVar8 = iVar12 + -1;
    }
    else {
      do {
        iVar12 = (int)*plVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *(int *)plVar8 = iVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
                    /* catch() { ... } // from try @ 00521c50 with catch @ 00521c88 */
    if (iVar12 < 1) {
      operator_delete(local_88 + -3);
    }
  }
  psVar7 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_88,"ui_map_icon_checkmark",auStack_70);
  TextureLibrary::TextureForName(psVar7,SUB81(&local_88,0));
  if (local_80 != (long *)0x0) {
    *(int *)(local_80 + 1) = (int)local_80[1] + 1;
  }
  plVar8 = *(long **)(this + 0x370);
  *(long **)(this + 0x370) = local_80;
  if ((plVar8 != (long *)0x0) &&
     (iVar12 = (int)plVar8[1] + -1, *(int *)(plVar8 + 1) = iVar12, iVar12 == 0)) {
    (**(code **)(*plVar8 + 8))(plVar8);
  }
  if ((local_80 != (long *)0x0) &&
     (iVar12 = (int)local_80[1] + -1, *(int *)(local_80 + 1) = iVar12, iVar12 == 0)) {
    (**(code **)(*local_80 + 8))();
  }
  if (local_88 + -3 != (long *)puVar6) {
    plVar8 = local_88 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar12 = (int)*plVar8;
      *(int *)plVar8 = iVar12 + -1;
    }
    else {
      do {
        iVar12 = (int)*plVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *(int *)plVar8 = iVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar12 < 1) {
      operator_delete(local_88 + -3);
    }
  }
  psVar7 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_88,"ui_map_icon_quest",auStack_70);
  TextureLibrary::TextureForName(psVar7,SUB81(&local_88,0));
  if (local_80 != (long *)0x0) {
    *(int *)(local_80 + 1) = (int)local_80[1] + 1;
  }
  plVar8 = *(long **)(this + 0x378);
  *(long **)(this + 0x378) = local_80;
  if ((plVar8 != (long *)0x0) &&
     (iVar12 = (int)plVar8[1] + -1, *(int *)(plVar8 + 1) = iVar12, iVar12 == 0)) {
    (**(code **)(*plVar8 + 8))(plVar8);
  }
  if ((local_80 != (long *)0x0) &&
     (iVar12 = (int)local_80[1] + -1, *(int *)(local_80 + 1) = iVar12, iVar12 == 0)) {
    (**(code **)(*local_80 + 8))();
  }
  if (local_88 + -3 != (long *)puVar6) {
    plVar8 = local_88 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar12 = (int)*plVar8;
      *(int *)plVar8 = iVar12 + -1;
    }
    else {
      do {
        iVar12 = (int)*plVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *(int *)plVar8 = iVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar12 < 1) {
                    /* catch() { ... } // from try @ 00521d1c with catch @ 00521ccc */
      operator_delete(local_88 + -3);
    }
  }
  psVar7 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_88,"ui_map_icon_portal",auStack_70);
  TextureLibrary::TextureForName(psVar7,SUB81(&local_88,0));
  if (local_80 != (long *)0x0) {
    *(int *)(local_80 + 1) = (int)local_80[1] + 1;
  }
  plVar8 = *(long **)(this + 0x380);
  *(long **)(this + 0x380) = local_80;
  if ((plVar8 != (long *)0x0) &&
     (iVar12 = (int)plVar8[1] + -1, *(int *)(plVar8 + 1) = iVar12, iVar12 == 0)) {
    (**(code **)(*plVar8 + 8))(plVar8);
  }
  if ((local_80 != (long *)0x0) &&
     (iVar12 = (int)local_80[1] + -1, *(int *)(local_80 + 1) = iVar12, iVar12 == 0)) {
    (**(code **)(*local_80 + 8))();
  }
  if (local_88 + -3 != (long *)puVar6) {
    plVar8 = local_88 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar12 = (int)*plVar8;
      *(int *)plVar8 = iVar12 + -1;
    }
    else {
      do {
        iVar12 = (int)*plVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *(int *)plVar8 = iVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar12 < 1) {
      operator_delete(local_88 + -3);
    }
  }
  psVar7 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_88,"ui_map_icon_portal_big",auStack_70);
  TextureLibrary::TextureForName(psVar7,SUB81(&local_88,0));
  if (local_80 != (long *)0x0) {
    *(int *)(local_80 + 1) = (int)local_80[1] + 1;
  }
  plVar8 = *(long **)(this + 0x388);
  *(long **)(this + 0x388) = local_80;
  if ((plVar8 != (long *)0x0) &&
     (iVar12 = (int)plVar8[1] + -1, *(int *)(plVar8 + 1) = iVar12, iVar12 == 0)) {
    (**(code **)(*plVar8 + 8))(plVar8);
  }
  if ((local_80 != (long *)0x0) &&
     (iVar12 = (int)local_80[1] + -1, *(int *)(local_80 + 1) = iVar12, iVar12 == 0)) {
    (**(code **)(*local_80 + 8))();
  }
  if (local_88 + -3 != (long *)puVar6) {
    plVar8 = local_88 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar12 = (int)*plVar8;
                    /* try { // try from 00521d00 to 00621d03 has its CatchHandler @ 00521d10 */
      *(int *)plVar8 = iVar12 + -1;
    }
    else {
      do {
        iVar12 = (int)*plVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *(int *)plVar8 = iVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar12 < 1) {
                    /* catch() { ... } // from try @ 00521d00 with catch @ 00521d10 */
      operator_delete(local_88 + -3);
                    /* try { // try from 00521d14 to 00621d1b has its CatchHandler @ 00521d24 */
    }
  }
  psVar7 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_88,"ui_map_icon_treasure",auStack_70);
  TextureLibrary::TextureForName(psVar7,SUB81(&local_88,0));
  if (local_80 != (long *)0x0) {
    *(int *)(local_80 + 1) = (int)local_80[1] + 1;
  }
  plVar8 = *(long **)(this + 0x390);
  *(long **)(this + 0x390) = local_80;
  if ((plVar8 != (long *)0x0) &&
     (iVar12 = (int)plVar8[1] + -1, *(int *)(plVar8 + 1) = iVar12, iVar12 == 0)) {
    (**(code **)(*plVar8 + 8))(plVar8);
  }
  if ((local_80 != (long *)0x0) &&
     (iVar12 = (int)local_80[1] + -1, *(int *)(local_80 + 1) = iVar12, iVar12 == 0)) {
    (**(code **)(*local_80 + 8))();
  }
  if (local_88 + -3 != (long *)puVar6) {
    plVar8 = local_88 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar12 = (int)*plVar8;
                    /* try { // try from 00521d1c to 00621d27 has its CatchHandler @ 00521ccc */
      *(int *)plVar8 = iVar12 + -1;
    }
    else {
      do {
        iVar12 = (int)*plVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *(int *)plVar8 = iVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
                    /* catch() { ... } // from try @ 00521d14 with catch @ 00521d24 */
                    /* try { // try from 00521d28 to 00621d83 has its CatchHandler @ 00521d28
                       catch() { ... } // from try @ 00521d28 with catch @ 00521d28
                       catch() { ... } // from try @ 00521d88 with catch @ 00521d28
                       catch() { ... } // from try @ 00521e2c with catch @ 00521d28
                       catch() { ... } // from try @ 00521ed8 with catch @ 00521d28
                       catch() { ... } // from try @ 00521f34 with catch @ 00521d28 */
    if (iVar12 < 1) {
      operator_delete(local_88 + -3);
    }
  }
  psVar7 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_88,"ui_map_guide_edge",auStack_70);
  TextureLibrary::TextureForName(psVar7,SUB81(&local_88,0));
  if (local_80 != (long *)0x0) {
    *(int *)(local_80 + 1) = (int)local_80[1] + 1;
  }
  plVar8 = *(long **)(this + 0x398);
  *(long **)(this + 0x398) = local_80;
                    /* catch() { ... } // from try @ 0052108c with catch @ 00521078 */
  if ((plVar8 != (long *)0x0) &&
     (iVar12 = (int)plVar8[1] + -1, *(int *)(plVar8 + 1) = iVar12, iVar12 == 0)) {
    (**(code **)(*plVar8 + 8))(plVar8);
  }
                    /* try { // try from 00521088 to 0062108b has its CatchHandler @ 0052109c */
                    /* try { // try from 0052108c to 006210af has its CatchHandler @ 00521078 */
  if ((local_80 != (long *)0x0) &&
     (iVar12 = (int)local_80[1] + -1, *(int *)(local_80 + 1) = iVar12, iVar12 == 0)) {
                    /* catch() { ... } // from try @ 00521088 with catch @ 0052109c */
    (**(code **)(*local_80 + 8))();
  }
  if (local_88 + -3 != (long *)puVar6) {
    plVar8 = local_88 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar12 = (int)*plVar8;
      *(int *)plVar8 = iVar12 + -1;
    }
    else {
      do {
        iVar12 = (int)*plVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *(int *)plVar8 = iVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar12 < 1) {
      operator_delete(local_88 + -3);
    }
  }
  psVar7 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_88,"ui_map_guide_end",auStack_70);
  TextureLibrary::TextureForName(psVar7,SUB81(&local_88,0));
  if (local_80 != (long *)0x0) {
    *(int *)(local_80 + 1) = (int)local_80[1] + 1;
  }
  plVar8 = *(long **)(this + 0x3a0);
  *(long **)(this + 0x3a0) = local_80;
  if ((plVar8 != (long *)0x0) &&
     (iVar12 = (int)plVar8[1] + -1, *(int *)(plVar8 + 1) = iVar12, iVar12 == 0)) {
    (**(code **)(*plVar8 + 8))(plVar8);
  }
  if ((local_80 != (long *)0x0) &&
     (iVar12 = (int)local_80[1] + -1, *(int *)(local_80 + 1) = iVar12, iVar12 == 0)) {
    (**(code **)(*local_80 + 8))();
  }
                    /* try { // try from 00521170 to 0062134f has its CatchHandler @ 00521170
                       catch() { ... } // from try @ 00521170 with catch @ 00521170
                       catch() { ... } // from try @ 00521354 with catch @ 00521170
                       catch() { ... } // from try @ 00521474 with catch @ 00521170
                       catch() { ... } // from try @ 005215d0 with catch @ 00521170
                       catch() { ... } // from try @ 005216a8 with catch @ 00521170 */
  if (local_88 + -3 != (long *)puVar6) {
    plVar8 = local_88 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar12 = (int)*plVar8;
      *(int *)plVar8 = iVar12 + -1;
    }
    else {
      do {
        iVar12 = (int)*plVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *(int *)plVar8 = iVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar12 < 1) {
      operator_delete(local_88 + -3);
    }
  }
  psVar7 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_88,"ui_map_guide_end_noarrow",auStack_70);
  TextureLibrary::TextureForName(psVar7,SUB81(&local_88,0));
  if (local_80 != (long *)0x0) {
    *(int *)(local_80 + 1) = (int)local_80[1] + 1;
  }
  plVar8 = *(long **)(this + 0x3a8);
  *(long **)(this + 0x3a8) = local_80;
  if ((plVar8 != (long *)0x0) &&
     (iVar12 = (int)plVar8[1] + -1, *(int *)(plVar8 + 1) = iVar12, iVar12 == 0)) {
    (**(code **)(*plVar8 + 8))(plVar8);
  }
  if ((local_80 != (long *)0x0) &&
     (iVar12 = (int)local_80[1] + -1, *(int *)(local_80 + 1) = iVar12, iVar12 == 0)) {
    (**(code **)(*local_80 + 8))();
  }
  if (local_88 + -3 != (long *)puVar6) {
    plVar8 = local_88 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar12 = (int)*plVar8;
      *(int *)plVar8 = iVar12 + -1;
    }
    else {
      do {
        iVar12 = (int)*plVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *(int *)plVar8 = iVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
                    /* try { // try from 00521d84 to 00621d87 has its CatchHandler @ 00521f14 */
                    /* try { // try from 00521d88 to 00621e0f has its CatchHandler @ 00521d28 */
    if (iVar12 < 1) {
      operator_delete(local_88 + -3);
    }
  }
  psVar7 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_88,&DAT_0068ef54,auStack_70);
  TextureLibrary::TextureForName(psVar7,SUB81(&local_88,0));
  if (local_80 != (long *)0x0) {
    *(int *)(local_80 + 1) = (int)local_80[1] + 1;
  }
  plVar8 = *(long **)(this + 0x3b0);
  *(long **)(this + 0x3b0) = local_80;
  if ((plVar8 != (long *)0x0) &&
     (iVar12 = (int)plVar8[1] + -1, *(int *)(plVar8 + 1) = iVar12, iVar12 == 0)) {
    (**(code **)(*plVar8 + 8))(plVar8);
  }
  if ((local_80 != (long *)0x0) &&
     (iVar12 = (int)local_80[1] + -1, *(int *)(local_80 + 1) = iVar12, iVar12 == 0)) {
    (**(code **)(*local_80 + 8))();
  }
  if (local_88 + -3 != (long *)puVar6) {
    plVar8 = local_88 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar12 = (int)*plVar8;
      *(int *)plVar8 = iVar12 + -1;
    }
    else {
      do {
        iVar12 = (int)*plVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *(int *)plVar8 = iVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar12 < 1) {
      operator_delete(local_88 + -3);
    }
  }
  psVar7 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_88,&DAT_0068ef24,auStack_70);
  TextureLibrary::TextureForName(psVar7,SUB81(&local_88,0));
  if (local_80 != (long *)0x0) {
    *(int *)(local_80 + 1) = (int)local_80[1] + 1;
  }
  plVar8 = *(long **)(this + 0x3b8);
  *(long **)(this + 0x3b8) = local_80;
  if ((plVar8 != (long *)0x0) &&
     (iVar12 = (int)plVar8[1] + -1, *(int *)(plVar8 + 1) = iVar12, iVar12 == 0)) {
                    /* try { // try from 00521354 to 0062146f has its CatchHandler @ 00521170 */
    (**(code **)(*plVar8 + 8))(plVar8);
  }
  if ((local_80 != (long *)0x0) &&
     (iVar12 = (int)local_80[1] + -1, *(int *)(local_80 + 1) = iVar12, iVar12 == 0)) {
    (**(code **)(*local_80 + 8))();
                    /* try { // try from 00521350 to 00621353 has its CatchHandler @ 00521798 */
  }
  if (local_88 + -3 != (long *)puVar6) {
    plVar8 = local_88 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar12 = (int)*plVar8;
      *(int *)plVar8 = iVar12 + -1;
    }
    else {
      do {
        iVar12 = (int)*plVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *(int *)plVar8 = iVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar12 < 1) {
      operator_delete(local_88 + -3);
    }
  }
  psVar7 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_88,&DAT_0068ef3c,auStack_70);
  TextureLibrary::TextureForName(psVar7,SUB81(&local_88,0));
  if (local_80 != (long *)0x0) {
    *(int *)(local_80 + 1) = (int)local_80[1] + 1;
  }
  plVar8 = *(long **)(this + 0x3c0);
  *(long **)(this + 0x3c0) = local_80;
  if ((plVar8 != (long *)0x0) &&
     (iVar12 = (int)plVar8[1] + -1, *(int *)(plVar8 + 1) = iVar12, iVar12 == 0)) {
    (**(code **)(*plVar8 + 8))(plVar8);
  }
  if ((local_80 != (long *)0x0) &&
     (iVar12 = (int)local_80[1] + -1, *(int *)(local_80 + 1) = iVar12, iVar12 == 0)) {
    (**(code **)(*local_80 + 8))();
  }
  if (local_88 + -3 != (long *)puVar6) {
    plVar8 = local_88 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar12 = (int)*plVar8;
      *(int *)plVar8 = iVar12 + -1;
    }
    else {
      do {
        iVar12 = (int)*plVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *(int *)plVar8 = iVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar12 < 1) {
      operator_delete(local_88 + -3);
    }
  }
  psVar7 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_88,"ui_map_guide_node",auStack_70);
  TextureLibrary::TextureForName(psVar7,SUB81(&local_88,0));
  if (local_80 != (long *)0x0) {
    *(int *)(local_80 + 1) = (int)local_80[1] + 1;
  }
  plVar8 = *(long **)(this + 0x3c8);
                    /* try { // try from 00521470 to 00621473 has its CatchHandler @ 0052179c */
  *(long **)(this + 0x3c8) = local_80;
                    /* try { // try from 00521474 to 006215cb has its CatchHandler @ 00521170 */
  if ((plVar8 != (long *)0x0) &&
     (iVar12 = (int)plVar8[1] + -1, *(int *)(plVar8 + 1) = iVar12, iVar12 == 0)) {
    (**(code **)(*plVar8 + 8))(plVar8);
  }
  if ((local_80 != (long *)0x0) &&
     (iVar12 = (int)local_80[1] + -1, *(int *)(local_80 + 1) = iVar12, iVar12 == 0)) {
    (**(code **)(*local_80 + 8))();
  }
  if (local_88 + -3 != (long *)puVar6) {
    plVar8 = local_88 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar12 = (int)*plVar8;
      *(int *)plVar8 = iVar12 + -1;
    }
    else {
      do {
        iVar12 = (int)*plVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *(int *)plVar8 = iVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar12 < 1) {
                    /* try { // try from 00521e10 to 00621e2b has its CatchHandler @ 00521f28 */
      operator_delete(local_88 + -3);
    }
  }
  psVar7 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_88,"ui_map_guide_start",auStack_70);
  TextureLibrary::TextureForName(psVar7,SUB81(&local_88,0));
  if (local_80 != (long *)0x0) {
    *(int *)(local_80 + 1) = (int)local_80[1] + 1;
  }
  plVar8 = *(long **)(this + 0x3d0);
  *(long **)(this + 0x3d0) = local_80;
  if ((plVar8 != (long *)0x0) &&
     (iVar12 = (int)plVar8[1] + -1, *(int *)(plVar8 + 1) = iVar12, iVar12 == 0)) {
    (**(code **)(*plVar8 + 8))(plVar8);
  }
  if ((local_80 != (long *)0x0) &&
     (iVar12 = (int)local_80[1] + -1, *(int *)(local_80 + 1) = iVar12, iVar12 == 0)) {
    (**(code **)(*local_80 + 8))();
  }
  if (local_88 + -3 != (long *)puVar6) {
    plVar8 = local_88 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar12 = (int)*plVar8;
      *(int *)plVar8 = iVar12 + -1;
    }
    else {
      do {
        iVar12 = (int)*plVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *(int *)plVar8 = iVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar12 < 1) {
                    /* try { // try from 00521e2c to 00621ed3 has its CatchHandler @ 00521d28 */
      operator_delete(local_88 + -3);
    }
  }
  Texture::SharedPtr();
  Sprite::Init((Sprite *)(this + 0x130),(intrusive_ptr *)&local_80,2,4,true);
  if ((local_80 != (long *)0x0) &&
     (iVar12 = (int)local_80[1] + -1, *(int *)(local_80 + 1) = iVar12, iVar12 == 0)) {
    (**(code **)(*local_80 + 8))();
  }
                    /* try { // try from 005215cc to 006215cf has its CatchHandler @ 005217a4 */
                    /* try { // try from 005215d0 to 006216a3 has its CatchHandler @ 00521170 */
  Texture::SharedPtr();
  Sprite::Init((Sprite *)(this + 0x188),(intrusive_ptr *)&local_80,2,4,true);
  if ((local_80 != (long *)0x0) &&
     (iVar12 = (int)local_80[1] + -1, *(int *)(local_80 + 1) = iVar12, iVar12 == 0)) {
    (**(code **)(*local_80 + 8))();
  }
  Sprite::Init((Sprite *)(this + 0x1e0),piVar2,2,4,true);
  Texture::SharedPtr();
  Sprite::Init((Sprite *)(this + 0x238),(intrusive_ptr *)&local_80,2,4,true);
  if ((local_80 != (long *)0x0) &&
     (iVar12 = (int)local_80[1] + -1, *(int *)(local_80 + 1) = iVar12, iVar12 == 0)) {
    (**(code **)(*local_80 + 8))();
  }
  psVar7 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_80,"ui_map_marker_hero",auStack_70);
                    /* try { // try from 005216a4 to 006216a7 has its CatchHandler @ 005217a0 */
                    /* try { // try from 005216a8 to 006217b7 has its CatchHandler @ 00521170 */
  TextureLibrary::TextureForName(psVar7,SUB81(&local_80,0));
  if (local_80 + -3 != (long *)puVar6) {
    plVar8 = local_80 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar12 = (int)*plVar8;
      *(int *)plVar8 = iVar12 + -1;
    }
    else {
      do {
        iVar12 = (int)*plVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *(int *)plVar8 = iVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar12 < 1) {
      operator_delete(local_80 + -3);
    }
  }
  this_00 = operator_new(0x110);
  GUIFrameView::GUIFrameView(this_00);
  boost::shared_ptr<Caver::GUIFrameView>::shared_ptr<Caver::GUIFrameView>
            ((shared_ptr<Caver::GUIFrameView> *)&local_80,this_00);
  plVar8 = *(long **)(this + 0x2a8);
  *(long **)(this + 0x2a8) = local_80;
  plVar13 = *(long **)(this + 0x2b0);
  *(long **)(this + 0x2b0) = plStack_78;
  local_80 = plVar8;
  plStack_78 = plVar13;
  if ((plVar13 != (long *)0x0) && (lVar9 = plVar13[1], plVar13[1] = lVar9 + -1, lVar9 + -1 == 0)) {
    (**(code **)(*plVar13 + 0x10))(plVar13);
    lVar9 = plVar13[2];
    plVar13[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
  }
  GUIFrameView::SetFrameTexture(*(GUIFrameView **)__s,(intrusive_ptr *)&local_88,true);
  plStack_78 = *(long **)((long)local_88 + 0x54);
  local_80 = (long *)0x0;
  GUIView::SetFrame(*(GUIView **)__s,(Rectangle *)&local_80);
  local_80 = *(long **)(this + 0x2a8);
  pcVar10 = *(code **)(*(long *)this + 0x60);
  plStack_78 = *(long **)(this + 0x2b0);
  if (plStack_78 != (long *)0x0) {
    plStack_78[1] = plStack_78[1] + 1;
  }
                    /* catch() { ... } // from try @ 00521350 with catch @ 00521798 */
  (*pcVar10)(this,&local_80);
  plVar8 = plStack_78;
                    /* catch() { ... } // from try @ 00521470 with catch @ 0052179c */
                    /* catch() { ... } // from try @ 005216a4 with catch @ 005217a0 */
                    /* catch() { ... } // from try @ 005215cc with catch @ 005217a4 */
  if ((plStack_78 != (long *)0x0) &&
     (lVar9 = plStack_78[1], plStack_78[1] = lVar9 + -1, lVar9 + -1 == 0)) {
    (**(code **)(*plStack_78 + 0x10))(plStack_78);
    lVar9 = plVar8[2];
    plVar8[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
  }
  *(undefined1 *)(*(long *)__s + 0xe4) = 1;
  psVar7 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_90,&DAT_00694970,auStack_98);
  TextureLibrary::TextureForName(psVar7,SUB81(&local_90,0));
  if (local_80 != (long *)0x0) {
    *(int *)(local_80 + 1) = (int)local_80[1] + 1;
  }
  plVar8 = *(long **)piVar1;
  *(long **)piVar1 = local_80;
  if ((plVar8 != (long *)0x0) &&
     (iVar12 = (int)plVar8[1] + -1, *(int *)(plVar8 + 1) = iVar12, iVar12 == 0)) {
    (**(code **)(*plVar8 + 8))(plVar8);
  }
  if ((local_80 != (long *)0x0) &&
     (iVar12 = (int)local_80[1] + -1, *(int *)(local_80 + 1) = iVar12, iVar12 == 0)) {
    (**(code **)(*local_80 + 8))();
  }
  if ((undefined *)(local_90 + -0x18) != puVar6) {
    piVar11 = (int *)(local_90 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar12 = *piVar11;
      *piVar11 = iVar12 + -1;
    }
    else {
      do {
        iVar12 = *piVar11;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar4) {
          *piVar11 = iVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar12 < 1) {
      operator_delete((undefined *)(local_90 + -0x18));
    }
  }
  Sprite::Init((Sprite *)(this + 0x2f0),piVar1,2,4,false);
  plStack_78 = (long *)_UNK_006947f8;
  local_80 = _DAT_006947f0;
  (**(code **)(*(long *)this + 0xf8))(this,&local_80);
  if ((local_88 != (long *)0x0) &&
     (iVar12 = (int)local_88[1] + -1, *(int *)(local_88 + 1) = iVar12, iVar12 == 0)) {
    (**(code **)(*local_88 + 8))();
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


