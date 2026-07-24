/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0046c584
 * Function: Caver::MainMenuViewController::Update
 * Signature: undefined __thiscall Update(MainMenuViewController * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MainMenuViewController::Update(float) */

void __thiscall Caver::MainMenuViewController::Update(MainMenuViewController *this,float param_1)

{
  MainMenuViewController MVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  int *piVar9;
  long lVar10;
  MainMenuView *pMVar11;
  long *plVar12;
  float fVar13;
  undefined1 auStack_50 [8];
  long local_48 [2];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  GUIViewController::Update(param_1);
  fVar13 = *(float *)(this + 0x114);
  lVar8 = *(long *)(this + 0x18);
  *(float *)(this + 0x114) = fVar13 + param_1;
  if (fVar13 + param_1 <= 0.5) {
    if (lVar8 == 0) {
      (**(code **)(*(long *)this + 0x18))(this);
      lVar8 = *(long *)(this + 0x18);
      plVar12 = *(long **)(this + 0x20);
      if (plVar12 == (long *)0x0) goto LAB_0046c790;
LAB_0046c638:
      lVar10 = plVar12[1];
      *(undefined1 *)(lVar8 + 0xe5) = 0;
      plVar12[1] = lVar10;
      if (lVar10 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        lVar8 = plVar12[2];
        plVar12[2] = lVar8 + -1;
        if (lVar8 + -1 != 0) goto LAB_0046c794;
        (**(code **)(*plVar12 + 0x18))(plVar12);
        MVar1 = this[0x119];
        goto joined_r0x0046c67c;
      }
    }
    else {
      plVar12 = *(long **)(this + 0x20);
      if (plVar12 != (long *)0x0) goto LAB_0046c638;
LAB_0046c790:
      *(undefined1 *)(lVar8 + 0xe5) = 0;
    }
LAB_0046c794:
    MVar1 = this[0x119];
joined_r0x0046c880:
    if (MVar1 != (MainMenuViewController)0x0) goto LAB_0046c79c;
LAB_0046c884:
    pMVar11 = *(MainMenuView **)(this + 0x70);
    *(undefined1 *)(*(long *)(pMVar11 + 0x168) + 0xe4) = 0;
    FUN_00666bb8(local_48,"Privacy Policy",auStack_50);
    MainMenuView::SetPrivacyButtonTitle(pMVar11,(string *)local_48);
    puVar7 = (undefined *)(local_48[0] + -0x18);
    if (puVar7 == PTR_DAT_007e5de8) goto LAB_0046c8c8;
    piVar9 = (int *)(local_48[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) goto LAB_0046c930;
    do {
      iVar5 = *piVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar3) {
        *piVar9 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    if (lVar8 == 0) {
      (**(code **)(*(long *)this + 0x18))(this);
      lVar8 = *(long *)(this + 0x18);
      plVar12 = *(long **)(this + 0x20);
      if (plVar12 == (long *)0x0) goto LAB_0046c6a0;
LAB_0046c5dc:
      lVar10 = plVar12[1];
      *(undefined1 *)(lVar8 + 0xe5) = 1;
      plVar12[1] = lVar10;
      if (lVar10 != 0) goto LAB_0046c6a8;
      (**(code **)(*plVar12 + 0x10))(plVar12);
      lVar8 = plVar12[2];
      plVar12[2] = lVar8 + -1;
      if (lVar8 + -1 != 0) goto LAB_0046c6a8;
      (**(code **)(*plVar12 + 0x18))(plVar12);
      MVar1 = this[0x119];
    }
    else {
      plVar12 = *(long **)(this + 0x20);
      if (plVar12 != (long *)0x0) goto LAB_0046c5dc;
LAB_0046c6a0:
      *(undefined1 *)(lVar8 + 0xe5) = 1;
LAB_0046c6a8:
      MVar1 = this[0x119];
    }
    if (MVar1 != (MainMenuViewController)0x0) goto LAB_0046c794;
    plVar12 = (long *)OnlineController::SharedController();
    uVar6 = (**(code **)(*plVar12 + 0x48))();
    if ((uVar6 & 1) == 0) goto LAB_0046c794;
    plVar12 = (long *)StoreController::SharedController();
    uVar6 = (**(code **)(*plVar12 + 0x50))();
    if ((uVar6 & 1) == 0) goto LAB_0046c794;
    plVar12 = (long *)OnlineController::SharedController();
    uVar6 = (**(code **)(*plVar12 + 0x110))();
    if ((uVar6 & 1) == 0) {
LAB_0046c874:
      CompleteInitialPrivacy(this);
      MVar1 = this[0x119];
      goto joined_r0x0046c880;
    }
    plVar12 = (long *)OnlineController::SharedController();
    uVar6 = (**(code **)(*plVar12 + 0x50))();
    if ((uVar6 & 1) != 0) {
      plVar12 = (long *)OnlineController::SharedController();
      iVar5 = (**(code **)(*plVar12 + 0xa0))();
      if (iVar5 == 0) goto LAB_0046c794;
      if (iVar5 != 2) {
        plVar12 = (long *)OnlineController::SharedController();
        uVar6 = (**(code **)(*plVar12 + 0x78))();
        if ((uVar6 & 1) == 0) {
          plVar12 = (long *)OnlineController::SharedController();
          uVar6 = (**(code **)(*plVar12 + 0x70))();
          if ((uVar6 & 1) != 0) {
            plVar12 = (long *)OnlineController::SharedController();
            uVar6 = (**(code **)(*plVar12 + 0x58))();
            if ((uVar6 & 1) != 0) {
              if (*(long *)(this + 0xf8) == 0) {
                ShowPrivacyPolicyConsentDialog(this);
                MVar1 = this[0x119];
                goto joined_r0x0046c67c;
              }
              goto LAB_0046c794;
            }
          }
        }
      }
      goto LAB_0046c874;
    }
    if (*(long *)(this + 0xe8) != 0) goto LAB_0046c794;
    ShowNeutralAgeScreenDialog(this);
    MVar1 = this[0x119];
joined_r0x0046c67c:
    if (MVar1 == (MainMenuViewController)0x0) goto LAB_0046c884;
LAB_0046c79c:
    plVar12 = (long *)OnlineController::SharedController();
    uVar6 = (**(code **)(*plVar12 + 0x58))();
    pMVar11 = *(MainMenuView **)(this + 0x70);
    *(undefined1 *)(*(long *)(pMVar11 + 0x168) + 0xe4) = 0;
    if ((uVar6 & 1) == 0) {
      FUN_00666bb8(local_48,"Privacy Policy",auStack_50);
                    /* try { // try from 0046c82c to 0056c83b has its CatchHandler @ 0046caa8 */
      MainMenuView::SetPrivacyButtonTitle(pMVar11,(string *)local_48);
                    /* try { // try from 0046c83c to 0056cacb has its CatchHandler @ 0046c0f0 */
      puVar7 = (undefined *)(local_48[0] + -0x18);
      if (puVar7 == PTR_DAT_007e5de8) goto LAB_0046c8c8;
      piVar9 = (int *)(local_48[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
LAB_0046c930:
        iVar5 = *piVar9;
        *piVar9 = iVar5 + -1;
      }
      else {
        do {
          iVar5 = *piVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar3) {
            *piVar9 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
    else {
      FUN_00666bb8(local_48,"Privacy Options",auStack_50);
      MainMenuView::SetPrivacyButtonTitle(pMVar11,(string *)local_48);
      puVar7 = (undefined *)(local_48[0] + -0x18);
      if (puVar7 == PTR_DAT_007e5de8) goto LAB_0046c8c8;
      piVar9 = (int *)(local_48[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) goto LAB_0046c930;
      do {
        iVar5 = *piVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar3) {
          *piVar9 = iVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  if (iVar5 < 1) {
    operator_delete(puVar7);
  }
LAB_0046c8c8:
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


