/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0049fb4c
 * Function: Caver::ProfilePanelView::DeleteTextFieldValueChanged
 * Signature: undefined __cdecl DeleteTextFieldValueChanged(void * param_1, GUIEvent * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProfilePanelView::DeleteTextFieldValueChanged(void*, Caver::GUIEvent*) */

void Caver::ProfilePanelView::DeleteTextFieldValueChanged(void *param_1,GUIEvent *param_2)

{
  uint uVar1;
  GameState *pGVar2;
  long *plVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  PlayerProfile PVar8;
  undefined *puVar9;
  int iVar10;
  long *plVar11;
  undefined8 uVar12;
  PlayerProfile *pPVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  code *pcVar17;
  ulong uVar18;
  undefined1 auStack_88 [8];
  long local_80;
  undefined1 auStack_78 [8];
  long local_70;
  long local_68;
  undefined1 auStack_60 [8];
  long local_58;
  
  lVar7 = tpidr_el0;
  local_58 = *(long *)(lVar7 + 0x28);
                    /* catch() { ... } // from try @ 0049f9dc with catch @ 0049fb84 */
  FUN_00666bb8(&local_68,"delete",&local_70);
  plVar11 = (long *)(**(code **)(*(long *)param_2 + 0x158))(param_2);
                    /* try { // try from 0049fba4 to 0059fbd3 has its CatchHandler @ 0049fbdc */
                    /* catch() { ... } // from try @ 0049fa90 with catch @ 0049fbb0 */
  if (*(long *)(*plVar11 + -0x18) == *(long *)(local_68 + -0x18)) {
    if (*(long *)(*plVar11 + -0x18) != 0) {
      uVar18 = 0;
      bVar6 = true;
      do {
        plVar11 = (long *)(**(code **)(*(long *)param_2 + 0x158))(param_2);
                    /* try { // try from 0049fbd4 to 0059fbdf has its CatchHandler @ 0049f8ec */
                    /* catch() { ... } // from try @ 0049fba4 with catch @ 0049fbdc */
        cVar5 = *(char *)(*plVar11 + uVar18);
        if (-1 < *(int *)(local_68 + -8)) {
          FUN_00668ea8(&local_68);
        }
        if (cVar5 != *(char *)(local_68 + uVar18)) {
          plVar11 = (long *)(**(code **)(*(long *)param_2 + 0x158))(param_2);
          cVar5 = *(char *)(*plVar11 + uVar18);
          if (-1 < *(int *)(local_68 + -8)) {
            FUN_00668ea8(&local_68);
          }
          bVar6 = (bool)(bVar6 & *(char *)(local_68 + uVar18) + -0x20 == (int)cVar5);
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 < *(ulong *)(local_68 + -0x18));
      goto LAB_0049fc5c;
    }
    bVar6 = true;
    plVar11 = *(long **)((long)param_1 + 0x130);
  }
  else {
    bVar6 = false;
LAB_0049fc5c:
    plVar11 = *(long **)((long)param_1 + 0x130);
  }
  if (plVar11 != (long *)0x0) {
                    /* catch() { ... } // from try @ 0049fd90 with catch @ 0049fc64
                       catch() { ... } // from try @ 0049fe9c with catch @ 0049fc64 */
    uVar4 = *(uint *)(plVar11 + 0x24);
    uVar1 = uVar4 & 0xfffffffd;
    if (!bVar6) {
      uVar1 = uVar4 | 2;
    }
    *(uint *)(plVar11 + 0x24) = uVar1;
    if (uVar1 != uVar4) {
      (**(code **)(*plVar11 + 0x130))();
    }
  }
  uVar12 = (**(code **)(*(long *)param_2 + 0x158))(param_2);
  iVar10 = FUN_006689e0(uVar12,"enablecheatpassu");
  if (iVar10 == 0) {
    pPVar13 = *(PlayerProfile **)((long)param_1 + 0x168);
    if (pPVar13[0xc0] == (PlayerProfile)0x0) {
                    /* try { // try from 0049fd64 to 0059fd67 has its CatchHandler @ 0049fda8 */
      PVar8 = (PlayerProfile)0x1;
      lVar14 = *(long *)(pPVar13 + 0x80);
      plVar11 = *(long **)(pPVar13 + 0x88);
      if (plVar11 != (long *)0x0) goto LAB_0049fd98;
LAB_0049fd74:
      if (lVar14 == 0) goto LAB_0049fdd8;
LAB_0049fddc:
      plVar11 = (long *)((long)param_1 + 0x168);
      if ((bool)PVar8) {
        pGVar2 = *(GameState **)(*plVar11 + 0x80);
        plVar3 = *(long **)(*plVar11 + 0x88);
        if (plVar3 != (long *)0x0) {
                    /* try { // try from 0049fdf4 to 0059fe9b has its CatchHandler @ 0049fea4 */
          plVar3[1] = plVar3[1] + 1;
        }
        FUN_00666bb8(&local_70,"town_herohouse",auStack_78);
        lVar14 = GameState::StateForLevelWithName(pGVar2,(string *)&local_70,true);
        FUN_00666bb8(&local_80,&DAT_0068eedb,auStack_88);
        StateProperties::AddFlag((string *)(lVar14 + 0x10));
        puVar9 = PTR_DAT_007e5de8;
        if ((undefined *)(local_80 + -0x18) != PTR_DAT_007e5de8) {
          piVar16 = (int *)(local_80 + -8);
          if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
            iVar10 = *piVar16;
            *piVar16 = iVar10 + -1;
          }
          else {
            do {
              iVar10 = *piVar16;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar16,0x10);
              if (bVar6) {
                *piVar16 = iVar10 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          if (iVar10 < 1) {
            operator_delete((undefined *)(local_80 + -0x18));
          }
        }
        if ((undefined *)(local_70 + -0x18) != puVar9) {
          piVar16 = (int *)(local_70 + -8);
          if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
            iVar10 = *piVar16;
            *piVar16 = iVar10 + -1;
          }
          else {
            do {
              iVar10 = *piVar16;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar16,0x10);
              if (bVar6) {
                *piVar16 = iVar10 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          if (iVar10 < 1) {
                    /* try { // try from 004a01c0 to 005a01e7 has its CatchHandler @ 004a0554 */
            operator_delete((undefined *)(local_70 + -0x18));
          }
        }
        if ((plVar3 != (long *)0x0) &&
           (lVar14 = plVar3[1], plVar3[1] = lVar14 + -1, lVar14 + -1 == 0)) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          lVar14 = plVar3[2];
          plVar3[2] = lVar14 + -1;
          if (lVar14 + -1 == 0) {
                    /* try { // try from 0049fe9c to 0059fea7 has its CatchHandler @ 0049fc64 */
                    /* catch() { ... } // from try @ 0049fdf4 with catch @ 0049fea4 */
                    /* catch() { ... } // from try @ 0049febc with catch @ 0049fea8 */
            (**(code **)(*plVar3 + 0x18))(plVar3);
          }
        }
        pGVar2 = *(GameState **)(*plVar11 + 0x80);
        plVar3 = *(long **)(*plVar11 + 0x88);
        if (plVar3 != (long *)0x0) {
                    /* try { // try from 0049feb8 to 0059febb has its CatchHandler @ 0049fecc */
                    /* try { // try from 0049febc to 0059fedf has its CatchHandler @ 0049fea8 */
          plVar3[1] = plVar3[1] + 1;
        }
                    /* catch() { ... } // from try @ 0049feb8 with catch @ 0049fecc */
        FUN_00666bb8(&local_70,"quest01_find_master",auStack_60);
                    /* try { // try from 0049fee0 to 0059fefb has its CatchHandler @ 0049fee0
                       catch() { ... } // from try @ 0049fee0 with catch @ 0049fee0
                       catch() { ... } // from try @ 0049ff00 with catch @ 0049fee0 */
        lVar14 = GameState::StateForQuestWithName(pGVar2,(string *)&local_70);
        if ((undefined *)(local_70 + -0x18) != puVar9) {
                    /* try { // try from 004a016c to 005a017f has its CatchHandler @ 004a0494 */
          piVar16 = (int *)(local_70 + -8);
          if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
            iVar10 = *piVar16;
            *piVar16 = iVar10 + -1;
          }
          else {
            do {
              iVar10 = *piVar16;
                    /* try { // try from 004a0180 to 005a0197 has its CatchHandler @ 004a0430 */
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar16,0x10);
              if (bVar6) {
                *piVar16 = iVar10 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          if (iVar10 < 1) {
                    /* try { // try from 004a01e8 to 005a01fb has its CatchHandler @ 004a04f8 */
            operator_delete((undefined *)(local_70 + -0x18));
          }
        }
                    /* try { // try from 0049fefc to 0059feff has its CatchHandler @ 0049ff1c */
                    /* try { // try from 0049ff00 to 0059ff2f has its CatchHandler @ 0049fee0 */
        if ((plVar3 != (long *)0x0) &&
           (lVar15 = plVar3[1], plVar3[1] = lVar15 + -1, lVar15 + -1 == 0)) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* catch() { ... } // from try @ 0049fefc with catch @ 0049ff1c */
          lVar15 = plVar3[2];
          plVar3[2] = lVar15 + -1;
          if (lVar15 + -1 == 0) {
            (**(code **)(*plVar3 + 0x18))(plVar3);
          }
        }
        if (lVar14 == 0) {
          pGVar2 = *(GameState **)(*plVar11 + 0x80);
          plVar3 = *(long **)(*plVar11 + 0x88);
          if (plVar3 != (long *)0x0) {
            plVar3[1] = plVar3[1] + 1;
          }
          FUN_00666bb8(&local_70,"quest01_find_master",auStack_60);
          lVar14 = GameState::AddStateForQuestWithName(pGVar2,(string *)&local_70);
          if ((undefined *)(local_70 + -0x18) != puVar9) {
            piVar16 = (int *)(local_70 + -8);
                    /* try { // try from 004a0200 to 005a0213 has its CatchHandler @ 004a049c */
            if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
              iVar10 = *piVar16;
              *piVar16 = iVar10 + -1;
            }
            else {
              do {
                iVar10 = *piVar16;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar16,0x10);
                if (bVar6) {
                  *piVar16 = iVar10 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            if (iVar10 < 1) {
              operator_delete((undefined *)(local_70 + -0x18));
            }
          }
          if ((plVar3 != (long *)0x0) &&
             (lVar15 = plVar3[1], plVar3[1] = lVar15 + -1, lVar15 + -1 == 0)) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
            lVar15 = plVar3[2];
            plVar3[2] = lVar15 + -1;
            if (lVar15 + -1 == 0) {
              (**(code **)(*plVar3 + 0x18))(plVar3);
            }
          }
        }
        *(undefined1 *)(lVar14 + 8) = 1;
      }
      pPVar13 = (PlayerProfile *)*plVar11;
      pPVar13[0xc0] = PVar8;
      PlayerProfile::Save(pPVar13,true);
    }
  }
  else {
                    /* try { // try from 0049fcc8 to 0059fccb has its CatchHandler @ 0049fdc0 */
    uVar12 = (**(code **)(*(long *)param_2 + 0x158))(param_2);
    iVar10 = FUN_006689e0(uVar12,"disablecheat");
    if (iVar10 != 0) {
      uVar12 = (**(code **)(*(long *)param_2 + 0x158))(param_2);
      iVar10 = FUN_006689e0(uVar12,"showdebugpassu");
                    /* try { // try from 0049fcfc to 0059fcff has its CatchHandler @ 0049fdb8 */
      if (iVar10 == 0) {
        plVar11 = (long *)StoreController::SharedController();
        (**(code **)(*plVar11 + 0x58))();
      }
      else {
        uVar12 = (**(code **)(*(long *)param_2 + 0x158))(param_2);
        iVar10 = FUN_006689e0(uVar12,"testconsume1337");
        if (iVar10 == 0) {
          plVar11 = (long *)StoreController::SharedController();
                    /* catch() { ... } // from try @ 0049ffc4 with catch @ 0049fffc */
          (**(code **)(*plVar11 + 0x40))();
        }
        else {
          uVar12 = (**(code **)(*(long *)param_2 + 0x158))(param_2);
                    /* try { // try from 0049fd30 to 0059fd33 has its CatchHandler @ 0049fdb0 */
          iVar10 = FUN_006689e0(uVar12,"usetestads1337");
          if (iVar10 == 0) {
            plVar11 = (long *)OnlineController::SharedController();
            (**(code **)(*plVar11 + 0x118))(plVar11,1);
          }
        }
      }
      goto LAB_0049ff98;
    }
    pPVar13 = *(PlayerProfile **)((long)param_1 + 0x168);
    if (pPVar13[0xc0] != (PlayerProfile)0x0) {
      PVar8 = (PlayerProfile)0x0;
                    /* try { // try from 0049fd90 to 0059fdf3 has its CatchHandler @ 0049fc64 */
      lVar14 = *(long *)(pPVar13 + 0x80);
      plVar11 = *(long **)(pPVar13 + 0x88);
                    /* try { // try from 0049fd8c to 0059fd8f has its CatchHandler @ 0049fda0 */
      if (plVar11 == (long *)0x0) goto LAB_0049fd74;
LAB_0049fd98:
      if (plVar11[1] == 0) {
                    /* catch() { ... } // from try @ 0049fd8c with catch @ 0049fda0 */
                    /* catch() { ... } // from try @ 0049fd64 with catch @ 0049fda8 */
        (**(code **)(*plVar11 + 0x10))(plVar11);
                    /* catch() { ... } // from try @ 0049fd30 with catch @ 0049fdb0 */
        lVar15 = plVar11[2];
                    /* catch() { ... } // from try @ 0049fcfc with catch @ 0049fdb8 */
        plVar11[2] = lVar15 + -1;
        if (lVar15 + -1 == 0) {
                    /* catch() { ... } // from try @ 0049fcc8 with catch @ 0049fdc0 */
          (**(code **)(*plVar11 + 0x18))(plVar11);
        }
      }
      if (lVar14 == 0) {
        pPVar13 = *(PlayerProfile **)((long)param_1 + 0x168);
LAB_0049fdd8:
        PlayerProfile::LoadGameState(pPVar13);
      }
      goto LAB_0049fddc;
    }
  }
  pcVar17 = *(code **)(*(long *)param_2 + 0x160);
  FUN_00666bb8(&local_70,&DAT_0068fbeb,auStack_60);
  (*pcVar17)(param_2,&local_70);
  if ((undefined *)(local_70 + -0x18) != PTR_DAT_007e5de8) {
    piVar16 = (int *)(local_70 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar16;
      *piVar16 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar16;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar6) {
          *piVar16 = iVar10 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_70 + -0x18));
    }
  }
LAB_0049ff98:
                    /* catch() { ... } // from try @ 0049ffd8 with catch @ 0049ffa8 */
  if ((undefined *)(local_68 + -0x18) != PTR_DAT_007e5de8) {
    piVar16 = (int *)(local_68 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar16;
      *piVar16 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar16;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar6) {
          *piVar16 = iVar10 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_68 + -0x18));
    }
  }
  if (*(long *)(lVar7 + 0x28) == local_58) {
                    /* try { // try from 0049ffc4 to 0059ffd7 has its CatchHandler @ 0049fffc */
                    /* try { // try from 0049ffd8 to 0059ffff has its CatchHandler @ 0049ffa8 */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 004a023c to 005a0263 has its CatchHandler @ 004a0554 */
  __stack_chk_fail();
}


