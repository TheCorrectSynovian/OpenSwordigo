/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004ad258
 * Function: Caver::CharacterState::ItemCount
 * Signature: undefined __thiscall ItemCount(CharacterState * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CharacterState::ItemCount(std::string const&) */

undefined4 __thiscall Caver::CharacterState::ItemCount(CharacterState *this,string *param_1)

{
  undefined4 uVar1;
  CharacterState *pCVar2;
  
  pCVar2 = (CharacterState *)
           std::
           _Rb_tree<std::string,std::pair<std::string_const,Caver::CharacterState::ItemState>,std::_Select1st<std::pair<std::string_const,Caver::CharacterState::ItemState>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::CharacterState::ItemState>>>
           ::find((_Rb_tree<std::string,std::pair<std::string_const,Caver::CharacterState::ItemState>,std::_Select1st<std::pair<std::string_const,Caver::CharacterState::ItemState>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::CharacterState::ItemState>>>
                   *)(this + 0x10),param_1);
                    /* try { // try from 004ad270 to 005ad283 has its CatchHandler @ 004ad2a8 */
  if (this + 0x18 == pCVar2) {
                    /* try { // try from 004ad284 to 005ad2ab has its CatchHandler @ 004ad254 */
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(pCVar2 + 0x38);
  }
  return uVar1;
}


