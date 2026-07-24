/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005bd438
 * Function: Caver::StoreController_Android::IsProductPurchased
 * Signature: undefined __thiscall IsProductPurchased(StoreController_Android * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::StoreController_Android::IsProductPurchased(std::string const&) */

bool __thiscall
Caver::StoreController_Android::IsProductPurchased(StoreController_Android *this,string *param_1)

{
  StoreController_Android *pSVar1;
  
  pSVar1 = (StoreController_Android *)
           std::
           _Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>
           ::find((_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>
                   *)(this + 0x70),param_1);
  return this + 0x78 != pSVar1;
}


