/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004b7c8c
 * Function: Caver::GameState::StateForLevelWithName
 * Signature: undefined __thiscall StateForLevelWithName(GameState * this, string * param_1, bool param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameState::StateForLevelWithName(std::string const&, bool) */

undefined8 __thiscall
Caver::GameState::StateForLevelWithName(GameState *this,string *param_1,bool param_2)

{
  long lVar1;
  GameState *pGVar2;
  LevelState *this_00;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 local_58;
  long *plStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 004b7cb4 to 005b7cdb has its CatchHandler @ 004b7dc0 */
  pGVar2 = (GameState *)
           std::
           _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>>>
           ::find((_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>>>
                   *)(this + 200),param_1);
  if (this + 0xd0 == pGVar2) {
    if (param_2) {
      this_00 = operator_new(0x48);
      LevelState::LevelState(this_00);
      boost::shared_ptr<Caver::LevelState>::shared_ptr<Caver::LevelState>
                ((shared_ptr<Caver::LevelState> *)&local_58,this_00);
      FUN_0066a6a8(local_58,param_1);
      puVar3 = (undefined8 *)
               std::
               map<std::string,boost::shared_ptr<Caver::LevelState>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>>>
               ::operator[]((map<std::string,boost::shared_ptr<Caver::LevelState>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>>>
                             *)(this + 200),param_1);
      if (plStack_50 != (long *)0x0) {
        plStack_50[1] = plStack_50[1] + 1;
      }
      plVar5 = (long *)puVar3[1];
      *puVar3 = local_58;
      puVar3[1] = plStack_50;
                    /* try { // try from 004b7d30 to 005b7d57 has its CatchHandler @ 004b7dec */
      if ((plVar5 != (long *)0x0) && (lVar4 = plVar5[1], plVar5[1] = lVar4 + -1, lVar4 + -1 == 0)) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        lVar4 = plVar5[2];
                    /* try { // try from 004b7d58 to 005b7dab has its CatchHandler @ 004b78cc */
        plVar5[2] = lVar4 + -1;
        if (lVar4 + -1 == 0) {
          (**(code **)(*plVar5 + 0x18))(plVar5);
        }
      }
      if ((plStack_50 != (long *)0x0) &&
         (lVar4 = plStack_50[1], plStack_50[1] = lVar4 + -1, lVar4 + -1 == 0)) {
        (**(code **)(*plStack_50 + 0x10))(plStack_50);
        lVar4 = plStack_50[2];
        plStack_50[2] = lVar4 + -1;
        if (lVar4 + -1 == 0) {
                    /* try { // try from 004b7dac to 005b7daf has its CatchHandler @ 004b7db4 */
                    /* try { // try from 004b7db0 to 005b7e57 has its CatchHandler @ 004b78cc */
                    /* catch() { ... } // from try @ 004b79a8 with catch @ 004b7db4
                       catch() { ... } // from try @ 004b7dac with catch @ 004b7db4 */
          (**(code **)(*plStack_50 + 0x18))(plStack_50);
                    /* catch() { ... } // from try @ 004b7a24 with catch @ 004b7dbc */
        }
      }
    }
    else {
                    /* catch() { ... } // from try @ 004b7cb4 with catch @ 004b7dc0 */
      local_58 = 0;
    }
  }
  else {
    local_58 = *(undefined8 *)(pGVar2 + 0x28);
  }
                    /* catch() { ... } // from try @ 004b7bb4 with catch @ 004b7dd0 */
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* catch() { ... } // from try @ 004b7b8c with catch @ 004b7dd4 */
                    /* catch() { ... } // from try @ 004b7b78 with catch @ 004b7ddc */
                    /* catch() { ... } // from try @ 004b7d30 with catch @ 004b7dec */
    return local_58;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


