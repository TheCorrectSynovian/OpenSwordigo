/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0047e7c4
 * Function: Caver::AchievementsManager::ReportPendingAchievements
 * Signature: undefined __thiscall ReportPendingAchievements(AchievementsManager * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AchievementsManager::ReportPendingAchievements() */

void __thiscall Caver::AchievementsManager::ReportPendingAchievements(AchievementsManager *this)

{
  AchievementsManager *pAVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  int *piVar9;
  long lVar10;
  int iVar11;
  AchievementsManager *pAVar12;
  undefined8 uVar13;
  long local_90;
  long local_88;
  long *local_80;
  AchievementsManager *local_78;
  long local_68;
  
  puVar6 = PTR_DAT_007e5de8;
  puVar5 = PTR_pthread_create_007e4e78;
                    /* try { // try from 0047e7d0 to 0057f27b has its CatchHandler @ 0047e198 */
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  pAVar1 = this + 0x180;
  pAVar12 = *(AchievementsManager **)(this + 400);
  local_78 = pAVar12;
  if (pAVar1 != pAVar12) {
    do {
      local_78 = pAVar12;
      plVar7 = (long *)std::
                       map<std::string,boost::shared_ptr<Caver::Achievement>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>>
                       ::operator[]((map<std::string,boost::shared_ptr<Caver::Achievement>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>>
                                     *)(this + 0x18),(string *)(pAVar12 + 0x20));
      local_88 = *plVar7;
      local_80 = (long *)plVar7[1];
      if (local_80 != (long *)0x0) {
        local_80[1] = local_80[1] + 1;
      }
      if (local_88 != 0) {
        uVar13 = *(undefined8 *)(pAVar12 + 0x28);
        plVar7 = (long *)OnlineController::SharedController();
        (**(code **)(*plVar7 + 0xd8))(uVar13,plVar7,&local_88);
        FUN_0066a528(&local_90,local_88);
        puVar8 = (undefined8 *)
                 std::
                 map<std::string,double,std::less<std::string>,std::allocator<std::pair<std::string_const,double>>>
                 ::operator[]((map<std::string,double,std::less<std::string>,std::allocator<std::pair<std::string_const,double>>>
                               *)(this + 0x148),(string *)&local_90);
        *puVar8 = uVar13;
        if ((undefined *)(local_90 + -0x18) != puVar6) {
          piVar9 = (int *)(local_90 + -8);
          if (puVar5 == (undefined *)0x0) {
            iVar11 = *piVar9;
            *piVar9 = iVar11 + -1;
          }
          else {
            do {
              iVar11 = *piVar9;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
              if (bVar3) {
                *piVar9 = iVar11 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          if (iVar11 < 1) {
            operator_delete((undefined *)(local_90 + -0x18));
          }
        }
      }
      plVar7 = local_80;
      if ((local_80 != (long *)0x0) &&
         (lVar10 = local_80[1], local_80[1] = lVar10 + -1, lVar10 + -1 == 0)) {
        (**(code **)(*local_80 + 0x10))(local_80);
        lVar10 = plVar7[2];
        plVar7[2] = lVar10 + -1;
        if (lVar10 + -1 == 0) {
          (**(code **)(*plVar7 + 0x18))(plVar7);
        }
      }
      pAVar12 = (AchievementsManager *)FUN_0064c640(local_78);
      local_78 = pAVar12;
    } while (pAVar1 != pAVar12);
  }
  std::
  _Rb_tree<std::string,std::pair<std::string_const,double>,std::_Select1st<std::pair<std::string_const,double>>,std::less<std::string>,std::allocator<std::pair<std::string_const,double>>>
  ::_M_erase((_Rb_tree<std::string,std::pair<std::string_const,double>,std::_Select1st<std::pair<std::string_const,double>>,std::less<std::string>,std::allocator<std::pair<std::string_const,double>>>
              *)(this + 0x178),*(_Rb_tree_node **)(this + 0x188));
  *(undefined8 *)(this + 0x188) = 0;
  *(AchievementsManager **)(this + 400) = pAVar1;
  *(AchievementsManager **)(this + 0x198) = pAVar1;
  *(undefined8 *)(this + 0x1a0) = 0;
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


