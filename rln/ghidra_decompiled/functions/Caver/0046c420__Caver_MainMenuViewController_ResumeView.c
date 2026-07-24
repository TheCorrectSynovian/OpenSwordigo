/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0046c420
 * Function: Caver::MainMenuViewController::ResumeView
 * Signature: undefined __cdecl ResumeView(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MainMenuViewController::ResumeView() */

void Caver::MainMenuViewController::ResumeView(void)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  int *piVar6;
  int iVar7;
  code *pcVar8;
  undefined1 auStack_50 [8];
  long local_48 [2];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  plVar4 = (long *)OnlineController::SharedController();
  uVar5 = (**(code **)(*plVar4 + 0xe8))();
  if ((uVar5 & 1) == 0) {
    plVar4 = (long *)ProfileManager::sharedManager();
    pcVar8 = *(code **)(*plVar4 + 0x10);
    FUN_00666bb8(local_48,&DAT_0068fbeb,auStack_50);
    (*pcVar8)(0x3ff0000000000000,plVar4,local_48);
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
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


