/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004a60d0
 * Function: Caver::ProfileManager::GetAllProfiles
 * Signature: undefined __thiscall GetAllProfiles(ProfileManager * this, vector * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProfileManager::GetAllProfiles(std::vector<boost::shared_ptr<Caver::PlayerProfile>,
   std::allocator<boost::shared_ptr<Caver::PlayerProfile> > >*) */

void __thiscall Caver::ProfileManager::GetAllProfiles(ProfileManager *this,vector *param_1)

{
  long *plVar1;
  bool bVar2;
  char cVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  Caver *pCVar7;
  Caver *pCVar8;
  long *plVar9;
  AchievementsManager *this_00;
  PlayerProfile *pPVar10;
  undefined *puVar11;
  string *extraout_x1;
  string *extraout_x1_00;
  string *extraout_x1_01;
  string *extraout_x1_02;
  string *extraout_x1_03;
  string *extraout_x1_04;
  string *extraout_x1_05;
  string *extraout_x1_06;
  string *psVar12;
  string *extraout_x1_07;
  string *extraout_x1_08;
  long lVar13;
  int *piVar14;
  int iVar15;
  long *plVar16;
  Caver *pCVar17;
  undefined *puVar18;
  undefined1 auVar19 [16];
  PlayerProfile *local_c0;
  long *local_b8;
  long local_b0;
  long *local_a8;
  long *local_a0;
  long *local_98;
  Caver *local_90;
  Caver *pCStack_88;
  undefined8 local_80;
  PlayerProfile *local_78;
  long *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  local_90 = (Caver *)0x0;
  pCStack_88 = (Caver *)0x0;
  local_80 = 0;
  pCVar8 = (Caver *)FUN_00666bb8(&local_a8,"gplayer",&local_b0);
  DocumentsDirectoryPath(pCVar8);
                    /* catch() { ... } // from try @ 004a5ff0 with catch @ 004a6134 */
  GetFilesWithExtension((string *)&local_a8,(string *)&local_78,(vector *)&local_90);
  puVar6 = PTR_DAT_007e5de8;
  psVar12 = extraout_x1;
                    /* catch() { ... } // from try @ 004a5fe4 with catch @ 004a614c
                       catch() { ... } // from try @ 004a6004 with catch @ 004a614c */
  if (local_78 + -0x18 != (PlayerProfile *)PTR_DAT_007e5de8) {
                    /* try { // try from 004a6608 to 005a660b has its CatchHandler @ 004a6790 */
    pPVar10 = local_78 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar15 = *(int *)pPVar10;
      *(int *)pPVar10 = iVar15 + -1;
    }
    else {
      do {
        iVar15 = *(int *)pPVar10;
        cVar3 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pPVar10,0x10);
        if (bVar2) {
          *(int *)pPVar10 = iVar15 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar15 < 1) {
      operator_delete(local_78 + -0x18);
      psVar12 = extraout_x1_07;
    }
  }
                    /* catch() { ... } // from try @ 004a5e94 with catch @ 004a6150 */
  if (local_a8 + -3 != (long *)puVar6) {
    plVar9 = local_a8 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* try { // try from 004a6670 to 005a6673 has its CatchHandler @ 004a6780 */
      iVar15 = (int)*plVar9;
      *(int *)plVar9 = iVar15 + -1;
    }
    else {
      do {
                    /* try { // try from 004a663c to 005a663f has its CatchHandler @ 004a6788 */
        iVar15 = (int)*plVar9;
        cVar3 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar2) {
          *(int *)plVar9 = iVar15 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar15 < 1) {
      operator_delete(local_a8 + -3);
      psVar12 = extraout_x1_08;
    }
  }
  pCVar8 = pCStack_88;
  local_a8 = (long *)0x0;
  local_a0 = (long *)0x0;
  local_98 = (long *)0x0;
  if (local_90 == pCStack_88) {
    this[0x78] = (ProfileManager)0x1;
    puVar18 = PTR_pthread_create_007e4e78;
    pCVar8 = local_90;
    pCVar17 = pCStack_88;
  }
  else {
                    /* catch() { ... } // from try @ 004a5e80 with catch @ 004a6188 */
    pCVar17 = local_90;
    puVar18 = PTR_pthread_create_007e4e78;
                    /* catch() { ... } // from try @ 004a5e5c with catch @ 004a618c */
    do {
      LastPathComponent(pCVar17,psVar12);
      StringByRemovingPathExtension((Caver *)&local_78,extraout_x1_03);
                    /* try { // try from 004a630c to 005a640f has its CatchHandler @ 004a6518 */
      if (local_78 + -0x18 != (PlayerProfile *)puVar6) {
        pPVar10 = local_78 + -8;
        if (puVar18 == (undefined *)0x0) {
          iVar15 = *(int *)pPVar10;
                    /* catch() { ... } // from try @ 004a5f64 with catch @ 004a62ac */
          *(int *)pPVar10 = iVar15 + -1;
        }
        else {
          do {
            iVar15 = *(int *)pPVar10;
            cVar3 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(pPVar10,0x10);
            if (bVar2) {
              *(int *)pPVar10 = iVar15 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if (iVar15 < 1) {
          operator_delete(local_78 + -0x18);
        }
      }
      auVar19 = std::
                map<std::string,boost::shared_ptr<Caver::PlayerProfile>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>>
                ::operator[]((map<std::string,boost::shared_ptr<Caver::PlayerProfile>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>>
                              *)(this + 0x48),(string *)&local_b0);
      psVar12 = auVar19._8_8_;
      local_c0 = (PlayerProfile *)*auVar19._0_8_;
      local_b8 = (long *)auVar19._0_8_[1];
      if (local_b8 != (long *)0x0) {
        local_b8[1] = local_b8[1] + 1;
      }
      if (local_c0 == (PlayerProfile *)0x0) {
        pPVar10 = operator_new(200);
        PlayerProfile::PlayerProfile(pPVar10);
        local_78 = pPVar10;
        boost::detail::shared_count::shared_count<Caver::PlayerProfile>
                  ((shared_count *)&local_70,pPVar10);
        boost::detail::sp_enable_shared_from_this(&local_78,pPVar10,pPVar10);
        plVar1 = local_70;
        pPVar10 = local_78;
        plVar9 = local_b8;
        local_78 = local_c0;
        local_70 = local_b8;
        local_c0 = pPVar10;
        local_b8 = plVar1;
        if ((plVar9 != (long *)0x0) &&
           (lVar13 = plVar9[1], plVar9[1] = lVar13 + -1, lVar13 + -1 == 0)) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          lVar13 = plVar9[2];
          plVar9[2] = lVar13 + -1;
          if (lVar13 + -1 == 0) {
            (**(code **)(*plVar9 + 0x18))(plVar9);
          }
        }
        PlayerProfile::InitWithIdentifier((string *)local_c0);
        auVar19 = PlayerProfile::ProfileExists(local_c0);
        plVar9 = local_b8;
        psVar12 = auVar19._8_8_;
        if ((auVar19._0_8_ & 1) == 0) {
          local_c0 = (PlayerProfile *)0x0;
          local_b8 = (long *)0x0;
          if ((plVar9 != (long *)0x0) &&
             (lVar13 = plVar9[1], plVar9[1] = lVar13 + -1, lVar13 + -1 == 0)) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
            lVar13 = plVar9[2];
            plVar9[2] = lVar13 + -1;
            psVar12 = extraout_x1_00;
            if (lVar13 + -1 == 0) {
              (**(code **)(*plVar9 + 0x18))(plVar9);
              psVar12 = extraout_x1_01;
            }
          }
        }
        else {
          PlayerProfile::Load(local_c0);
          if (local_a0 == local_98) {
                    /* catch() { ... } // from try @ 004a5e40 with catch @ 004a61e8 */
            std::
            vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>
            ::_M_insert_aux((vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>
                             *)&local_a8,local_a0,&local_c0);
          }
          else {
            *local_a0 = (long)local_c0;
                    /* try { // try from 004a6440 to 005a64eb has its CatchHandler @ 004a6514 */
            local_a0[1] = (long)local_b8;
            if (local_b8 != (long *)0x0) {
              local_b8[1] = local_b8[1] + 1;
            }
            local_a0 = local_a0 + 2;
          }
          AddProfile(this,(shared_ptr *)&local_c0);
                    /* catch() { ... } // from try @ 004a5fa8 with catch @ 004a61f8 */
          plVar9 = (long *)OnlineController::SharedController();
          auVar19 = (**(code **)(*plVar9 + 0x10))();
          psVar12 = auVar19._8_8_;
          if (((auVar19._0_8_ & 1) != 0) &&
             (pPVar10 = *(PlayerProfile **)(local_c0 + 0xa8), local_c0 + 0x98 != pPVar10)) {
            do {
              this_00 = (AchievementsManager *)AchievementsManager::sharedManager();
              AchievementsManager::SetCounterValue
                        (this_00,(string *)(pPVar10 + 0x20),*(int *)(pPVar10 + 0x28),
                         *(int *)(pPVar10 + 0x28));
              auVar19 = FUN_0064c6a0(pPVar10);
              psVar12 = auVar19._8_8_;
              pPVar10 = auVar19._0_8_;
                    /* catch() { ... } // from try @ 004a5f8c with catch @ 004a624c */
              puVar18 = PTR_pthread_create_007e4e78;
            } while (local_c0 + 0x98 != pPVar10);
          }
        }
      }
      plVar9 = local_b8;
      if (param_1 != (vector *)0x0) {
        psVar12 = *(string **)(param_1 + 8);
        if (psVar12 == *(string **)(param_1 + 0x10)) {
          std::
          vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>
          ::_M_insert_aux((vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>
                           *)param_1,psVar12,&local_c0);
          psVar12 = extraout_x1_04;
          plVar9 = local_b8;
        }
        else {
          *(PlayerProfile **)psVar12 = local_c0;
          *(long **)(psVar12 + 8) = local_b8;
          if (local_b8 != (long *)0x0) {
            local_b8[1] = local_b8[1] + 1;
          }
          *(string **)(param_1 + 8) = psVar12 + 0x10;
        }
      }
      local_b8 = plVar9;
      if ((plVar9 != (long *)0x0) && (lVar13 = plVar9[1], plVar9[1] = lVar13 + -1, lVar13 + -1 == 0)
         ) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        lVar13 = plVar9[2];
        plVar9[2] = lVar13 + -1;
        psVar12 = extraout_x1_05;
        if (lVar13 + -1 == 0) {
          (**(code **)(*plVar9 + 0x18))(plVar9);
          psVar12 = extraout_x1_06;
        }
      }
      if ((undefined *)(local_b0 + -0x18) != puVar6) {
        piVar14 = (int *)(local_b0 + -8);
        if (puVar18 == (undefined *)0x0) {
          iVar15 = *piVar14;
          *piVar14 = iVar15 + -1;
        }
        else {
          do {
            iVar15 = *piVar14;
            cVar3 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar14,0x10);
            if (bVar2) {
              *piVar14 = iVar15 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if (iVar15 < 1) {
          operator_delete((undefined *)(local_b0 + -0x18));
          psVar12 = extraout_x1_02;
        }
      }
      plVar9 = local_a0;
      pCVar17 = pCVar17 + 8;
    } while (pCVar17 != pCVar8);
    this[0x78] = (ProfileManager)0x1;
    plVar16 = local_a0;
    for (plVar1 = local_a8; plVar1 != plVar9; plVar1 = plVar1 + 2) {
      plVar16 = (long *)plVar1[1];
                    /* try { // try from 004a64ec to 005a64f3 has its CatchHandler @ 004a6518 */
                    /* try { // try from 004a64f4 to 005a651b has its CatchHandler @ 004a5cfc */
      if ((plVar16 != (long *)0x0) &&
         (lVar13 = plVar16[1], plVar16[1] = lVar13 + -1, lVar13 + -1 == 0)) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
        lVar13 = plVar16[2];
                    /* catch() { ... } // from try @ 004a6440 with catch @ 004a6514 */
                    /* catch() { ... } // from try @ 004a630c with catch @ 004a6518
                       catch() { ... } // from try @ 004a64ec with catch @ 004a6518 */
        plVar16[2] = lVar13 + -1;
                    /* catch() { ... } // from try @ 004a6768 with catch @ 004a651c
                       catch() { ... } // from try @ 004a6964 with catch @ 004a651c */
        if (lVar13 + -1 == 0) {
          (**(code **)(*plVar16 + 0x18))(plVar16);
        }
      }
      plVar16 = local_a8;
    }
    puVar18 = PTR_pthread_create_007e4e78;
    pCVar8 = local_90;
    pCVar17 = pCStack_88;
    if (plVar16 != (long *)0x0) {
      operator_delete(plVar16);
      puVar18 = PTR_pthread_create_007e4e78;
      pCVar8 = local_90;
      pCVar17 = pCStack_88;
    }
  }
  for (; pCVar7 = pCStack_88, puVar5 = PTR_pthread_create_007e4e78, pCVar8 != pCStack_88;
      pCVar8 = pCVar8 + 8) {
    puVar11 = (undefined *)(*(long *)pCVar8 + -0x18);
    pCStack_88 = pCVar17;
    if (puVar11 != puVar6) {
      piVar14 = (int *)(*(long *)pCVar8 + -8);
      bVar2 = PTR_pthread_create_007e4e78 == (undefined *)0x0;
      PTR_pthread_create_007e4e78 = puVar18;
      if (bVar2) {
        iVar15 = *piVar14;
        *piVar14 = iVar15 + -1;
      }
      else {
        do {
                    /* try { // try from 004a6578 to 005a659f has its CatchHandler @ 004a67a8 */
          iVar15 = *piVar14;
          cVar3 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar14,0x10);
          if (bVar2) {
            *piVar14 = iVar15 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      puVar18 = PTR_pthread_create_007e4e78;
      if (iVar15 < 1) {
        operator_delete(puVar11);
        puVar18 = PTR_pthread_create_007e4e78;
      }
    }
    PTR_pthread_create_007e4e78 = puVar18;
                    /* try { // try from 004a65c0 to 005a65e7 has its CatchHandler @ 004a6798 */
    puVar18 = PTR_pthread_create_007e4e78;
    pCVar17 = pCStack_88;
    pCStack_88 = pCVar7;
    PTR_pthread_create_007e4e78 = puVar5;
  }
  PTR_pthread_create_007e4e78 = puVar18;
  pCStack_88 = pCVar17;
  if (local_90 != (Caver *)0x0) {
    operator_delete(local_90);
  }
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


