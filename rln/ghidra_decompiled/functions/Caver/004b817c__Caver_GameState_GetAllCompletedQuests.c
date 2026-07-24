/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004b817c
 * Function: Caver::GameState::GetAllCompletedQuests
 * Signature: undefined __thiscall GetAllCompletedQuests(GameState * this, vector * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameState::GetAllCompletedQuests(std::vector<Caver::QuestState*,
   std::allocator<Caver::QuestState*> >*) */

void __thiscall Caver::GameState::GetAllCompletedQuests(GameState *this,vector *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  GameState *pGVar4;
  long local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 004b81a0 to 005b822f has its CatchHandler @ 004b80bc */
  pGVar4 = *(GameState **)(this + 0x110);
  lVar3 = local_40;
  while (this + 0x100 != pGVar4) {
    local_40 = *(long *)(pGVar4 + 0x28);
    if (*(char *)(local_40 + 8) != '\0') {
      plVar1 = *(long **)(param_1 + 8);
      if (plVar1 == *(long **)(param_1 + 0x10)) {
                    /* catch() { ... } // from try @ 004b810c with catch @ 004b81e8
                       catch() { ... } // from try @ 004b812c with catch @ 004b81e8 */
        std::vector<Caver::QuestState*,std::allocator<Caver::QuestState*>>::_M_insert_aux
                  ((vector<Caver::QuestState*,std::allocator<Caver::QuestState*>> *)param_1,plVar1,
                   &local_40);
        lVar3 = local_40;
      }
      else {
                    /* catch() { ... } // from try @ 004b8118 with catch @ 004b81cc */
        *plVar1 = local_40;
        *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
        lVar3 = local_40;
      }
    }
    local_40 = lVar3;
    pGVar4 = (GameState *)FUN_0064c6a0(pGVar4);
    lVar3 = local_40;
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
    local_40 = lVar3;
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


