/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0046e914
 * Function: Caver::MainMenuViewController::ProfileSelectionViewControllerDidStart
 * Signature: undefined __thiscall ProfileSelectionViewControllerDidStart(MainMenuViewController * this, ProfileSelectionView * param_1, shared_ptr * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MainMenuViewController::ProfileSelectionViewControllerDidStart(Caver::ProfileSelectionView*,
   boost::shared_ptr<Caver::PlayerProfile> const&) */

void __thiscall
Caver::MainMenuViewController::ProfileSelectionViewControllerDidStart
          (MainMenuViewController *this,ProfileSelectionView *param_1,shared_ptr *param_2)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  int iVar6;
  string *psVar7;
  ProfileManager *this_00;
  GameViewController *this_01;
  long lVar8;
  long lVar9;
  code *pcVar10;
  int *piVar11;
  int iVar12;
  long *plVar13;
  long local_80;
  long *local_78;
  long local_70;
  long *local_68;
  undefined1 auStack_60 [8];
  long local_58;
  long *plStack_50;
  long local_48;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0046e768 with catch @ 0046e920
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0046e720 with catch @ 0046e92c
                        */
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  psVar7 = (string *)ProfileManager::sharedManager();
                    /* try { // try from 0046e94c to 0056e953 has its CatchHandler @ 0046e95c */
                    /* try { // try from 0046e954 to 0056e95f has its CatchHandler @ 0046e668 */
  FUN_0066a528(&local_70,*(long *)param_2 + 0x18);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0046e94c with catch @ 0046e95c
                        */
  ProfileManager::ProfileWithIdentifier(psVar7);
  if ((plStack_50 != (long *)0x0) &&
     (lVar8 = plStack_50[1], plStack_50[1] = lVar8 + -1, lVar8 + -1 == 0)) {
    (**(code **)(*plStack_50 + 0x10))(plStack_50);
    lVar8 = plStack_50[2];
    plStack_50[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plStack_50 + 0x18))(plStack_50);
    }
  }
  puVar5 = PTR_DAT_007e5de8;
  if ((undefined *)(local_70 + -0x18) != PTR_DAT_007e5de8) {
                    /* catch() { ... } // from try @ 0046eb1c with catch @ 0046ed54 */
    piVar11 = (int *)(local_70 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar6 = *piVar11;
      *piVar11 = iVar6 + -1;
    }
    else {
      do {
        iVar6 = *piVar11;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar3) {
          *piVar11 = iVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar6 < 1) {
      operator_delete((undefined *)(local_70 + -0x18));
    }
  }
  if (local_58 == 0) {
    this_00 = (ProfileManager *)ProfileManager::sharedManager();
    ProfileManager::AddProfile(this_00,param_2);
  }
  lVar8 = *(long *)(*(long *)param_2 + 0x80);
  plVar13 = *(long **)(*(long *)param_2 + 0x88);
  if ((plVar13 != (long *)0x0) && (plVar13[1] == 0)) {
    (**(code **)(*plVar13 + 0x10))(plVar13);
    lVar9 = plVar13[2];
    plVar13[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
  }
  if (lVar8 == 0) {
    PlayerProfile::LoadGameState(*(PlayerProfile **)param_2);
  }
  lVar8 = *(long *)(*(long *)param_2 + 0x80);
  plVar13 = *(long **)(*(long *)param_2 + 0x88);
  if (plVar13 != (long *)0x0) {
    plVar13[1] = plVar13[1] + 1;
  }
  FUN_0066a528(&local_70,lVar8 + 0x158);
  iVar6 = FUN_006689e0(&local_70,"theend");
  if ((undefined *)(local_70 + -0x18) != puVar5) {
    piVar11 = (int *)(local_70 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar12 = *piVar11;
      *piVar11 = iVar12 + -1;
    }
    else {
      do {
        iVar12 = *piVar11;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar3) {
          *piVar11 = iVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
                    /* try { // try from 0046ed90 to 0056edcf has its CatchHandler @ 0046ed90
                       catch() { ... } // from try @ 0046ed90 with catch @ 0046ed90
                       catch() { ... } // from try @ 0046edd8 with catch @ 0046ed90 */
      } while (cVar2 != '\0');
    }
    if (iVar12 < 1) {
                    /* try { // try from 0046edd0 to 0056edd7 has its CatchHandler @ 0046ee58 */
      operator_delete((undefined *)(local_70 + -0x18));
    }
  }
                    /* try { // try from 0046edd8 to 0056eec7 has its CatchHandler @ 0046ed90 */
  if ((plVar13 != (long *)0x0) && (lVar8 = plVar13[1], plVar13[1] = lVar8 + -1, lVar8 + -1 == 0)) {
    (**(code **)(*plVar13 + 0x10))(plVar13);
    lVar8 = plVar13[2];
    plVar13[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
  }
  if (iVar6 == 0) {
    lVar8 = *(long *)(*(long *)param_2 + 0x80);
    plVar13 = *(long **)(*(long *)param_2 + 0x88);
    if (plVar13 != (long *)0x0) {
      plVar13[1] = plVar13[1] + 1;
    }
    FUN_00666bb8(&local_70,0x68ee8e,auStack_60);
    FUN_0066a6a8(lVar8 + 0x158,&local_70);
    if ((undefined *)(local_70 + -0x18) != puVar5) {
      piVar11 = (int *)(local_70 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar6 = *piVar11;
        *piVar11 = iVar6 + -1;
      }
      else {
        do {
          iVar6 = *piVar11;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar3) {
            *piVar11 = iVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar6 < 1) {
        operator_delete((undefined *)(local_70 + -0x18));
      }
    }
    if ((plVar13 != (long *)0x0) && (lVar8 = plVar13[1], plVar13[1] = lVar8 + -1, lVar8 + -1 == 0))
    {
                    /* catch() { ... } // from try @ 0046eb6c with catch @ 0046ec84 */
      (**(code **)(*plVar13 + 0x10))(plVar13);
      lVar8 = plVar13[2];
      plVar13[2] = lVar8 + -1;
      if (lVar8 + -1 == 0) {
        (**(code **)(*plVar13 + 0x18))(plVar13);
      }
    }
    lVar8 = *(long *)(*(long *)param_2 + 0x80);
    plVar13 = *(long **)(*(long *)param_2 + 0x88);
    if (plVar13 != (long *)0x0) {
      plVar13[1] = plVar13[1] + 1;
    }
    FUN_00666bb8(&local_70,"spawn_from_town_herohouse",auStack_60);
    FUN_0066a6a8(lVar8 + 0x160,&local_70);
                    /* catch() { ... } // from try @ 0046eb3c with catch @ 0046ece8 */
    if ((undefined *)(local_70 + -0x18) != puVar5) {
      piVar11 = (int *)(local_70 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar6 = *piVar11;
        *piVar11 = iVar6 + -1;
      }
      else {
        do {
          iVar6 = *piVar11;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar3) {
            *piVar11 = iVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
                    /* catch() { ... } // from try @ 0046edd0 with catch @ 0046ee58 */
      if (iVar6 < 1) {
        operator_delete((undefined *)(local_70 + -0x18));
      }
    }
    if ((plVar13 != (long *)0x0) && (lVar8 = plVar13[1], plVar13[1] = lVar8 + -1, lVar8 + -1 == 0))
    {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      lVar8 = plVar13[2];
      plVar13[2] = lVar8 + -1;
      if (lVar8 + -1 == 0) {
        (**(code **)(*plVar13 + 0x18))(plVar13);
      }
    }
  }
  this_01 = operator_new(0x140);
  GameViewController::GameViewController(this_01);
  boost::shared_ptr<Caver::GameViewController>::shared_ptr<Caver::GameViewController>
            ((shared_ptr<Caver::GameViewController> *)&local_70,this_01);
  uVar1 = *(undefined8 *)param_2;
  lVar8 = *(long *)(param_2 + 8);
  if (lVar8 != 0) {
    *(long *)(lVar8 + 8) = *(long *)(lVar8 + 8) + 1;
  }
  plVar13 = *(long **)(local_70 + 0x90);
  *(undefined8 *)(local_70 + 0x88) = uVar1;
  *(long *)(local_70 + 0x90) = lVar8;
                    /* try { // try from 0046eaf0 to 0056eb1b has its CatchHandler @ 0046eaf0
                       catch() { ... } // from try @ 0046eaf0 with catch @ 0046eaf0
                       catch() { ... } // from try @ 0046eba8 with catch @ 0046eaf0 */
  if ((plVar13 != (long *)0x0) && (lVar8 = plVar13[1], plVar13[1] = lVar8 + -1, lVar8 + -1 == 0)) {
    (**(code **)(*plVar13 + 0x10))(plVar13);
    lVar8 = plVar13[2];
    plVar13[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
                    /* try { // try from 0046eb1c to 0056eb2f has its CatchHandler @ 0046ed54 */
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
  }
  plVar13 = *(long **)(this + 0x40);
  pcVar10 = *(code **)(*plVar13 + 8);
  local_80 = local_70;
  local_78 = local_68;
                    /* try { // try from 0046eb3c to 0056eb47 has its CatchHandler @ 0046ece8 */
  if (local_68 != (long *)0x0) {
    local_68[1] = local_68[1] + 1;
  }
  (*pcVar10)(DAT_00683484,DAT_00683484,plVar13,&local_80,1);
  plVar13 = local_78;
                    /* try { // try from 0046eb6c to 0056eba7 has its CatchHandler @ 0046ec84 */
  if ((local_78 != (long *)0x0) && (lVar8 = local_78[1], local_78[1] = lVar8 + -1, lVar8 + -1 == 0))
  {
    (**(code **)(*local_78 + 0x10))(local_78);
    lVar8 = plVar13[2];
    plVar13[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
                    /* try { // try from 0046eba8 to 0056ed57 has its CatchHandler @ 0046eaf0 */
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
  }
  if ((local_68 != (long *)0x0) && (lVar8 = local_68[1], local_68[1] = lVar8 + -1, lVar8 + -1 == 0))
  {
    (**(code **)(*local_68 + 0x10))(local_68);
    lVar8 = local_68[2];
    local_68[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*local_68 + 0x18))(local_68);
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


