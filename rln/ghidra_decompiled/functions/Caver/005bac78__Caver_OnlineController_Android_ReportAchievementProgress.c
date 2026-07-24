/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005bac78
 * Function: Caver::OnlineController_Android::ReportAchievementProgress
 * Signature: undefined __thiscall ReportAchievementProgress(OnlineController_Android * this, shared_ptr * param_1, double param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::OnlineController_Android::ReportAchievementProgress(boost::shared_ptr<Caver::Achievement>
   const&, double) */

void __thiscall
Caver::OnlineController_Android::ReportAchievementProgress
          (OnlineController_Android *this,shared_ptr *param_1,double param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int *piVar4;
  int iVar5;
  double dVar6;
  long local_48 [2];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 005bac94 to 006bac97 has its CatchHandler @ 005bacd8 */
                    /* try { // try from 005bac98 to 006baceb has its CatchHandler @ 005bac00 */
  dVar6 = ((double)(long)*(int *)(*(long *)param_1 + 0x28) * param_2) / _DAT_00690358;
  FUN_0066a528(local_48);
                    /* catch() { ... } // from try @ 005bac94 with catch @ 005bacd8 */
  AndroidReportAchievementProgress
            ((string *)local_48,(int)dVar6,1 < *(int *)(*(long *)param_1 + 0x28));
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
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 005bad18 to 006baf43 has its CatchHandler @ 005bad18
                       catch() { ... } // from try @ 005bad18 with catch @ 005bad18
                       catch() { ... } // from try @ 005bafe4 with catch @ 005bad18
                       catch() { ... } // from try @ 005bb120 with catch @ 005bad18
                       catch() { ... } // from try @ 005bb3f8 with catch @ 005bad18
                       catch() { ... } // from try @ 005bb4bc with catch @ 005bad18
                       catch() { ... } // from try @ 005bb74c with catch @ 005bad18 */
  return;
}


