/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0046ca58
 * Function: Caver::MainMenuViewController::CompleteInitialPrivacy
 * Signature: undefined __thiscall CompleteInitialPrivacy(MainMenuViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MainMenuViewController::CompleteInitialPrivacy() */

void __thiscall Caver::MainMenuViewController::CompleteInitialPrivacy(MainMenuViewController *this)

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
  this[0x119] = (MainMenuViewController)0x1;
  plVar4 = (long *)OnlineController::SharedController();
  uVar5 = (**(code **)(*plVar4 + 0x110))();
  if ((uVar5 & 1) != 0) {
    plVar4 = (long *)OnlineController::SharedController();
    (**(code **)(*plVar4 + 0x88))();
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0046c82c with catch @ 0046caa8
                        */
  if (this[0x118] != (MainMenuViewController)0x0) {
    plVar4 = (long *)ProfileManager::sharedManager();
    pcVar8 = *(code **)(*plVar4 + 0x10);
                    /* try { // try from 0046cacc to 0056cad3 has its CatchHandler @ 0046cadc */
    FUN_00666bb8(local_48,&DAT_0068fbeb,auStack_50);
                    /* try { // try from 0046cad4 to 0056cadf has its CatchHandler @ 0046c0f0 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0046cacc with catch @ 0046cadc
                        */
    (*pcVar8)(0,plVar4,local_48);
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


