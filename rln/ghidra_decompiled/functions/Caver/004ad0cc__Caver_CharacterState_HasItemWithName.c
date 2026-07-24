/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004ad0cc
 * Function: Caver::CharacterState::HasItemWithName
 * Signature: undefined __thiscall HasItemWithName(CharacterState * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CharacterState::HasItemWithName(std::string const&) */

bool __thiscall Caver::CharacterState::HasItemWithName(CharacterState *this,string *param_1)

{
  CharacterState *pCVar1;
  
  pCVar1 = (CharacterState *)
           std::
           _Rb_tree<std::string,std::pair<std::string_const,Caver::CharacterState::ItemState>,std::_Select1st<std::pair<std::string_const,Caver::CharacterState::ItemState>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::CharacterState::ItemState>>>
           ::find((_Rb_tree<std::string,std::pair<std::string_const,Caver::CharacterState::ItemState>,std::_Select1st<std::pair<std::string_const,Caver::CharacterState::ItemState>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::CharacterState::ItemState>>>
                   *)(this + 0x10),param_1);
                    /* try { // try from 004ad0e8 to 005ad0eb has its CatchHandler @ 004ad148 */
  return this + 0x18 != pCVar1;
}


