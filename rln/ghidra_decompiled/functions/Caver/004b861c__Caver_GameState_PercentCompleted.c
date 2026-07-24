/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004b861c
 * Function: Caver::GameState::PercentCompleted
 * Signature: undefined __thiscall PercentCompleted(GameState * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::GameState::PercentCompleted() */

float __thiscall Caver::GameState::PercentCompleted(GameState *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  GameState *pGVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  float fVar19;
  int local_8c;
  long local_88 [2];
  long local_78;
  
  puVar5 = PTR_DAT_007e5de8;
  puVar4 = PTR_pthread_create_007e4e78;
                    /* catch() { ... } // from try @ 004b8410 with catch @ 004b8638 */
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  lVar7 = *(long *)this;
  if ((int)((ulong)(*(long *)(lVar7 + 0x90) - *(long *)(lVar7 + 0x88)) >> 4) < 1) {
    iVar16 = 0;
    fVar19 = 0.0;
  }
  else {
                    /* catch() { ... } // from try @ 004b83ec with catch @ 004b8670 */
                    /* catch() { ... } // from try @ 004b8388 with catch @ 004b8674 */
    lVar14 = 0;
    iVar16 = 0;
    do {
      plVar9 = (long *)(*(long *)(lVar7 + 0x88) + lVar14 * 0x10);
      lVar7 = *plVar9;
      plVar9 = (long *)plVar9[1];
      if (plVar9 != (long *)0x0) {
        plVar9[1] = plVar9[1] + 1;
      }
      FUN_0066a528(local_88,lVar7 + 8);
      pGVar6 = (GameState *)
               std::
               _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::QuestState>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::QuestState>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::QuestState>>>>
               ::find((_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::QuestState>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::QuestState>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::QuestState>>>>
                       *)(this + 0xf8),(string *)local_88);
      if (this + 0x100 == pGVar6) {
        lVar7 = 0;
      }
      else {
        lVar7 = *(long *)(pGVar6 + 0x28);
      }
      if ((undefined *)(local_88[0] + -0x18) != puVar5) {
        piVar10 = (int *)(local_88[0] + -8);
        if (puVar4 == (undefined *)0x0) {
          iVar11 = *piVar10;
          *piVar10 = iVar11 + -1;
        }
        else {
          do {
            iVar11 = *piVar10;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar2) {
              *piVar10 = iVar11 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        if (iVar11 < 1) {
          operator_delete((undefined *)(local_88[0] + -0x18));
        }
      }
                    /* catch() { ... } // from try @ 004b8334 with catch @ 004b8744 */
      if ((plVar9 != (long *)0x0) && (lVar8 = plVar9[1], plVar9[1] = lVar8 + -1, lVar8 + -1 == 0)) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        lVar8 = plVar9[2];
        plVar9[2] = lVar8 + -1;
        if (lVar8 + -1 == 0) {
          (**(code **)(*plVar9 + 0x18))(plVar9);
        }
      }
      lVar14 = lVar14 + 1;
      if (lVar7 != 0) {
        iVar16 = iVar16 + (uint)*(byte *)(lVar7 + 8);
      }
      lVar7 = *(long *)this;
    } while (lVar14 < (int)((ulong)(*(long *)(lVar7 + 0x90) - *(long *)(lVar7 + 0x88)) >> 4));
    fVar19 = (float)(int)lVar14;
  }
  uVar15 = 0;
  iVar17 = 0;
  iVar11 = 0;
  iVar18 = 0;
  local_8c = 0;
  plVar9 = *(long **)(lVar7 + 0x48);
  plVar13 = *(long **)(lVar7 + 0x50);
  if (plVar13 != (long *)0x0) goto LAB_004b87e8;
LAB_004b8844:
  if ((ulong)(plVar9[1] - *plVar9 >> 4) <= uVar15) {
LAB_004b89e4:
    if (*(long *)(lVar3 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return (((float)local_8c / (float)iVar17) * 0.25 +
           ((float)iVar16 / fVar19) * DAT_00687988 + ((float)iVar18 / (float)iVar11) * _DAT_006846d0
           ) * _DAT_0068782c;
  }
  do {
    plVar9 = *(long **)(*(long *)this + 0x48);
    plVar13 = *(long **)(*(long *)this + 0x50);
    if (plVar13 != (long *)0x0) {
      plVar13[1] = plVar13[1] + 1;
    }
    plVar9 = (long *)(*plVar9 + uVar15 * 0x10);
    lVar7 = *plVar9;
    plVar9 = (long *)plVar9[1];
    if (plVar9 != (long *)0x0) {
      plVar9[1] = plVar9[1] + 1;
    }
    if ((plVar13 == (long *)0x0) ||
       (lVar14 = plVar13[1], plVar13[1] = lVar14 + -1, lVar14 + -1 != 0)) {
LAB_004b88c0:
      cVar1 = *(char *)(lVar7 + 0x70);
    }
    else {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      lVar14 = plVar13[2];
      plVar13[2] = lVar14 + -1;
      if (lVar14 + -1 != 0) goto LAB_004b88c0;
      (**(code **)(*plVar13 + 0x18))(plVar13);
      cVar1 = *(char *)(lVar7 + 0x70);
    }
    if (cVar1 == '\0') {
      iVar12 = *(int *)(lVar7 + 0x6c);
      FUN_0066a528(local_88,lVar7 + 0x10);
      pGVar6 = (GameState *)
               std::
               _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>>>
               ::find((_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>>>
                       *)(this + 200),(string *)local_88);
      if (this + 0xd0 == pGVar6) {
        lVar7 = 0;
      }
      else {
        lVar7 = *(long *)(pGVar6 + 0x28);
      }
      iVar11 = iVar11 + 1;
      iVar17 = iVar12 + iVar17;
      if ((undefined *)(local_88[0] + -0x18) != PTR_DAT_007e5de8) {
        piVar10 = (int *)(local_88[0] + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar12 = *piVar10;
          *piVar10 = iVar12 + -1;
        }
        else {
          do {
            iVar12 = *piVar10;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar2) {
              *piVar10 = iVar12 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        if (iVar12 < 1) {
          operator_delete((undefined *)(local_88[0] + -0x18));
        }
      }
      if (lVar7 != 0) {
        iVar18 = iVar18 + (uint)*(byte *)(lVar7 + 8);
        local_8c = *(int *)(lVar7 + 0x44) + local_8c;
      }
    }
    if ((plVar9 != (long *)0x0) && (lVar7 = plVar9[1], plVar9[1] = lVar7 + -1, lVar7 + -1 == 0)) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      lVar7 = plVar9[2];
      plVar9[2] = lVar7 + -1;
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar9 + 0x18))(plVar9);
      }
    }
    uVar15 = uVar15 + 1;
    plVar9 = *(long **)(*(long *)this + 0x48);
    plVar13 = *(long **)(*(long *)this + 0x50);
    if (plVar13 == (long *)0x0) goto LAB_004b8844;
LAB_004b87e8:
    lVar8 = plVar13[1];
    plVar13[1] = lVar8 + 1;
    lVar7 = *plVar9;
    lVar14 = plVar9[1];
    plVar13[1] = lVar8;
    if (lVar8 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      lVar8 = plVar13[2];
      plVar13[2] = lVar8 + -1;
      if (lVar8 + -1 == 0) {
        (**(code **)(*plVar13 + 0x18))(plVar13);
      }
    }
    if ((ulong)(lVar14 - lVar7 >> 4) <= uVar15) goto LAB_004b89e4;
  } while( true );
}


