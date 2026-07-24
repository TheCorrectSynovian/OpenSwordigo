/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00446274
 * Function: Caver::GameMenuViewController::GuideToggleViewEnableStateChanged
 * Signature: undefined __thiscall GuideToggleViewEnableStateChanged(GameMenuViewController * this, GuideToggleView * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameMenuViewController::GuideToggleViewEnableStateChanged(Caver::GuideToggleView*) */

void __thiscall
Caver::GameMenuViewController::GuideToggleViewEnableStateChanged
          (GameMenuViewController *this,GuideToggleView *param_1)

{
  MapMenuPage *this_00;
  MapView *pMVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  StoreController *this_01;
  ulong uVar6;
  GUISwitch *this_02;
  StoreViewController *this_03;
  long lVar7;
  code *pcVar8;
  int *piVar9;
  int iVar10;
  long local_60;
  long *local_58;
  long local_50;
  long *local_48;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  if (*(GuideToggleView **)(this + 0xa8) == param_1) {
    if (*(char *)(*(long *)(param_1 + 0x108) + 0x148) != '\0') {
      this_01 = (StoreController *)StoreController::SharedController();
      uVar6 = StoreController::IsGuideUnlockedCheck(this_01);
      if ((uVar6 & 1) == 0) {
        this_02 = *(GUISwitch **)(param_1 + 0x108);
        this_02[0x148] = (GUISwitch)0x0;
        GUISwitch::UpdateFrameTexture(this_02);
        lVar7 = StoreController::SharedController();
        FUN_00666bb8(&local_50,"Map",auStack_40);
        FUN_0066a6a8(lVar7 + 8,&local_50);
        if ((undefined *)(local_50 + -0x18) != PTR_DAT_007e5de8) {
          piVar9 = (int *)(local_50 + -8);
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
            operator_delete((undefined *)(local_50 + -0x18));
          }
        }
        this_03 = operator_new(0xd8);
        StoreViewController::StoreViewController(this_03);
        boost::shared_ptr<Caver::StoreViewController>::shared_ptr<Caver::StoreViewController>
                  ((shared_ptr<Caver::StoreViewController> *)&local_50,this_03);
        *(GameMenuViewController **)(local_50 + 0x50) = this + 0x78;
        pcVar8 = *(code **)(*(long *)this + 0x50);
        local_60 = local_50;
        local_58 = local_48;
        if (local_48 != (long *)0x0) {
          local_48[1] = local_48[1] + 1;
        }
        (*pcVar8)(this,&local_60);
        plVar5 = local_58;
        if ((local_58 != (long *)0x0) &&
           (lVar7 = local_58[1], local_58[1] = lVar7 + -1, lVar7 + -1 == 0)) {
          (**(code **)(*local_58 + 0x10))(local_58);
          lVar7 = plVar5[2];
          plVar5[2] = lVar7 + -1;
          if (lVar7 + -1 == 0) {
            (**(code **)(*plVar5 + 0x18))(plVar5);
          }
        }
        if ((local_48 != (long *)0x0) &&
           (lVar7 = local_48[1], local_48[1] = lVar7 + -1, lVar7 + -1 == 0)) {
          (**(code **)(*local_48 + 0x10))(local_48);
          lVar7 = local_48[2];
          local_48[2] = lVar7 + -1;
          if (lVar7 + -1 == 0) {
            (**(code **)(*local_48 + 0x18))(local_48);
          }
        }
        goto LAB_00446414;
      }
    }
    plVar5 = *(long **)(this + 0x80);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,this,*(undefined1 *)(*(long *)(param_1 + 0x108) + 0x148))
      ;
    }
    this_00 = *(MapMenuPage **)(*(long *)(this + 0x98) + 0x138);
    plVar5 = *(long **)(*(long *)(this + 0x98) + 0x140);
    if ((plVar5 != (long *)0x0) && (plVar5[1] == 0)) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      lVar7 = plVar5[2];
      plVar5[2] = lVar7 + -1;
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
    }
    pMVar1 = *(MapView **)(this_00 + 0x1c8);
    plVar5 = *(long **)(this_00 + 0x1d0);
    if (plVar5 != (long *)0x0) {
      plVar5[1] = plVar5[1] + 1;
    }
    MapView::UpdateTargetPath(pMVar1);
    if ((plVar5 != (long *)0x0) && (lVar7 = plVar5[1], plVar5[1] = lVar7 + -1, lVar7 + -1 == 0)) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      lVar7 = plVar5[2];
      plVar5[2] = lVar7 + -1;
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
    }
    pMVar1 = *(MapView **)(this_00 + 0x1c8);
    plVar5 = *(long **)(this_00 + 0x1d0);
    if (plVar5 != (long *)0x0) {
      plVar5[1] = plVar5[1] + 1;
    }
    MapView::UpdateDefaultNodeVisibility(pMVar1);
    if ((plVar5 != (long *)0x0) && (lVar7 = plVar5[1], plVar5[1] = lVar7 + -1, lVar7 + -1 == 0)) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      lVar7 = plVar5[2];
      plVar5[2] = lVar7 + -1;
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
    }
    MapMenuPage::UpdateMapViewBounds(this_00);
  }
  else if ((*(GuideToggleView **)(this + 0xb8) == param_1) &&
          (plVar5 = *(long **)(this + 0x80), plVar5 != (long *)0x0)) {
    (**(code **)(*plVar5 + 0x18))(plVar5,this,*(undefined1 *)(*(long *)(param_1 + 0x108) + 0x148));
  }
LAB_00446414:
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


