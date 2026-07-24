/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004b7ec0
 * Function: Caver::GameState::AddStateForQuestWithName
 * Signature: undefined __thiscall AddStateForQuestWithName(GameState * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameState::AddStateForQuestWithName(std::string const&) */

QuestState * __thiscall Caver::GameState::AddStateForQuestWithName(GameState *this,string *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  GameState *pGVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  int iVar8;
  QuestState *pQVar9;
  long *plVar10;
  long local_58;
  QuestState *local_50;
  long *aplStack_48 [2];
  long local_38;
  
                    /* try { // try from 004b7ec8 to 005b7eef has its CatchHandler @ 004b7f88 */
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  pGVar4 = (GameState *)
           std::
           _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::QuestState>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::QuestState>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::QuestState>>>>
           ::find((_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::QuestState>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::QuestState>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::QuestState>>>>
                   *)(this + 0xf8),param_1);
  if (this + 0x100 == pGVar4) {
    pQVar9 = operator_new(0x10);
    QuestState::QuestState(pQVar9);
                    /* try { // try from 004b7f3c to 005b7f63 has its CatchHandler @ 004b7fa0 */
    local_50 = pQVar9;
    boost::detail::shared_count::shared_count<Caver::QuestState>((shared_count *)aplStack_48,pQVar9)
    ;
    boost::detail::sp_enable_shared_from_this(&local_50,pQVar9,pQVar9);
    FUN_0066a6a8(local_50,param_1);
    FUN_0066a528(&local_58,local_50);
                    /* catch() { ... } // from try @ 004b7e58 with catch @ 004b7f7c */
    puVar5 = (undefined8 *)
             std::
             map<std::string,boost::shared_ptr<Caver::QuestState>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::QuestState>>>>
             ::operator[]((map<std::string,boost::shared_ptr<Caver::QuestState>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::QuestState>>>>
                           *)(this + 0xf8),(string *)&local_58);
                    /* catch() { ... } // from try @ 004b7ec8 with catch @ 004b7f88 */
    if (aplStack_48[0] != (long *)0x0) {
      aplStack_48[0][1] = aplStack_48[0][1] + 1;
    }
    plVar10 = (long *)puVar5[1];
    *puVar5 = local_50;
    puVar5[1] = aplStack_48[0];
                    /* catch() { ... } // from try @ 004b7f3c with catch @ 004b7fa0 */
    if ((plVar10 != (long *)0x0) && (lVar6 = plVar10[1], plVar10[1] = lVar6 + -1, lVar6 + -1 == 0))
    {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      lVar6 = plVar10[2];
      plVar10[2] = lVar6 + -1;
      if (lVar6 + -1 == 0) {
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
    }
    pQVar9 = local_50;
    if ((undefined *)(local_58 + -0x18) != PTR_DAT_007e5de8) {
      piVar7 = (int *)(local_58 + -8);
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
        operator_delete((undefined *)(local_58 + -0x18));
        pQVar9 = local_50;
      }
    }
    local_50 = pQVar9;
    if ((aplStack_48[0] != (long *)0x0) &&
       (lVar6 = aplStack_48[0][1], aplStack_48[0][1] = lVar6 + -1, lVar6 + -1 == 0)) {
      (**(code **)(*aplStack_48[0] + 0x10))(aplStack_48[0]);
      lVar6 = aplStack_48[0][2];
      aplStack_48[0][2] = lVar6 + -1;
      if (lVar6 + -1 == 0) {
        (**(code **)(*aplStack_48[0] + 0x18))(aplStack_48[0]);
      }
    }
  }
  else {
    pQVar9 = *(QuestState **)(pGVar4 + 0x28);
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pQVar9;
}


