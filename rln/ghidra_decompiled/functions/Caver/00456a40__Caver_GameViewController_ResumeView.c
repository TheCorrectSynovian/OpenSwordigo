/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00456a40
 * Function: Caver::GameViewController::ResumeView
 * Signature: undefined __thiscall ResumeView(GameViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameViewController::ResumeView() */

void __thiscall Caver::GameViewController::ResumeView(GameViewController *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  int iVar6;
  code *pcVar7;
  long local_48 [2];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  plVar4 = (long *)ProfileManager::sharedManager();
  pcVar7 = *(code **)(*plVar4 + 0x10);
  FUN_0066a528(local_48,*(long *)(this + 0x88) + 0x18);
  (*pcVar7)(0x4008000000000000,plVar4,local_48);
  if ((undefined *)(local_48[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar5 = (int *)(local_48[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar6 = *piVar5;
      *piVar5 = iVar6 + -1;
    }
    else {
      do {
        iVar6 = *piVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = iVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar6 < 1) {
      operator_delete((undefined *)(local_48[0] + -0x18));
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


