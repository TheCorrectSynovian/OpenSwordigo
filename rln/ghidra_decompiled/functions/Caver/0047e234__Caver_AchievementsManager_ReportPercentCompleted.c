/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0047e234
 * Function: Caver::AchievementsManager::ReportPercentCompleted
 * Signature: undefined __thiscall ReportPercentCompleted(AchievementsManager * this, shared_ptr * param_1, double param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AchievementsManager::ReportPercentCompleted(boost::shared_ptr<Caver::Achievement> const&,
   double) */

void __thiscall
Caver::AchievementsManager::ReportPercentCompleted
          (AchievementsManager *this,shared_ptr *param_1,double param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  double *pdVar5;
  undefined *puVar6;
  long *plVar7;
  int *piVar8;
  int iVar9;
  double dVar10;
  long local_58 [2];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (*(long *)param_1 == 0) goto LAB_0047e360;
  FUN_0066a528(local_58);
                    /* try { // try from 0047e280 to 0057e293 has its CatchHandler @ 0047f1a4 */
  pdVar5 = (double *)
           std::
           map<std::string,double,std::less<std::string>,std::allocator<std::pair<std::string_const,double>>>
           ::operator[]((map<std::string,double,std::less<std::string>,std::allocator<std::pair<std::string_const,double>>>
                         *)(this + 0x148),(string *)local_58);
  puVar4 = PTR_DAT_007e5de8;
  dVar10 = *pdVar5;
  if ((undefined *)(local_58[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar8 = (int *)(local_58[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete((undefined *)(local_58[0] + -0x18));
    }
  }
                    /* try { // try from 0047e2a4 to 0057e2af has its CatchHandler @ 0047f16c */
  if (param_2 <= dVar10 + DAT_00690348) goto LAB_0047e360;
  if (DAT_00690350 <= param_2) {
    plVar7 = (long *)OnlineController::SharedController();
    (**(code **)(*plVar7 + 0xd8))(param_2,plVar7,param_1);
                    /* try { // try from 0047e334 to 0057e347 has its CatchHandler @ 0047f10c */
    FUN_0066a528(local_58,*(undefined8 *)param_1);
    pdVar5 = (double *)
             std::
             map<std::string,double,std::less<std::string>,std::allocator<std::pair<std::string_const,double>>>
             ::operator[]((map<std::string,double,std::less<std::string>,std::allocator<std::pair<std::string_const,double>>>
                           *)(this + 0x148),(string *)local_58);
    *pdVar5 = param_2;
    puVar6 = (undefined *)(local_58[0] + -0x18);
                    /* try { // try from 0047e358 to 0057e363 has its CatchHandler @ 0047f0d4 */
    if (puVar6 == puVar4) goto LAB_0047e360;
    piVar8 = (int *)(local_58[0] + -8);
                    /* try { // try from 0047e3e4 to 0057e3f7 has its CatchHandler @ 0047f074 */
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) goto LAB_0047e3fc;
    do {
      iVar9 = *piVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar2) {
        *piVar8 = iVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  else {
    FUN_0066a528(local_58,*(undefined8 *)param_1);
                    /* try { // try from 0047e2d8 to 0057e313 has its CatchHandler @ 0047f110 */
    pdVar5 = (double *)
             std::
             map<std::string,double,std::less<std::string>,std::allocator<std::pair<std::string_const,double>>>
             ::operator[]((map<std::string,double,std::less<std::string>,std::allocator<std::pair<std::string_const,double>>>
                           *)(this + 0x178),(string *)local_58);
    *pdVar5 = param_2;
    puVar6 = (undefined *)(local_58[0] + -0x18);
    if (puVar6 == puVar4) goto LAB_0047e360;
    piVar8 = (int *)(local_58[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
LAB_0047e3fc:
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
                    /* try { // try from 0047e408 to 0057e413 has its CatchHandler @ 0047f03c */
  if (iVar9 < 1) {
    operator_delete(puVar6);
  }
LAB_0047e360:
  if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* try { // try from 0047e388 to 0057e3c3 has its CatchHandler @ 0047f078 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


