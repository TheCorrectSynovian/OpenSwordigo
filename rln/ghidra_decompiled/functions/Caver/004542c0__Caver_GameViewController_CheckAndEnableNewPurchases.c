/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004542c0
 * Function: Caver::GameViewController::CheckAndEnableNewPurchases
 * Signature: undefined __thiscall CheckAndEnableNewPurchases(GameViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameViewController::CheckAndEnableNewPurchases() */

void __thiscall Caver::GameViewController::CheckAndEnableNewPurchases(GameViewController *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  StoreController *this_00;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  int *piVar7;
  int iVar8;
  code *pcVar9;
  long local_48;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  lVar6 = *(long *)(this + 0xa8);
  if ((*(char *)(lVar6 + 0x1cb) == '\0') && (*(char *)(lVar6 + 0x1ca) == '\0')) {
    this_00 = (StoreController *)StoreController::SharedController();
    uVar4 = StoreController::IsCoinDoublerUnlockedCheck(this_00);
    lVar6 = *(long *)(this + 0xa8);
    if ((uVar4 & 1) != 0) {
      *(undefined1 *)(lVar6 + 0x1ca) = 1;
    }
  }
  if ((*(char *)(lVar6 + 0x1c9) == '\0') && (*(char *)(lVar6 + 0x1c8) == '\0')) {
    plVar5 = (long *)StoreController::SharedController();
    pcVar9 = *(code **)(*plVar5 + 0x18);
    FUN_00666bb8(&local_48,"compass",auStack_40);
    uVar4 = (*pcVar9)(plVar5,&local_48);
    if ((undefined *)(local_48 + -0x18) != PTR_DAT_007e5de8) {
      piVar7 = (int *)(local_48 + -8);
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
        operator_delete((undefined *)(local_48 + -0x18));
      }
    }
    if ((uVar4 & 1) != 0) {
      *(undefined1 *)(*(long *)(this + 0xa8) + 0x1c8) = 1;
    }
  }
  UpdateGuideTarget(this,this[0xe9] == (GameViewController)0x0);
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


