/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004b8be8
 * Function: Caver::GameState::GuideTargetCompleted
 * Signature: undefined __thiscall GuideTargetCompleted(GameState * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameState::GuideTargetCompleted(boost::shared_ptr<Caver::GuideTarget> const&) */

byte __thiscall Caver::GameState::GuideTargetCompleted(GameState *this,shared_ptr *param_1)

{
  char cVar1;
  long lVar2;
  undefined *puVar3;
  bool bVar4;
  byte bVar5;
  GameState *pGVar6;
  undefined *puVar7;
  undefined4 *puVar8;
  long lVar9;
  int *piVar10;
  int iVar11;
  long local_48 [2];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  puVar8 = *(undefined4 **)param_1;
  switch(*puVar8) {
  case 1:
    FUN_0066a528(local_48,puVar8 + 2);
    pGVar6 = (GameState *)
             std::
             _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::QuestState>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::QuestState>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::QuestState>>>>
             ::find((_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::QuestState>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::QuestState>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::QuestState>>>>
                     *)(this + 0xf8),(string *)local_48);
    if (this + 0x100 == pGVar6) {
      lVar9 = 0;
    }
    else {
      lVar9 = *(long *)(pGVar6 + 0x28);
                    /* try { // try from 004b8c60 to 005b8d13 has its CatchHandler @ 004b8c60
                       catch(type#1 @ 00000000) { ... } // from try @ 004b8c60 with catch @ 004b8c60
                       catch(type#1 @ 00000000) { ... } // from try @ 004b8d34 with catch @ 004b8c60
                       catch(type#1 @ 00000000) { ... } // from try @ 004b8d74 with catch @ 004b8c60
                        */
    }
    if ((undefined *)(local_48[0] + -0x18) != PTR_DAT_007e5de8) {
                    /* try { // try from 004b8e14 to 005b8e3b has its CatchHandler @ 004b8de4 */
      piVar10 = (int *)(local_48[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
                    /* try { // try from 004b8ecc to 005b8f03 has its CatchHandler @ 004b8eac */
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_48[0] + -0x18));
      }
    }
    bVar4 = lVar9 == 0;
    break;
  case 2:
    FUN_0066a528(local_48,puVar8 + 2);
    pGVar6 = (GameState *)
             std::
             _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::QuestState>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::QuestState>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::QuestState>>>>
             ::find((_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::QuestState>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::QuestState>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::QuestState>>>>
                     *)(this + 0xf8),(string *)local_48);
    if (this + 0x100 == pGVar6) {
      lVar9 = 0;
    }
    else {
      lVar9 = *(long *)(pGVar6 + 0x28);
                    /* try { // try from 004b8d14 to 005b8d33 has its CatchHandler @ 004b8d68 */
    }
    if ((undefined *)(local_48[0] + -0x18) != PTR_DAT_007e5de8) {
                    /* catch() { ... } // from try @ 004b8e00 with catch @ 004b8e38 */
      piVar10 = (int *)(local_48[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
                    /* catch() { ... } // from try @ 004b8ec4 with catch @ 004b8efc */
        operator_delete((undefined *)(local_48[0] + -0x18));
      }
    }
                    /* try { // try from 004b8f04 to 005b8f0b has its CatchHandler @ 004b8f18 */
    bVar5 = 0;
    if (lVar9 == 0) goto LAB_004b8ea0;
    bVar4 = *(char *)(lVar9 + 8) == '\0';
    break;
  case 3:
    FUN_0066a528(local_48,puVar8 + 2);
    bVar5 = CharacterState::HasSkillWithName((CharacterState *)(this + 0x10),(string *)local_48);
    puVar7 = (undefined *)(local_48[0] + -0x18);
    if (puVar7 == PTR_DAT_007e5de8) goto LAB_004b8ea0;
    piVar10 = (int *)(local_48[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
LAB_004b8e54:
      iVar11 = *piVar10;
      *piVar10 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *piVar10;
        cVar1 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar4) {
          *piVar10 = iVar11 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    goto LAB_004b8e60;
  case 4:
    FUN_0066a528(local_48,puVar8 + 4);
    pGVar6 = (GameState *)
             std::
             _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>>>
             ::find((_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>>>
                     *)(this + 200),(string *)local_48);
    puVar3 = PTR_DAT_007e5de8;
    if (this + 0xd0 == pGVar6) {
      lVar9 = 0;
    }
    else {
      lVar9 = *(long *)(pGVar6 + 0x28);
    }
    if ((undefined *)(local_48[0] + -0x18) != PTR_DAT_007e5de8) {
                    /* catch() { ... } // from try @ 004b8e14 with catch @ 004b8de4 */
      piVar10 = (int *)(local_48[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
                    /* try { // try from 004b8e00 to 005b8e13 has its CatchHandler @ 004b8e38 */
          cVar1 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_48[0] + -0x18));
      }
    }
    if (lVar9 == 0) goto switchD_004b8c34_default;
    FUN_0066a528(local_48,*(long *)param_1 + 8);
    bVar5 = StateProperties::HasFlag((StateProperties *)(lVar9 + 0x10),(string *)local_48);
    puVar7 = (undefined *)(local_48[0] + -0x18);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004b8d14 with catch @ 004b8d68
                        */
    if (puVar7 == puVar3) goto LAB_004b8ea0;
                    /* try { // try from 004b8d6c to 005b8d73 has its CatchHandler @ 004b8d7c */
                    /* try { // try from 004b8d74 to 005b8d7f has its CatchHandler @ 004b8c60 */
    piVar10 = (int *)(local_48[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) goto LAB_004b8e54;
    do {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004b8d6c with catch @ 004b8d7c
                        */
      iVar11 = *piVar10;
      cVar1 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar4) {
        *piVar10 = iVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_004b8e60:
    if (iVar11 < 1) {
      operator_delete(puVar7);
    }
    goto LAB_004b8ea0;
  default:
switchD_004b8c34_default:
    bVar5 = 0;
    goto LAB_004b8ea0;
  }
  bVar5 = !bVar4;
LAB_004b8ea0:
                    /* catch() { ... } // from try @ 004b8ecc with catch @ 004b8eac
                       catch() { ... } // from try @ 004b8f30 with catch @ 004b8eac */
  if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* try { // try from 004b8ec4 to 005b8ecb has its CatchHandler @ 004b8efc */
    return bVar5 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


