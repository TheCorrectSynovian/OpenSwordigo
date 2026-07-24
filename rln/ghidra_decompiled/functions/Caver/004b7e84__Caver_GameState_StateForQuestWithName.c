/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004b7e84
 * Function: Caver::GameState::StateForQuestWithName
 * Signature: undefined __thiscall StateForQuestWithName(GameState * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameState::StateForQuestWithName(std::string const&) */

undefined8 __thiscall Caver::GameState::StateForQuestWithName(GameState *this,string *param_1)

{
  GameState *pGVar1;
  undefined8 uVar2;
  
  pGVar1 = (GameState *)
           std::
           _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::QuestState>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::QuestState>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::QuestState>>>>
           ::find((_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::QuestState>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::QuestState>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::QuestState>>>>
                   *)(this + 0xf8),param_1);
  if (this + 0x100 == pGVar1) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(pGVar1 + 0x28);
  }
  return uVar2;
}


