/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004a25bc
 * Function: Caver::ProfileSelectionView::ProfilePanelDidDeleteProfile
 * Signature: undefined __thiscall ProfilePanelDidDeleteProfile(ProfileSelectionView * this, ProfilePanelView * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProfileSelectionView::ProfilePanelDidDeleteProfile(Caver::ProfilePanelView*) */

void __thiscall
Caver::ProfileSelectionView::ProfilePanelDidDeleteProfile
          (ProfileSelectionView *this,ProfilePanelView *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  int *piVar7;
  int iVar8;
  code *pcVar9;
  long local_58 [2];
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  lVar6 = *(long *)(param_1 + 0x168);
  plVar1 = *(long **)(param_1 + 0x170);
  if (plVar1 != (long *)0x0) {
    plVar1[1] = plVar1[1] + 1;
  }
  plVar5 = (long *)ProfileManager::sharedManager();
  pcVar9 = *(code **)(*plVar5 + 0x20);
  FUN_0066a528(local_58,lVar6 + 0x18);
  (*pcVar9)(plVar5,local_58);
  if ((undefined *)(local_58[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar7 = (int *)(local_58[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_58[0] + -0x18));
    }
  }
  LoadProfiles(this);
  if ((plVar1 != (long *)0x0) && (lVar6 = plVar1[1], plVar1[1] = lVar6 + -1, lVar6 + -1 == 0)) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    lVar6 = plVar1[2];
    plVar1[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


