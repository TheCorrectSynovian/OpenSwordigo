/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005bea80
 * Function: Caver::StoreController_Android::StartedRestoringPurchases
 * Signature: undefined __thiscall StartedRestoringPurchases(StoreController_Android * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::StoreController_Android::StartedRestoringPurchases() */

void __thiscall
Caver::StoreController_Android::StartedRestoringPurchases(StoreController_Android *this)

{
  std::
  _Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>
  ::_M_erase((_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>
              *)(this + 0x70),*(_Rb_tree_node **)(this + 0x80));
  *(undefined8 *)(this + 0x80) = 0;
  *(StoreController_Android **)(this + 0x88) = this + 0x78;
  *(StoreController_Android **)(this + 0x90) = this + 0x78;
  *(undefined8 *)(this + 0x98) = 0;
  return;
}


