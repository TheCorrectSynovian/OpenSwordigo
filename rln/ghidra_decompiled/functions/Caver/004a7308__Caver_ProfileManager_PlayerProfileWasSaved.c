/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004a7308
 * Function: Caver::ProfileManager::PlayerProfileWasSaved
 * Signature: undefined __thiscall PlayerProfileWasSaved(ProfileManager * this, PlayerProfile * param_1, bool param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::ProfileManager::PlayerProfileWasSaved(Caver::PlayerProfile*, bool) */

void __thiscall
Caver::ProfileManager::PlayerProfileWasSaved
          (ProfileManager *this,PlayerProfile *param_1,bool param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  AchievementsManager *pAVar5;
  ProfileManager *pPVar6;
  bool extraout_w1;
  int *piVar7;
  int iVar8;
  double dVar9;
  float fVar10;
  long local_68;
  undefined1 auStack_60 [8];
  long local_58 [2];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 004a7334 to 005a7367 has its CatchHandler @ 004a8c9c */
  pAVar5 = (AchievementsManager *)AchievementsManager::sharedManager();
  AchievementsManager::ReportPendingAchievements(pAVar5);
  dVar9 = 0.0;
  pPVar6 = *(ProfileManager **)(this + 0x60);
  while (this + 0x50 != pPVar6) {
    dVar9 = dVar9 + *(double *)(*(long *)(pPVar6 + 0x28) + 0x40);
    pPVar6 = (ProfileManager *)FUN_0064c640();
  }
                    /* try { // try from 004a7378 to 005a738b has its CatchHandler @ 004a8c98 */
  fVar10 = (float)(int)(dVar9 / _DAT_00691418);
                    /* try { // try from 004a739c to 005a73a7 has its CatchHandler @ 004a8c3c */
  if ((1.0 <= fVar10) && ((param_2 || (*(double *)(this + 0x80) + 5.0 < (double)fVar10)))) {
    *(double *)(this + 0x80) = (double)fVar10;
    pAVar5 = (AchievementsManager *)AchievementsManager::sharedManager();
    FUN_00666bb8(local_58,"timeplayed",auStack_60);
                    /* try { // try from 004a73d0 to 005a740b has its CatchHandler @ 004a8be0 */
    PlayerProfile::FormattedTimePlayed((PlayerProfile *)0x0,dVar9,extraout_w1);
    AchievementsManager::ReportScore(pAVar5,(string *)local_58,(long)fVar10,(string *)&local_68);
    puVar4 = PTR_DAT_007e5de8;
    if ((undefined *)(local_68 + -0x18) != PTR_DAT_007e5de8) {
      piVar7 = (int *)(local_68 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar8 = *piVar7;
                    /* try { // try from 004a7484 to 005a74bf has its CatchHandler @ 004a8b48 */
        *piVar7 = iVar8 + -1;
      }
      else {
        do {
          iVar8 = *piVar7;
                    /* try { // try from 004a7450 to 005a745b has its CatchHandler @ 004a8ba4 */
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar2) {
            *piVar7 = iVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar8 < 1) {
        operator_delete((undefined *)(local_68 + -0x18));
      }
    }
    if ((undefined *)(local_58[0] + -0x18) != puVar4) {
      piVar7 = (int *)(local_58[0] + -8);
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
        operator_delete((undefined *)(local_58[0] + -0x18));
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 004a742c to 005a743f has its CatchHandler @ 004a8bdc */
  return;
}


