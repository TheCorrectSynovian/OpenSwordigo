/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004c6014
 * Function: Caver::ConfigureOverlayView::ButtonPressed
 * Signature: undefined __cdecl ButtonPressed(void * param_1, GUIEvent * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ConfigureOverlayView::ButtonPressed(void*, Caver::GUIEvent*) */

void Caver::ConfigureOverlayView::ButtonPressed(void *param_1,GUIEvent *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  GUIAlertView *this;
  int in_w5;
  long lVar5;
  int *piVar6;
  int iVar7;
  long *plVar8;
  undefined1 auStack_80 [8];
  long local_78;
  undefined1 auStack_70 [8];
  long local_68;
  undefined8 local_60;
  long *local_58;
  long local_48;
  long local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (*(GUIEvent **)((long)param_1 + 0x108) == param_2) {
    plVar8 = *(long **)((long)param_1 + 0x100);
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))(plVar8,param_1);
    }
  }
  else if (*(GUIEvent **)((long)param_1 + 0x118) == param_2) {
    FUN_00666bb8(&local_48,"Reset",&local_60);
    FUN_00666bb8(&local_40,"Cancel",&local_68);
    FUN_00666bb8(&local_68,"RESET CONTROLS?",auStack_70);
    FUN_00666bb8(&local_78,&DAT_00692112,auStack_80);
    GameInterfaceBuilder::AlertView
              ((GameInterfaceBuilder *)&local_68,(string *)&local_78,(string *)0x2,(int)&local_48,
               (string *)0x1,in_w5);
    if (local_58 != (long *)0x0) {
      local_58[1] = local_58[1] + 1;
    }
    plVar8 = *(long **)((long)param_1 + 0x168);
    *(undefined8 *)((long)param_1 + 0x160) = local_60;
    *(long **)((long)param_1 + 0x168) = local_58;
    if ((plVar8 != (long *)0x0) && (lVar5 = plVar8[1], plVar8[1] = lVar5 + -1, lVar5 + -1 == 0)) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      lVar5 = plVar8[2];
      plVar8[2] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
        (**(code **)(*plVar8 + 0x18))(plVar8);
      }
    }
    if ((local_58 != (long *)0x0) &&
       (lVar5 = local_58[1], local_58[1] = lVar5 + -1, lVar5 + -1 == 0)) {
      (**(code **)(*local_58 + 0x10))(local_58);
      lVar5 = local_58[2];
      local_58[2] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
        (**(code **)(*local_58 + 0x18))(local_58);
      }
    }
    puVar4 = PTR_DAT_007e5de8;
    if ((undefined *)(local_78 + -0x18) != PTR_DAT_007e5de8) {
      piVar6 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar7 = *piVar6;
        *piVar6 = iVar7 + -1;
      }
      else {
        do {
          iVar7 = *piVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar2) {
            *piVar6 = iVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar7 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    if ((undefined *)(local_68 + -0x18) != puVar4) {
      piVar6 = (int *)(local_68 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar7 = *piVar6;
        *piVar6 = iVar7 + -1;
      }
      else {
        do {
          iVar7 = *piVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar2) {
            *piVar6 = iVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar7 < 1) {
        operator_delete((undefined *)(local_68 + -0x18));
      }
    }
    this = *(GUIAlertView **)((long)param_1 + 0x160);
    *(long *)(this + 0x118) = (long)param_1 + 0xf8;
    GUIAlertView::PresentFromView(this,param_1);
    if ((undefined *)(local_40 + -0x18) != puVar4) {
      piVar6 = (int *)(local_40 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar7 = *piVar6;
        *piVar6 = iVar7 + -1;
      }
      else {
        do {
          iVar7 = *piVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar2) {
            *piVar6 = iVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar7 < 1) {
        operator_delete((undefined *)(local_40 + -0x18));
      }
    }
    if ((undefined *)(local_48 + -0x18) != puVar4) {
      piVar6 = (int *)(local_48 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar7 = *piVar6;
        *piVar6 = iVar7 + -1;
      }
      else {
        do {
          iVar7 = *piVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar2) {
            *piVar6 = iVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar7 < 1) {
        operator_delete((undefined *)(local_48 + -0x18));
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


