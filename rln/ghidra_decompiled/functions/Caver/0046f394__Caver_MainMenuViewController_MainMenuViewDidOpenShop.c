/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0046f394
 * Function: Caver::MainMenuViewController::MainMenuViewDidOpenShop
 * Signature: undefined __cdecl MainMenuViewDidOpenShop(MainMenuView * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MainMenuViewController::MainMenuViewDidOpenShop(Caver::MainMenuView*) */

void Caver::MainMenuViewController::MainMenuViewDidOpenShop(MainMenuView *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  StoreViewController *this;
  code *pcVar6;
  int *piVar7;
  int iVar8;
  long local_60;
  long *local_58;
  long local_50;
  long *local_48;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  lVar5 = StoreController::SharedController();
  FUN_00666bb8(&local_50,&DAT_0068fcc8,auStack_40);
  FUN_0066a6a8(lVar5 + 8,&local_50);
  if ((undefined *)(local_50 + -0x18) != PTR_DAT_007e5de8) {
    piVar7 = (int *)(local_50 + -8);
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
                    /* catch() { ... } // from try @ 0046f5c0 with catch @ 0046f530
                       catch() { ... } // from try @ 0046f6a4 with catch @ 0046f530 */
      operator_delete((undefined *)(local_50 + -0x18));
    }
  }
  this = operator_new(0xd8);
  StoreViewController::StoreViewController(this);
  boost::shared_ptr<Caver::StoreViewController>::shared_ptr<Caver::StoreViewController>
            ((shared_ptr<Caver::StoreViewController> *)&local_50,this);
  pcVar6 = *(code **)(*(long *)param_1 + 0x50);
  local_60 = local_50;
  local_58 = local_48;
  if (local_48 != (long *)0x0) {
    local_48[1] = local_48[1] + 1;
  }
  (*pcVar6)(param_1,&local_60);
  plVar4 = local_58;
  if ((local_58 != (long *)0x0) && (lVar5 = local_58[1], local_58[1] = lVar5 + -1, lVar5 + -1 == 0))
  {
    (**(code **)(*local_58 + 0x10))(local_58);
    lVar5 = plVar4[2];
    plVar4[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  if ((local_48 != (long *)0x0) && (lVar5 = local_48[1], local_48[1] = lVar5 + -1, lVar5 + -1 == 0))
  {
    (**(code **)(*local_48 + 0x10))(local_48);
    lVar5 = local_48[2];
    local_48[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*local_48 + 0x18))(local_48);
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


