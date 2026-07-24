/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0046be98
 * Function: Caver::MainMenuViewController::GoogleSignInCompletion
 * Signature: undefined __cdecl GoogleSignInCompletion(bool param_1, string * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MainMenuViewController::GoogleSignInCompletion(bool, std::string const&) */

void Caver::MainMenuViewController::GoogleSignInCompletion(bool param_1,string *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  int *piVar6;
  int iVar7;
  code *pcVar8;
  undefined1 auStack_50 [8];
  long local_48 [2];
  long local_38;
  
  uVar4 = (ulong)param_1;
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  *(byte *)(uVar4 + 0x118) = (byte)param_2 & 1;
  if (((ulong)param_2 & 1) == 0) {
    MainMenuView::SetGoogleSignInVisible(*(MainMenuView **)(uVar4 + 0x70),true);
  }
  else {
    MainMenuView::SetGoogleSignInVisible(*(MainMenuView **)(uVar4 + 0x70),false);
    if (*(char *)(uVar4 + 0x119) != '\0') {
      plVar5 = (long *)ProfileManager::sharedManager();
      pcVar8 = *(code **)(*plVar5 + 0x10);
      FUN_00666bb8(local_48,&DAT_0068fbeb,auStack_50);
      (*pcVar8)(0,plVar5,local_48);
      if ((undefined *)(local_48[0] + -0x18) != PTR_DAT_007e5de8) {
        piVar6 = (int *)(local_48[0] + -8);
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
          operator_delete((undefined *)(local_48[0] + -0x18));
        }
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


