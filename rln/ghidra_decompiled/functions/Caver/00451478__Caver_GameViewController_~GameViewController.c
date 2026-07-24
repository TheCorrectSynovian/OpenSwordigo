/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00451478
 * Function: Caver::GameViewController::~GameViewController
 * Signature: undefined __thiscall ~GameViewController(GameViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameViewController::~GameViewController() */

void __thiscall Caver::GameViewController::~GameViewController(GameViewController *this)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  ProfileManager *this_00;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  int *piVar9;
  int iVar10;
  long lVar11;
  
  puVar5 = PTR_vtable_007e7d18;
  lVar4 = tpidr_el0;
  lVar11 = *(long *)(lVar4 + 0x28);
  puVar1 = PTR_vtable_007e7d18 + 0xe0;
  puVar6 = PTR_vtable_007e7d18 + 0x118;
  *(undefined **)(this + 0x50) = PTR_vtable_007e7d18 + 0xf8;
  *(undefined **)(this + 0x48) = puVar1;
  *(undefined **)(this + 0x60) = puVar5 + 0x148;
  *(undefined **)(this + 0x58) = puVar6;
  *(undefined **)this = puVar5 + 0x10;
  *(undefined **)(this + 0x70) = puVar5 + 0x180;
  *(undefined **)(this + 0x68) = puVar5 + 0x160;
  *(undefined **)(this + 0x78) = puVar5 + 0x198;
  this_00 = (ProfileManager *)ProfileManager::sharedManager();
  ProfileManager::RemoveDelegate(this_00,(IProfileManagerDelegate *)(this + 0x70));
  if (*(long *)(this + 0xd8) != 0) {
    *(undefined8 *)(*(long *)(*(long *)(this + 0xd8) + 0x100) + 0xf0) = 0;
  }
  puVar1 = PTR_DAT_007e5de8;
  puVar6 = (undefined *)(*(long *)(this + 0x138) + -0x18);
  if (puVar6 == PTR_DAT_007e5de8) {
LAB_00451524:
    plVar7 = *(long **)(this + 0x128);
  }
  else {
    piVar9 = (int *)(*(long *)(this + 0x138) + -8);
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
    if (0 < iVar10) goto LAB_00451524;
    operator_delete(puVar6);
    plVar7 = *(long **)(this + 0x128);
  }
  if ((plVar7 != (long *)0x0) &&
     (iVar10 = (int)plVar7[1] + -1, *(int *)(plVar7 + 1) = iVar10, iVar10 == 0)) {
    (**(code **)(*plVar7 + 8))();
  }
  plVar7 = *(long **)(this + 0x120);
  if ((plVar7 != (long *)0x0) && (lVar8 = plVar7[1], plVar7[1] = lVar8 + -1, lVar8 + -1 == 0)) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    lVar8 = plVar7[2];
    plVar7[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
  }
  plVar7 = *(long **)(this + 0x108);
  if ((plVar7 != (long *)0x0) && (lVar8 = plVar7[1], plVar7[1] = lVar8 + -1, lVar8 + -1 == 0)) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    lVar8 = plVar7[2];
    plVar7[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
  }
  puVar6 = (undefined *)(*(long *)(this + 0xf0) + -0x18);
  if (puVar6 != puVar1) {
    piVar9 = (int *)(*(long *)(this + 0xf0) + -8);
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
      operator_delete(puVar6);
      plVar7 = *(long **)(this + 0xe0);
      goto joined_r0x00451854;
    }
  }
  plVar7 = *(long **)(this + 0xe0);
joined_r0x00451854:
  if ((plVar7 != (long *)0x0) && (lVar8 = plVar7[1], plVar7[1] = lVar8 + -1, lVar8 + -1 == 0)) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    lVar8 = plVar7[2];
    plVar7[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
  }
  plVar7 = *(long **)(this + 0xd0);
  if ((plVar7 != (long *)0x0) && (lVar8 = plVar7[1], plVar7[1] = lVar8 + -1, lVar8 + -1 == 0)) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    lVar8 = plVar7[2];
    plVar7[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
  }
  plVar7 = *(long **)(this + 0xc0);
  if ((plVar7 != (long *)0x0) && (lVar8 = plVar7[1], plVar7[1] = lVar8 + -1, lVar8 + -1 == 0)) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    lVar8 = plVar7[2];
    plVar7[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
  }
  plVar7 = *(long **)(this + 0xb0);
  if ((plVar7 != (long *)0x0) && (lVar8 = plVar7[1], plVar7[1] = lVar8 + -1, lVar8 + -1 == 0)) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    lVar8 = plVar7[2];
    plVar7[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
  }
  plVar7 = *(long **)(this + 0xa0);
  if ((plVar7 != (long *)0x0) && (lVar8 = plVar7[1], plVar7[1] = lVar8 + -1, lVar8 + -1 == 0)) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    lVar8 = plVar7[2];
    plVar7[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
  }
  plVar7 = *(long **)(this + 0x90);
  if ((plVar7 != (long *)0x0) && (lVar8 = plVar7[1], plVar7[1] = lVar8 + -1, lVar8 + -1 == 0)) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    lVar8 = plVar7[2];
    plVar7[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
  }
  GUIViewController::~GUIViewController((GUIViewController *)this);
  if (*(long *)(lVar4 + 0x28) == lVar11) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


