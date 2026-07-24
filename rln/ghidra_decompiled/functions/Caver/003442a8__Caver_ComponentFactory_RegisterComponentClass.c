/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003442a8
 * Function: Caver::ComponentFactory::RegisterComponentClass
 * Signature: undefined __thiscall RegisterComponentClass(ComponentFactory * this, string * param_1, function param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ComponentFactory::RegisterComponentClass(std::string const&,
   boost::function<Caver::Component* ()>) */

void __thiscall
Caver::ComponentFactory::RegisterComponentClass
          (ComponentFactory *this,string *param_1,function *param_3)

{
  long lVar1;
  function<Caver::Component*()> *this_00;
  
  this_00 = (function<Caver::Component*()> *)
            std::
            map<std::string,boost::function<Caver::Component*()>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::function<Caver::Component*()>>>>
            ::operator[]((map<std::string,boost::function<Caver::Component*()>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::function<Caver::Component*()>>>>
                          *)this,param_1);
  boost::function<Caver::Component*()>::operator=(this_00,param_3);
  lVar1 = *(long *)(this + 0x38);
  if (lVar1 != *(long *)(this + 0x40)) {
    FUN_0066a528(lVar1,param_1);
    *(long *)(this + 0x38) = *(long *)(this + 0x38) + 8;
    return;
  }
  std::vector<std::string,std::allocator<std::string>>::_M_insert_aux
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x30),lVar1,param_1);
  return;
}


