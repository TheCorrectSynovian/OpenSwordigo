/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0049e1a8
 * Function: Caver::ProfilePanelView::CreateProfile
 * Signature: undefined __thiscall CreateProfile(ProfilePanelView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProfilePanelView::CreateProfile() */

void __thiscall Caver::ProfilePanelView::CreateProfile(ProfilePanelView *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int *piVar4;
  int iVar5;
  PlayerProfile *this_00;
  undefined1 auStack_50 [8];
  long local_48 [2];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  this_00 = *(PlayerProfile **)(this + 0x168);
  FUN_00666bb8(local_48,&LAB_0068ee84,auStack_50);
  PlayerProfile::CreateProfile(this_00,(string *)local_48);
  if ((undefined *)(local_48[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar4 = (int *)(local_48[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar5 = *piVar4;
      *piVar4 = iVar5 + -1;
    }
    else {
      do {
        iVar5 = *piVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = iVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar5 < 1) {
      operator_delete((undefined *)(local_48[0] + -0x18));
    }
  }
  InitWithProfile(this,(shared_ptr *)(this + 0x168));
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


