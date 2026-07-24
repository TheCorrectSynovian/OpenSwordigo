/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004c1c9c
 * Function: Caver::PlayerProfile::ValueForCounter
 * Signature: undefined __thiscall ValueForCounter(PlayerProfile * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PlayerProfile::ValueForCounter(std::string const&) */

undefined4 __thiscall Caver::PlayerProfile::ValueForCounter(PlayerProfile *this,string *param_1)

{
  undefined4 uVar1;
  PlayerProfile *pPVar2;
  
  pPVar2 = (PlayerProfile *)
           std::
           _Rb_tree<std::string,std::pair<std::string_const,int>,std::_Select1st<std::pair<std::string_const,int>>,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::find((_Rb_tree<std::string,std::pair<std::string_const,int>,std::_Select1st<std::pair<std::string_const,int>>,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                   *)(this + 0x90),param_1);
  if (this + 0x98 == pPVar2) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(pPVar2 + 0x28);
  }
  return uVar1;
}


