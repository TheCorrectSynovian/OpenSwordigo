/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004805f0
 * Function: std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_create_node
 * Signature: undefined __thiscall _M_create_node(_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>> * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<std::string, std::string, std::_Identity<std::string >, std::less<std::string >,
   std::allocator<std::string > >::_M_create_node(std::string const&) */

void * __thiscall
std::
_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>
::_M_create_node(_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>
                 *this,string *param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x28);
  FUN_0066a528((long)pvVar1 + 0x20,param_1);
  return pvVar1;
}


