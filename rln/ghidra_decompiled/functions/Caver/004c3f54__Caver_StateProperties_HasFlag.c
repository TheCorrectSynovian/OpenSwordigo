/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004c3f54
 * Function: Caver::StateProperties::HasFlag
 * Signature: undefined __thiscall HasFlag(StateProperties * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::StateProperties::HasFlag(std::string const&) */

bool __thiscall Caver::StateProperties::HasFlag(StateProperties *this,string *param_1)

{
  StateProperties *pSVar1;
  
  pSVar1 = (StateProperties *)
           std::
           _Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>
           ::find((_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>
                   *)this,param_1);
  return this + 8 != pSVar1;
}


