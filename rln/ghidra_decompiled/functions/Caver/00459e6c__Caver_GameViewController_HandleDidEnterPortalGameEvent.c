/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00459e6c
 * Function: Caver::GameViewController::HandleDidEnterPortalGameEvent
 * Signature: undefined __thiscall HandleDidEnterPortalGameEvent(GameViewController * this, DidEnterPortalGameEvent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameViewController::HandleDidEnterPortalGameEvent(Caver::DidEnterPortalGameEvent const&)
    */

undefined8 __thiscall
Caver::GameViewController::HandleDidEnterPortalGameEvent
          (GameViewController *this,DidEnterPortalGameEvent *param_1)

{
  string *psVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  int iVar7;
  StoreViewController *this_00;
  PortalViewController *this_01;
  int *piVar8;
  long lVar9;
  code *pcVar10;
  long *plVar11;
  long local_68;
  long local_60;
  long *local_58;
  long local_50;
  long *local_48;
  long local_38;
  
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  psVar1 = (string *)(param_1 + 0x68);
  iVar7 = FUN_006689e0(psVar1,"iapstore");
  if (iVar7 == 0) {
    FUN_0066a6a8(this + 0x138,param_1 + 0x78);
    lVar9 = StoreController::SharedController();
    FUN_00666bb8(&local_50,"InGame",&local_68);
    FUN_0066a6a8(lVar9 + 8,&local_50);
    if ((undefined *)(local_50 + -0x18) != PTR_DAT_007e5de8) {
      piVar8 = (int *)(local_50 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar7 = *piVar8;
        *piVar8 = iVar7 + -1;
      }
      else {
        do {
          iVar7 = *piVar8;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar4) {
            *piVar8 = iVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (iVar7 < 1) {
        operator_delete((undefined *)(local_50 + -0x18));
      }
    }
    this_00 = operator_new(0xd8);
    StoreViewController::StoreViewController(this_00);
    boost::shared_ptr<Caver::StoreViewController>::shared_ptr<Caver::StoreViewController>
              ((shared_ptr<Caver::StoreViewController> *)&local_50,this_00);
    *(GameViewController **)(local_50 + 0x50) = this + 0x78;
    pcVar10 = *(code **)(*(long *)this + 0x50);
    local_60 = local_50;
    local_58 = local_48;
    if (local_48 != (long *)0x0) {
                    /* try { // try from 0045a008 to 0055a02f has its CatchHandler @ 00458c58 */
      local_48[1] = local_48[1] + 1;
    }
    (*pcVar10)(this,&local_60);
    plVar11 = local_58;
                    /* catch() { ... } // from try @ 00459d14 with catch @ 0045a028 */
                    /* catch() { ... } // from try @ 00459c7c with catch @ 0045a02c
                       catch() { ... } // from try @ 00459d9c with catch @ 0045a02c */
    if ((local_58 != (long *)0x0) &&
       (lVar9 = local_58[1], local_58[1] = lVar9 + -1, lVar9 + -1 == 0)) {
                    /* catch() { ... } // from try @ 0045a0a8 with catch @ 0045a030 */
      (**(code **)(*local_58 + 0x10))(local_58);
      lVar9 = plVar11[2];
      plVar11[2] = lVar9 + -1;
      if (lVar9 + -1 == 0) {
        (**(code **)(*plVar11 + 0x18))(plVar11);
      }
    }
  }
  else {
    if (*(long *)(*(long *)psVar1 + -0x18) != 0) {
      FUN_0066a528(&local_50,param_1 + 0x70);
      if (*(long *)(local_50 + -0x18) == 0) {
        FUN_0066a528(&local_68,*(long *)(this + 0xa8) + 0x158);
        FUN_0035a030(&local_60,"spawn_from_",&local_68);
        FUN_0066a6a8(&local_50,&local_60);
        puVar6 = PTR_DAT_007e5de8;
        if ((undefined *)(local_60 + -0x18) != PTR_DAT_007e5de8) {
          piVar8 = (int *)(local_60 + -8);
          if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
            iVar7 = *piVar8;
            *piVar8 = iVar7 + -1;
          }
          else {
            do {
              iVar7 = *piVar8;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
              if (bVar4) {
                *piVar8 = iVar7 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          if (iVar7 < 1) {
            operator_delete((undefined *)(local_60 + -0x18));
          }
        }
        if ((undefined *)(local_68 + -0x18) != puVar6) {
          piVar8 = (int *)(local_68 + -8);
          if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
            iVar7 = *piVar8;
            *piVar8 = iVar7 + -1;
          }
          else {
            do {
              iVar7 = *piVar8;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
              if (bVar4) {
                *piVar8 = iVar7 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          if (iVar7 < 1) {
            operator_delete((undefined *)(local_68 + -0x18));
          }
        }
      }
      GotoLevel(this,psVar1,(string *)&local_50);
      GUIViewController::DismissModalViewController((GUIViewController *)this);
      if ((undefined *)(local_50 + -0x18) != PTR_DAT_007e5de8) {
        piVar8 = (int *)(local_50 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar7 = *piVar8;
          *piVar8 = iVar7 + -1;
        }
        else {
          do {
            iVar7 = *piVar8;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
            if (bVar4) {
              *piVar8 = iVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if (iVar7 < 1) {
          operator_delete((undefined *)(local_50 + -0x18));
        }
      }
      goto LAB_0045a1a8;
    }
    this_01 = operator_new(0x90);
    PortalViewController::PortalViewController(this_01);
    boost::shared_ptr<Caver::PortalViewController>::shared_ptr<Caver::PortalViewController>
              ((shared_ptr<Caver::PortalViewController> *)&local_50,this_01);
    uVar2 = *(undefined8 *)(this + 0x88);
    lVar9 = *(long *)(this + 0x90);
                    /* try { // try from 0045a084 to 0055a0a7 has its CatchHandler @ 0045a0d4 */
    if (lVar9 != 0) {
      *(long *)(lVar9 + 8) = *(long *)(lVar9 + 8) + 1;
    }
    plVar11 = *(long **)(local_50 + 0x78);
    *(undefined8 *)(local_50 + 0x70) = uVar2;
    *(long *)(local_50 + 0x78) = lVar9;
                    /* try { // try from 0045a0a8 to 0055a13b has its CatchHandler @ 0045a030 */
    if ((plVar11 != (long *)0x0) && (lVar9 = plVar11[1], plVar11[1] = lVar9 + -1, lVar9 + -1 == 0))
    {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      lVar9 = plVar11[2];
      plVar11[2] = lVar9 + -1;
      if (lVar9 + -1 == 0) {
                    /* catch() { ... } // from try @ 0045a084 with catch @ 0045a0d4 */
        (**(code **)(*plVar11 + 0x18))(plVar11);
      }
    }
    *(GameViewController **)(local_50 + 0x68) = this + 0x68;
    pcVar10 = *(code **)(*(long *)this + 0x50);
    local_60 = local_50;
    local_58 = local_48;
    if (local_48 != (long *)0x0) {
      local_48[1] = local_48[1] + 1;
    }
    (*pcVar10)(this,&local_60);
    plVar11 = local_58;
    if ((local_58 != (long *)0x0) &&
       (lVar9 = local_58[1], local_58[1] = lVar9 + -1, lVar9 + -1 == 0)) {
      (**(code **)(*local_58 + 0x10))(local_58);
      lVar9 = plVar11[2];
      plVar11[2] = lVar9 + -1;
      if (lVar9 + -1 == 0) {
        (**(code **)(*plVar11 + 0x18))(plVar11);
      }
    }
  }
  if ((local_48 != (long *)0x0) && (lVar9 = local_48[1], local_48[1] = lVar9 + -1, lVar9 + -1 == 0))
  {
    (**(code **)(*local_48 + 0x10))(local_48);
    lVar9 = local_48[2];
    local_48[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
      (**(code **)(*local_48 + 0x18))(local_48);
    }
  }
LAB_0045a1a8:
  if (*(long *)(lVar5 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}


